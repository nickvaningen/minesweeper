﻿#include "il2cpp-config.h"

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
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct MessageEvent_t1491597365;
// UnityEngine.Experimental.Rendering.IRenderPipelineAsset
struct IRenderPipelineAsset_t3275513850;
// UnityEngine.Experimental.Rendering.IRenderPipeline
struct IRenderPipeline_t857809005;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t2165061829;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t2933211702;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t1262235195;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>
struct List_1_t3157010512;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct ConnectionChangeEvent_t3251856151;
// UnityEngine.Gyroscope
struct Gyroscope_t3288342876;
// System.Void
struct Void_t1185182177;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_t1617499438;
// UnityEngine.Display[]
struct DisplayU5BU5D_t103034768;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t51287044;
// UnityEngine.CullingGroup/StateChanged
struct StateChanged_t2136737110;
// UnityEngine.ILogHandler
struct ILogHandler_t2464711877;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t829358056;
// UnityEngine.Object
struct Object_t631007953;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.IPlayerEditorConnectionNative
struct IPlayerEditorConnectionNative_t4228359453;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct PlayerEditorConnectionEvents_t3411787513;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;

struct Object_t631007953_marshaled_com;



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
#ifndef DATAUTILITY_T2196215967_H
#define DATAUTILITY_T2196215967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprites.DataUtility
struct  DataUtility_t2196215967  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAUTILITY_T2196215967_H
#ifndef MESSAGETYPESUBSCRIBERS_T1684935770_H
#define MESSAGETYPESUBSCRIBERS_T1684935770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers
struct  MessageTypeSubscribers_t1684935770  : public RuntimeObject
{
public:
	// System.String UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::m_messageTypeId
	String_t* ___m_messageTypeId_0;
	// System.Int32 UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::subscriberCount
	int32_t ___subscriberCount_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::messageCallback
	MessageEvent_t1491597365 * ___messageCallback_2;

public:
	inline static int32_t get_offset_of_m_messageTypeId_0() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t1684935770, ___m_messageTypeId_0)); }
	inline String_t* get_m_messageTypeId_0() const { return ___m_messageTypeId_0; }
	inline String_t** get_address_of_m_messageTypeId_0() { return &___m_messageTypeId_0; }
	inline void set_m_messageTypeId_0(String_t* value)
	{
		___m_messageTypeId_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_messageTypeId_0), value);
	}

	inline static int32_t get_offset_of_subscriberCount_1() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t1684935770, ___subscriberCount_1)); }
	inline int32_t get_subscriberCount_1() const { return ___subscriberCount_1; }
	inline int32_t* get_address_of_subscriberCount_1() { return &___subscriberCount_1; }
	inline void set_subscriberCount_1(int32_t value)
	{
		___subscriberCount_1 = value;
	}

	inline static int32_t get_offset_of_messageCallback_2() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t1684935770, ___messageCallback_2)); }
	inline MessageEvent_t1491597365 * get_messageCallback_2() const { return ___messageCallback_2; }
	inline MessageEvent_t1491597365 ** get_address_of_messageCallback_2() { return &___messageCallback_2; }
	inline void set_messageCallback_2(MessageEvent_t1491597365 * value)
	{
		___messageCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___messageCallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGETYPESUBSCRIBERS_T1684935770_H
#ifndef RENDERPIPELINEMANAGER_T4036911426_H
#define RENDERPIPELINEMANAGER_T4036911426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.RenderPipelineManager
struct  RenderPipelineManager_t4036911426  : public RuntimeObject
{
public:

public:
};

struct RenderPipelineManager_t4036911426_StaticFields
{
public:
	// UnityEngine.Experimental.Rendering.IRenderPipelineAsset UnityEngine.Experimental.Rendering.RenderPipelineManager::s_CurrentPipelineAsset
	RuntimeObject* ___s_CurrentPipelineAsset_0;
	// UnityEngine.Experimental.Rendering.IRenderPipeline UnityEngine.Experimental.Rendering.RenderPipelineManager::<currentPipeline>k__BackingField
	RuntimeObject* ___U3CcurrentPipelineU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_s_CurrentPipelineAsset_0() { return static_cast<int32_t>(offsetof(RenderPipelineManager_t4036911426_StaticFields, ___s_CurrentPipelineAsset_0)); }
	inline RuntimeObject* get_s_CurrentPipelineAsset_0() const { return ___s_CurrentPipelineAsset_0; }
	inline RuntimeObject** get_address_of_s_CurrentPipelineAsset_0() { return &___s_CurrentPipelineAsset_0; }
	inline void set_s_CurrentPipelineAsset_0(RuntimeObject* value)
	{
		___s_CurrentPipelineAsset_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_CurrentPipelineAsset_0), value);
	}

	inline static int32_t get_offset_of_U3CcurrentPipelineU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderPipelineManager_t4036911426_StaticFields, ___U3CcurrentPipelineU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CcurrentPipelineU3Ek__BackingField_1() const { return ___U3CcurrentPipelineU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CcurrentPipelineU3Ek__BackingField_1() { return &___U3CcurrentPipelineU3Ek__BackingField_1; }
	inline void set_U3CcurrentPipelineU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CcurrentPipelineU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcurrentPipelineU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERPIPELINEMANAGER_T4036911426_H
#ifndef SCENEMANAGER_T2787271929_H
#define SCENEMANAGER_T2787271929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.SceneManager
struct  SceneManager_t2787271929  : public RuntimeObject
{
public:

public:
};

struct SceneManager_t2787271929_StaticFields
{
public:
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> UnityEngine.SceneManagement.SceneManager::sceneLoaded
	UnityAction_2_t2165061829 * ___sceneLoaded_0;
	// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::sceneUnloaded
	UnityAction_1_t2933211702 * ___sceneUnloaded_1;
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::activeSceneChanged
	UnityAction_2_t1262235195 * ___activeSceneChanged_2;

public:
	inline static int32_t get_offset_of_sceneLoaded_0() { return static_cast<int32_t>(offsetof(SceneManager_t2787271929_StaticFields, ___sceneLoaded_0)); }
	inline UnityAction_2_t2165061829 * get_sceneLoaded_0() const { return ___sceneLoaded_0; }
	inline UnityAction_2_t2165061829 ** get_address_of_sceneLoaded_0() { return &___sceneLoaded_0; }
	inline void set_sceneLoaded_0(UnityAction_2_t2165061829 * value)
	{
		___sceneLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((&___sceneLoaded_0), value);
	}

	inline static int32_t get_offset_of_sceneUnloaded_1() { return static_cast<int32_t>(offsetof(SceneManager_t2787271929_StaticFields, ___sceneUnloaded_1)); }
	inline UnityAction_1_t2933211702 * get_sceneUnloaded_1() const { return ___sceneUnloaded_1; }
	inline UnityAction_1_t2933211702 ** get_address_of_sceneUnloaded_1() { return &___sceneUnloaded_1; }
	inline void set_sceneUnloaded_1(UnityAction_1_t2933211702 * value)
	{
		___sceneUnloaded_1 = value;
		Il2CppCodeGenWriteBarrier((&___sceneUnloaded_1), value);
	}

	inline static int32_t get_offset_of_activeSceneChanged_2() { return static_cast<int32_t>(offsetof(SceneManager_t2787271929_StaticFields, ___activeSceneChanged_2)); }
	inline UnityAction_2_t1262235195 * get_activeSceneChanged_2() const { return ___activeSceneChanged_2; }
	inline UnityAction_2_t1262235195 ** get_address_of_activeSceneChanged_2() { return &___activeSceneChanged_2; }
	inline void set_activeSceneChanged_2(UnityAction_2_t1262235195 * value)
	{
		___activeSceneChanged_2 = value;
		Il2CppCodeGenWriteBarrier((&___activeSceneChanged_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENEMANAGER_T2787271929_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef STACK_T2329662280_H
#define STACK_T2329662280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack
struct  Stack_t2329662280  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Stack::contents
	ObjectU5BU5D_t2843939325* ___contents_0;
	// System.Int32 System.Collections.Stack::current
	int32_t ___current_1;
	// System.Int32 System.Collections.Stack::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Stack::capacity
	int32_t ___capacity_3;
	// System.Int32 System.Collections.Stack::modCount
	int32_t ___modCount_4;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ___contents_0)); }
	inline ObjectU5BU5D_t2843939325* get_contents_0() const { return ___contents_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(ObjectU5BU5D_t2843939325* value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((&___contents_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ___capacity_3)); }
	inline int32_t get_capacity_3() const { return ___capacity_3; }
	inline int32_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int32_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_modCount_4() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ___modCount_4)); }
	inline int32_t get_modCount_4() const { return ___modCount_4; }
	inline int32_t* get_address_of_modCount_4() { return &___modCount_4; }
	inline void set_modCount_4(int32_t value)
	{
		___modCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_T2329662280_H
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
#ifndef MESSAGEEVENTARGS_T1170575784_H
#define MESSAGEEVENTARGS_T1170575784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.MessageEventArgs
struct  MessageEventArgs_t1170575784  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Networking.PlayerConnection.MessageEventArgs::playerId
	int32_t ___playerId_0;
	// System.Byte[] UnityEngine.Networking.PlayerConnection.MessageEventArgs::data
	ByteU5BU5D_t4116647657* ___data_1;

public:
	inline static int32_t get_offset_of_playerId_0() { return static_cast<int32_t>(offsetof(MessageEventArgs_t1170575784, ___playerId_0)); }
	inline int32_t get_playerId_0() const { return ___playerId_0; }
	inline int32_t* get_address_of_playerId_0() { return &___playerId_0; }
	inline void set_playerId_0(int32_t value)
	{
		___playerId_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(MessageEventArgs_t1170575784, ___data_1)); }
	inline ByteU5BU5D_t4116647657* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t4116647657* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEEVENTARGS_T1170575784_H
#ifndef PLAYEREDITORCONNECTIONEVENTS_T3411787513_H
#define PLAYEREDITORCONNECTIONEVENTS_T3411787513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct  PlayerEditorConnectionEvents_t3411787513  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers> UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::messageTypeSubscribers
	List_1_t3157010512 * ___messageTypeSubscribers_0;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::connectionEvent
	ConnectionChangeEvent_t3251856151 * ___connectionEvent_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::disconnectionEvent
	ConnectionChangeEvent_t3251856151 * ___disconnectionEvent_2;

