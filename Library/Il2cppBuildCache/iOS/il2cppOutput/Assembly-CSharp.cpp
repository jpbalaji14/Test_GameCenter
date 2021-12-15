#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.Credential>>
struct Action_1_t308A82B71C7F089573E1586EEEB74B9195BAAEF1;
// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Action_1_t7126D3DC3275C39CFE5D20E759C1D8FAE10E777B;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_tFE20E1B68D8FC8F70518B6977AEA92C696288F1D;
// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<Firebase.Auth.FirebaseAuth>
struct Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>
struct Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Firebase.Auth.Credential>>
struct Func_2_t3D1A96CFFFF97E8A9F0A05738A42CE2098E330AD;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Func_2_tB4F767378F8B2D53DDCA17BA1E615A32C916EDF6;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE;
// System.Threading.Tasks.TaskFactory`1<Firebase.Auth.Credential>
struct TaskFactory_1_tF1F9F40705B8A67F2745140D317847E09E2C8753;
// System.Threading.Tasks.TaskFactory`1<Firebase.Auth.FirebaseUser>
struct TaskFactory_1_t9D8D5C3497974FC69996081A4931F540CED80622;
// System.Threading.Tasks.Task`1<Firebase.Auth.Credential>
struct Task_1_tA5D31255279C17E13642632FB782BD1EB69C9E61;
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.AggregateException
struct AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// Firebase.Auth.Credential
struct Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA;
// Firebase.Database.DatabaseReference
struct DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// Firebase.FirebaseApp
struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D;
// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E;
// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470;
// Firebase.Auth.FirebaseUser
struct FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameCenterLogin
struct GameCenterLogin_tCA852B5B4DB991DF074B9BBFB50354324084D102;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_t835F1CCDE2ED60F6D514522949B6402B7D871F27;
// Firebase.Database.Internal.InternalChildListener
struct InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D;
// Firebase.Database.Internal.InternalDatabaseReference
struct InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9;
// Firebase.Database.Internal.InternalFirebaseDatabase
struct InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690;
// Firebase.Database.Internal.InternalQuery
struct InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199;
// Firebase.Database.Internal.InternalValueListener
struct InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Firebase.Auth.FirebaseAuth/StateChangedDelegate
struct StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t308A82B71C7F089573E1586EEEB74B9195BAAEF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t7126D3DC3275C39CFE5D20E759C1D8FAE10E777B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameCenterAuthProvider_t975CD6C8B8E27EF5C2A71D0880E53A131D93F89F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILocalUser_t835F1CCDE2ED60F6D514522949B6402B7D871F27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1314758E29EBE16E498BDE1E0B897B7B983AB6DB;
IL2CPP_EXTERN_C String_t* _stringLiteral229DA3D8897550B864D0FFA2AA06291E5392DBA0;
IL2CPP_EXTERN_C String_t* _stringLiteral2AE89394F035769900C129F8FF2AEEABF7DB5279;
IL2CPP_EXTERN_C String_t* _stringLiteral2FE3585E6BCEBFF11349C5B9CF68644D2FE3E34B;
IL2CPP_EXTERN_C String_t* _stringLiteralA91DDFDFF4D4307DED5299AD736DADA73E57F94C;
IL2CPP_EXTERN_C String_t* _stringLiteralB368981458D26765912F026A3AE1C4E03AB9F365;
IL2CPP_EXTERN_C String_t* _stringLiteralEECB4FFC746D10CB528E962BFAF46148956F356C;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mC08CFCBA5E5C60444AFD54F0A1469E7A9C3F3289_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mCAF438E367DFC35DADF1A0CF7935E2AB9A45E72C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameCenterLogin_U3CAuthWithFirebaseU3Eb__10_0_mD33F527287757BCE31196D550196A76332A83059_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameCenterLogin_U3CAuthWithFirebaseU3Eb__10_1_m29A0F8E0D4731594B3562BB5BC28043CEEE975D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameCenterLogin_U3CGameCenterAuthenticationU3Eb__9_0_mDC5D92C4E66A156966CDB65A1D29FBE1F5654769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_m025020251CA2CFA2A2889A3113C1C17E4B45B7D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_m8F6AA71D6F03EB18D013502073FED8C3877C4944_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m0E8072D9FA86249BB7F7B6FAF7284C70F9F325BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m7DB112F8ABD16A4EE9E527A473F566679BD56392_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470  : public RuntimeObject
{
public:
	// Firebase.Database.Internal.InternalFirebaseDatabase Firebase.Database.FirebaseDatabase::internalDatabase
	InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * ___internalDatabase_2;
	// System.String Firebase.Database.FirebaseDatabase::name
	String_t* ___name_3;
	// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::<App>k__BackingField
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___U3CAppU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_internalDatabase_2() { return static_cast<int32_t>(offsetof(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470, ___internalDatabase_2)); }
	inline InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * get_internalDatabase_2() const { return ___internalDatabase_2; }
	inline InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 ** get_address_of_internalDatabase_2() { return &___internalDatabase_2; }
	inline void set_internalDatabase_2(InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * value)
	{
		___internalDatabase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalDatabase_2), (void*)value);
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470, ___U3CAppU3Ek__BackingField_4)); }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * get_U3CAppU3Ek__BackingField_4() const { return ___U3CAppU3Ek__BackingField_4; }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D ** get_address_of_U3CAppU3Ek__BackingField_4() { return &___U3CAppU3Ek__BackingField_4; }
	inline void set_U3CAppU3Ek__BackingField_4(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * value)
	{
		___U3CAppU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppU3Ek__BackingField_4), (void*)value);
	}
};

struct FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase> Firebase.Database.FirebaseDatabase::databases
	Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 * ___databases_5;

public:
	inline static int32_t get_offset_of_databases_5() { return static_cast<int32_t>(offsetof(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_StaticFields, ___databases_5)); }
	inline Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 * get_databases_5() const { return ___databases_5; }
	inline Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 ** get_address_of_databases_5() { return &___databases_5; }
	inline void set_databases_5(Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 * value)
	{
		___databases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___databases_5), (void*)value);
	}
};


// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F  : public RuntimeObject
{
public:
	// System.String Player::_playerID
	String_t* ____playerID_0;
	// System.String Player::_playerName
	String_t* ____playerName_1;
	// System.Int32 Player::_playerCurrentLevel
	int32_t ____playerCurrentLevel_2;
	// System.Int32 Player::_coins
	int32_t ____coins_3;
	// System.Int32 Player::_energy
	int32_t ____energy_4;

public:
	inline static int32_t get_offset_of__playerID_0() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____playerID_0)); }
	inline String_t* get__playerID_0() const { return ____playerID_0; }
	inline String_t** get_address_of__playerID_0() { return &____playerID_0; }
	inline void set__playerID_0(String_t* value)
	{
		____playerID_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____playerID_0), (void*)value);
	}

	inline static int32_t get_offset_of__playerName_1() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____playerName_1)); }
	inline String_t* get__playerName_1() const { return ____playerName_1; }
	inline String_t** get_address_of__playerName_1() { return &____playerName_1; }
	inline void set__playerName_1(String_t* value)
	{
		____playerName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____playerName_1), (void*)value);
	}

	inline static int32_t get_offset_of__playerCurrentLevel_2() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____playerCurrentLevel_2)); }
	inline int32_t get__playerCurrentLevel_2() const { return ____playerCurrentLevel_2; }
	inline int32_t* get_address_of__playerCurrentLevel_2() { return &____playerCurrentLevel_2; }
	inline void set__playerCurrentLevel_2(int32_t value)
	{
		____playerCurrentLevel_2 = value;
	}

	inline static int32_t get_offset_of__coins_3() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____coins_3)); }
	inline int32_t get__coins_3() const { return ____coins_3; }
	inline int32_t* get_address_of__coins_3() { return &____coins_3; }
	inline void set__coins_3(int32_t value)
	{
		____coins_3 = value;
	}

	inline static int32_t get_offset_of__energy_4() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____energy_4)); }
	inline int32_t get__energy_4() const { return ____energy_4; }
	inline int32_t* get_address_of__energy_4() { return &____energy_4; }
	inline void set__energy_4(int32_t value)
	{
		____energy_4 = value;
	}
};


// Firebase.Database.Query
struct Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C  : public RuntimeObject
{
public:
	// Firebase.Database.Internal.InternalQuery Firebase.Database.Query::internalQuery
	InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * ___internalQuery_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Query::database
	FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___database_1;
	// Firebase.Database.Internal.InternalValueListener Firebase.Database.Query::valueListener
	InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 * ___valueListener_2;
	// Firebase.Database.Internal.InternalChildListener Firebase.Database.Query::childListener
	InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D * ___childListener_3;

public:
	inline static int32_t get_offset_of_internalQuery_0() { return static_cast<int32_t>(offsetof(Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C, ___internalQuery_0)); }
	inline InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * get_internalQuery_0() const { return ___internalQuery_0; }
	inline InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 ** get_address_of_internalQuery_0() { return &___internalQuery_0; }
	inline void set_internalQuery_0(InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * value)
	{
		___internalQuery_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalQuery_0), (void*)value);
	}

	inline static int32_t get_offset_of_database_1() { return static_cast<int32_t>(offsetof(Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C, ___database_1)); }
	inline FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * get_database_1() const { return ___database_1; }
	inline FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 ** get_address_of_database_1() { return &___database_1; }
	inline void set_database_1(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * value)
	{
		___database_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_1), (void*)value);
	}

	inline static int32_t get_offset_of_valueListener_2() { return static_cast<int32_t>(offsetof(Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C, ___valueListener_2)); }
	inline InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 * get_valueListener_2() const { return ___valueListener_2; }
	inline InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 ** get_address_of_valueListener_2() { return &___valueListener_2; }
	inline void set_valueListener_2(InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 * value)
	{
		___valueListener_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueListener_2), (void*)value);
	}

	inline static int32_t get_offset_of_childListener_3() { return static_cast<int32_t>(offsetof(Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C, ___childListener_3)); }
	inline InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D * get_childListener_3() const { return ___childListener_3; }
	inline InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D ** get_address_of_childListener_3() { return &___childListener_3; }
	inline void set_childListener_3(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D * value)
	{
		___childListener_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childListener_3), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// Firebase.Database.DatabaseReference
struct DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C  : public Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C
{
public:
	// Firebase.Database.Internal.InternalDatabaseReference Firebase.Database.DatabaseReference::internalReference
	InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * ___internalReference_4;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DatabaseReference::<Database>k__BackingField
	FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___U3CDatabaseU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_internalReference_4() { return static_cast<int32_t>(offsetof(DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C, ___internalReference_4)); }
	inline InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * get_internalReference_4() const { return ___internalReference_4; }
	inline InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 ** get_address_of_internalReference_4() { return &___internalReference_4; }
	inline void set_internalReference_4(InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * value)
	{
		___internalReference_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalReference_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDatabaseU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C, ___U3CDatabaseU3Ek__BackingField_5)); }
	inline FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * get_U3CDatabaseU3Ek__BackingField_5() const { return ___U3CDatabaseU3Ek__BackingField_5; }
	inline FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 ** get_address_of_U3CDatabaseU3Ek__BackingField_5() { return &___U3CDatabaseU3Ek__BackingField_5; }
	inline void set_U3CDatabaseU3Ek__BackingField_5(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * value)
	{
		___U3CDatabaseU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDatabaseU3Ek__BackingField_5), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::m_wrapper
	RuntimeObject * ___m_wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::m_handle
	intptr_t ___m_handle_1;

public:
	inline static int32_t get_offset_of_m_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF, ___m_wrapper_0)); }
	inline RuntimeObject * get_m_wrapper_0() const { return ___m_wrapper_0; }
	inline RuntimeObject ** get_address_of_m_wrapper_0() { return &___m_wrapper_0; }
	inline void set_m_wrapper_0(RuntimeObject * value)
	{
		___m_wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wrapper_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF, ___m_handle_1)); }
	inline intptr_t get_m_handle_1() const { return ___m_handle_1; }
	inline intptr_t* get_address_of_m_handle_1() { return &___m_handle_1; }
	inline void set_m_handle_1(intptr_t value)
	{
		___m_handle_1 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Firebase.Auth.Credential>
struct Task_1_tA5D31255279C17E13642632FB782BD1EB69C9E61  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tA5D31255279C17E13642632FB782BD1EB69C9E61, ___m_result_40)); }
	inline Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * get_m_result_40() const { return ___m_result_40; }
	inline Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tA5D31255279C17E13642632FB782BD1EB69C9E61_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tF1F9F40705B8A67F2745140D317847E09E2C8753 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t3D1A96CFFFF97E8A9F0A05738A42CE2098E330AD * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tA5D31255279C17E13642632FB782BD1EB69C9E61_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tF1F9F40705B8A67F2745140D317847E09E2C8753 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tF1F9F40705B8A67F2745140D317847E09E2C8753 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tF1F9F40705B8A67F2745140D317847E09E2C8753 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tA5D31255279C17E13642632FB782BD1EB69C9E61_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t3D1A96CFFFF97E8A9F0A05738A42CE2098E330AD * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t3D1A96CFFFF97E8A9F0A05738A42CE2098E330AD ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t3D1A96CFFFF97E8A9F0A05738A42CE2098E330AD * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35, ___m_result_40)); }
	inline FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * get_m_result_40() const { return ___m_result_40; }
	inline FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t9D8D5C3497974FC69996081A4931F540CED80622 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tB4F767378F8B2D53DDCA17BA1E615A32C916EDF6 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t9D8D5C3497974FC69996081A4931F540CED80622 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t9D8D5C3497974FC69996081A4931F540CED80622 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t9D8D5C3497974FC69996081A4931F540CED80622 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tB4F767378F8B2D53DDCA17BA1E615A32C916EDF6 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tB4F767378F8B2D53DDCA17BA1E615A32C916EDF6 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tB4F767378F8B2D53DDCA17BA1E615A32C916EDF6 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.AggregateException
