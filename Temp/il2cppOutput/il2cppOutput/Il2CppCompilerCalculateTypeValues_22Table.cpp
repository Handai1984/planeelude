#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// System.String
struct String_t;
// UnityEngine.Purchasing.ConfigurationBuilder
struct ConfigurationBuilder_t1618671084;
// System.Action
struct Action_t1264377477;
// IAPDemo
struct IAPDemo_t3681080565;
// IAPDemo/UnityChannelPurchaseInfo
struct UnityChannelPurchaseInfo_t74063925;
// System.Action`1<System.String>
struct Action_1_t2019918284;
// System.Action`1<UnityEngine.Store.UserInfo>
struct Action_1_t3058893588;
// System.Void
struct Void_t1185182177;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// UnityEngine.Purchasing.IAPListener/OnPurchaseCompletedEvent
struct OnPurchaseCompletedEvent_t1675809258;
// UnityEngine.Purchasing.IAPListener/OnPurchaseFailedEvent
struct OnPurchaseFailedEvent_t800864861;
// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.Purchasing.IStoreController
struct IStoreController_t2579314702;
// UnityEngine.Purchasing.IAppleExtensions
struct IAppleExtensions_t4146644616;
// UnityEngine.Purchasing.IMoolahExtension
struct IMoolahExtension_t955300474;
// UnityEngine.Purchasing.ISamsungAppsExtensions
struct ISamsungAppsExtensions_t2712620151;
// UnityEngine.Purchasing.IMicrosoftExtensions
struct IMicrosoftExtensions_t4020186927;
// UnityEngine.Purchasing.IUnityChannelExtensions
struct IUnityChannelExtensions_t3299991497;
// UnityEngine.Purchasing.ITransactionHistoryExtensions
struct ITransactionHistoryExtensions_t1575111476;
// IAPDemo/UnityChannelLoginHandler
struct UnityChannelLoginHandler_t2949829254;
// System.Collections.Generic.Dictionary`2<System.String,IAPDemoProductUI>
struct Dictionary_2_t708210053;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef U3CAWAKEU3EC__ANONSTOREY0_T2364586269_H
#define U3CAWAKEU3EC__ANONSTOREY0_T2364586269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IAPDemo/<Awake>c__AnonStorey0
struct  U3CAwakeU3Ec__AnonStorey0_t2364586269  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ConfigurationBuilder IAPDemo/<Awake>c__AnonStorey0::builder
	ConfigurationBuilder_t1618671084 * ___builder_0;
	// System.Action IAPDemo/<Awake>c__AnonStorey0::initializeUnityIap
	Action_t1264377477 * ___initializeUnityIap_1;
	// IAPDemo IAPDemo/<Awake>c__AnonStorey0::$this
	IAPDemo_t3681080565 * ___U24this_2;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(U3CAwakeU3Ec__AnonStorey0_t2364586269, ___builder_0)); }
	inline ConfigurationBuilder_t1618671084 * get_builder_0() const { return ___builder_0; }
	inline ConfigurationBuilder_t1618671084 ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(ConfigurationBuilder_t1618671084 * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((&___builder_0), value);
	}

	inline static int32_t get_offset_of_initializeUnityIap_1() { return static_cast<int32_t>(offsetof(U3CAwakeU3Ec__AnonStorey0_t2364586269, ___initializeUnityIap_1)); }
	inline Action_t1264377477 * get_initializeUnityIap_1() const { return ___initializeUnityIap_1; }
	inline Action_t1264377477 ** get_address_of_initializeUnityIap_1() { return &___initializeUnityIap_1; }
	inline void set_initializeUnityIap_1(Action_t1264377477 * value)
	{
		___initializeUnityIap_1 = value;
		Il2CppCodeGenWriteBarrier((&___initializeUnityIap_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CAwakeU3Ec__AnonStorey0_t2364586269, ___U24this_2)); }
	inline IAPDemo_t3681080565 * get_U24this_2() const { return ___U24this_2; }
	inline IAPDemo_t3681080565 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(IAPDemo_t3681080565 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CAWAKEU3EC__ANONSTOREY0_T2364586269_H
#ifndef UNITYCHANNELPURCHASEERROR_T2306817818_H
#define UNITYCHANNELPURCHASEERROR_T2306817818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IAPDemo/UnityChannelPurchaseError
struct  UnityChannelPurchaseError_t2306817818  : public RuntimeObject
{
public:
	// System.String IAPDemo/UnityChannelPurchaseError::error
	String_t* ___error_0;
	// IAPDemo/UnityChannelPurchaseInfo IAPDemo/UnityChannelPurchaseError::purchaseInfo
	UnityChannelPurchaseInfo_t74063925 * ___purchaseInfo_1;

public:
	inline static int32_t get_offset_of_error_0() { return static_cast<int32_t>(offsetof(UnityChannelPurchaseError_t2306817818, ___error_0)); }
	inline String_t* get_error_0() const { return ___error_0; }
	inline String_t** get_address_of_error_0() { return &___error_0; }
	inline void set_error_0(String_t* value)
	{
		___error_0 = value;
		Il2CppCodeGenWriteBarrier((&___error_0), value);
	}

	inline static int32_t get_offset_of_purchaseInfo_1() { return static_cast<int32_t>(offsetof(UnityChannelPurchaseError_t2306817818, ___purchaseInfo_1)); }
	inline UnityChannelPurchaseInfo_t74063925 * get_purchaseInfo_1() const { return ___purchaseInfo_1; }
	inline UnityChannelPurchaseInfo_t74063925 ** get_address_of_purchaseInfo_1() { return &___purchaseInfo_1; }
	inline void set_purchaseInfo_1(UnityChannelPurchaseInfo_t74063925 * value)
	{
		___purchaseInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___purchaseInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYCHANNELPURCHASEERROR_T2306817818_H
#ifndef U3CVALIDATEBUTTONCLICKU3EC__ANONSTOREY1_T541528072_H
#define U3CVALIDATEBUTTONCLICKU3EC__ANONSTOREY1_T541528072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IAPDemo/<ValidateButtonClick>c__AnonStorey1
struct  U3CValidateButtonClickU3Ec__AnonStorey1_t541528072  : public RuntimeObject
{
public:
	// System.String IAPDemo/<ValidateButtonClick>c__AnonStorey1::txId
	String_t* ___txId_0;

public:
	inline static int32_t get_offset_of_txId_0() { return static_cast<int32_t>(offsetof(U3CValidateButtonClickU3Ec__AnonStorey1_t541528072, ___txId_0)); }
	inline String_t* get_txId_0() const { return ___txId_0; }
	inline String_t** get_address_of_txId_0() { return &___txId_0; }
	inline void set_txId_0(String_t* value)
	{
		___txId_0 = value;
		Il2CppCodeGenWriteBarrier((&___txId_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CVALIDATEBUTTONCLICKU3EC__ANONSTOREY1_T541528072_H
#ifndef UNITYCHANNELPURCHASEINFO_T74063925_H
#define UNITYCHANNELPURCHASEINFO_T74063925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IAPDemo/UnityChannelPurchaseInfo
struct  UnityChannelPurchaseInfo_t74063925  : public RuntimeObject
{
public:
	// System.String IAPDemo/UnityChannelPurchaseInfo::productCode
	String_t* ___productCode_0;
	// System.String IAPDemo/UnityChannelPurchaseInfo::gameOrderId
	String_t* ___gameOrderId_1;
	// System.String IAPDemo/UnityChannelPurchaseInfo::orderQueryToken
	String_t* ___orderQueryToken_2;

public:
	inline static int32_t get_offset_of_productCode_0() { return static_cast<int32_t>(offsetof(UnityChannelPurchaseInfo_t74063925, ___productCode_0)); }
	inline String_t* get_productCode_0() const { return ___productCode_0; }
	inline String_t** get_address_of_productCode_0() { return &___productCode_0; }
	inline void set_productCode_0(String_t* value)
	{
		___productCode_0 = value;
		Il2CppCodeGenWriteBarrier((&___productCode_0), value);
	}

	inline static int32_t get_offset_of_gameOrderId_1() { return static_cast<int32_t>(offsetof(UnityChannelPurchaseInfo_t74063925, ___gameOrderId_1)); }
	inline String_t* get_gameOrderId_1() const { return ___gameOrderId_1; }
	inline String_t** get_address_of_gameOrderId_1() { return &___gameOrderId_1; }
	inline void set_gameOrderId_1(String_t* value)
	{
		___gameOrderId_1 = value;
		Il2CppCodeGenWriteBarrier((&___gameOrderId_1), value);
	}

	inline static int32_t get_offset_of_orderQueryToken_2() { return static_cast<int32_t>(offsetof(UnityChannelPurchaseInfo_t74063925, ___orderQueryToken_2)); }
	inline String_t* get_orderQueryToken_2() const { return ___orderQueryToken_2; }
	inline String_t** get_address_of_orderQueryToken_2() { return &___orderQueryToken_2; }
	inline void set_orderQueryToken_2(String_t* value)
	{
		___orderQueryToken_2 = value;
		Il2CppCodeGenWriteBarrier((&___orderQueryToken_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYCHANNELPURCHASEINFO_T74063925_H
#ifndef UNITYCHANNELLOGINHANDLER_T2949829254_H
#define UNITYCHANNELLOGINHANDLER_T2949829254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IAPDemo/UnityChannelLoginHandler
struct  UnityChannelLoginHandler_t2949829254  : public RuntimeObject
{
public:
	// System.Action IAPDemo/UnityChannelLoginHandler::initializeSucceededAction
	Action_t1264377477 * ___initializeSucceededAction_0;
	// System.Action`1<System.String> IAPDemo/UnityChannelLoginHandler::initializeFailedAction
	Action_1_t2019918284 * ___initializeFailedAction_1;
	// System.Action`1<UnityEngine.Store.UserInfo> IAPDemo/UnityChannelLoginHandler::loginSucceededAction
	Action_1_t3058893588 * ___loginSucceededAction_2;
	// System.Action`1<System.String> IAPDemo/UnityChannelLoginHandler::loginFailedAction
	Action_1_t2019918284 * ___loginFailedAction_3;

public:
	inline static int32_t get_offset_of_initializeSucceededAction_0() { return static_cast<int32_t>(offsetof(UnityChannelLoginHandler_t2949829254, ___initializeSucceededAction_0)); }
	inline Action_t1264377477 * get_initializeSucceededAction_0() const { return ___initializeSucceededAction_0; }
	inline Action_t1264377477 ** get_address_of_initializeSucceededAction_0() { return &___initializeSucceededAction_0; }
	inline void set_initializeSucceededAction_0(Action_t1264377477 * value)
	{
		___initializeSucceededAction_0 = value;
		Il2CppCodeGenWriteBarrier((&___initializeSucceededAction_0), value);
	}

	inline static int32_t get_offset_of_initializeFailedAction_1() { return static_cast<int32_t>(offsetof(UnityChannelLoginHandler_t2949829254, ___initializeFailedAction_1)); }
	inline Action_1_t2019918284 * get_initializeFailedAction_1() const { return ___initializeFailedAction_1; }
	inline Action_1_t2019918284 ** get_address_of_initializeFailedAction_1() { return &___initializeFailedAction_1; }
	inline void set_initializeFailedAction_1(Action_1_t2019918284 * value)
	{
		___initializeFailedAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___initializeFailedAction_1), value);
	}

	inline static int32_t get_offset_of_loginSucceededAction_2() { return static_cast<int32_t>(offsetof(UnityChannelLoginHandler_t2949829254, ___loginSucceededAction_2)); }
	inline Action_1_t3058893588 * get_loginSucceededAction_2() const { return ___loginSucceededAction_2; }
	inline Action_1_t3058893588 ** get_address_of_loginSucceededAction_2() { return &___loginSucceededAction_2; }
	inline void set_loginSucceededAction_2(Action_1_t3058893588 * value)
	{
		___loginSucceededAction_2 = value;
		Il2CppCodeGenWriteBarrier((&___loginSucceededAction_2), value);
	}

	inline static int32_t get_offset_of_loginFailedAction_3() { return static_cast<int32_t>(offsetof(UnityChannelLoginHandler_t2949829254, ___loginFailedAction_3)); }
	inline Action_1_t2019918284 * get_loginFailedAction_3() const { return ___loginFailedAction_3; }
	inline Action_1_t2019918284 ** get_address_of_loginFailedAction_3() { return &___loginFailedAction_3; }
	inline void set_loginFailedAction_3(Action_1_t2019918284 * value)
	{
		___loginFailedAction_3 = value;
		Il2CppCodeGenWriteBarrier((&___loginFailedAction_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYCHANNELLOGINHANDLER_T2949829254_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef UNITYEVENT_2_T1877158062_H
#define UNITYEVENT_2_T1877158062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>
struct  UnityEvent_2_t1877158062  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_2_t1877158062, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_2_T1877158062_H
#ifndef UNITYEVENT_1_T4126069563_H
#define UNITYEVENT_1_T4126069563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>
struct  UnityEvent_1_t4126069563  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t4126069563, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T4126069563_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef ONPURCHASECOMPLETEDEVENT_T1675809258_H
#define ONPURCHASECOMPLETEDEVENT_T1675809258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.IAPListener/OnPurchaseCompletedEvent
struct  OnPurchaseCompletedEvent_t1675809258  : public UnityEvent_1_t4126069563
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONPURCHASECOMPLETEDEVENT_T1675809258_H
#ifndef ONPURCHASEFAILEDEVENT_T800864861_H
#define ONPURCHASEFAILEDEVENT_T800864861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.IAPListener/OnPurchaseFailedEvent
struct  OnPurchaseFailedEvent_t800864861  : public UnityEvent_2_t1877158062
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONPURCHASEFAILEDEVENT_T800864861_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef IAPLISTENER_T2001792988_H
#define IAPLISTENER_T2001792988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.IAPListener
struct  IAPListener_t2001792988  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean UnityEngine.Purchasing.IAPListener::consumePurchase
	bool ___consumePurchase_2;
	// System.Boolean UnityEngine.Purchasing.IAPListener::dontDestroyOnLoad
	bool ___dontDestroyOnLoad_3;
	// UnityEngine.Purchasing.IAPListener/OnPurchaseCompletedEvent UnityEngine.Purchasing.IAPListener::onPurchaseComplete
	OnPurchaseCompletedEvent_t1675809258 * ___onPurchaseComplete_4;
	// UnityEngine.Purchasing.IAPListener/OnPurchaseFailedEvent UnityEngine.Purchasing.IAPListener::onPurchaseFailed
	OnPurchaseFailedEvent_t800864861 * ___onPurchaseFailed_5;

public:
	inline static int32_t get_offset_of_consumePurchase_2() { return static_cast<int32_t>(offsetof(IAPListener_t2001792988, ___consumePurchase_2)); }
	inline bool get_consumePurchase_2() const { return ___consumePurchase_2; }
	inline bool* get_address_of_consumePurchase_2() { return &___consumePurchase_2; }
	inline void set_consumePurchase_2(bool value)
	{
		___consumePurchase_2 = value;
	}

	inline static int32_t get_offset_of_dontDestroyOnLoad_3() { return static_cast<int32_t>(offsetof(IAPListener_t2001792988, ___dontDestroyOnLoad_3)); }
	inline bool get_dontDestroyOnLoad_3() const { return ___dontDestroyOnLoad_3; }
	inline bool* get_address_of_dontDestroyOnLoad_3() { return &___dontDestroyOnLoad_3; }
	inline void set_dontDestroyOnLoad_3(bool value)
	{
		___dontDestroyOnLoad_3 = value;
	}

	inline static int32_t get_offset_of_onPurchaseComplete_4() { return static_cast<int32_t>(offsetof(IAPListener_t2001792988, ___onPurchaseComplete_4)); }
	inline OnPurchaseCompletedEvent_t1675809258 * get_onPurchaseComplete_4() const { return ___onPurchaseComplete_4; }
	inline OnPurchaseCompletedEvent_t1675809258 ** get_address_of_onPurchaseComplete_4() { return &___onPurchaseComplete_4; }
	inline void set_onPurchaseComplete_4(OnPurchaseCompletedEvent_t1675809258 * value)
	{
		___onPurchaseComplete_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPurchaseComplete_4), value);
	}

	inline static int32_t get_offset_of_onPurchaseFailed_5() { return static_cast<int32_t>(offsetof(IAPListener_t2001792988, ___onPurchaseFailed_5)); }
	inline OnPurchaseFailedEvent_t800864861 * get_onPurchaseFailed_5() const { return ___onPurchaseFailed_5; }
	inline OnPurchaseFailedEvent_t800864861 ** get_address_of_onPurchaseFailed_5() { return &___onPurchaseFailed_5; }
	inline void set_onPurchaseFailed_5(OnPurchaseFailedEvent_t800864861 * value)
	{
		___onPurchaseFailed_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPurchaseFailed_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IAPLISTENER_T2001792988_H
#ifndef IAPDEMOPRODUCTUI_T922953754_H
#define IAPDEMOPRODUCTUI_T922953754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IAPDemoProductUI
struct  IAPDemoProductUI_t922953754  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Button IAPDemoProductUI::purchaseButton
	Button_t4055032469 * ___purchaseButton_2;
	// UnityEngine.UI.Button IAPDemoProductUI::receiptButton
	Button_t4055032469 * ___receiptButton_3;
	// UnityEngine.UI.Text IAPDemoProductUI::titleText
	Text_t1901882714 * ___titleText_4;
	// UnityEngine.UI.Text IAPDemoProductUI::descriptionText
	Text_t1901882714 * ___descriptionText_5;
	// UnityEngine.UI.Text IAPDemoProductUI::priceText
	Text_t1901882714 * ___priceText_6;
	// UnityEngine.UI.Text IAPDemoProductUI::statusText
	Text_t1901882714 * ___statusText_7;
	// System.String IAPDemoProductUI::m_ProductID
	String_t* ___m_ProductID_8;
	// System.Action`1<System.String> IAPDemoProductUI::m_PurchaseCallback
	Action_1_t2019918284 * ___m_PurchaseCallback_9;
	// System.String IAPDemoProductUI::m_Receipt
	String_t* ___m_Receipt_10;

public:
	inline static int32_t get_offset_of_purchaseButton_2() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___purchaseButton_2)); }
	inline Button_t4055032469 * get_purchaseButton_2() const { return ___purchaseButton_2; }
	inline Button_t4055032469 ** get_address_of_purchaseButton_2() { return &___purchaseButton_2; }
	inline void set_purchaseButton_2(Button_t4055032469 * value)
	{
		___purchaseButton_2 = value;
		Il2CppCodeGenWriteBarrier((&___purchaseButton_2), value);
	}

	inline static int32_t get_offset_of_receiptButton_3() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___receiptButton_3)); }
	inline Button_t4055032469 * get_receiptButton_3() const { return ___receiptButton_3; }
	inline Button_t4055032469 ** get_address_of_receiptButton_3() { return &___receiptButton_3; }
	inline void set_receiptButton_3(Button_t4055032469 * value)
	{
		___receiptButton_3 = value;
		Il2CppCodeGenWriteBarrier((&___receiptButton_3), value);
	}

	inline static int32_t get_offset_of_titleText_4() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___titleText_4)); }
	inline Text_t1901882714 * get_titleText_4() const { return ___titleText_4; }
	inline Text_t1901882714 ** get_address_of_titleText_4() { return &___titleText_4; }
	inline void set_titleText_4(Text_t1901882714 * value)
	{
		___titleText_4 = value;
		Il2CppCodeGenWriteBarrier((&___titleText_4), value);
	}

	inline static int32_t get_offset_of_descriptionText_5() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___descriptionText_5)); }
	inline Text_t1901882714 * get_descriptionText_5() const { return ___descriptionText_5; }
	inline Text_t1901882714 ** get_address_of_descriptionText_5() { return &___descriptionText_5; }
	inline void set_descriptionText_5(Text_t1901882714 * value)
	{
		___descriptionText_5 = value;
		Il2CppCodeGenWriteBarrier((&___descriptionText_5), value);
	}

	inline static int32_t get_offset_of_priceText_6() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___priceText_6)); }
	inline Text_t1901882714 * get_priceText_6() const { return ___priceText_6; }
	inline Text_t1901882714 ** get_address_of_priceText_6() { return &___priceText_6; }
	inline void set_priceText_6(Text_t1901882714 * value)
	{
		___priceText_6 = value;
		Il2CppCodeGenWriteBarrier((&___priceText_6), value);
	}

	inline static int32_t get_offset_of_statusText_7() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___statusText_7)); }
	inline Text_t1901882714 * get_statusText_7() const { return ___statusText_7; }
	inline Text_t1901882714 ** get_address_of_statusText_7() { return &___statusText_7; }
	inline void set_statusText_7(Text_t1901882714 * value)
	{
		___statusText_7 = value;
		Il2CppCodeGenWriteBarrier((&___statusText_7), value);
	}

	inline static int32_t get_offset_of_m_ProductID_8() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___m_ProductID_8)); }
	inline String_t* get_m_ProductID_8() const { return ___m_ProductID_8; }
	inline String_t** get_address_of_m_ProductID_8() { return &___m_ProductID_8; }
	inline void set_m_ProductID_8(String_t* value)
	{
		___m_ProductID_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_ProductID_8), value);
	}

	inline static int32_t get_offset_of_m_PurchaseCallback_9() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___m_PurchaseCallback_9)); }
	inline Action_1_t2019918284 * get_m_PurchaseCallback_9() const { return ___m_PurchaseCallback_9; }
	inline Action_1_t2019918284 ** get_address_of_m_PurchaseCallback_9() { return &___m_PurchaseCallback_9; }
	inline void set_m_PurchaseCallback_9(Action_1_t2019918284 * value)
	{
		___m_PurchaseCallback_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_PurchaseCallback_9), value);
	}

	inline static int32_t get_offset_of_m_Receipt_10() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___m_Receipt_10)); }
	inline String_t* get_m_Receipt_10() const { return ___m_Receipt_10; }
	inline String_t** get_address_of_m_Receipt_10() { return &___m_Receipt_10; }
	inline void set_m_Receipt_10(String_t* value)
	{
		___m_Receipt_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Receipt_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IAPDEMOPRODUCTUI_T922953754_H
#ifndef IAPDEMO_T3681080565_H
#define IAPDEMO_T3681080565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IAPDemo
struct  IAPDemo_t3681080565  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Purchasing.IStoreController IAPDemo::m_Controller
	RuntimeObject* ___m_Controller_2;
	// UnityEngine.Purchasing.IAppleExtensions IAPDemo::m_AppleExtensions
	RuntimeObject* ___m_AppleExtensions_3;
	// UnityEngine.Purchasing.IMoolahExtension IAPDemo::m_MoolahExtensions
	RuntimeObject* ___m_MoolahExtensions_4;
	// UnityEngine.Purchasing.ISamsungAppsExtensions IAPDemo::m_SamsungExtensions
	RuntimeObject* ___m_SamsungExtensions_5;
	// UnityEngine.Purchasing.IMicrosoftExtensions IAPDemo::m_MicrosoftExtensions
	RuntimeObject* ___m_MicrosoftExtensions_6;
	// UnityEngine.Purchasing.IUnityChannelExtensions IAPDemo::m_UnityChannelExtensions
	RuntimeObject* ___m_UnityChannelExtensions_7;
	// UnityEngine.Purchasing.ITransactionHistoryExtensions IAPDemo::m_TransactionHistoryExtensions
	RuntimeObject* ___m_TransactionHistoryExtensions_8;
	// System.Boolean IAPDemo::m_IsGooglePlayStoreSelected
	bool ___m_IsGooglePlayStoreSelected_9;
	// System.Boolean IAPDemo::m_IsSamsungAppsStoreSelected
	bool ___m_IsSamsungAppsStoreSelected_10;
	// System.Boolean IAPDemo::m_IsCloudMoolahStoreSelected
	bool ___m_IsCloudMoolahStoreSelected_11;
	// System.Boolean IAPDemo::m_IsUnityChannelSelected
	bool ___m_IsUnityChannelSelected_12;
	// System.String IAPDemo::m_LastTransactionID
	String_t* ___m_LastTransactionID_13;
	// System.Boolean IAPDemo::m_IsLoggedIn
	bool ___m_IsLoggedIn_14;
	// IAPDemo/UnityChannelLoginHandler IAPDemo::unityChannelLoginHandler
	UnityChannelLoginHandler_t2949829254 * ___unityChannelLoginHandler_15;
	// System.Boolean IAPDemo::m_FetchReceiptPayloadOnPurchase
	bool ___m_FetchReceiptPayloadOnPurchase_16;
	// System.Boolean IAPDemo::m_PurchaseInProgress
	bool ___m_PurchaseInProgress_17;
	// System.Collections.Generic.Dictionary`2<System.String,IAPDemoProductUI> IAPDemo::m_ProductUIs
	Dictionary_2_t708210053 * ___m_ProductUIs_18;
	// UnityEngine.GameObject IAPDemo::productUITemplate
	GameObject_t1113636619 * ___productUITemplate_19;
	// UnityEngine.RectTransform IAPDemo::contentRect
	RectTransform_t3704657025 * ___contentRect_20;
	// UnityEngine.UI.Button IAPDemo::restoreButton
	Button_t4055032469 * ___restoreButton_21;
	// UnityEngine.UI.Button IAPDemo::loginButton
	Button_t4055032469 * ___loginButton_22;
	// UnityEngine.UI.Button IAPDemo::validateButton
	Button_t4055032469 * ___validateButton_23;
	// UnityEngine.UI.Text IAPDemo::versionText
	Text_t1901882714 * ___versionText_24;

public:
	inline static int32_t get_offset_of_m_Controller_2() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_Controller_2)); }
	inline RuntimeObject* get_m_Controller_2() const { return ___m_Controller_2; }
	inline RuntimeObject** get_address_of_m_Controller_2() { return &___m_Controller_2; }
	inline void set_m_Controller_2(RuntimeObject* value)
	{
		___m_Controller_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Controller_2), value);
	}

	inline static int32_t get_offset_of_m_AppleExtensions_3() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_AppleExtensions_3)); }
	inline RuntimeObject* get_m_AppleExtensions_3() const { return ___m_AppleExtensions_3; }
	inline RuntimeObject** get_address_of_m_AppleExtensions_3() { return &___m_AppleExtensions_3; }
	inline void set_m_AppleExtensions_3(RuntimeObject* value)
	{
		___m_AppleExtensions_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_AppleExtensions_3), value);
	}

	inline static int32_t get_offset_of_m_MoolahExtensions_4() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_MoolahExtensions_4)); }
	inline RuntimeObject* get_m_MoolahExtensions_4() const { return ___m_MoolahExtensions_4; }
	inline RuntimeObject** get_address_of_m_MoolahExtensions_4() { return &___m_MoolahExtensions_4; }
	inline void set_m_MoolahExtensions_4(RuntimeObject* value)
	{
		___m_MoolahExtensions_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_MoolahExtensions_4), value);
	}

	inline static int32_t get_offset_of_m_SamsungExtensions_5() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_SamsungExtensions_5)); }
	inline RuntimeObject* get_m_SamsungExtensions_5() const { return ___m_SamsungExtensions_5; }
	inline RuntimeObject** get_address_of_m_SamsungExtensions_5() { return &___m_SamsungExtensions_5; }
	inline void set_m_SamsungExtensions_5(RuntimeObject* value)
	{
		___m_SamsungExtensions_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_SamsungExtensions_5), value);
	}

	inline static int32_t get_offset_of_m_MicrosoftExtensions_6() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_MicrosoftExtensions_6)); }
	inline RuntimeObject* get_m_MicrosoftExtensions_6() const { return ___m_MicrosoftExtensions_6; }
	inline RuntimeObject** get_address_of_m_MicrosoftExtensions_6() { return &___m_MicrosoftExtensions_6; }
	inline void set_m_MicrosoftExtensions_6(RuntimeObject* value)
	{
		___m_MicrosoftExtensions_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_MicrosoftExtensions_6), value);
	}

	inline static int32_t get_offset_of_m_UnityChannelExtensions_7() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_UnityChannelExtensions_7)); }
	inline RuntimeObject* get_m_UnityChannelExtensions_7() const { return ___m_UnityChannelExtensions_7; }
	inline RuntimeObject** get_address_of_m_UnityChannelExtensions_7() { return &___m_UnityChannelExtensions_7; }
	inline void set_m_UnityChannelExtensions_7(RuntimeObject* value)
	{
		___m_UnityChannelExtensions_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_UnityChannelExtensions_7), value);
	}

	inline static int32_t get_offset_of_m_TransactionHistoryExtensions_8() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_TransactionHistoryExtensions_8)); }
	inline RuntimeObject* get_m_TransactionHistoryExtensions_8() const { return ___m_TransactionHistoryExtensions_8; }
	inline RuntimeObject** get_address_of_m_TransactionHistoryExtensions_8() { return &___m_TransactionHistoryExtensions_8; }
	inline void set_m_TransactionHistoryExtensions_8(RuntimeObject* value)
	{
		___m_TransactionHistoryExtensions_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_TransactionHistoryExtensions_8), value);
	}

	inline static int32_t get_offset_of_m_IsGooglePlayStoreSelected_9() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_IsGooglePlayStoreSelected_9)); }
	inline bool get_m_IsGooglePlayStoreSelected_9() const { return ___m_IsGooglePlayStoreSelected_9; }
	inline bool* get_address_of_m_IsGooglePlayStoreSelected_9() { return &___m_IsGooglePlayStoreSelected_9; }
	inline void set_m_IsGooglePlayStoreSelected_9(bool value)
	{
		___m_IsGooglePlayStoreSelected_9 = value;
	}

	inline static int32_t get_offset_of_m_IsSamsungAppsStoreSelected_10() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_IsSamsungAppsStoreSelected_10)); }
	inline bool get_m_IsSamsungAppsStoreSelected_10() const { return ___m_IsSamsungAppsStoreSelected_10; }
	inline bool* get_address_of_m_IsSamsungAppsStoreSelected_10() { return &___m_IsSamsungAppsStoreSelected_10; }
	inline void set_m_IsSamsungAppsStoreSelected_10(bool value)
	{
		___m_IsSamsungAppsStoreSelected_10 = value;
	}

	inline static int32_t get_offset_of_m_IsCloudMoolahStoreSelected_11() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_IsCloudMoolahStoreSelected_11)); }
	inline bool get_m_IsCloudMoolahStoreSelected_11() const { return ___m_IsCloudMoolahStoreSelected_11; }
	inline bool* get_address_of_m_IsCloudMoolahStoreSelected_11() { return &___m_IsCloudMoolahStoreSelected_11; }
	inline void set_m_IsCloudMoolahStoreSelected_11(bool value)
	{
		___m_IsCloudMoolahStoreSelected_11 = value;
	}

	inline static int32_t get_offset_of_m_IsUnityChannelSelected_12() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_IsUnityChannelSelected_12)); }
	inline bool get_m_IsUnityChannelSelected_12() const { return ___m_IsUnityChannelSelected_12; }
	inline bool* get_address_of_m_IsUnityChannelSelected_12() { return &___m_IsUnityChannelSelected_12; }
	inline void set_m_IsUnityChannelSelected_12(bool value)
	{
		___m_IsUnityChannelSelected_12 = value;
	}

	inline static int32_t get_offset_of_m_LastTransactionID_13() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_LastTransactionID_13)); }
	inline String_t* get_m_LastTransactionID_13() const { return ___m_LastTransactionID_13; }
	inline String_t** get_address_of_m_LastTransactionID_13() { return &___m_LastTransactionID_13; }
	inline void set_m_LastTransactionID_13(String_t* value)
	{
		___m_LastTransactionID_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastTransactionID_13), value);
	}

	inline static int32_t get_offset_of_m_IsLoggedIn_14() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_IsLoggedIn_14)); }
	inline bool get_m_IsLoggedIn_14() const { return ___m_IsLoggedIn_14; }
	inline bool* get_address_of_m_IsLoggedIn_14() { return &___m_IsLoggedIn_14; }
	inline void set_m_IsLoggedIn_14(bool value)
	{
		___m_IsLoggedIn_14 = value;
	}

	inline static int32_t get_offset_of_unityChannelLoginHandler_15() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___unityChannelLoginHandler_15)); }
	inline UnityChannelLoginHandler_t2949829254 * get_unityChannelLoginHandler_15() const { return ___unityChannelLoginHandler_15; }
	inline UnityChannelLoginHandler_t2949829254 ** get_address_of_unityChannelLoginHandler_15() { return &___unityChannelLoginHandler_15; }
	inline void set_unityChannelLoginHandler_15(UnityChannelLoginHandler_t2949829254 * value)
	{
		___unityChannelLoginHandler_15 = value;
		Il2CppCodeGenWriteBarrier((&___unityChannelLoginHandler_15), value);
	}

	inline static int32_t get_offset_of_m_FetchReceiptPayloadOnPurchase_16() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_FetchReceiptPayloadOnPurchase_16)); }
	inline bool get_m_FetchReceiptPayloadOnPurchase_16() const { return ___m_FetchReceiptPayloadOnPurchase_16; }
	inline bool* get_address_of_m_FetchReceiptPayloadOnPurchase_16() { return &___m_FetchReceiptPayloadOnPurchase_16; }
	inline void set_m_FetchReceiptPayloadOnPurchase_16(bool value)
	{
		___m_FetchReceiptPayloadOnPurchase_16 = value;
	}

	inline static int32_t get_offset_of_m_PurchaseInProgress_17() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_PurchaseInProgress_17)); }
	inline bool get_m_PurchaseInProgress_17() const { return ___m_PurchaseInProgress_17; }
	inline bool* get_address_of_m_PurchaseInProgress_17() { return &___m_PurchaseInProgress_17; }
	inline void set_m_PurchaseInProgress_17(bool value)
	{
		___m_PurchaseInProgress_17 = value;
	}

	inline static int32_t get_offset_of_m_ProductUIs_18() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_ProductUIs_18)); }
	inline Dictionary_2_t708210053 * get_m_ProductUIs_18() const { return ___m_ProductUIs_18; }
	inline Dictionary_2_t708210053 ** get_address_of_m_ProductUIs_18() { return &___m_ProductUIs_18; }
	inline void set_m_ProductUIs_18(Dictionary_2_t708210053 * value)
	{
		___m_ProductUIs_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_ProductUIs_18), value);
	}

	inline static int32_t get_offset_of_productUITemplate_19() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___productUITemplate_19)); }
	inline GameObject_t1113636619 * get_productUITemplate_19() const { return ___productUITemplate_19; }
	inline GameObject_t1113636619 ** get_address_of_productUITemplate_19() { return &___productUITemplate_19; }
	inline void set_productUITemplate_19(GameObject_t1113636619 * value)
	{
		___productUITemplate_19 = value;
		Il2CppCodeGenWriteBarrier((&___productUITemplate_19), value);
	}

	inline static int32_t get_offset_of_contentRect_20() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___contentRect_20)); }
	inline RectTransform_t3704657025 * get_contentRect_20() const { return ___contentRect_20; }
	inline RectTransform_t3704657025 ** get_address_of_contentRect_20() { return &___contentRect_20; }
	inline void set_contentRect_20(RectTransform_t3704657025 * value)
	{
		___contentRect_20 = value;
		Il2CppCodeGenWriteBarrier((&___contentRect_20), value);
	}

	inline static int32_t get_offset_of_restoreButton_21() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___restoreButton_21)); }
	inline Button_t4055032469 * get_restoreButton_21() const { return ___restoreButton_21; }
	inline Button_t4055032469 ** get_address_of_restoreButton_21() { return &___restoreButton_21; }
	inline void set_restoreButton_21(Button_t4055032469 * value)
	{
		___restoreButton_21 = value;
		Il2CppCodeGenWriteBarrier((&___restoreButton_21), value);
	}

	inline static int32_t get_offset_of_loginButton_22() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___loginButton_22)); }
	inline Button_t4055032469 * get_loginButton_22() const { return ___loginButton_22; }
	inline Button_t4055032469 ** get_address_of_loginButton_22() { return &___loginButton_22; }
	inline void set_loginButton_22(Button_t4055032469 * value)
	{
		___loginButton_22 = value;
		Il2CppCodeGenWriteBarrier((&___loginButton_22), value);
	}

	inline static int32_t get_offset_of_validateButton_23() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___validateButton_23)); }
	inline Button_t4055032469 * get_validateButton_23() const { return ___validateButton_23; }
	inline Button_t4055032469 ** get_address_of_validateButton_23() { return &___validateButton_23; }
	inline void set_validateButton_23(Button_t4055032469 * value)
	{
		___validateButton_23 = value;
		Il2CppCodeGenWriteBarrier((&___validateButton_23), value);
	}

	inline static int32_t get_offset_of_versionText_24() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___versionText_24)); }
	inline Text_t1901882714 * get_versionText_24() const { return ___versionText_24; }
	inline Text_t1901882714 ** get_address_of_versionText_24() { return &___versionText_24; }
	inline void set_versionText_24(Text_t1901882714 * value)
	{
		___versionText_24 = value;
		Il2CppCodeGenWriteBarrier((&___versionText_24), value);
	}
};