public:
	inline static int32_t get_offset_of_messageTypeSubscribers_0() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t3411787513, ___messageTypeSubscribers_0)); }
	inline List_1_t3157010512 * get_messageTypeSubscribers_0() const { return ___messageTypeSubscribers_0; }
	inline List_1_t3157010512 ** get_address_of_messageTypeSubscribers_0() { return &___messageTypeSubscribers_0; }
	inline void set_messageTypeSubscribers_0(List_1_t3157010512 * value)
	{
		___messageTypeSubscribers_0 = value;
		Il2CppCodeGenWriteBarrier((&___messageTypeSubscribers_0), value);
	}

	inline static int32_t get_offset_of_connectionEvent_1() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t3411787513, ___connectionEvent_1)); }
	inline ConnectionChangeEvent_t3251856151 * get_connectionEvent_1() const { return ___connectionEvent_1; }
	inline ConnectionChangeEvent_t3251856151 ** get_address_of_connectionEvent_1() { return &___connectionEvent_1; }
	inline void set_connectionEvent_1(ConnectionChangeEvent_t3251856151 * value)
	{
		___connectionEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___connectionEvent_1), value);
	}

	inline static int32_t get_offset_of_disconnectionEvent_2() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t3411787513, ___disconnectionEvent_2)); }
	inline ConnectionChangeEvent_t3251856151 * get_disconnectionEvent_2() const { return ___disconnectionEvent_2; }
	inline ConnectionChangeEvent_t3251856151 ** get_address_of_disconnectionEvent_2() { return &___disconnectionEvent_2; }
	inline void set_disconnectionEvent_2(ConnectionChangeEvent_t3251856151 * value)
	{
		___disconnectionEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___disconnectionEvent_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYEREDITORCONNECTIONEVENTS_T3411787513_H
#ifndef PLAYABLEBEHAVIOUR_T4203540982_H
#define PLAYABLEBEHAVIOUR_T4203540982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBehaviour
struct  PlayableBehaviour_t4203540982  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEBEHAVIOUR_T4203540982_H
#ifndef U3CBLOCKUNTILRECVMSGU3EC__ANONSTOREY2_T2166869842_H
#define U3CBLOCKUNTILRECVMSGU3EC__ANONSTOREY2_T2166869842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerConnection/<BlockUntilRecvMsg>c__AnonStorey2
struct  U3CBlockUntilRecvMsgU3Ec__AnonStorey2_t2166869842  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection/<BlockUntilRecvMsg>c__AnonStorey2::msgReceived
	bool ___msgReceived_0;

public:
	inline static int32_t get_offset_of_msgReceived_0() { return static_cast<int32_t>(offsetof(U3CBlockUntilRecvMsgU3Ec__AnonStorey2_t2166869842, ___msgReceived_0)); }
	inline bool get_msgReceived_0() const { return ___msgReceived_0; }
	inline bool* get_address_of_msgReceived_0() { return &___msgReceived_0; }
	inline void set_msgReceived_0(bool value)
	{
		___msgReceived_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CBLOCKUNTILRECVMSGU3EC__ANONSTOREY2_T2166869842_H
#ifndef NETFXCOREEXTENSIONS_T4089902045_H
#define NETFXCOREEXTENSIONS_T4089902045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.NetFxCoreExtensions
struct  NetFxCoreExtensions_t4089902045  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETFXCOREEXTENSIONS_T4089902045_H
#ifndef INPUT_T1431474628_H
#define INPUT_T1431474628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Input
struct  Input_t1431474628  : public RuntimeObject
{
public:

public:
};

struct Input_t1431474628_StaticFields
{
public:
	// UnityEngine.Gyroscope UnityEngine.Input::m_MainGyro
	Gyroscope_t3288342876 * ___m_MainGyro_0;

public:
	inline static int32_t get_offset_of_m_MainGyro_0() { return static_cast<int32_t>(offsetof(Input_t1431474628_StaticFields, ___m_MainGyro_0)); }
	inline Gyroscope_t3288342876 * get_m_MainGyro_0() const { return ___m_MainGyro_0; }
	inline Gyroscope_t3288342876 ** get_address_of_m_MainGyro_0() { return &___m_MainGyro_0; }
	inline void set_m_MainGyro_0(Gyroscope_t3288342876 * value)
	{
		___m_MainGyro_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_MainGyro_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUT_T1431474628_H
#ifndef GYROSCOPE_T3288342876_H
#define GYROSCOPE_T3288342876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gyroscope
struct  Gyroscope_t3288342876  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GYROSCOPE_T3288342876_H
#ifndef CURSOR_T1422555833_H
#define CURSOR_T1422555833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Cursor
struct  Cursor_t1422555833  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURSOR_T1422555833_H
#ifndef PLAYERCONNECTIONINTERNAL_T3892293164_H
#define PLAYERCONNECTIONINTERNAL_T3892293164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PlayerConnectionInternal
struct  PlayerConnectionInternal_t3892293164  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONNECTIONINTERNAL_T3892293164_H
#ifndef RESOURCES_T2942265397_H
#define RESOURCES_T2942265397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Resources
struct  Resources_t2942265397  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCES_T2942265397_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef DEFAULTVALUEATTRIBUTE_T2337225216_H
#define DEFAULTVALUEATTRIBUTE_T2337225216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.DefaultValueAttribute
struct  DefaultValueAttribute_t2337225216  : public Attribute_t861562559
{
public:
	// System.Object UnityEngine.Internal.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t2337225216, ___DefaultValue_0)); }
	inline RuntimeObject * get_DefaultValue_0() const { return ___DefaultValue_0; }
	inline RuntimeObject ** get_address_of_DefaultValue_0() { return &___DefaultValue_0; }
	inline void set_DefaultValue_0(RuntimeObject * value)
	{
		___DefaultValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T2337225216_H
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
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef EXCLUDEFROMDOCSATTRIBUTE_T3592494112_H
#define EXCLUDEFROMDOCSATTRIBUTE_T3592494112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.ExcludeFromDocsAttribute
struct  ExcludeFromDocsAttribute_t3592494112  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCLUDEFROMDOCSATTRIBUTE_T3592494112_H
#ifndef CULLINGGROUPEVENT_T1722745023_H
#define CULLINGGROUPEVENT_T1722745023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroupEvent
struct  CullingGroupEvent_t1722745023 
{
public:
	// System.Int32 UnityEngine.CullingGroupEvent::m_Index
	int32_t ___m_Index_0;
	// System.Byte UnityEngine.CullingGroupEvent::m_PrevState
	uint8_t ___m_PrevState_1;
	// System.Byte UnityEngine.CullingGroupEvent::m_ThisState
	uint8_t ___m_ThisState_2;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t1722745023, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_PrevState_1() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t1722745023, ___m_PrevState_1)); }
	inline uint8_t get_m_PrevState_1() const { return ___m_PrevState_1; }
	inline uint8_t* get_address_of_m_PrevState_1() { return &___m_PrevState_1; }
	inline void set_m_PrevState_1(uint8_t value)
	{
		___m_PrevState_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisState_2() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t1722745023, ___m_ThisState_2)); }
	inline uint8_t get_m_ThisState_2() const { return ___m_ThisState_2; }
	inline uint8_t* get_address_of_m_ThisState_2() { return &___m_ThisState_2; }
	inline void set_m_ThisState_2(uint8_t value)
	{
		___m_ThisState_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULLINGGROUPEVENT_T1722745023_H
#ifndef SCENE_T2348375561_H
#define SCENE_T2348375561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2348375561 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2348375561, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2348375561_H
#ifndef FORMERLYSERIALIZEDASATTRIBUTE_T2859083114_H
#define FORMERLYSERIALIZEDASATTRIBUTE_T2859083114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct  FormerlySerializedAsAttribute_t2859083114  : public Attribute_t861562559
{
public:
	// System.String UnityEngine.Serialization.FormerlySerializedAsAttribute::m_oldName
	String_t* ___m_oldName_0;

public:
	inline static int32_t get_offset_of_m_oldName_0() { return static_cast<int32_t>(offsetof(FormerlySerializedAsAttribute_t2859083114, ___m_oldName_0)); }
	inline String_t* get_m_oldName_0() const { return ___m_oldName_0; }
	inline String_t** get_address_of_m_oldName_0() { return &___m_oldName_0; }
	inline void set_m_oldName_0(String_t* value)
	{
		___m_oldName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_oldName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMERLYSERIALIZEDASATTRIBUTE_T2859083114_H
#ifndef SORTINGLAYER_T2251519173_H
#define SORTINGLAYER_T2251519173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SortingLayer
struct  SortingLayer_t2251519173 
{
public:
	// System.Int32 UnityEngine.SortingLayer::m_Id
	int32_t ___m_Id_0;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(SortingLayer_t2251519173, ___m_Id_0)); }
	inline int32_t get_m_Id_0() const { return ___m_Id_0; }
	inline int32_t* get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(int32_t value)
	{
		___m_Id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTINGLAYER_T2251519173_H
#ifndef TYPEINFERENCERULEATTRIBUTE_T254868554_H
#define TYPEINFERENCERULEATTRIBUTE_T254868554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.TypeInferenceRuleAttribute
struct  TypeInferenceRuleAttribute_t254868554  : public Attribute_t861562559
{
public:
	// System.String UnityEngineInternal.TypeInferenceRuleAttribute::_rule
	String_t* ____rule_0;

public:
	inline static int32_t get_offset_of__rule_0() { return static_cast<int32_t>(offsetof(TypeInferenceRuleAttribute_t254868554, ____rule_0)); }
	inline String_t* get__rule_0() const { return ____rule_0; }
	inline String_t** get_address_of__rule_0() { return &____rule_0; }
	inline void set__rule_0(String_t* value)
	{
		____rule_0 = value;
		Il2CppCodeGenWriteBarrier((&____rule_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFERENCERULEATTRIBUTE_T254868554_H
#ifndef LAYERMASK_T3493934918_H
#define LAYERMASK_T3493934918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t3493934918 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t3493934918, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T3493934918_H
#ifndef KEYFRAME_T4206410242_H
#define KEYFRAME_T4206410242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Keyframe
struct  Keyframe_t4206410242 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYFRAME_T4206410242_H
#ifndef GENERICSTACK_T1310059385_H
#define GENERICSTACK_T1310059385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.GenericStack
struct  GenericStack_t1310059385  : public Stack_t2329662280
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICSTACK_T1310059385_H
#ifndef WRITEONLYATTRIBUTE_T1738907586_H
#define WRITEONLYATTRIBUTE_T1738907586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.WriteOnlyAttribute
struct  WriteOnlyAttribute_t1738907586  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEONLYATTRIBUTE_T1738907586_H
#ifndef NATIVECONTAINERSUPPORTSDEFERREDCONVERTLISTTOARRAY_T4167123417_H
#define NATIVECONTAINERSUPPORTSDEFERREDCONVERTLISTTOARRAY_T4167123417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.LowLevel.Unsafe.NativeContainerSupportsDeferredConvertListToArray
struct  NativeContainerSupportsDeferredConvertListToArray_t4167123417  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSDEFERREDCONVERTLISTTOARRAY_T4167123417_H
#ifndef NATIVECONTAINERSUPPORTSDEALLOCATEONJOBCOMPLETIONATTRIBUTE_T1480492758_H
#define NATIVECONTAINERSUPPORTSDEALLOCATEONJOBCOMPLETIONATTRIBUTE_T1480492758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.LowLevel.Unsafe.NativeContainerSupportsDeallocateOnJobCompletionAttribute
struct  NativeContainerSupportsDeallocateOnJobCompletionAttribute_t1480492758  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSDEALLOCATEONJOBCOMPLETIONATTRIBUTE_T1480492758_H
#ifndef NATIVEDISABLECONTAINERSAFETYRESTRICTIONATTRIBUTE_T708027756_H
#define NATIVEDISABLECONTAINERSAFETYRESTRICTIONATTRIBUTE_T708027756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.LowLevel.Unsafe.NativeDisableContainerSafetyRestrictionAttribute
struct  NativeDisableContainerSafetyRestrictionAttribute_t708027756  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEDISABLECONTAINERSAFETYRESTRICTIONATTRIBUTE_T708027756_H
#ifndef NATIVEDISABLEUNSAFEPTRRESTRICTIONATTRIBUTE_T2582701661_H
#define NATIVEDISABLEUNSAFEPTRRESTRICTIONATTRIBUTE_T2582701661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.LowLevel.Unsafe.NativeDisableUnsafePtrRestrictionAttribute
struct  NativeDisableUnsafePtrRestrictionAttribute_t2582701661  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEDISABLEUNSAFEPTRRESTRICTIONATTRIBUTE_T2582701661_H
#ifndef NATIVECONTAINERNEEDSTHREADINDEXATTRIBUTE_T764917452_H
#define NATIVECONTAINERNEEDSTHREADINDEXATTRIBUTE_T764917452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.LowLevel.Unsafe.NativeContainerNeedsThreadIndexAttribute
struct  NativeContainerNeedsThreadIndexAttribute_t764917452  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERNEEDSTHREADINDEXATTRIBUTE_T764917452_H
#ifndef NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T3808117416_H
#define NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T3808117416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.LowLevel.Unsafe.NativeContainerSupportsMinMaxWriteRestrictionAttribute
struct  NativeContainerSupportsMinMaxWriteRestrictionAttribute_t3808117416  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T3808117416_H
#ifndef DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T3762612740_H
#define DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T3762612740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.DeallocateOnJobCompletionAttribute
struct  DeallocateOnJobCompletionAttribute_t3762612740  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T3762612740_H
#ifndef NATIVEDISABLEPARALLELFORRESTRICTIONATTRIBUTE_T3768540096_H
#define NATIVEDISABLEPARALLELFORRESTRICTIONATTRIBUTE_T3768540096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.NativeDisableParallelForRestrictionAttribute
struct  NativeDisableParallelForRestrictionAttribute_t3768540096  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEDISABLEPARALLELFORRESTRICTIONATTRIBUTE_T3768540096_H
#ifndef NATIVEMATCHESPARALLELFORLENGTHATTRIBUTE_T1813325102_H
#define NATIVEMATCHESPARALLELFORLENGTHATTRIBUTE_T1813325102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.NativeMatchesParallelForLengthAttribute
struct  NativeMatchesParallelForLengthAttribute_t1813325102  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEMATCHESPARALLELFORLENGTHATTRIBUTE_T1813325102_H
#ifndef NATIVECONTAINERISATOMICWRITEONLYATTRIBUTE_T4134969175_H
#define NATIVECONTAINERISATOMICWRITEONLYATTRIBUTE_T4134969175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.LowLevel.Unsafe.NativeContainerIsAtomicWriteOnlyAttribute
struct  NativeContainerIsAtomicWriteOnlyAttribute_t4134969175  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERISATOMICWRITEONLYATTRIBUTE_T4134969175_H
#ifndef NATIVECONTAINERISREADONLYATTRIBUTE_T4098664174_H
#define NATIVECONTAINERISREADONLYATTRIBUTE_T4098664174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.LowLevel.Unsafe.NativeContainerIsReadOnlyAttribute
struct  NativeContainerIsReadOnlyAttribute_t4098664174  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERISREADONLYATTRIBUTE_T4098664174_H
#ifndef NATIVECONTAINERATTRIBUTE_T212308715_H
#define NATIVECONTAINERATTRIBUTE_T212308715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.LowLevel.Unsafe.NativeContainerAttribute
struct  NativeContainerAttribute_t212308715  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERATTRIBUTE_T212308715_H
#ifndef NATIVEFIXEDLENGTHATTRIBUTE_T3072952540_H
#define NATIVEFIXEDLENGTHATTRIBUTE_T3072952540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.NativeFixedLengthAttribute
struct  NativeFixedLengthAttribute_t3072952540  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEFIXEDLENGTHATTRIBUTE_T3072952540_H
#ifndef UNITYEVENT_1_T3832605257_H
#define UNITYEVENT_1_T3832605257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t3832605257  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3832605257, ___m_InvokeArray_4)); }
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
#endif // UNITYEVENT_1_T3832605257_H
#ifndef READONLYATTRIBUTE_T3518714744_H
#define READONLYATTRIBUTE_T3518714744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.ReadOnlyAttribute
struct  ReadOnlyAttribute_t3518714744  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T3518714744_H
#ifndef UNITYEVENT_1_T2052235288_H
#define UNITYEVENT_1_T2052235288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>
struct  UnityEvent_1_t2052235288  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t2052235288, ___m_InvokeArray_4)); }
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
#endif // UNITYEVENT_1_T2052235288_H
#ifndef NATIVESETTHREADINDEXATTRIBUTE_T1211267337_H
#define NATIVESETTHREADINDEXATTRIBUTE_T1211267337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.LowLevel.Unsafe.NativeSetThreadIndexAttribute
struct  NativeSetThreadIndexAttribute_t1211267337  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVESETTHREADINDEXATTRIBUTE_T1211267337_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef NATIVESETCLASSTYPETONULLONSCHEDULEATTRIBUTE_T1234016338_H
#define NATIVESETCLASSTYPETONULLONSCHEDULEATTRIBUTE_T1234016338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.LowLevel.Unsafe.NativeSetClassTypeToNullOnScheduleAttribute
struct  NativeSetClassTypeToNullOnScheduleAttribute_t1234016338  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVESETCLASSTYPETONULLONSCHEDULEATTRIBUTE_T1234016338_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef TOUCHTYPE_T2034578258_H
#define TOUCHTYPE_T2034578258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t2034578258 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchType_t2034578258, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHTYPE_T2034578258_H
#ifndef IMECOMPOSITIONMODE_T2677948540_H
#define IMECOMPOSITIONMODE_T2677948540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.IMECompositionMode
struct  IMECompositionMode_t2677948540 
{
public:
	// System.Int32 UnityEngine.IMECompositionMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(IMECompositionMode_t2677948540, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMECOMPOSITIONMODE_T2677948540_H
#ifndef GRADIENT_T3067099924_H
#define GRADIENT_T3067099924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gradient
struct  Gradient_t3067099924  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Gradient_t3067099924, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_t3067099924_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_t3067099924_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // GRADIENT_T3067099924_H
#ifndef TOUCHPHASE_T72348083_H
#define TOUCHPHASE_T72348083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_t72348083 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchPhase_t72348083, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHPHASE_T72348083_H
#ifndef LIGHTMAPSMODE_T12202505_H
#define LIGHTMAPSMODE_T12202505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LightmapsMode
struct  LightmapsMode_t12202505 
{
public:
	// System.Int32 UnityEngine.LightmapsMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LightmapsMode_t12202505, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHTMAPSMODE_T12202505_H
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
#ifndef LIGHTMAPBAKETYPE_T1497855756_H
#define LIGHTMAPBAKETYPE_T1497855756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LightmapBakeType
struct  LightmapBakeType_t1497855756 
{
public:
	// System.Int32 UnityEngine.LightmapBakeType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LightmapBakeType_t1497855756, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHTMAPBAKETYPE_T1497855756_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef ANIMATIONCURVE_T3046754366_H
#define ANIMATIONCURVE_T3046754366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_t3046754366  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t3046754366, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_T3046754366_H
#ifndef LOGTYPE_T73765434_H
#define LOGTYPE_T73765434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t73765434 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t73765434, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGTYPE_T73765434_H
#ifndef LOADSCENEMODE_T3251202195_H
#define LOADSCENEMODE_T3251202195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_t3251202195 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadSceneMode_t3251202195, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADSCENEMODE_T3251202195_H
#ifndef MESSAGEEVENT_T1491597365_H
#define MESSAGEEVENT_T1491597365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct  MessageEvent_t1491597365  : public UnityEvent_1_t2052235288
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEEVENT_T1491597365_H
#ifndef LIGHTMAPMIXEDBAKEMODE_T4188935449_H
#define LIGHTMAPMIXEDBAKEMODE_T4188935449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.SupportedRenderingFeatures/LightmapMixedBakeMode
struct  LightmapMixedBakeMode_t4188935449 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.SupportedRenderingFeatures/LightmapMixedBakeMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LightmapMixedBakeMode_t4188935449, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHTMAPMIXEDBAKEMODE_T4188935449_H
#ifndef TYPEINFERENCERULES_T96689094_H
#define TYPEINFERENCERULES_T96689094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.TypeInferenceRules
struct  TypeInferenceRules_t96689094 
{
public:
	// System.Int32 UnityEngineInternal.TypeInferenceRules::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeInferenceRules_t96689094, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFERENCERULES_T96689094_H
#ifndef PLAYABLEHANDLE_T1095853803_H
#define PLAYABLEHANDLE_T1095853803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t1095853803 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t1095853803, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t1095853803, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T1095853803_H
#ifndef SPRITEBONE_T303320096_H
#define SPRITEBONE_T303320096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.U2D.SpriteBone
struct  SpriteBone_t303320096 
{
public:
	// System.String UnityEngine.Experimental.U2D.SpriteBone::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.Vector3 UnityEngine.Experimental.U2D.SpriteBone::m_Position
	Vector3_t3722313464  ___m_Position_1;
	// UnityEngine.Quaternion UnityEngine.Experimental.U2D.SpriteBone::m_Rotation
	Quaternion_t2301928331  ___m_Rotation_2;
	// System.Single UnityEngine.Experimental.U2D.SpriteBone::m_Length
	float ___m_Length_3;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteBone::m_ParentId
	int32_t ___m_ParentId_4;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(SpriteBone_t303320096, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_0), value);
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(SpriteBone_t303320096, ___m_Position_1)); }
	inline Vector3_t3722313464  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector3_t3722313464 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector3_t3722313464  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_2() { return static_cast<int32_t>(offsetof(SpriteBone_t303320096, ___m_Rotation_2)); }
	inline Quaternion_t2301928331  get_m_Rotation_2() const { return ___m_Rotation_2; }
	inline Quaternion_t2301928331 * get_address_of_m_Rotation_2() { return &___m_Rotation_2; }
	inline void set_m_Rotation_2(Quaternion_t2301928331  value)
	{
		___m_Rotation_2 = value;
	}

	inline static int32_t get_offset_of_m_Length_3() { return static_cast<int32_t>(offsetof(SpriteBone_t303320096, ___m_Length_3)); }
	inline float get_m_Length_3() const { return ___m_Length_3; }
	inline float* get_address_of_m_Length_3() { return &___m_Length_3; }
	inline void set_m_Length_3(float value)
	{
		___m_Length_3 = value;
	}

	inline static int32_t get_offset_of_m_ParentId_4() { return static_cast<int32_t>(offsetof(SpriteBone_t303320096, ___m_ParentId_4)); }
	inline int32_t get_m_ParentId_4() const { return ___m_ParentId_4; }
	inline int32_t* get_address_of_m_ParentId_4() { return &___m_ParentId_4; }
	inline void set_m_ParentId_4(int32_t value)
	{
		___m_ParentId_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.U2D.SpriteBone
struct SpriteBone_t303320096_marshaled_pinvoke
{
	char* ___m_Name_0;
	Vector3_t3722313464  ___m_Position_1;
	Quaternion_t2301928331  ___m_Rotation_2;
	float ___m_Length_3;
	int32_t ___m_ParentId_4;
};
// Native definition for COM marshalling of UnityEngine.Experimental.U2D.SpriteBone
struct SpriteBone_t303320096_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Vector3_t3722313464  ___m_Position_1;
	Quaternion_t2301928331  ___m_Rotation_2;
	float ___m_Length_3;
	int32_t ___m_ParentId_4;
};
#endif // SPRITEBONE_T303320096_H
#ifndef U3CADDANDCREATEU3EC__ANONSTOREY1_T1136770903_H
#define U3CADDANDCREATEU3EC__ANONSTOREY1_T1136770903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<AddAndCreate>c__AnonStorey1
struct  U3CAddAndCreateU3Ec__AnonStorey1_t1136770903  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<AddAndCreate>c__AnonStorey1::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CAddAndCreateU3Ec__AnonStorey1_t1136770903, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CADDANDCREATEU3EC__ANONSTOREY1_T1136770903_H
#ifndef U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T907692441_H
#define U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T907692441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0
struct  U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t907692441  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t907692441, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T907692441_H
#ifndef U3CUNREGISTERMANAGEDCALLBACKU3EC__ANONSTOREY2_T1335960973_H
#define U3CUNREGISTERMANAGEDCALLBACKU3EC__ANONSTOREY2_T1335960973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<UnregisterManagedCallback>c__AnonStorey2
struct  U3CUnregisterManagedCallbackU3Ec__AnonStorey2_t1335960973  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<UnregisterManagedCallback>c__AnonStorey2::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CUnregisterManagedCallbackU3Ec__AnonStorey2_t1335960973, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUNREGISTERMANAGEDCALLBACKU3EC__ANONSTOREY2_T1335960973_H
#ifndef REFLECTIONPROBESUPPORTFLAGS_T3313277643_H
#define REFLECTIONPROBESUPPORTFLAGS_T3313277643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.SupportedRenderingFeatures/ReflectionProbeSupportFlags
struct  ReflectionProbeSupportFlags_t3313277643 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.SupportedRenderingFeatures/ReflectionProbeSupportFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReflectionProbeSupportFlags_t3313277643, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONPROBESUPPORTFLAGS_T3313277643_H
#ifndef CONNECTIONCHANGEEVENT_T3251856151_H
#define CONNECTIONCHANGEEVENT_T3251856151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct  ConnectionChangeEvent_t3251856151  : public UnityEvent_1_t3832605257
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONCHANGEEVENT_T3251856151_H
#ifndef ASYNCOPERATION_T1445031843_H
#define ASYNCOPERATION_T1445031843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t1445031843  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_t1617499438 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_completeCallback_1)); }
	inline Action_1_t1617499438 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_t1617499438 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_t1617499438 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T1445031843_H
#ifndef DISPLAY_T1387065949_H
#define DISPLAY_T1387065949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display
struct  Display_t1387065949  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Display::nativeDisplay
	intptr_t ___nativeDisplay_0;

public:
	inline static int32_t get_offset_of_nativeDisplay_0() { return static_cast<int32_t>(offsetof(Display_t1387065949, ___nativeDisplay_0)); }
	inline intptr_t get_nativeDisplay_0() const { return ___nativeDisplay_0; }
	inline intptr_t* get_address_of_nativeDisplay_0() { return &___nativeDisplay_0; }
	inline void set_nativeDisplay_0(intptr_t value)
	{
		___nativeDisplay_0 = value;
	}
};

struct Display_t1387065949_StaticFields
{
public:
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t103034768* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t1387065949 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t51287044 * ___onDisplaysUpdated_3;

public:
	inline static int32_t get_offset_of_displays_1() { return static_cast<int32_t>(offsetof(Display_t1387065949_StaticFields, ___displays_1)); }
	inline DisplayU5BU5D_t103034768* get_displays_1() const { return ___displays_1; }
	inline DisplayU5BU5D_t103034768** get_address_of_displays_1() { return &___displays_1; }
	inline void set_displays_1(DisplayU5BU5D_t103034768* value)
	{
		___displays_1 = value;
		Il2CppCodeGenWriteBarrier((&___displays_1), value);
	}

	inline static int32_t get_offset_of__mainDisplay_2() { return static_cast<int32_t>(offsetof(Display_t1387065949_StaticFields, ____mainDisplay_2)); }
	inline Display_t1387065949 * get__mainDisplay_2() const { return ____mainDisplay_2; }
	inline Display_t1387065949 ** get_address_of__mainDisplay_2() { return &____mainDisplay_2; }
	inline void set__mainDisplay_2(Display_t1387065949 * value)
	{
		____mainDisplay_2 = value;
		Il2CppCodeGenWriteBarrier((&____mainDisplay_2), value);
	}

	inline static int32_t get_offset_of_onDisplaysUpdated_3() { return static_cast<int32_t>(offsetof(Display_t1387065949_StaticFields, ___onDisplaysUpdated_3)); }
	inline DisplaysUpdatedDelegate_t51287044 * get_onDisplaysUpdated_3() const { return ___onDisplaysUpdated_3; }
	inline DisplaysUpdatedDelegate_t51287044 ** get_address_of_onDisplaysUpdated_3() { return &___onDisplaysUpdated_3; }
	inline void set_onDisplaysUpdated_3(DisplaysUpdatedDelegate_t51287044 * value)
	{
		___onDisplaysUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((&___onDisplaysUpdated_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAY_T1387065949_H
#ifndef CURSORLOCKMODE_T2840764040_H
#define CURSORLOCKMODE_T2840764040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CursorLockMode
struct  CursorLockMode_t2840764040 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CursorLockMode_t2840764040, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURSORLOCKMODE_T2840764040_H
#ifndef PLAYABLEOUTPUTHANDLE_T4208053793_H
#define PLAYABLEOUTPUTHANDLE_T4208053793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t4208053793 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t4208053793, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t4208053793, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T4208053793_H
#ifndef U3CREGISTERU3EC__ANONSTOREY0_T2405595090_H
#define U3CREGISTERU3EC__ANONSTOREY0_T2405595090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerConnection/<Register>c__AnonStorey0
struct  U3CRegisterU3Ec__AnonStorey0_t2405595090  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerConnection/<Register>c__AnonStorey0::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CRegisterU3Ec__AnonStorey0_t2405595090, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREGISTERU3EC__ANONSTOREY0_T2405595090_H
#ifndef CULLINGGROUP_T2096318768_H
#define CULLINGGROUP_T2096318768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup
struct  CullingGroup_t2096318768  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.CullingGroup::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.CullingGroup/StateChanged UnityEngine.CullingGroup::m_OnStateChanged
	StateChanged_t2136737110 * ___m_OnStateChanged_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CullingGroup_t2096318768, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_OnStateChanged_1() { return static_cast<int32_t>(offsetof(CullingGroup_t2096318768, ___m_OnStateChanged_1)); }
	inline StateChanged_t2136737110 * get_m_OnStateChanged_1() const { return ___m_OnStateChanged_1; }
	inline StateChanged_t2136737110 ** get_address_of_m_OnStateChanged_1() { return &___m_OnStateChanged_1; }
	inline void set_m_OnStateChanged_1(StateChanged_t2136737110 * value)
	{
		___m_OnStateChanged_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnStateChanged_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.CullingGroup
struct CullingGroup_t2096318768_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
// Native definition for COM marshalling of UnityEngine.CullingGroup
struct CullingGroup_t2096318768_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
#endif // CULLINGGROUP_T2096318768_H
#ifndef PLAYABLEGRAPH_T3515989261_H
#define PLAYABLEGRAPH_T3515989261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_t3515989261 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableGraph::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_t3515989261, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_t3515989261, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEGRAPH_T3515989261_H
#ifndef U3CUNREGISTERU3EC__ANONSTOREY1_T2528476601_H
#define U3CUNREGISTERU3EC__ANONSTOREY1_T2528476601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerConnection/<Unregister>c__AnonStorey1
struct  U3CUnregisterU3Ec__AnonStorey1_t2528476601  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerConnection/<Unregister>c__AnonStorey1::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CUnregisterU3Ec__AnonStorey1_t2528476601, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUNREGISTERU3EC__ANONSTOREY1_T2528476601_H
#ifndef DATASTREAMTYPE_T4132467813_H
#define DATASTREAMTYPE_T4132467813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t4132467813 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataStreamType_t4132467813, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASTREAMTYPE_T4132467813_H
#ifndef TEXTUREMIXERPLAYABLE_T2398603962_H
#define TEXTUREMIXERPLAYABLE_T2398603962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Playables.TextureMixerPlayable
struct  TextureMixerPlayable_t2398603962 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.TextureMixerPlayable::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(TextureMixerPlayable_t2398603962, ___m_Handle_0)); }
	inline PlayableHandle_t1095853803  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1095853803 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1095853803  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREMIXERPLAYABLE_T2398603962_H
#ifndef LOGGER_T274032455_H
#define LOGGER_T274032455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Logger
struct  Logger_t274032455  : public RuntimeObject
{
public:
	// UnityEngine.ILogHandler UnityEngine.Logger::<logHandler>k__BackingField
	RuntimeObject* ___U3ClogHandlerU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Logger::<logEnabled>k__BackingField
	bool ___U3ClogEnabledU3Ek__BackingField_1;
	// UnityEngine.LogType UnityEngine.Logger::<filterLogType>k__BackingField
	int32_t ___U3CfilterLogTypeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3ClogHandlerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Logger_t274032455, ___U3ClogHandlerU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3ClogHandlerU3Ek__BackingField_0() const { return ___U3ClogHandlerU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3ClogHandlerU3Ek__BackingField_0() { return &___U3ClogHandlerU3Ek__BackingField_0; }
	inline void set_U3ClogHandlerU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3ClogHandlerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClogHandlerU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3ClogEnabledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Logger_t274032455, ___U3ClogEnabledU3Ek__BackingField_1)); }
	inline bool get_U3ClogEnabledU3Ek__BackingField_1() const { return ___U3ClogEnabledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3ClogEnabledU3Ek__BackingField_1() { return &___U3ClogEnabledU3Ek__BackingField_1; }
	inline void set_U3ClogEnabledU3Ek__BackingField_1(bool value)
	{
		___U3ClogEnabledU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CfilterLogTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Logger_t274032455, ___U3CfilterLogTypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CfilterLogTypeU3Ek__BackingField_2() const { return ___U3CfilterLogTypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CfilterLogTypeU3Ek__BackingField_2() { return &___U3CfilterLogTypeU3Ek__BackingField_2; }
	inline void set_U3CfilterLogTypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CfilterLogTypeU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGGER_T274032455_H
#ifndef TEXTUREPLAYABLEOUTPUT_T648497447_H
#define TEXTUREPLAYABLEOUTPUT_T648497447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Playables.TexturePlayableOutput
struct  TexturePlayableOutput_t648497447 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Experimental.Playables.TexturePlayableOutput::m_Handle
	PlayableOutputHandle_t4208053793  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(TexturePlayableOutput_t648497447, ___m_Handle_0)); }
	inline PlayableOutputHandle_t4208053793  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t4208053793 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t4208053793  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREPLAYABLEOUTPUT_T648497447_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef PLAYABLEBINDING_T354260709_H
#define PLAYABLEBINDING_T354260709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBinding
struct  PlayableBinding_t354260709 
{
public:
	// System.String UnityEngine.Playables.PlayableBinding::<streamName>k__BackingField
	String_t* ___U3CstreamNameU3Ek__BackingField_2;
	// UnityEngine.Playables.DataStreamType UnityEngine.Playables.PlayableBinding::<streamType>k__BackingField
	int32_t ___U3CstreamTypeU3Ek__BackingField_3;
	// UnityEngine.Object UnityEngine.Playables.PlayableBinding::<sourceObject>k__BackingField
	Object_t631007953 * ___U3CsourceObjectU3Ek__BackingField_4;
	// System.Type UnityEngine.Playables.PlayableBinding::<sourceBindingType>k__BackingField
	Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CstreamNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___U3CstreamNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CstreamNameU3Ek__BackingField_2() const { return ___U3CstreamNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CstreamNameU3Ek__BackingField_2() { return &___U3CstreamNameU3Ek__BackingField_2; }
	inline void set_U3CstreamNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CstreamNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstreamNameU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CstreamTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___U3CstreamTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CstreamTypeU3Ek__BackingField_3() const { return ___U3CstreamTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CstreamTypeU3Ek__BackingField_3() { return &___U3CstreamTypeU3Ek__BackingField_3; }
	inline void set_U3CstreamTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CstreamTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsourceObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___U3CsourceObjectU3Ek__BackingField_4)); }
	inline Object_t631007953 * get_U3CsourceObjectU3Ek__BackingField_4() const { return ___U3CsourceObjectU3Ek__BackingField_4; }
	inline Object_t631007953 ** get_address_of_U3CsourceObjectU3Ek__BackingField_4() { return &___U3CsourceObjectU3Ek__BackingField_4; }
	inline void set_U3CsourceObjectU3Ek__BackingField_4(Object_t631007953 * value)
	{
		___U3CsourceObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceObjectU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___U3CsourceBindingTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CsourceBindingTypeU3Ek__BackingField_5() const { return ___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return &___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline void set_U3CsourceBindingTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CsourceBindingTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceBindingTypeU3Ek__BackingField_5), value);
	}
};

struct PlayableBinding_t354260709_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t829358056* ___None_0;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_1;

public:
	inline static int32_t get_offset_of_None_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709_StaticFields, ___None_0)); }
	inline PlayableBindingU5BU5D_t829358056* get_None_0() const { return ___None_0; }
	inline PlayableBindingU5BU5D_t829358056** get_address_of_None_0() { return &___None_0; }
	inline void set_None_0(PlayableBindingU5BU5D_t829358056* value)
	{
		___None_0 = value;
		Il2CppCodeGenWriteBarrier((&___None_0), value);
	}

	inline static int32_t get_offset_of_DefaultDuration_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709_StaticFields, ___DefaultDuration_1)); }
	inline double get_DefaultDuration_1() const { return ___DefaultDuration_1; }
	inline double* get_address_of_DefaultDuration_1() { return &___DefaultDuration_1; }
	inline void set_DefaultDuration_1(double value)
	{
		___DefaultDuration_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t354260709_marshaled_pinvoke
{
	char* ___U3CstreamNameU3Ek__BackingField_2;
	int32_t ___U3CstreamTypeU3Ek__BackingField_3;
	Object_t631007953_marshaled_pinvoke ___U3CsourceObjectU3Ek__BackingField_4;
	Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t354260709_marshaled_com
{
	Il2CppChar* ___U3CstreamNameU3Ek__BackingField_2;
	int32_t ___U3CstreamTypeU3Ek__BackingField_3;
	Object_t631007953_marshaled_com* ___U3CsourceObjectU3Ek__BackingField_4;
	Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
};
#endif // PLAYABLEBINDING_T354260709_H
#ifndef PLAYABLE_T459825607_H
#define PLAYABLE_T459825607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.Playable
struct  Playable_t459825607 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t459825607, ___m_Handle_0)); }
	inline PlayableHandle_t1095853803  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1095853803 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1095853803  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t459825607_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t459825607  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t459825607_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t459825607  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t459825607 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t459825607  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLE_T459825607_H
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
#ifndef SCRIPTPLAYABLEOUTPUT_T2715692609_H
#define SCRIPTPLAYABLEOUTPUT_T2715692609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.ScriptPlayableOutput
struct  ScriptPlayableOutput_t2715692609 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.ScriptPlayableOutput::m_Handle
	PlayableOutputHandle_t4208053793  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayableOutput_t2715692609, ___m_Handle_0)); }
	inline PlayableOutputHandle_t4208053793  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t4208053793 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t4208053793  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTPLAYABLEOUTPUT_T2715692609_H