struct AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1  : public Exception_t
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * ___m_innerExceptions_17;

public:
	inline static int32_t get_offset_of_m_innerExceptions_17() { return static_cast<int32_t>(offsetof(AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1, ___m_innerExceptions_17)); }
	inline ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * get_m_innerExceptions_17() const { return ___m_innerExceptions_17; }
	inline ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE ** get_address_of_m_innerExceptions_17() { return &___m_innerExceptions_17; }
	inline void set_m_innerExceptions_17(ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * value)
	{
		___m_innerExceptions_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_innerExceptions_17), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Firebase.Auth.Credential
struct Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.Credential::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Auth.Credential::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseAuth::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Auth.FirebaseAuth::swigCMemOwn
	bool ___swigCMemOwn_1;
	// Firebase.FirebaseApp Firebase.Auth.FirebaseAuth::appProxy
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___appProxy_2;
	// System.IntPtr Firebase.Auth.FirebaseAuth::appCPtr
	intptr_t ___appCPtr_3;
	// System.IntPtr Firebase.Auth.FirebaseAuth::authStateListener
	intptr_t ___authStateListener_4;
	// System.IntPtr Firebase.Auth.FirebaseAuth::idTokenListener
	intptr_t ___idTokenListener_5;
	// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::currentUser
	FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * ___currentUser_6;
	// System.EventHandler Firebase.Auth.FirebaseAuth::stateChangedImpl
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___stateChangedImpl_7;
	// System.EventHandler Firebase.Auth.FirebaseAuth::idTokenChangedImpl
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___idTokenChangedImpl_8;
	// System.Boolean Firebase.Auth.FirebaseAuth::persistentLoaded
	bool ___persistentLoaded_9;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_appProxy_2() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E, ___appProxy_2)); }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * get_appProxy_2() const { return ___appProxy_2; }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D ** get_address_of_appProxy_2() { return &___appProxy_2; }
	inline void set_appProxy_2(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * value)
	{
		___appProxy_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appProxy_2), (void*)value);
	}

	inline static int32_t get_offset_of_appCPtr_3() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E, ___appCPtr_3)); }
	inline intptr_t get_appCPtr_3() const { return ___appCPtr_3; }
	inline intptr_t* get_address_of_appCPtr_3() { return &___appCPtr_3; }
	inline void set_appCPtr_3(intptr_t value)
	{
		___appCPtr_3 = value;
	}

	inline static int32_t get_offset_of_authStateListener_4() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E, ___authStateListener_4)); }
	inline intptr_t get_authStateListener_4() const { return ___authStateListener_4; }
	inline intptr_t* get_address_of_authStateListener_4() { return &___authStateListener_4; }
	inline void set_authStateListener_4(intptr_t value)
	{
		___authStateListener_4 = value;
	}

	inline static int32_t get_offset_of_idTokenListener_5() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E, ___idTokenListener_5)); }
	inline intptr_t get_idTokenListener_5() const { return ___idTokenListener_5; }
	inline intptr_t* get_address_of_idTokenListener_5() { return &___idTokenListener_5; }
	inline void set_idTokenListener_5(intptr_t value)
	{
		___idTokenListener_5 = value;
	}

	inline static int32_t get_offset_of_currentUser_6() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E, ___currentUser_6)); }
	inline FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * get_currentUser_6() const { return ___currentUser_6; }
	inline FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 ** get_address_of_currentUser_6() { return &___currentUser_6; }
	inline void set_currentUser_6(FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * value)
	{
		___currentUser_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentUser_6), (void*)value);
	}

	inline static int32_t get_offset_of_stateChangedImpl_7() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E, ___stateChangedImpl_7)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_stateChangedImpl_7() const { return ___stateChangedImpl_7; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_stateChangedImpl_7() { return &___stateChangedImpl_7; }
	inline void set_stateChangedImpl_7(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___stateChangedImpl_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateChangedImpl_7), (void*)value);
	}

	inline static int32_t get_offset_of_idTokenChangedImpl_8() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E, ___idTokenChangedImpl_8)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_idTokenChangedImpl_8() const { return ___idTokenChangedImpl_8; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_idTokenChangedImpl_8() { return &___idTokenChangedImpl_8; }
	inline void set_idTokenChangedImpl_8(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___idTokenChangedImpl_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___idTokenChangedImpl_8), (void*)value);
	}

	inline static int32_t get_offset_of_persistentLoaded_9() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E, ___persistentLoaded_9)); }
	inline bool get_persistentLoaded_9() const { return ___persistentLoaded_9; }
	inline bool* get_address_of_persistentLoaded_9() { return &___persistentLoaded_9; }
	inline void set_persistentLoaded_9(bool value)
	{
		___persistentLoaded_9 = value;
	}
};

struct FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth::appCPtrToAuth
	Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 * ___appCPtrToAuth_10;
	// Firebase.Auth.FirebaseAuth/StateChangedDelegate Firebase.Auth.FirebaseAuth::<>f__mg$cache0
	StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * ___U3CU3Ef__mgU24cache0_11;
	// Firebase.Auth.FirebaseAuth/StateChangedDelegate Firebase.Auth.FirebaseAuth::<>f__mg$cache1
	StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * ___U3CU3Ef__mgU24cache1_12;
	// System.Action`1<Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth::<>f__am$cache0
	Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * ___U3CU3Ef__amU24cache0_13;
	// System.Action`1<Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth::<>f__am$cache1
	Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * ___U3CU3Ef__amU24cache1_14;

