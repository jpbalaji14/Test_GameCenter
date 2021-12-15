using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SocialPlatforms;
using UnityEngine.SocialPlatforms.GameCenter;
using System.Threading.Tasks;
using UnityEngine.UI;
using Firebase.Auth;
using Firebase;
using Firebase.Database;

public class GameCenterLogin : MonoBehaviour
{
    bool loginSuccess;
    string leaderboardID = "Some Leaderboard ID";

    public Text DebugText;
    
    //Firebase Authenication
    private FirebaseAuth mAuth;
    public Firebase.Auth.FirebaseUser _newUser;

    //Firebase Database References
    private DatabaseReference mReference;
    Player playerDetails = new Player();

    // Start is called before the first frame update
    void Start()
    {
        GameCenterAuthentication();
        FirebaseUserDetails();
    }
    private void FirebaseUserDetails()
    {
        mReference = FirebaseDatabase.DefaultInstance.RootReference;
        playerDetails._playerCurrentLevel = 50;
        playerDetails._coins = 20;
        playerDetails._energy = 50;
    }
    void GameCenterAuthentication()
    {
        Social.localUser.Authenticate((bool success) =>
        {
            if (success)
            {
                loginSuccess = true;
                Debug.Log("Login Success"); 
                AuthWithFirebase();
            }
            else
            {
                Debug.Log("Login Unsuccessful");
            }
        });
    }
    private void AuthWithFirebase()
    {
        mAuth = FirebaseAuth.DefaultInstance;
        var credentialTask = GameCenterAuthProvider.GetCredentialAsync();
        
       var continueTask= credentialTask.ContinueWith(task =>
       {
            var credential = task.Result;

            mAuth.SignInWithCredentialAsync(credential).ContinueWith(task =>
            {
                if (task.IsCanceled)
                {
                    DebugText.text = "SignInWithCredentialAsync was canceled";
                }
                if (task.IsFaulted)
                {
                    DebugText.text = "SignInWithCredentialAsync encountered an error: " + task.Exception;
                }
                _newUser = task.Result;
                playerDetails._playerName = _newUser.DisplayName;
                playerDetails._playerID = _newUser.UserId;
                SaveNewUser(this._newUser.UserId);
                DebugText.text = "User Signed in Firebase";
            });
       });   
    }
    public void SaveNewUser(string userId)
    {
        var currentUser = FirebaseAuth.DefaultInstance.CurrentUser;
        string json = JsonUtility.ToJson(playerDetails);
        mReference.Child("Game Center Users").Child(currentUser.UserId).SetRawJsonValueAsync(json);
    }

    //public void PostScoreOnLeaderboard(int inMyScore)
    //{
    //    if(loginSuccess)
    //    {
    //        Social.ReportScore(inMyScore, leaderboardID, (bool success) => 
    //        {
    //            if(success)
    //            {
    //                Debug.Log("Successfully Uploaded");
    //            }
    //        });
    //    }

    //    else
    //    {
    //        Social.localUser.Authenticate((bool success) =>
    //        {
    //            if(success)
    //            {
    //                loginSuccess = true;
    //                Social.ReportScore(inMyScore, leaderboardID, (bool successful) => 
    //                {
    //                    if(successful)
    //                    {
    //                        Debug.Log("successful");
    //                    }
    //                });
    //            }
    //            else
    //            {
    //                Debug.Log("Unsuccessful");
    //            }
    //        });
    //    }
    //}
}