#ifndef PLAYABLEOUTPUT_T3179894105_H
#define PLAYABLEOUTPUT_T3179894105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutput
struct  PlayableOutput_t3179894105 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_t4208053793  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutput_t3179894105, ___m_Handle_0)); }
	inline PlayableOutputHandle_t4208053793  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t4208053793 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t4208053793  value)
	{
		___m_Handle_0 = value;
	}
};

struct PlayableOutput_t3179894105_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t3179894105  ___m_NullPlayableOutput_1;

public:
	inline static int32_t get_offset_of_m_NullPlayableOutput_1() { return static_cast<int32_t>(offsetof(PlayableOutput_t3179894105_StaticFields, ___m_NullPlayableOutput_1)); }
	inline PlayableOutput_t3179894105  get_m_NullPlayableOutput_1() const { return ___m_NullPlayableOutput_1; }
	inline PlayableOutput_t3179894105 * get_address_of_m_NullPlayableOutput_1() { return &___m_NullPlayableOutput_1; }
	inline void set_m_NullPlayableOutput_1(PlayableOutput_t3179894105  value)
	{
		___m_NullPlayableOutput_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUT_T3179894105_H
#ifndef MATERIALEFFECTPLAYABLE_T3995207978_H
#define MATERIALEFFECTPLAYABLE_T3995207978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Playables.MaterialEffectPlayable
struct  MaterialEffectPlayable_t3995207978 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.MaterialEffectPlayable::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(MaterialEffectPlayable_t3995207978, ___m_Handle_0)); }
	inline PlayableHandle_t1095853803  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1095853803 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1095853803  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIALEFFECTPLAYABLE_T3995207978_H