public:
	inline static int32_t get_offset_of_appCPtrToAuth_10() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields, ___appCPtrToAuth_10)); }
	inline Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 * get_appCPtrToAuth_10() const { return ___appCPtrToAuth_10; }
	inline Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 ** get_address_of_appCPtrToAuth_10() { return &___appCPtrToAuth_10; }
	inline void set_appCPtrToAuth_10(Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 * value)
	{
		___appCPtrToAuth_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appCPtrToAuth_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_11() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields, ___U3CU3Ef__mgU24cache0_11)); }
	inline StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * get_U3CU3Ef__mgU24cache0_11() const { return ___U3CU3Ef__mgU24cache0_11; }
	inline StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 ** get_address_of_U3CU3Ef__mgU24cache0_11() { return &___U3CU3Ef__mgU24cache0_11; }
	inline void set_U3CU3Ef__mgU24cache0_11(StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * value)
	{
		___U3CU3Ef__mgU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_12() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields, ___U3CU3Ef__mgU24cache1_12)); }
	inline StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * get_U3CU3Ef__mgU24cache1_12() const { return ___U3CU3Ef__mgU24cache1_12; }
	inline StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 ** get_address_of_U3CU3Ef__mgU24cache1_12() { return &___U3CU3Ef__mgU24cache1_12; }
	inline void set_U3CU3Ef__mgU24cache1_12(StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * value)
	{
		___U3CU3Ef__mgU24cache1_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache1_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_13() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields, ___U3CU3Ef__amU24cache0_13)); }
	inline Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * get_U3CU3Ef__amU24cache0_13() const { return ___U3CU3Ef__amU24cache0_13; }
	inline Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF ** get_address_of_U3CU3Ef__amU24cache0_13() { return &___U3CU3Ef__amU24cache0_13; }
	inline void set_U3CU3Ef__amU24cache0_13(Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * value)
	{
		___U3CU3Ef__amU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache0_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_14() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields, ___U3CU3Ef__amU24cache1_14)); }
	inline Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * get_U3CU3Ef__amU24cache1_14() const { return ___U3CU3Ef__amU24cache1_14; }
	inline Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF ** get_address_of_U3CU3Ef__amU24cache1_14() { return &___U3CU3Ef__amU24cache1_14; }
	inline void set_U3CU3Ef__amU24cache1_14(Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * value)
	{
		___U3CU3Ef__amU24cache1_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache1_14), (void*)value);
	}
};


// Firebase.Auth.FirebaseUser
struct FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308  : public RuntimeObject
{
public:
	// System.Boolean Firebase.Auth.FirebaseUser::swigCMemOwn
	bool ___swigCMemOwn_0;
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseUser::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_1;
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseUser::authProxy
	FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * ___authProxy_2;

public:
	inline static int32_t get_offset_of_swigCMemOwn_0() { return static_cast<int32_t>(offsetof(FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308, ___swigCMemOwn_0)); }
	inline bool get_swigCMemOwn_0() const { return ___swigCMemOwn_0; }
	inline bool* get_address_of_swigCMemOwn_0() { return &___swigCMemOwn_0; }
	inline void set_swigCMemOwn_0(bool value)
	{
		___swigCMemOwn_0 = value;
	}

	inline static int32_t get_offset_of_swigCPtr_1() { return static_cast<int32_t>(offsetof(FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308, ___swigCPtr_1)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_1() const { return ___swigCPtr_1; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_1() { return &___swigCPtr_1; }
	inline void set_swigCPtr_1(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_1))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_authProxy_2() { return static_cast<int32_t>(offsetof(FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308, ___authProxy_2)); }
	inline FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * get_authProxy_2() const { return ___authProxy_2; }
	inline FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E ** get_address_of_authProxy_2() { return &___authProxy_2; }
	inline void set_authProxy_2(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * value)
	{
		___authProxy_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authProxy_2), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.Credential>>
struct Action_1_t308A82B71C7F089573E1586EEEB74B9195BAAEF1  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Action_1_t7126D3DC3275C39CFE5D20E759C1D8FAE10E777B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// GameCenterLogin
struct GameCenterLogin_tCA852B5B4DB991DF074B9BBFB50354324084D102  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean GameCenterLogin::loginSuccess
	bool ___loginSuccess_4;
	// System.String GameCenterLogin::leaderboardID
	String_t* ___leaderboardID_5;
	// UnityEngine.UI.Text GameCenterLogin::DebugText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___DebugText_6;
	// Firebase.Auth.FirebaseAuth GameCenterLogin::mAuth
	FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * ___mAuth_7;
	// Firebase.Auth.FirebaseUser GameCenterLogin::_newUser
	FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * ____newUser_8;
	// Firebase.Database.DatabaseReference GameCenterLogin::mReference
	DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * ___mReference_9;
	// Player GameCenterLogin::playerDetails
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___playerDetails_10;

public:
	inline static int32_t get_offset_of_loginSuccess_4() { return static_cast<int32_t>(offsetof(GameCenterLogin_tCA852B5B4DB991DF074B9BBFB50354324084D102, ___loginSuccess_4)); }
	inline bool get_loginSuccess_4() const { return ___loginSuccess_4; }
	inline bool* get_address_of_loginSuccess_4() { return &___loginSuccess_4; }
	inline void set_loginSuccess_4(bool value)
	{
		___loginSuccess_4 = value;
	}

	inline static int32_t get_offset_of_leaderboardID_5() { return static_cast<int32_t>(offsetof(GameCenterLogin_tCA852B5B4DB991DF074B9BBFB50354324084D102, ___leaderboardID_5)); }
	inline String_t* get_leaderboardID_5() const { return ___leaderboardID_5; }
	inline String_t** get_address_of_leaderboardID_5() { return &___leaderboardID_5; }
	inline void set_leaderboardID_5(String_t* value)
	{
		___leaderboardID_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leaderboardID_5), (void*)value);
	}