struct IAPDemo_t3681080565_StaticFields
{
public:
	// System.Action`1<System.String> IAPDemo::<>f__am$cache0
	Action_1_t2019918284 * ___U3CU3Ef__amU24cache0_25;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_25() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565_StaticFields, ___U3CU3Ef__amU24cache0_25)); }
	inline Action_1_t2019918284 * get_U3CU3Ef__amU24cache0_25() const { return ___U3CU3Ef__amU24cache0_25; }
	inline Action_1_t2019918284 ** get_address_of_U3CU3Ef__amU24cache0_25() { return &___U3CU3Ef__amU24cache0_25; }
	inline void set_U3CU3Ef__amU24cache0_25(Action_1_t2019918284 * value)
	{
		___U3CU3Ef__amU24cache0_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IAPDEMO_T3681080565_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2200 = { sizeof (IAPDemo_t3681080565), -1, sizeof(IAPDemo_t3681080565_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2200[24] = 
{
	IAPDemo_t3681080565::get_offset_of_m_Controller_2(),
	IAPDemo_t3681080565::get_offset_of_m_AppleExtensions_3(),
	IAPDemo_t3681080565::get_offset_of_m_MoolahExtensions_4(),
	IAPDemo_t3681080565::get_offset_of_m_SamsungExtensions_5(),
	IAPDemo_t3681080565::get_offset_of_m_MicrosoftExtensions_6(),
	IAPDemo_t3681080565::get_offset_of_m_UnityChannelExtensions_7(),
	IAPDemo_t3681080565::get_offset_of_m_TransactionHistoryExtensions_8(),
	IAPDemo_t3681080565::get_offset_of_m_IsGooglePlayStoreSelected_9(),
	IAPDemo_t3681080565::get_offset_of_m_IsSamsungAppsStoreSelected_10(),
	IAPDemo_t3681080565::get_offset_of_m_IsCloudMoolahStoreSelected_11(),
	IAPDemo_t3681080565::get_offset_of_m_IsUnityChannelSelected_12(),
	IAPDemo_t3681080565::get_offset_of_m_LastTransactionID_13(),
	IAPDemo_t3681080565::get_offset_of_m_IsLoggedIn_14(),
	IAPDemo_t3681080565::get_offset_of_unityChannelLoginHandler_15(),
	IAPDemo_t3681080565::get_offset_of_m_FetchReceiptPayloadOnPurchase_16(),
	IAPDemo_t3681080565::get_offset_of_m_PurchaseInProgress_17(),
	IAPDemo_t3681080565::get_offset_of_m_ProductUIs_18(),
	IAPDemo_t3681080565::get_offset_of_productUITemplate_19(),
	IAPDemo_t3681080565::get_offset_of_contentRect_20(),
	IAPDemo_t3681080565::get_offset_of_restoreButton_21(),
	IAPDemo_t3681080565::get_offset_of_loginButton_22(),
	IAPDemo_t3681080565::get_offset_of_validateButton_23(),
	IAPDemo_t3681080565::get_offset_of_versionText_24(),
	IAPDemo_t3681080565_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2201 = { sizeof (UnityChannelPurchaseError_t2306817818), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2201[2] = 
{
	UnityChannelPurchaseError_t2306817818::get_offset_of_error_0(),
	UnityChannelPurchaseError_t2306817818::get_offset_of_purchaseInfo_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2202 = { sizeof (UnityChannelPurchaseInfo_t74063925), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2202[3] = 
{
	UnityChannelPurchaseInfo_t74063925::get_offset_of_productCode_0(),
	UnityChannelPurchaseInfo_t74063925::get_offset_of_gameOrderId_1(),
	UnityChannelPurchaseInfo_t74063925::get_offset_of_orderQueryToken_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2203 = { sizeof (UnityChannelLoginHandler_t2949829254), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2203[4] = 
{
	UnityChannelLoginHandler_t2949829254::get_offset_of_initializeSucceededAction_0(),
	UnityChannelLoginHandler_t2949829254::get_offset_of_initializeFailedAction_1(),
	UnityChannelLoginHandler_t2949829254::get_offset_of_loginSucceededAction_2(),
	UnityChannelLoginHandler_t2949829254::get_offset_of_loginFailedAction_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2204 = { sizeof (U3CAwakeU3Ec__AnonStorey0_t2364586269), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2204[3] = 
{
	U3CAwakeU3Ec__AnonStorey0_t2364586269::get_offset_of_builder_0(),
	U3CAwakeU3Ec__AnonStorey0_t2364586269::get_offset_of_initializeUnityIap_1(),
	U3CAwakeU3Ec__AnonStorey0_t2364586269::get_offset_of_U24this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2205 = { sizeof (U3CValidateButtonClickU3Ec__AnonStorey1_t541528072), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2205[1] = 
{
	U3CValidateButtonClickU3Ec__AnonStorey1_t541528072::get_offset_of_txId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2206 = { sizeof (IAPDemoProductUI_t922953754), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2206[9] = 
{
	IAPDemoProductUI_t922953754::get_offset_of_purchaseButton_2(),
	IAPDemoProductUI_t922953754::get_offset_of_receiptButton_3(),
	IAPDemoProductUI_t922953754::get_offset_of_titleText_4(),
	IAPDemoProductUI_t922953754::get_offset_of_descriptionText_5(),
	IAPDemoProductUI_t922953754::get_offset_of_priceText_6(),
	IAPDemoProductUI_t922953754::get_offset_of_statusText_7(),
	IAPDemoProductUI_t922953754::get_offset_of_m_ProductID_8(),
	IAPDemoProductUI_t922953754::get_offset_of_m_PurchaseCallback_9(),
	IAPDemoProductUI_t922953754::get_offset_of_m_Receipt_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2207 = { sizeof (IAPListener_t2001792988), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2207[4] = 
{
	IAPListener_t2001792988::get_offset_of_consumePurchase_2(),
	IAPListener_t2001792988::get_offset_of_dontDestroyOnLoad_3(),
	IAPListener_t2001792988::get_offset_of_onPurchaseComplete_4(),
	IAPListener_t2001792988::get_offset_of_onPurchaseFailed_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2208 = { sizeof (OnPurchaseCompletedEvent_t1675809258), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2209 = { sizeof (OnPurchaseFailedEvent_t800864861), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