#ifndef RESOURCEREQUEST_T3109103591_H
#define RESOURCEREQUEST_T3109103591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ResourceRequest
struct  ResourceRequest_t3109103591  : public AsyncOperation_t1445031843
{
public:
	// System.String UnityEngine.ResourceRequest::m_Path
	String_t* ___m_Path_2;
	// System.Type UnityEngine.ResourceRequest::m_Type
	Type_t * ___m_Type_3;

public:
	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(ResourceRequest_t3109103591, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Path_2), value);
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(ResourceRequest_t3109103591, ___m_Type_3)); }
	inline Type_t * get_m_Type_3() const { return ___m_Type_3; }
	inline Type_t ** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(Type_t * value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t3109103591_marshaled_pinvoke : public AsyncOperation_t1445031843_marshaled_pinvoke
{
	char* ___m_Path_2;
	Type_t * ___m_Type_3;
};
// Native definition for COM marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t3109103591_marshaled_com : public AsyncOperation_t1445031843_marshaled_com
{
	Il2CppChar* ___m_Path_2;
	Type_t * ___m_Type_3;
};
#endif // RESOURCEREQUEST_T3109103591_H
#ifndef SPRITE_T280657092_H
#define SPRITE_T280657092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t280657092  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T280657092_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef SUPPORTEDRENDERINGFEATURES_T353898663_H
#define SUPPORTEDRENDERINGFEATURES_T353898663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.SupportedRenderingFeatures
struct  SupportedRenderingFeatures_t353898663  : public RuntimeObject
{
public:
	// UnityEngine.Experimental.Rendering.SupportedRenderingFeatures/ReflectionProbeSupportFlags UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<reflectionProbeSupportFlags>k__BackingField
	int32_t ___U3CreflectionProbeSupportFlagsU3Ek__BackingField_1;
	// UnityEngine.Experimental.Rendering.SupportedRenderingFeatures/LightmapMixedBakeMode UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<defaultMixedLightingMode>k__BackingField
	int32_t ___U3CdefaultMixedLightingModeU3Ek__BackingField_2;
	// UnityEngine.Experimental.Rendering.SupportedRenderingFeatures/LightmapMixedBakeMode UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<supportedMixedLightingModes>k__BackingField
	int32_t ___U3CsupportedMixedLightingModesU3Ek__BackingField_3;
	// UnityEngine.LightmapBakeType UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<supportedLightmapBakeTypes>k__BackingField
	int32_t ___U3CsupportedLightmapBakeTypesU3Ek__BackingField_4;
	// UnityEngine.LightmapsMode UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<supportedLightmapsModes>k__BackingField
	int32_t ___U3CsupportedLightmapsModesU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<rendererSupportsLightProbeProxyVolumes>k__BackingField
	bool ___U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<rendererSupportsMotionVectors>k__BackingField
	bool ___U3CrendererSupportsMotionVectorsU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<rendererSupportsReceiveShadows>k__BackingField
	bool ___U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8;
	// System.Boolean UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<rendererSupportsReflectionProbes>k__BackingField
	bool ___U3CrendererSupportsReflectionProbesU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CreflectionProbeSupportFlagsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t353898663, ___U3CreflectionProbeSupportFlagsU3Ek__BackingField_1)); }
	inline int32_t get_U3CreflectionProbeSupportFlagsU3Ek__BackingField_1() const { return ___U3CreflectionProbeSupportFlagsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CreflectionProbeSupportFlagsU3Ek__BackingField_1() { return &___U3CreflectionProbeSupportFlagsU3Ek__BackingField_1; }
	inline void set_U3CreflectionProbeSupportFlagsU3Ek__BackingField_1(int32_t value)
	{
		___U3CreflectionProbeSupportFlagsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CdefaultMixedLightingModeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t353898663, ___U3CdefaultMixedLightingModeU3Ek__BackingField_2)); }
	inline int32_t get_U3CdefaultMixedLightingModeU3Ek__BackingField_2() const { return ___U3CdefaultMixedLightingModeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CdefaultMixedLightingModeU3Ek__BackingField_2() { return &___U3CdefaultMixedLightingModeU3Ek__BackingField_2; }
	inline void set_U3CdefaultMixedLightingModeU3Ek__BackingField_2(int32_t value)
	{
		___U3CdefaultMixedLightingModeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportedMixedLightingModesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t353898663, ___U3CsupportedMixedLightingModesU3Ek__BackingField_3)); }
	inline int32_t get_U3CsupportedMixedLightingModesU3Ek__BackingField_3() const { return ___U3CsupportedMixedLightingModesU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CsupportedMixedLightingModesU3Ek__BackingField_3() { return &___U3CsupportedMixedLightingModesU3Ek__BackingField_3; }
	inline void set_U3CsupportedMixedLightingModesU3Ek__BackingField_3(int32_t value)
	{
		___U3CsupportedMixedLightingModesU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportedLightmapBakeTypesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t353898663, ___U3CsupportedLightmapBakeTypesU3Ek__BackingField_4)); }
	inline int32_t get_U3CsupportedLightmapBakeTypesU3Ek__BackingField_4() const { return ___U3CsupportedLightmapBakeTypesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CsupportedLightmapBakeTypesU3Ek__BackingField_4() { return &___U3CsupportedLightmapBakeTypesU3Ek__BackingField_4; }
	inline void set_U3CsupportedLightmapBakeTypesU3Ek__BackingField_4(int32_t value)
	{
		___U3CsupportedLightmapBakeTypesU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportedLightmapsModesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t353898663, ___U3CsupportedLightmapsModesU3Ek__BackingField_5)); }
	inline int32_t get_U3CsupportedLightmapsModesU3Ek__BackingField_5() const { return ___U3CsupportedLightmapsModesU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CsupportedLightmapsModesU3Ek__BackingField_5() { return &___U3CsupportedLightmapsModesU3Ek__BackingField_5; }
	inline void set_U3CsupportedLightmapsModesU3Ek__BackingField_5(int32_t value)
	{
		___U3CsupportedLightmapsModesU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t353898663, ___U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6)); }
	inline bool get_U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6() const { return ___U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6() { return &___U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6; }
	inline void set_U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6(bool value)
	{
		___U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CrendererSupportsMotionVectorsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t353898663, ___U3CrendererSupportsMotionVectorsU3Ek__BackingField_7)); }
	inline bool get_U3CrendererSupportsMotionVectorsU3Ek__BackingField_7() const { return ___U3CrendererSupportsMotionVectorsU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CrendererSupportsMotionVectorsU3Ek__BackingField_7() { return &___U3CrendererSupportsMotionVectorsU3Ek__BackingField_7; }
	inline void set_U3CrendererSupportsMotionVectorsU3Ek__BackingField_7(bool value)
	{
		___U3CrendererSupportsMotionVectorsU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t353898663, ___U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8)); }
	inline bool get_U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8() const { return ___U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8() { return &___U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8; }
	inline void set_U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8(bool value)
	{
		___U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CrendererSupportsReflectionProbesU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t353898663, ___U3CrendererSupportsReflectionProbesU3Ek__BackingField_9)); }
	inline bool get_U3CrendererSupportsReflectionProbesU3Ek__BackingField_9() const { return ___U3CrendererSupportsReflectionProbesU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CrendererSupportsReflectionProbesU3Ek__BackingField_9() { return &___U3CrendererSupportsReflectionProbesU3Ek__BackingField_9; }
	inline void set_U3CrendererSupportsReflectionProbesU3Ek__BackingField_9(bool value)
	{
		___U3CrendererSupportsReflectionProbesU3Ek__BackingField_9 = value;
	}
};