	inline static int32_t get_offset_of_DebugText_6() { return static_cast<int32_t>(offsetof(GameCenterLogin_tCA852B5B4DB991DF074B9BBFB50354324084D102, ___DebugText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_DebugText_6() const { return ___DebugText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_DebugText_6() { return &___DebugText_6; }
	inline void set_DebugText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___DebugText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DebugText_6), (void*)value);
	}

	inline static int32_t get_offset_of_mAuth_7() { return static_cast<int32_t>(offsetof(GameCenterLogin_tCA852B5B4DB991DF074B9BBFB50354324084D102, ___mAuth_7)); }
	inline FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * get_mAuth_7() const { return ___mAuth_7; }
	inline FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E ** get_address_of_mAuth_7() { return &___mAuth_7; }
	inline void set_mAuth_7(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * value)
	{
		___mAuth_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAuth_7), (void*)value);
	}

	inline static int32_t get_offset_of__newUser_8() { return static_cast<int32_t>(offsetof(GameCenterLogin_tCA852B5B4DB991DF074B9BBFB50354324084D102, ____newUser_8)); }
	inline FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * get__newUser_8() const { return ____newUser_8; }
	inline FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 ** get_address_of__newUser_8() { return &____newUser_8; }
	inline void set__newUser_8(FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * value)
	{
		____newUser_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____newUser_8), (void*)value);
	}

	inline static int32_t get_offset_of_mReference_9() { return static_cast<int32_t>(offsetof(GameCenterLogin_tCA852B5B4DB991DF074B9BBFB50354324084D102, ___mReference_9)); }
	inline DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * get_mReference_9() const { return ___mReference_9; }
	inline DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C ** get_address_of_mReference_9() { return &___mReference_9; }
	inline void set_mReference_9(DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * value)
	{
		___mReference_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mReference_9), (void*)value);
	}

	inline static int32_t get_offset_of_playerDetails_10() { return static_cast<int32_t>(offsetof(GameCenterLogin_tCA852B5B4DB991DF074B9BBFB50354324084D102, ___playerDetails_10)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_playerDetails_10() const { return ___playerDetails_10; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_playerDetails_10() { return &___playerDetails_10; }
	inline void set_playerDetails_10(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___playerDetails_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerDetails_10), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_1_ContinueWith_mD0894365AE360E310C6E4D365ADBEEDCE18D6BF7_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, Action_1_tFE20E1B68D8FC8F70518B6977AEA92C696288F1D * ___continuationAction0, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Task_1_get_Result_m5A339E4CA9D86AC691E5754F29A452802A8DE548_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);

// System.Void GameCenterLogin::GameCenterAuthentication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterLogin_GameCenterAuthentication_m8749A55A787C23DC0DCC45BD76832BC9ACE8A860 (GameCenterLogin_tCA852B5B4DB991DF074B9BBFB50354324084D102 * __this, const RuntimeMethod* method);
// System.Void GameCenterLogin::FirebaseUserDetails()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterLogin_FirebaseUserDetails_m081DBFE653298EA07E4BACEEAD92253EE2F1D94E (GameCenterLogin_tCA852B5B4DB991DF074B9BBFB50354324084D102 * __this, const RuntimeMethod* method);
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * FirebaseDatabase_get_DefaultInstance_m75D618D373BDD71ACEA9A351126AB3F937B69D4A (const RuntimeMethod* method);
// Firebase.Database.DatabaseReference Firebase.Database.FirebaseDatabase::get_RootReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * FirebaseDatabase_get_RootReference_m01D00EAFB2836E43A5CA68CBDEFE1D965CF45A72 (FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * __this, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.Social::get_localUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Social_get_localUser_m3C570106A10EE66C0172C291AE2084829B64C468 (const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_gshared)(__this, ___object0, ___method1, method);
}
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * FirebaseAuth_get_DefaultInstance_mF1D21420B3C15192CB99E2D770C761AECD4B49AC (const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Firebase.Auth.Credential> Firebase.Auth.GameCenterAuthProvider::GetCredentialAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA5D31255279C17E13642632FB782BD1EB69C9E61 * GameCenterAuthProvider_GetCredentialAsync_m6F076821A0563B73A951276DD5D91AD64265F8C7 (const RuntimeMethod* method);
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.Credential>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mCAF438E367DFC35DADF1A0CF7935E2AB9A45E72C (Action_1_t308A82B71C7F089573E1586EEEB74B9195BAAEF1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t308A82B71C7F089573E1586EEEB74B9195BAAEF1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.Auth.Credential>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_1_ContinueWith_m025020251CA2CFA2A2889A3113C1C17E4B45B7D0 (Task_1_tA5D31255279C17E13642632FB782BD1EB69C9E61 * __this, Action_1_t308A82B71C7F089573E1586EEEB74B9195BAAEF1 * ___continuationAction0, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (Task_1_tA5D31255279C17E13642632FB782BD1EB69C9E61 *, Action_1_t308A82B71C7F089573E1586EEEB74B9195BAAEF1 *, const RuntimeMethod*))Task_1_ContinueWith_mD0894365AE360E310C6E4D365ADBEEDCE18D6BF7_gshared)(__this, ___continuationAction0, method);
}
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::get_CurrentUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * FirebaseAuth_get_CurrentUser_m9562ABA0BC2C3B762D355D502066987E2485770A (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * __this, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// Firebase.Database.DatabaseReference Firebase.Database.DatabaseReference::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * DatabaseReference_Child_mE0A765A60474B18C36B908672485FC79D8676118 (DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * __this, String_t* ___pathString0, const RuntimeMethod* method);
// System.String Firebase.Auth.FirebaseUser::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseUser_get_UserId_mDD6E6DAD5F2771502952A0CB6A22858580549804 (FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task Firebase.Database.DatabaseReference::SetRawJsonValueAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * DatabaseReference_SetRawJsonValueAsync_m7F99AA89C17C838E525723F9979575DD673C22E2 (DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * __this, String_t* ___jsonValue0, const RuntimeMethod* method);
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void GameCenterLogin::AuthWithFirebase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterLogin_AuthWithFirebase_m4CD3E83396F2A8D746DCD5648DB9A3096875154D (GameCenterLogin_tCA852B5B4DB991DF074B9BBFB50354324084D102 * __this, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<Firebase.Auth.Credential>::get_Result()
inline Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * Task_1_get_Result_m7DB112F8ABD16A4EE9E527A473F566679BD56392 (Task_1_tA5D31255279C17E13642632FB782BD1EB69C9E61 * __this, const RuntimeMethod* method)
{
	return ((  Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * (*) (Task_1_tA5D31255279C17E13642632FB782BD1EB69C9E61 *, const RuntimeMethod*))Task_1_get_Result_m5A339E4CA9D86AC691E5754F29A452802A8DE548_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::SignInWithCredentialAsync(Firebase.Auth.Credential)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * FirebaseAuth_SignInWithCredentialAsync_m2716706F94FE150CCEDC6EC933DC3CF7A09C1F2C (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * __this, Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * ___credential0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC08CFCBA5E5C60444AFD54F0A1469E7A9C3F3289 (Action_1_t7126D3DC3275C39CFE5D20E759C1D8FAE10E777B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7126D3DC3275C39CFE5D20E759C1D8FAE10E777B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_1_ContinueWith_m8F6AA71D6F03EB18D013502073FED8C3877C4944 (Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * __this, Action_1_t7126D3DC3275C39CFE5D20E759C1D8FAE10E777B * ___continuationAction0, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 *, Action_1_t7126D3DC3275C39CFE5D20E759C1D8FAE10E777B *, const RuntimeMethod*))Task_1_ContinueWith_mD0894365AE360E310C6E4D365ADBEEDCE18D6BF7_gshared)(__this, ___continuationAction0, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCanceled_m4D3446507B67CD13F0A7A50D0299105E2817FC66 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_mDA5DABB816C7B86B0B8AA733FBDD07802483B855 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * Task_get_Exception_m53945993385D4031240B0DB2C0585ABBFB8CFA81 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>::get_Result()
inline FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * Task_1_get_Result_m0E8072D9FA86249BB7F7B6FAF7284C70F9F325BC (Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * __this, const RuntimeMethod* method)
{
	return ((  FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * (*) (Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 *, const RuntimeMethod*))Task_1_get_Result_m5A339E4CA9D86AC691E5754F29A452802A8DE548_gshared)(__this, method);
}
// System.String Firebase.Auth.FirebaseUser::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseUser_get_DisplayName_m25C9AF8A96600117549550673DFE45836D034E73 (FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * __this, const RuntimeMethod* method);
// System.Void GameCenterLogin::SaveNewUser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterLogin_SaveNewUser_m98C593761718D36B93111BDD10003C05BDCF841F (GameCenterLogin_tCA852B5B4DB991DF074B9BBFB50354324084D102 * __this, String_t* ___userId0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameCenterLogin::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterLogin_Start_mB3A32FC887414F2D5757BF38A3F560CA7AC32B44 (GameCenterLogin_tCA852B5B4DB991DF074B9BBFB50354324084D102 * __this, const RuntimeMethod* method)
{
	{
		// GameCenterAuthentication();
		GameCenterLogin_GameCenterAuthentication_m8749A55A787C23DC0DCC45BD76832BC9ACE8A860(__this, /*hidden argument*/NULL);
		// FirebaseUserDetails();
		GameCenterLogin_FirebaseUserDetails_m081DBFE653298EA07E4BACEEAD92253EE2F1D94E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameCenterLogin::FirebaseUserDetails()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterLogin_FirebaseUserDetails_m081DBFE653298EA07E4BACEEAD92253EE2F1D94E (GameCenterLogin_tCA852B5B4DB991DF074B9BBFB50354324084D102 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mReference = FirebaseDatabase.DefaultInstance.RootReference;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_0;
		L_0 = FirebaseDatabase_get_DefaultInstance_m75D618D373BDD71ACEA9A351126AB3F937B69D4A(/*hidden argument*/NULL);
		NullCheck(L_0);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_1;
		L_1 = FirebaseDatabase_get_RootReference_m01D00EAFB2836E43A5CA68CBDEFE1D965CF45A72(L_0, /*hidden argument*/NULL);
		__this->set_mReference_9(L_1);
		// playerDetails._playerCurrentLevel = 50;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_2 = __this->get_playerDetails_10();
		NullCheck(L_2);
		L_2->set__playerCurrentLevel_2(((int32_t)50));
		// playerDetails._coins = 20;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_3 = __this->get_playerDetails_10();
		NullCheck(L_3);
		L_3->set__coins_3(((int32_t)20));
		// playerDetails._energy = 50;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_4 = __this->get_playerDetails_10();
		NullCheck(L_4);
		L_4->set__energy_4(((int32_t)50));
		// }
		return;
	}
}
// System.Void GameCenterLogin::GameCenterAuthentication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterLogin_GameCenterAuthentication_m8749A55A787C23DC0DCC45BD76832BC9ACE8A860 (GameCenterLogin_tCA852B5B4DB991DF074B9BBFB50354324084D102 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterLogin_U3CGameCenterAuthenticationU3Eb__9_0_mDC5D92C4E66A156966CDB65A1D29FBE1F5654769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILocalUser_t835F1CCDE2ED60F6D514522949B6402B7D871F27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Social.localUser.Authenticate((bool success) =>
		// {
		//     if (success)
		//     {
		//         loginSuccess = true;
		//         Debug.Log("Login Success");
		//         AuthWithFirebase();
		//     }
		//     else
		//     {
		//         Debug.Log("Login Unsuccessful");
		//     }
		// });
		RuntimeObject* L_0;
		L_0 = Social_get_localUser_m3C570106A10EE66C0172C291AE2084829B64C468(/*hidden argument*/NULL);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)il2cpp_codegen_object_new(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38(L_1, __this, (intptr_t)((intptr_t)GameCenterLogin_U3CGameCenterAuthenticationU3Eb__9_0_mDC5D92C4E66A156966CDB65A1D29FBE1F5654769_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * >::Invoke(0 /* System.Void UnityEngine.SocialPlatforms.ILocalUser::Authenticate(System.Action`1<System.Boolean>) */, ILocalUser_t835F1CCDE2ED60F6D514522949B6402B7D871F27_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void GameCenterLogin::AuthWithFirebase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterLogin_AuthWithFirebase_m4CD3E83396F2A8D746DCD5648DB9A3096875154D (GameCenterLogin_tCA852B5B4DB991DF074B9BBFB50354324084D102 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mCAF438E367DFC35DADF1A0CF7935E2AB9A45E72C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t308A82B71C7F089573E1586EEEB74B9195BAAEF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterAuthProvider_t975CD6C8B8E27EF5C2A71D0880E53A131D93F89F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterLogin_U3CAuthWithFirebaseU3Eb__10_0_mD33F527287757BCE31196D550196A76332A83059_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_m025020251CA2CFA2A2889A3113C1C17E4B45B7D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mAuth = FirebaseAuth.DefaultInstance;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_0;
		L_0 = FirebaseAuth_get_DefaultInstance_mF1D21420B3C15192CB99E2D770C761AECD4B49AC(/*hidden argument*/NULL);
		__this->set_mAuth_7(L_0);
		// var credentialTask = GameCenterAuthProvider.GetCredentialAsync();
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterAuthProvider_t975CD6C8B8E27EF5C2A71D0880E53A131D93F89F_il2cpp_TypeInfo_var);
		Task_1_tA5D31255279C17E13642632FB782BD1EB69C9E61 * L_1;
		L_1 = GameCenterAuthProvider_GetCredentialAsync_m6F076821A0563B73A951276DD5D91AD64265F8C7(/*hidden argument*/NULL);
		// var continueTask= credentialTask.ContinueWith(task =>
		// {
		//      var credential = task.Result;
		// 
		//      mAuth.SignInWithCredentialAsync(credential).ContinueWith(task =>
		//      {
		//          if (task.IsCanceled)
		//          {
		//              DebugText.text = "SignInWithCredentialAsync was canceled";
		//          }
		//          if (task.IsFaulted)
		//          {
		//              DebugText.text = "SignInWithCredentialAsync encountered an error: " + task.Exception;
		//          }
		//          _newUser = task.Result;
		//          playerDetails._playerName = _newUser.DisplayName;
		//          playerDetails._playerID = _newUser.UserId;
		//          SaveNewUser(this._newUser.UserId);
		//          DebugText.text = "User Signed in Firebase";
		//      });
		// });
		Action_1_t308A82B71C7F089573E1586EEEB74B9195BAAEF1 * L_2 = (Action_1_t308A82B71C7F089573E1586EEEB74B9195BAAEF1 *)il2cpp_codegen_object_new(Action_1_t308A82B71C7F089573E1586EEEB74B9195BAAEF1_il2cpp_TypeInfo_var);
		Action_1__ctor_mCAF438E367DFC35DADF1A0CF7935E2AB9A45E72C(L_2, __this, (intptr_t)((intptr_t)GameCenterLogin_U3CAuthWithFirebaseU3Eb__10_0_mD33F527287757BCE31196D550196A76332A83059_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mCAF438E367DFC35DADF1A0CF7935E2AB9A45E72C_RuntimeMethod_var);
		NullCheck(L_1);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3;
		L_3 = Task_1_ContinueWith_m025020251CA2CFA2A2889A3113C1C17E4B45B7D0(L_1, L_2, /*hidden argument*/Task_1_ContinueWith_m025020251CA2CFA2A2889A3113C1C17E4B45B7D0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GameCenterLogin::SaveNewUser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterLogin_SaveNewUser_m98C593761718D36B93111BDD10003C05BDCF841F (GameCenterLogin_tCA852B5B4DB991DF074B9BBFB50354324084D102 * __this, String_t* ___userId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral229DA3D8897550B864D0FFA2AA06291E5392DBA0);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// var currentUser = FirebaseAuth.DefaultInstance.CurrentUser;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_0;
		L_0 = FirebaseAuth_get_DefaultInstance_mF1D21420B3C15192CB99E2D770C761AECD4B49AC(/*hidden argument*/NULL);
		NullCheck(L_0);
		FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_1;
		L_1 = FirebaseAuth_get_CurrentUser_m9562ABA0BC2C3B762D355D502066987E2485770A(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// string json = JsonUtility.ToJson(playerDetails);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_2 = __this->get_playerDetails_10();
		String_t* L_3;
		L_3 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// mReference.Child("Game Center Users").Child(currentUser.UserId).SetRawJsonValueAsync(json);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_4 = __this->get_mReference_9();
		NullCheck(L_4);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_5;
		L_5 = DatabaseReference_Child_mE0A765A60474B18C36B908672485FC79D8676118(L_4, _stringLiteral229DA3D8897550B864D0FFA2AA06291E5392DBA0, /*hidden argument*/NULL);
		FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = FirebaseUser_get_UserId_mDD6E6DAD5F2771502952A0CB6A22858580549804(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_8;
		L_8 = DatabaseReference_Child_mE0A765A60474B18C36B908672485FC79D8676118(L_5, L_7, /*hidden argument*/NULL);
		String_t* L_9 = V_1;
		NullCheck(L_8);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_10;
		L_10 = DatabaseReference_SetRawJsonValueAsync_m7F99AA89C17C838E525723F9979575DD673C22E2(L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameCenterLogin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterLogin__ctor_m13CE986AB9D22075582BC70CC7019DDEBAA7A15F (GameCenterLogin_tCA852B5B4DB991DF074B9BBFB50354324084D102 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FE3585E6BCEBFF11349C5B9CF68644D2FE3E34B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string leaderboardID = "Some Leaderboard ID";
		__this->set_leaderboardID_5(_stringLiteral2FE3585E6BCEBFF11349C5B9CF68644D2FE3E34B);
		// Player playerDetails = new Player();
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_0 = (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F *)il2cpp_codegen_object_new(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var);
		Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7(L_0, /*hidden argument*/NULL);
		__this->set_playerDetails_10(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameCenterLogin::<GameCenterAuthentication>b__9_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterLogin_U3CGameCenterAuthenticationU3Eb__9_0_mDC5D92C4E66A156966CDB65A1D29FBE1F5654769 (GameCenterLogin_tCA852B5B4DB991DF074B9BBFB50354324084D102 * __this, bool ___success0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1314758E29EBE16E498BDE1E0B897B7B983AB6DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AE89394F035769900C129F8FF2AEEABF7DB5279);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (success)
		bool L_0 = ___success0;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// loginSuccess = true;
		__this->set_loginSuccess_4((bool)1);
		// Debug.Log("Login Success");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral2AE89394F035769900C129F8FF2AEEABF7DB5279, /*hidden argument*/NULL);
		// AuthWithFirebase();
		GameCenterLogin_AuthWithFirebase_m4CD3E83396F2A8D746DCD5648DB9A3096875154D(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001b:
	{
		// Debug.Log("Login Unsuccessful");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral1314758E29EBE16E498BDE1E0B897B7B983AB6DB, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void GameCenterLogin::<AuthWithFirebase>b__10_0(System.Threading.Tasks.Task`1<Firebase.Auth.Credential>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterLogin_U3CAuthWithFirebaseU3Eb__10_0_mD33F527287757BCE31196D550196A76332A83059 (GameCenterLogin_tCA852B5B4DB991DF074B9BBFB50354324084D102 * __this, Task_1_tA5D31255279C17E13642632FB782BD1EB69C9E61 * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC08CFCBA5E5C60444AFD54F0A1469E7A9C3F3289_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7126D3DC3275C39CFE5D20E759C1D8FAE10E777B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterLogin_U3CAuthWithFirebaseU3Eb__10_1_m29A0F8E0D4731594B3562BB5BC28043CEEE975D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_m8F6AA71D6F03EB18D013502073FED8C3877C4944_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m7DB112F8ABD16A4EE9E527A473F566679BD56392_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * V_0 = NULL;
	{
		// var credential = task.Result;
		Task_1_tA5D31255279C17E13642632FB782BD1EB69C9E61 * L_0 = ___task0;
		NullCheck(L_0);
		Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * L_1;
		L_1 = Task_1_get_Result_m7DB112F8ABD16A4EE9E527A473F566679BD56392(L_0, /*hidden argument*/Task_1_get_Result_m7DB112F8ABD16A4EE9E527A473F566679BD56392_RuntimeMethod_var);
		V_0 = L_1;
		// mAuth.SignInWithCredentialAsync(credential).ContinueWith(task =>
		// {
		//     if (task.IsCanceled)
		//     {
		//         DebugText.text = "SignInWithCredentialAsync was canceled";
		//     }
		//     if (task.IsFaulted)
		//     {
		//         DebugText.text = "SignInWithCredentialAsync encountered an error: " + task.Exception;
		//     }
		//     _newUser = task.Result;
		//     playerDetails._playerName = _newUser.DisplayName;
		//     playerDetails._playerID = _newUser.UserId;
		//     SaveNewUser(this._newUser.UserId);
		//     DebugText.text = "User Signed in Firebase";
		// });
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_2 = __this->get_mAuth_7();
		Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * L_3 = V_0;
		NullCheck(L_2);
		Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * L_4;
		L_4 = FirebaseAuth_SignInWithCredentialAsync_m2716706F94FE150CCEDC6EC933DC3CF7A09C1F2C(L_2, L_3, /*hidden argument*/NULL);
		Action_1_t7126D3DC3275C39CFE5D20E759C1D8FAE10E777B * L_5 = (Action_1_t7126D3DC3275C39CFE5D20E759C1D8FAE10E777B *)il2cpp_codegen_object_new(Action_1_t7126D3DC3275C39CFE5D20E759C1D8FAE10E777B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC08CFCBA5E5C60444AFD54F0A1469E7A9C3F3289(L_5, __this, (intptr_t)((intptr_t)GameCenterLogin_U3CAuthWithFirebaseU3Eb__10_1_m29A0F8E0D4731594B3562BB5BC28043CEEE975D5_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC08CFCBA5E5C60444AFD54F0A1469E7A9C3F3289_RuntimeMethod_var);
		NullCheck(L_4);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
		L_6 = Task_1_ContinueWith_m8F6AA71D6F03EB18D013502073FED8C3877C4944(L_4, L_5, /*hidden argument*/Task_1_ContinueWith_m8F6AA71D6F03EB18D013502073FED8C3877C4944_RuntimeMethod_var);
		// });
		return;
	}
}
// System.Void GameCenterLogin::<AuthWithFirebase>b__10_1(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterLogin_U3CAuthWithFirebaseU3Eb__10_1_m29A0F8E0D4731594B3562BB5BC28043CEEE975D5 (GameCenterLogin_tCA852B5B4DB991DF074B9BBFB50354324084D102 * __this, Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m0E8072D9FA86249BB7F7B6FAF7284C70F9F325BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA91DDFDFF4D4307DED5299AD736DADA73E57F94C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB368981458D26765912F026A3AE1C4E03AB9F365);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEECB4FFC746D10CB528E962BFAF46148956F356C);
		s_Il2CppMethodInitialized = true;
	}
	AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B5_2 = NULL;
	AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B6_2 = NULL;
	{
		// if (task.IsCanceled)
		Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * L_0 = ___task0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCanceled_m4D3446507B67CD13F0A7A50D0299105E2817FC66(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// DebugText.text = "SignInWithCredentialAsync was canceled";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_DebugText_6();
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteralA91DDFDFF4D4307DED5299AD736DADA73E57F94C);
	}

IL_0018:
	{
		// if (task.IsFaulted)
		Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * L_3 = ___task0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Task_get_IsFaulted_mDA5DABB816C7B86B0B8AA733FBDD07802483B855(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		// DebugText.text = "SignInWithCredentialAsync encountered an error: " + task.Exception;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_DebugText_6();
		Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * L_6 = ___task0;
		NullCheck(L_6);
		AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * L_7;
		L_7 = Task_get_Exception_m53945993385D4031240B0DB2C0585ABBFB8CFA81(L_6, /*hidden argument*/NULL);
		AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * L_8 = L_7;
		G_B4_0 = L_8;
		G_B4_1 = _stringLiteralEECB4FFC746D10CB528E962BFAF46148956F356C;
		G_B4_2 = L_5;
		if (L_8)
		{
			G_B5_0 = L_8;
			G_B5_1 = _stringLiteralEECB4FFC746D10CB528E962BFAF46148956F356C;
			G_B5_2 = L_5;
			goto IL_0038;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		goto IL_003d;
	}

IL_0038:
	{
		NullCheck(G_B5_0);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_9;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_003d:
	{
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B6_1, G_B6_0, /*hidden argument*/NULL);
		NullCheck(G_B6_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B6_2, L_10);
	}

IL_0047:
	{
		// _newUser = task.Result;
		Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * L_11 = ___task0;
		NullCheck(L_11);
		FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_12;
		L_12 = Task_1_get_Result_m0E8072D9FA86249BB7F7B6FAF7284C70F9F325BC(L_11, /*hidden argument*/Task_1_get_Result_m0E8072D9FA86249BB7F7B6FAF7284C70F9F325BC_RuntimeMethod_var);
		__this->set__newUser_8(L_12);
		// playerDetails._playerName = _newUser.DisplayName;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_13 = __this->get_playerDetails_10();
		FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_14 = __this->get__newUser_8();
		NullCheck(L_14);
		String_t* L_15;
		L_15 = FirebaseUser_get_DisplayName_m25C9AF8A96600117549550673DFE45836D034E73(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		L_13->set__playerName_1(L_15);
		// playerDetails._playerID = _newUser.UserId;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_16 = __this->get_playerDetails_10();
		FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_17 = __this->get__newUser_8();
		NullCheck(L_17);
		String_t* L_18;
		L_18 = FirebaseUser_get_UserId_mDD6E6DAD5F2771502952A0CB6A22858580549804(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->set__playerID_0(L_18);
		// SaveNewUser(this._newUser.UserId);
		FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_19 = __this->get__newUser_8();
		NullCheck(L_19);
		String_t* L_20;
		L_20 = FirebaseUser_get_UserId_mDD6E6DAD5F2771502952A0CB6A22858580549804(L_19, /*hidden argument*/NULL);
		GameCenterLogin_SaveNewUser_m98C593761718D36B93111BDD10003C05BDCF841F(__this, L_20, /*hidden argument*/NULL);
		// DebugText.text = "User Signed in Firebase";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = __this->get_DebugText_6();
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, _stringLiteralB368981458D26765912F026A3AE1C4E03AB9F365);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