struct SupportedRenderingFeatures_t353898663_StaticFields
{
public:
	// UnityEngine.Experimental.Rendering.SupportedRenderingFeatures UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::s_Active
	SupportedRenderingFeatures_t353898663 * ___s_Active_0;

public:
	inline static int32_t get_offset_of_s_Active_0() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t353898663_StaticFields, ___s_Active_0)); }
	inline SupportedRenderingFeatures_t353898663 * get_s_Active_0() const { return ___s_Active_0; }
	inline SupportedRenderingFeatures_t353898663 ** get_address_of_s_Active_0() { return &___s_Active_0; }
	inline void set_s_Active_0(SupportedRenderingFeatures_t353898663 * value)
	{
		___s_Active_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Active_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUPPORTEDRENDERINGFEATURES_T353898663_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef TOUCH_T1921856868_H
#define TOUCH_T1921856868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t1921856868 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t2156229523  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t2156229523  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t2156229523  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Position_1)); }
	inline Vector2_t2156229523  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_t2156229523 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_t2156229523  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RawPosition_2)); }
	inline Vector2_t2156229523  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_t2156229523 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_t2156229523  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_PositionDelta_3)); }
	inline Vector2_t2156229523  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_t2156229523 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_t2156229523  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCH_T1921856868_H
#ifndef CAMERAPLAYABLE_T3330816414_H
#define CAMERAPLAYABLE_T3330816414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Playables.CameraPlayable
struct  CameraPlayable_t3330816414 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.CameraPlayable::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(CameraPlayable_t3330816414, ___m_Handle_0)); }
	inline PlayableHandle_t1095853803  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1095853803 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1095853803  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAPLAYABLE_T3330816414_H
#ifndef DISPLAYSUPDATEDDELEGATE_T51287044_H
#define DISPLAYSUPDATEDDELEGATE_T51287044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display/DisplaysUpdatedDelegate
struct  DisplaysUpdatedDelegate_t51287044  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYSUPDATEDDELEGATE_T51287044_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef STATECHANGED_T2136737110_H
#define STATECHANGED_T2136737110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup/StateChanged
struct  StateChanged_t2136737110  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATECHANGED_T2136737110_H
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
#ifndef PLAYERCONNECTION_T3081694049_H
#define PLAYERCONNECTION_T3081694049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct  PlayerConnection_t3081694049  : public ScriptableObject_t2528358522
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents UnityEngine.Networking.PlayerConnection.PlayerConnection::m_PlayerEditorConnectionEvents
	PlayerEditorConnectionEvents_t3411787513 * ___m_PlayerEditorConnectionEvents_3;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.Networking.PlayerConnection.PlayerConnection::m_connectedPlayers
	List_1_t128053199 * ___m_connectedPlayers_4;
	// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection::m_IsInitilized
	bool ___m_IsInitilized_5;

public:
	inline static int32_t get_offset_of_m_PlayerEditorConnectionEvents_3() { return static_cast<int32_t>(offsetof(PlayerConnection_t3081694049, ___m_PlayerEditorConnectionEvents_3)); }
	inline PlayerEditorConnectionEvents_t3411787513 * get_m_PlayerEditorConnectionEvents_3() const { return ___m_PlayerEditorConnectionEvents_3; }
	inline PlayerEditorConnectionEvents_t3411787513 ** get_address_of_m_PlayerEditorConnectionEvents_3() { return &___m_PlayerEditorConnectionEvents_3; }
	inline void set_m_PlayerEditorConnectionEvents_3(PlayerEditorConnectionEvents_t3411787513 * value)
	{
		___m_PlayerEditorConnectionEvents_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlayerEditorConnectionEvents_3), value);
	}

	inline static int32_t get_offset_of_m_connectedPlayers_4() { return static_cast<int32_t>(offsetof(PlayerConnection_t3081694049, ___m_connectedPlayers_4)); }
	inline List_1_t128053199 * get_m_connectedPlayers_4() const { return ___m_connectedPlayers_4; }
	inline List_1_t128053199 ** get_address_of_m_connectedPlayers_4() { return &___m_connectedPlayers_4; }
	inline void set_m_connectedPlayers_4(List_1_t128053199 * value)
	{
		___m_connectedPlayers_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_connectedPlayers_4), value);
	}

	inline static int32_t get_offset_of_m_IsInitilized_5() { return static_cast<int32_t>(offsetof(PlayerConnection_t3081694049, ___m_IsInitilized_5)); }
	inline bool get_m_IsInitilized_5() const { return ___m_IsInitilized_5; }
	inline bool* get_address_of_m_IsInitilized_5() { return &___m_IsInitilized_5; }
	inline void set_m_IsInitilized_5(bool value)
	{
		___m_IsInitilized_5 = value;
	}
};

struct PlayerConnection_t3081694049_StaticFields
{
public:
	// UnityEngine.IPlayerEditorConnectionNative UnityEngine.Networking.PlayerConnection.PlayerConnection::connectionNative
	RuntimeObject* ___connectionNative_2;
	// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.Networking.PlayerConnection.PlayerConnection::s_Instance
	PlayerConnection_t3081694049 * ___s_Instance_6;

public:
	inline static int32_t get_offset_of_connectionNative_2() { return static_cast<int32_t>(offsetof(PlayerConnection_t3081694049_StaticFields, ___connectionNative_2)); }
	inline RuntimeObject* get_connectionNative_2() const { return ___connectionNative_2; }
	inline RuntimeObject** get_address_of_connectionNative_2() { return &___connectionNative_2; }
	inline void set_connectionNative_2(RuntimeObject* value)
	{
		___connectionNative_2 = value;
		Il2CppCodeGenWriteBarrier((&___connectionNative_2), value);
	}

	inline static int32_t get_offset_of_s_Instance_6() { return static_cast<int32_t>(offsetof(PlayerConnection_t3081694049_StaticFields, ___s_Instance_6)); }
	inline PlayerConnection_t3081694049 * get_s_Instance_6() const { return ___s_Instance_6; }
	inline PlayerConnection_t3081694049 ** get_address_of_s_Instance_6() { return &___s_Instance_6; }
	inline void set_s_Instance_6(PlayerConnection_t3081694049 * value)
	{
		___s_Instance_6 = value;
		Il2CppCodeGenWriteBarrier((&___s_Instance_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONNECTION_T3081694049_H
#ifndef PLAYABLEASSET_T3219022681_H
#define PLAYABLEASSET_T3219022681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableAsset
struct  PlayableAsset_t3219022681  : public ScriptableObject_t2528358522
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEASSET_T3219022681_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
#ifndef GUIELEMENT_T3567083079_H
#define GUIELEMENT_T3567083079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIElement
struct  GUIElement_t3567083079  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIELEMENT_T3567083079_H
#ifndef GUILAYER_T2783472903_H
#define GUILAYER_T2783472903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayer
struct  GUILayer_t2783472903  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYER_T2783472903_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1500 = { sizeof (YieldInstruction_t403091072), sizeof(YieldInstruction_t403091072_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1501 = { sizeof (ReadOnlyAttribute_t3518714744), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1502 = { sizeof (WriteOnlyAttribute_t1738907586), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1503 = { sizeof (DeallocateOnJobCompletionAttribute_t3762612740), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1504 = { sizeof (NativeFixedLengthAttribute_t3072952540), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1505 = { sizeof (NativeMatchesParallelForLengthAttribute_t1813325102), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1506 = { sizeof (NativeDisableParallelForRestrictionAttribute_t3768540096), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1507 = { sizeof (NativeContainerAttribute_t212308715), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1508 = { sizeof (NativeContainerIsReadOnlyAttribute_t4098664174), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1509 = { sizeof (NativeContainerIsAtomicWriteOnlyAttribute_t4134969175), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1510 = { sizeof (NativeContainerSupportsMinMaxWriteRestrictionAttribute_t3808117416), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1511 = { sizeof (NativeContainerSupportsDeallocateOnJobCompletionAttribute_t1480492758), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1512 = { sizeof (NativeContainerSupportsDeferredConvertListToArray_t4167123417), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1513 = { sizeof (NativeSetThreadIndexAttribute_t1211267337), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1514 = { sizeof (NativeContainerNeedsThreadIndexAttribute_t764917452), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1515 = { sizeof (NativeDisableUnsafePtrRestrictionAttribute_t2582701661), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1516 = { sizeof (NativeDisableContainerSafetyRestrictionAttribute_t708027756), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1517 = { sizeof (NativeSetClassTypeToNullOnScheduleAttribute_t1234016338), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1518 = { sizeof (CameraPlayable_t3330816414)+ sizeof (RuntimeObject), sizeof(CameraPlayable_t3330816414 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1518[1] = 
{
	CameraPlayable_t3330816414::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1519 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1520 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1521 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1522 = { sizeof (MaterialEffectPlayable_t3995207978)+ sizeof (RuntimeObject), sizeof(MaterialEffectPlayable_t3995207978 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1522[1] = 
{
	MaterialEffectPlayable_t3995207978::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1523 = { sizeof (Playable_t459825607)+ sizeof (RuntimeObject), sizeof(Playable_t459825607 ), sizeof(Playable_t459825607_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1523[2] = 
{
	Playable_t459825607::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Playable_t459825607_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1524 = { sizeof (PlayableBinding_t354260709)+ sizeof (RuntimeObject), -1, sizeof(PlayableBinding_t354260709_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1524[6] = 
{
	PlayableBinding_t354260709_StaticFields::get_offset_of_None_0(),
	PlayableBinding_t354260709_StaticFields::get_offset_of_DefaultDuration_1(),
	PlayableBinding_t354260709::get_offset_of_U3CstreamNameU3Ek__BackingField_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t354260709::get_offset_of_U3CstreamTypeU3Ek__BackingField_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t354260709::get_offset_of_U3CsourceObjectU3Ek__BackingField_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t354260709::get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1525 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1526 = { sizeof (PlayableAsset_t3219022681), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1527 = { sizeof (PlayableBehaviour_t4203540982), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1528 = { sizeof (DataStreamType_t4132467813)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1528[5] = 
{
	DataStreamType_t4132467813::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1529 = { sizeof (PlayableGraph_t3515989261)+ sizeof (RuntimeObject), sizeof(PlayableGraph_t3515989261 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1529[2] = 
{
	PlayableGraph_t3515989261::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableGraph_t3515989261::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1530 = { sizeof (PlayableHandle_t1095853803)+ sizeof (RuntimeObject), sizeof(PlayableHandle_t1095853803 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1530[2] = 
{
	PlayableHandle_t1095853803::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableHandle_t1095853803::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1531 = { sizeof (PlayableOutputHandle_t4208053793)+ sizeof (RuntimeObject), sizeof(PlayableOutputHandle_t4208053793 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1531[2] = 
{
	PlayableOutputHandle_t4208053793::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutputHandle_t4208053793::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1532 = { sizeof (PlayableOutput_t3179894105)+ sizeof (RuntimeObject), sizeof(PlayableOutput_t3179894105 ), sizeof(PlayableOutput_t3179894105_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1532[2] = 
{
	PlayableOutput_t3179894105::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutput_t3179894105_StaticFields::get_offset_of_m_NullPlayableOutput_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1533 = { sizeof (ScriptPlayableOutput_t2715692609)+ sizeof (RuntimeObject), sizeof(ScriptPlayableOutput_t2715692609 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1533[1] = 
{
	ScriptPlayableOutput_t2715692609::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1534 = { sizeof (TextureMixerPlayable_t2398603962)+ sizeof (RuntimeObject), sizeof(TextureMixerPlayable_t2398603962 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1534[1] = 
{
	TextureMixerPlayable_t2398603962::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1535 = { sizeof (TexturePlayableOutput_t648497447)+ sizeof (RuntimeObject), sizeof(TexturePlayableOutput_t648497447 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1535[1] = 
{
	TexturePlayableOutput_t648497447::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1536 = { sizeof (DefaultValueAttribute_t2337225216), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1536[1] = 
{
	DefaultValueAttribute_t2337225216::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1537 = { sizeof (ExcludeFromDocsAttribute_t3592494112), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1538 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1539 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1540 = { sizeof (Logger_t274032455), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1540[3] = 
{
	Logger_t274032455::get_offset_of_U3ClogHandlerU3Ek__BackingField_0(),
	Logger_t274032455::get_offset_of_U3ClogEnabledU3Ek__BackingField_1(),
	Logger_t274032455::get_offset_of_U3CfilterLogTypeU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1541 = { sizeof (MessageEventArgs_t1170575784), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1541[2] = 
{
	MessageEventArgs_t1170575784::get_offset_of_playerId_0(),
	MessageEventArgs_t1170575784::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1542 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1543 = { sizeof (PlayerConnection_t3081694049), -1, sizeof(PlayerConnection_t3081694049_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1543[5] = 
{
	PlayerConnection_t3081694049_StaticFields::get_offset_of_connectionNative_2(),
	PlayerConnection_t3081694049::get_offset_of_m_PlayerEditorConnectionEvents_3(),
	PlayerConnection_t3081694049::get_offset_of_m_connectedPlayers_4(),
	PlayerConnection_t3081694049::get_offset_of_m_IsInitilized_5(),
	PlayerConnection_t3081694049_StaticFields::get_offset_of_s_Instance_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1544 = { sizeof (U3CRegisterU3Ec__AnonStorey0_t2405595090), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1544[1] = 
{
	U3CRegisterU3Ec__AnonStorey0_t2405595090::get_offset_of_messageId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1545 = { sizeof (U3CUnregisterU3Ec__AnonStorey1_t2528476601), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1545[1] = 
{
	U3CUnregisterU3Ec__AnonStorey1_t2528476601::get_offset_of_messageId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1546 = { sizeof (U3CBlockUntilRecvMsgU3Ec__AnonStorey2_t2166869842), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1546[1] = 
{
	U3CBlockUntilRecvMsgU3Ec__AnonStorey2_t2166869842::get_offset_of_msgReceived_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1547 = { sizeof (PlayerEditorConnectionEvents_t3411787513), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1547[3] = 
{
	PlayerEditorConnectionEvents_t3411787513::get_offset_of_messageTypeSubscribers_0(),
	PlayerEditorConnectionEvents_t3411787513::get_offset_of_connectionEvent_1(),
	PlayerEditorConnectionEvents_t3411787513::get_offset_of_disconnectionEvent_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1548 = { sizeof (MessageEvent_t1491597365), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1549 = { sizeof (ConnectionChangeEvent_t3251856151), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1550 = { sizeof (MessageTypeSubscribers_t1684935770), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1550[3] = 
{
	MessageTypeSubscribers_t1684935770::get_offset_of_m_messageTypeId_0(),
	MessageTypeSubscribers_t1684935770::get_offset_of_subscriberCount_1(),
	MessageTypeSubscribers_t1684935770::get_offset_of_messageCallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1551 = { sizeof (U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t907692441), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1551[1] = 
{
	U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t907692441::get_offset_of_messageId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1552 = { sizeof (U3CAddAndCreateU3Ec__AnonStorey1_t1136770903), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1552[1] = 
{
	U3CAddAndCreateU3Ec__AnonStorey1_t1136770903::get_offset_of_messageId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1553 = { sizeof (U3CUnregisterManagedCallbackU3Ec__AnonStorey2_t1335960973), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1553[1] = 
{
	U3CUnregisterManagedCallbackU3Ec__AnonStorey2_t1335960973::get_offset_of_messageId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1554 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1555 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1556 = { sizeof (RenderPipelineManager_t4036911426), -1, sizeof(RenderPipelineManager_t4036911426_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1556[2] = 
{
	RenderPipelineManager_t4036911426_StaticFields::get_offset_of_s_CurrentPipelineAsset_0(),
	RenderPipelineManager_t4036911426_StaticFields::get_offset_of_U3CcurrentPipelineU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1557 = { sizeof (SupportedRenderingFeatures_t353898663), -1, sizeof(SupportedRenderingFeatures_t353898663_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1557[10] = 
{
	SupportedRenderingFeatures_t353898663_StaticFields::get_offset_of_s_Active_0(),
	SupportedRenderingFeatures_t353898663::get_offset_of_U3CreflectionProbeSupportFlagsU3Ek__BackingField_1(),
	SupportedRenderingFeatures_t353898663::get_offset_of_U3CdefaultMixedLightingModeU3Ek__BackingField_2(),
	SupportedRenderingFeatures_t353898663::get_offset_of_U3CsupportedMixedLightingModesU3Ek__BackingField_3(),
	SupportedRenderingFeatures_t353898663::get_offset_of_U3CsupportedLightmapBakeTypesU3Ek__BackingField_4(),
	SupportedRenderingFeatures_t353898663::get_offset_of_U3CsupportedLightmapsModesU3Ek__BackingField_5(),
	SupportedRenderingFeatures_t353898663::get_offset_of_U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6(),
	SupportedRenderingFeatures_t353898663::get_offset_of_U3CrendererSupportsMotionVectorsU3Ek__BackingField_7(),
	SupportedRenderingFeatures_t353898663::get_offset_of_U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8(),
	SupportedRenderingFeatures_t353898663::get_offset_of_U3CrendererSupportsReflectionProbesU3Ek__BackingField_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1558 = { sizeof (ReflectionProbeSupportFlags_t3313277643)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1558[3] = 
{
	ReflectionProbeSupportFlags_t3313277643::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1559 = { sizeof (LightmapMixedBakeMode_t4188935449)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1559[5] = 
{
	LightmapMixedBakeMode_t4188935449::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1560 = { sizeof (FormerlySerializedAsAttribute_t2859083114), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1560[1] = 
{
	FormerlySerializedAsAttribute_t2859083114::get_offset_of_m_oldName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1561 = { sizeof (TypeInferenceRules_t96689094)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1561[5] = 
{
	TypeInferenceRules_t96689094::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1562 = { sizeof (TypeInferenceRuleAttribute_t254868554), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1562[1] = 
{
	TypeInferenceRuleAttribute_t254868554::get_offset_of__rule_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1563 = { sizeof (GenericStack_t1310059385), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1564 = { sizeof (NetFxCoreExtensions_t4089902045), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1565 = { sizeof (SpriteBone_t303320096)+ sizeof (RuntimeObject), sizeof(SpriteBone_t303320096_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1565[5] = 
{
	SpriteBone_t303320096::get_offset_of_m_Name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SpriteBone_t303320096::get_offset_of_m_Position_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SpriteBone_t303320096::get_offset_of_m_Rotation_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SpriteBone_t303320096::get_offset_of_m_Length_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SpriteBone_t303320096::get_offset_of_m_ParentId_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1566 = { sizeof (Sprite_t280657092), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1567 = { sizeof (AsyncOperation_t1445031843), sizeof(AsyncOperation_t1445031843_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1567[2] = 
{
	AsyncOperation_t1445031843::get_offset_of_m_Ptr_0(),
	AsyncOperation_t1445031843::get_offset_of_m_completeCallback_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1568 = { sizeof (Behaviour_t1437897464), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1569 = { sizeof (CullingGroupEvent_t1722745023)+ sizeof (RuntimeObject), sizeof(CullingGroupEvent_t1722745023 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1569[3] = 
{
	CullingGroupEvent_t1722745023::get_offset_of_m_Index_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t1722745023::get_offset_of_m_PrevState_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t1722745023::get_offset_of_m_ThisState_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1570 = { sizeof (CullingGroup_t2096318768), sizeof(CullingGroup_t2096318768_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1570[2] = 
{
	CullingGroup_t2096318768::get_offset_of_m_Ptr_0(),
	CullingGroup_t2096318768::get_offset_of_m_OnStateChanged_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1571 = { sizeof (StateChanged_t2136737110), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1572 = { sizeof (CursorLockMode_t2840764040)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1572[4] = 
{
	CursorLockMode_t2840764040::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1573 = { sizeof (Cursor_t1422555833), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1574 = { sizeof (Display_t1387065949), -1, sizeof(Display_t1387065949_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1574[4] = 
{
	Display_t1387065949::get_offset_of_nativeDisplay_0(),
	Display_t1387065949_StaticFields::get_offset_of_displays_1(),
	Display_t1387065949_StaticFields::get_offset_of__mainDisplay_2(),
	Display_t1387065949_StaticFields::get_offset_of_onDisplaysUpdated_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1575 = { sizeof (DisplaysUpdatedDelegate_t51287044), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1576 = { sizeof (GameObject_t1113636619), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1577 = { sizeof (Gradient_t3067099924), sizeof(Gradient_t3067099924_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1577[1] = 
{
	Gradient_t3067099924::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1578 = { sizeof (GUIElement_t3567083079), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1579 = { sizeof (GUILayer_t2783472903), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1580 = { sizeof (TouchPhase_t72348083)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1580[6] = 
{
	TouchPhase_t72348083::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1581 = { sizeof (IMECompositionMode_t2677948540)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1581[4] = 
{
	IMECompositionMode_t2677948540::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1582 = { sizeof (TouchType_t2034578258)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1582[4] = 
{
	TouchType_t2034578258::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1583 = { sizeof (Touch_t1921856868)+ sizeof (RuntimeObject), sizeof(Touch_t1921856868 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1583[14] = 
{
	Touch_t1921856868::get_offset_of_m_FingerId_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_Position_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_RawPosition_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_PositionDelta_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_TimeDelta_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_TapCount_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_Phase_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_Type_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_Pressure_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_maximumPossiblePressure_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_Radius_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_RadiusVariance_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_AltitudeAngle_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_AzimuthAngle_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1584 = { sizeof (Gyroscope_t3288342876), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1585 = { sizeof (Input_t1431474628), -1, sizeof(Input_t1431474628_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1585[1] = 
{
	Input_t1431474628_StaticFields::get_offset_of_m_MainGyro_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1586 = { sizeof (LayerMask_t3493934918)+ sizeof (RuntimeObject), sizeof(LayerMask_t3493934918 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1586[1] = 
{
	LayerMask_t3493934918::get_offset_of_m_Mask_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1587 = { sizeof (Keyframe_t4206410242)+ sizeof (RuntimeObject), sizeof(Keyframe_t4206410242 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1587[7] = 
{
	Keyframe_t4206410242::get_offset_of_m_Time_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t4206410242::get_offset_of_m_Value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t4206410242::get_offset_of_m_InTangent_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t4206410242::get_offset_of_m_OutTangent_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t4206410242::get_offset_of_m_WeightedMode_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t4206410242::get_offset_of_m_InWeight_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t4206410242::get_offset_of_m_OutWeight_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1588 = { sizeof (AnimationCurve_t3046754366), sizeof(AnimationCurve_t3046754366_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1588[1] = 
{
	AnimationCurve_t3046754366::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1589 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1590 = { sizeof (PlayerConnectionInternal_t3892293164), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1591 = { sizeof (ResourceRequest_t3109103591), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1591[2] = 
{
	ResourceRequest_t3109103591::get_offset_of_m_Path_2(),
	ResourceRequest_t3109103591::get_offset_of_m_Type_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1592 = { sizeof (Resources_t2942265397), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1593 = { sizeof (SortingLayer_t2251519173)+ sizeof (RuntimeObject), sizeof(SortingLayer_t2251519173 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1593[1] = 
{
	SortingLayer_t2251519173::get_offset_of_m_Id_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1594 = { sizeof (SpriteRenderer_t3235626157), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1595 = { sizeof (DataUtility_t2196215967), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1596 = { sizeof (Scene_t2348375561)+ sizeof (RuntimeObject), sizeof(Scene_t2348375561 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1596[1] = 
{
	Scene_t2348375561::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1597 = { sizeof (LoadSceneMode_t3251202195)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1597[3] = 
{
	LoadSceneMode_t3251202195::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1598 = { sizeof (SceneManager_t2787271929), -1, sizeof(SceneManager_t2787271929_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1598[3] = 
{
	SceneManager_t2787271929_StaticFields::get_offset_of_sceneLoaded_0(),
	SceneManager_t2787271929_StaticFields::get_offset_of_sceneUnloaded_1(),
	SceneManager_t2787271929_StaticFields::get_offset_of_activeSceneChanged_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1599 = { sizeof (Transform_t3600365921), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
