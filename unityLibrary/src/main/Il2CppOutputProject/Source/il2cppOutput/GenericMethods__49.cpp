#include "pch-cpp.hpp"





struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { &p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3, T4, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5* p5)
	{
		void* params[5] = { p1, &p2, &p3, &p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, params[4]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4, T5* p5)
	{
		void* params[5] = { p1, &p2, &p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, params[4]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3*, T4, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4, T5* p5)
	{
		void* params[5] = { p1, p2, p3, &p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, params[4]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		R ret;
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Dictionary_2_tC943D56617D8B8E84F642A39D9C23D41129D8A0D;
struct Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7;
struct Dictionary_2_t42A7C6B6AE53FB0118E4234D9C6536AF5C1F948E;
struct Dictionary_2_t6D1658640126313BDE4B1F19CE2B98BDE08F348E;
struct Dictionary_2_t28F041C4081441142A0EC7671CBE480EF50C3BBA;
struct Dictionary_2_t61D9E1A79722A10277502E526E398BA456EFD5CE;
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
struct IEnumerator_1_t47AD194552845AD2C90D830D9368D6D94022FE41;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IReadOnlyCollection_1_t3BA2CC9AEF18A0BB27101C338F2163EA51981E37;
struct IReadOnlyList_1_t9DB28FF0D751A25012BF66AB068899FB8F1A2E84;
struct KeyCollection_tBA79BEBEA5BB676141A6E773308EA17B9ADD2154;
struct KeyCollection_tA3D94FDA154FC5556378E60FB6F87E8C920BD7E3;
struct List_1_t498347DEA55185643F213F995B74FEE039FAD70F;
struct List_1_t608F513282432121FFB4853A1786723C4640BF7B;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_t3ED220D424138331023A4D1C1B67E3C63A19761B;
struct List_1_tB6CC3AFBA7164AC34B1EF29A0A73721899567AE3;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct List_1_t80D43CC426B520567FE49EEA17C1D8FD86D6696F;
struct List_1_t5FC9DC3B2571045D9D979C5CC8C26CB3FBA03617;
struct UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D;
struct UnsafeList_1_t08F6AE31B94E9EFB7804E94FC5A06EE32A6A326E;
struct UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718;
struct UnsafeList_1_t2698BCDA35C9A619C8B06830DF4348F090657175;
struct UnsafeList_1_tAF9272F566E901F8A09846C464F6535AF6B6B16B;
struct UnsafeList_1_t173126F6552F1541EC0D24B76A2112626EA85FC5;
struct UnsafeList_1_t71F5F4076B4F42633307814D517033CCA6FE8E34;
struct UnsafeList_1_tB9426D20C074F7429E5534019CDCC127142BAC51;
struct UnsafeList_1_tDFCE3387AE8658A87077253BEC37F88FD603DF84;
struct UnsafeList_1_tAAB699F827C515727975973202558FB27BEC605E;
struct UnsafeList_1_tACD8CB556CD69F1AC50A8B4894D6B230BE884C2A;
struct UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6;
struct ValueCollection_tA6B4A2D499374E540182F804CFF3672007669626;
struct ValueCollection_tC048B14FDE4C7FA0AB09DE24186FB58FCD15CFE4;
struct EntryU5BU5D_t7DC8F9C0DB00F2E0C8E2128FA9812278D31BD9A1;
struct EntryU5BU5D_t160FB27F7B8ADCD08CE3029DEFA06879D28A61A5;
struct AnimatorStateInfoU5BU5D_tDEA2B6BEAFA0A4BB9DD3A7357A66365CC5B62DED;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct AnimationStateU5BU5D_t5B8D6CC20EB9E7F6A791C202E72D66ABA5645778;
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct BaseRpcTarget_t698973F0857273C7C7EC35455C4853EB197AB29A;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IGroupRpcTarget_tB3B1D25A9DA8453F7351043382807C133A61FF4D;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2;
struct NetworkAnimator_tD8BA9A86CB82706429757E0FEDA16C813A4D1148;
struct NetworkAnimatorStateChangeHandler_t6E593CB01EAF361F1E5505A1DBC612332617979B;
struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468;
struct NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C;
struct RpcTarget_t0F23BD75DF373B0172AD08117DB945D6CD994832;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF;
struct UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4;
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926;
struct UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8;
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6;
struct Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84;
struct AnimatorParametersListContainer_t5D800273EE702BAABD5B21AC3AB68EF5823364BA;
struct TransitionStateInfo_t06B15C902172AA351BC9AE9875A5D676D05FA567;

IL2CPP_EXTERN_C RuntimeClass* AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0166BFBEA755AEC68D894E2718E0F43AC621B48E;
IL2CPP_EXTERN_C String_t* _stringLiteral0A423B3392F0CC999CACA5B01716A87105890364;
IL2CPP_EXTERN_C String_t* _stringLiteral19710C29C28F677ED5E80B5C8FFB9B9F5CD6AB3A;
IL2CPP_EXTERN_C String_t* _stringLiteral1FE195FFC680019E0D99650FBC1F7489C26EC0E2;
IL2CPP_EXTERN_C String_t* _stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B;
IL2CPP_EXTERN_C String_t* _stringLiteral6F04E86C5302630688259CCA7C31D9B8620B26C3;
IL2CPP_EXTERN_C String_t* _stringLiteral7D46E972920967646C169FAEFE29793480D87717;
IL2CPP_EXTERN_C String_t* _stringLiteral8F08B108AE90A47E2C4B3A0DC16321A36C9AFB54;
IL2CPP_EXTERN_C String_t* _stringLiteralC9DDDC1BB86D19164517493AC7ED9674192AFD37;
IL2CPP_EXTERN_C String_t* _stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralEF83955BF61125FC832C506DE4DB5985B784A2C0;
IL2CPP_EXTERN_C String_t* _stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m3A20141F3BB5E34ED56057B61131956233A92440_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m52263CF56042F57A80C268A8A38D89AD866572A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC98BDD461B319F62D6EC8507108556C3E2115CB8_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AnimatorStateInfoU5BU5D_tDEA2B6BEAFA0A4BB9DD3A7357A66365CC5B62DED;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Dictionary_2_tC943D56617D8B8E84F642A39D9C23D41129D8A0D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t7DC8F9C0DB00F2E0C8E2128FA9812278D31BD9A1* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tBA79BEBEA5BB676141A6E773308EA17B9ADD2154* ____keys;
	ValueCollection_tA6B4A2D499374E540182F804CFF3672007669626* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t6D1658640126313BDE4B1F19CE2B98BDE08F348E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t160FB27F7B8ADCD08CE3029DEFA06879D28A61A5* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tA3D94FDA154FC5556378E60FB6F87E8C920BD7E3* ____keys;
	ValueCollection_tC048B14FDE4C7FA0AB09DE24186FB58FCD15CFE4* ____values;
	RuntimeObject* ____syncRoot;
};
struct List_1_t608F513282432121FFB4853A1786723C4640BF7B  : public RuntimeObject
{
	AnimatorStateInfoU5BU5D_tDEA2B6BEAFA0A4BB9DD3A7357A66365CC5B62DED* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t80D43CC426B520567FE49EEA17C1D8FD86D6696F  : public RuntimeObject
{
	AnimationStateU5BU5D_t5B8D6CC20EB9E7F6A791C202E72D66ABA5645778* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct NativeArrayExtensions_t9A6F3FA904DDB64CC47FB8CECF1EE92FAFD47BA2  : public RuntimeObject
{
};
struct NativeArrayExtensions_t36BA4CCABADE7EC33970CCCB625455C3D6F85372  : public RuntimeObject
{
};
struct NativeArrayUnsafeUtility_tB4D8A974D44EE6F4B2C32D5D19861FB081F88FCE  : public RuntimeObject
{
};
struct NativeArrayUtils_t2E655F2D227C63E551ADABEE6E2964707FD2CD04  : public RuntimeObject
{
};
struct NativeCopyUtility_t577EE4AEF9DB7676D9DA1C6C103F362C93BE7B99  : public RuntimeObject
{
};
struct NativeListExt_t09746DA988A2D8D76F8749A6E91480B8C04E534E  : public RuntimeObject
{
};
struct NativeListExtensions_t703C0674A863EE05A97019B7CF6316AB98DE8817  : public RuntimeObject
{
};
struct NativeListExtensions_tBD19D126EAE99E4110644011F6C94313889B1925  : public RuntimeObject
{
};
struct NativeListUnsafeUtility_t76856F085F46022FE3879DD4EE833AE8FE1EFB19  : public RuntimeObject
{
};
struct NativeParallelHashMapExtensions_tF97CECE6CF8C190E9591A03824155DAF8142CF48  : public RuntimeObject
{
};
struct NativeParallelMultiHashMapExtensions_t2BF9A035AB74022218899A577154652BC4EB5DF3  : public RuntimeObject
{
};
struct NativeReferenceUnsafeUtility_tD55902920E8C42D91C1C498291D3A32E43CBD51B  : public RuntimeObject
{
};
struct NativeSliceExtensions_tA2B0303180122826FD5887061B8DBA5F342A726B  : public RuntimeObject
{
};
struct NativeSliceUnsafeUtility_tA7CBE88BA4246367450DB167A878F2FA408E10CD  : public RuntimeObject
{
};
struct NativeSortExtension_t69298E80751CF0D0DB847C79277B6E0A2C92A4F2  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct TransitionStateInfo_t06B15C902172AA351BC9AE9875A5D676D05FA567  : public RuntimeObject
{
	bool ___IsCrossFadeExit;
	int32_t ___Layer;
	int32_t ___OriginatingState;
	int32_t ___DestinationState;
	float ___TransitionDuration;
	int32_t ___TriggerNameHash;
	int32_t ___TransitionIndex;
};
typedef Il2CppFullySharedGenericStruct BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10;
struct DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8 
{
	union
	{
		struct
		{
		};
		uint8_t DefaultComparer_1_t4A26F5A7B2EFA2BDABB2F6FA752896E1F6506114__padding[1];
	};
};
struct DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6 
{
	union
	{
		struct
		{
		};
		uint8_t DefaultComparer_1_t4A26F5A7B2EFA2BDABB2F6FA752896E1F6506114__padding[1];
	};
};
struct DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 
{
	union
	{
		struct
		{
		};
		uint8_t DefaultComparer_1_t4A26F5A7B2EFA2BDABB2F6FA752896E1F6506114__padding[1];
	};
};
struct DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1 
{
	union
	{
		struct
		{
		};
		uint8_t DefaultComparer_1_t4A26F5A7B2EFA2BDABB2F6FA752896E1F6506114__padding[1];
	};
};
struct DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 
{
	union
	{
		struct
		{
		};
		uint8_t DefaultComparer_1_t4A26F5A7B2EFA2BDABB2F6FA752896E1F6506114__padding[1];
	};
};
struct DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 
{
	union
	{
		struct
		{
		};
		uint8_t DefaultComparer_1_t4A26F5A7B2EFA2BDABB2F6FA752896E1F6506114__padding[1];
	};
};
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
struct NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 
{
	UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___m_ListData;
};
struct NativeList_1_t0ED3ACF089127F9B31C902007D8D412B32309F70 
{
	UnsafeList_1_t08F6AE31B94E9EFB7804E94FC5A06EE32A6A326E* ___m_ListData;
};
struct NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 
{
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___m_ListData;
};
struct NativeList_1_tCE9294F8D50CBBA2C6B0936EF47668AABCBFC129 
{
	UnsafeList_1_t2698BCDA35C9A619C8B06830DF4348F090657175* ___m_ListData;
};
struct NativeList_1_tA510052F24CA28040AE5D7A8BE6C6002296124A7 
{
	UnsafeList_1_tAF9272F566E901F8A09846C464F6535AF6B6B16B* ___m_ListData;
};
struct NativeList_1_tC4B04B5B98BEA4587A1187DC60F8C87F0920C4B1 
{
	UnsafeList_1_t173126F6552F1541EC0D24B76A2112626EA85FC5* ___m_ListData;
};
struct NativeList_1_t60650BAC55FA3E0806E2A7B303C8A4B1B3176735 
{
	UnsafeList_1_t71F5F4076B4F42633307814D517033CCA6FE8E34* ___m_ListData;
};
struct NativeList_1_tAD91DD25D285B5D001ACB76D5C1B638BA3E8E74D 
{
	UnsafeList_1_tB9426D20C074F7429E5534019CDCC127142BAC51* ___m_ListData;
};
struct NativeList_1_tB3DABDBC2CD98907BC398426279D21CF380DD910 
{
	UnsafeList_1_tDFCE3387AE8658A87077253BEC37F88FD603DF84* ___m_ListData;
};
struct NativeList_1_t7E4EB94D72E542AD9AE709E29DD6C427017735C8 
{
	UnsafeList_1_tAAB699F827C515727975973202558FB27BEC605E* ___m_ListData;
};
struct NativeList_1_t849341A90D92C0EDCE3EB2109A577334F76D37DA 
{
	UnsafeList_1_tACD8CB556CD69F1AC50A8B4894D6B230BE884C2A* ___m_ListData;
};
struct NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 
{
	UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* ___m_ListData;
};
struct NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t2473975F09997A0D294B91A7118D96C985053A91 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t9BFFF9586EFFB05517670778FC645523EFB2AA41 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t135E2A23AA4EBDBCA846942F90F29A5004E8ACB5 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t0ECD53A3C3E3274982441D79651584C7F63B6E97 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t79A5C61472DAE981DC745392A352491AEE9CF277 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t7B1E7744FBAF078F78D93365DECA9572D295ECAE 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tD956D063FC554DB22B1EA853619C01F718853C7F 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t59F7AA82EEDAFC28903AC471BA1AB4D4AB648897 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tA78E8047D38CFCADF8D3048D186F14050CEF9458 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t10EE15BD47CA7D87727E99494E581ADA4021B6B2 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
typedef Il2CppFullySharedGenericStruct SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E;
typedef Il2CppFullySharedGenericStruct SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A;
typedef Il2CppFullySharedGenericStruct ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829;
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	int32_t ___m_Name;
	int32_t ___m_Path;
	int32_t ___m_FullPath;
	float ___m_NormalizedTime;
	float ___m_Length;
	float ___m_Speed;
	float ___m_SpeedMultiplier;
	int32_t ___m_Tag;
	int32_t ___m_Loop;
};
struct AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD 
{
	int32_t ___m_FullPath;
	int32_t ___m_UserName;
	int32_t ___m_Name;
	bool ___m_HasFixedDuration;
	float ___m_Duration;
	float ___m_NormalizedTime;
	bool ___m_AnyState;
	int32_t ___m_TransitionType;
};
struct AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_pinvoke
{
	int32_t ___m_FullPath;
	int32_t ___m_UserName;
	int32_t ___m_Name;
	int32_t ___m_HasFixedDuration;
	float ___m_Duration;
	float ___m_NormalizedTime;
	int32_t ___m_AnyState;
	int32_t ___m_TransitionType;
};
struct AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_com
{
	int32_t ___m_FullPath;
	int32_t ___m_UserName;
	int32_t ___m_Name;
	int32_t ___m_HasFixedDuration;
	float ___m_Duration;
	float ___m_NormalizedTime;
	int32_t ___m_AnyState;
	int32_t ___m_TransitionType;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB 
{
	int32_t ___Id;
	int32_t ___Version;
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			uint64_t ___m_rawData;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[8];
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 
{
	ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* ___Handle;
};
struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC 
{
	WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* ___Handle;
};
#pragma pack(push, tp, 1)
struct FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint64_t ___byte0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint64_t ___byte0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_OffsetPadding[8];
					uint64_t ___byte0008;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_OffsetPadding_forAlignmentOnly[8];
					uint64_t ___byte0008_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4__padding[16];
	};
};
#pragma pack(pop, tp)
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B 
{
	int32_t ___U3CindexU3Ek__BackingField;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA 
{
	uint16_t ___Magic;
	uint16_t ___BatchCount;
	int32_t ___BatchSize;
	uint64_t ___BatchHash;
};
struct NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 
{
	uint32_t ___MessageType;
	uint32_t ___MessageSize;
};
struct NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 
{
	int32_t ___Id;
};
struct PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 
{
	int32_t ___m_Index1;
	uint16_t ___m_World0;
	uint16_t ___m_Generation;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC 
{
	int32_t ___passId;
	int32_t ___inputSlot;
};
struct RpcReceiveParams_tD05099D00D0DCD7C712D970AD96696DF2FB21D98 
{
	uint64_t ___SenderClientId;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	uint64_t ___m_SubId1;
	uint64_t ___m_SubId2;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UnsafeParallelHashMapBucketData_tCF0D4586EE0009033007B1E1BD04D40BA0A9C8E9 
{
	uint8_t* ___values;
	uint8_t* ___keys;
	uint8_t* ___next;
	uint8_t* ___buckets;
	int32_t ___bucketCapacityMask;
};
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t* ___values;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t* ___values_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keys_OffsetPadding[8];
			uint8_t* ___keys;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keys_OffsetPadding_forAlignmentOnly[8];
			uint8_t* ___keys_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___next_OffsetPadding[16];
			uint8_t* ___next;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___next_OffsetPadding_forAlignmentOnly[16];
			uint8_t* ___next_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___buckets_OffsetPadding[24];
			uint8_t* ___buckets;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___buckets_OffsetPadding_forAlignmentOnly[24];
			uint8_t* ___buckets_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyCapacity_OffsetPadding[32];
			int32_t ___keyCapacity;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyCapacity_OffsetPadding_forAlignmentOnly[32];
			int32_t ___keyCapacity_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding[36];
			int32_t ___bucketCapacityMask;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding_forAlignmentOnly[36];
			int32_t ___bucketCapacityMask_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding[40];
			int32_t ___allocatedIndexLength;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding_forAlignmentOnly[40];
			int32_t ___allocatedIndexLength_forAlignmentOnly;
		};
	};
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct float4_t545A994996126766890C1F28B43EA823F2410190 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 
{
	union
	{
		struct
		{
		};
		uint8_t ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3__padding[1];
	};
};
struct RowingProgressEntry_t3BA27C9184456A51ACBC15629622165F645C10E0 
{
	uint64_t ___clientId;
	int32_t ___bestScore;
	bool ___finished;
};
struct RowingProgressEntry_t3BA27C9184456A51ACBC15629622165F645C10E0_marshaled_pinvoke
{
	uint64_t ___clientId;
	int32_t ___bestScore;
	int32_t ___finished;
};
struct RowingProgressEntry_t3BA27C9184456A51ACBC15629622165F645C10E0_marshaled_com
{
	uint64_t ___clientId;
	int32_t ___bestScore;
	int32_t ___finished;
};
struct PlayerScoreEntry_t1589D41E7EDE41B6E5767D8713948FB500561655 
{
	uint64_t ___clientId;
	int32_t ___score;
};
struct RunnerStateEntry_t5E91402350119B5BEC9FF4777E42F66EF8D4C597 
{
	uint64_t ___clientId;
	float ___progress01;
	float ___loudness01;
	float ___strafeWorldX;
	float ___jumpRemainingSeconds;
	bool ___finished;
	float ___finishTimeSeconds;
};
struct RunnerStateEntry_t5E91402350119B5BEC9FF4777E42F66EF8D4C597_marshaled_pinvoke
{
	uint64_t ___clientId;
	float ___progress01;
	float ___loudness01;
	float ___strafeWorldX;
	float ___jumpRemainingSeconds;
	int32_t ___finished;
	float ___finishTimeSeconds;
};
struct RunnerStateEntry_t5E91402350119B5BEC9FF4777E42F66EF8D4C597_marshaled_com
{
	uint64_t ___clientId;
	float ___progress01;
	float ___loudness01;
	float ___strafeWorldX;
	float ___jumpRemainingSeconds;
	int32_t ___finished;
	float ___finishTimeSeconds;
};
struct ClaimEntry_tEC10AE3878CE528667B104E561CC875463CCA5AD 
{
	int32_t ___differenceId;
	uint64_t ___clientId;
};
struct AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187 
{
	bool ___HasBeenProcessed;
	List_1_t80D43CC426B520567FE49EEA17C1D8FD86D6696F* ___AnimationStates;
	int32_t ___IsDirtyCount;
};
struct AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187_marshaled_pinvoke
{
	int32_t ___HasBeenProcessed;
	List_1_t80D43CC426B520567FE49EEA17C1D8FD86D6696F* ___AnimationStates;
	int32_t ___IsDirtyCount;
};
struct AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187_marshaled_com
{
	int32_t ___HasBeenProcessed;
	List_1_t80D43CC426B520567FE49EEA17C1D8FD86D6696F* ___AnimationStates;
	int32_t ___IsDirtyCount;
};
struct AnimationState_t90091AD2757C132602279750EFF7907F066817B0 
{
	bool ___HasBeenProcessed;
	int32_t ___StateHash;
	float ___NormalizedTime;
	int32_t ___Layer;
	float ___Weight;
	float ___Duration;
	bool ___Transition;
	bool ___CrossFade;
	uint8_t ___m_StateFlags;
	int32_t ___DestinationStateHash;
};
struct AnimationState_t90091AD2757C132602279750EFF7907F066817B0_marshaled_pinvoke
{
	int32_t ___HasBeenProcessed;
	int32_t ___StateHash;
	float ___NormalizedTime;
	int32_t ___Layer;
	float ___Weight;
	float ___Duration;
	int32_t ___Transition;
	int32_t ___CrossFade;
	uint8_t ___m_StateFlags;
	int32_t ___DestinationStateHash;
};
struct AnimationState_t90091AD2757C132602279750EFF7907F066817B0_marshaled_com
{
	int32_t ___HasBeenProcessed;
	int32_t ___StateHash;
	float ___NormalizedTime;
	int32_t ___Layer;
	float ___Weight;
	float ___Duration;
	int32_t ___Transition;
	int32_t ___CrossFade;
	uint8_t ___m_StateFlags;
	int32_t ___DestinationStateHash;
};
struct ParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Parameters;
};
struct ParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC_marshaled_pinvoke
{
	Il2CppSafeArray* ___Parameters;
};
struct ParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC_marshaled_com
{
	Il2CppSafeArray* ___Parameters;
};
struct SubQueueItem_tAE6DA2A0B68107490190DB4680442767B9D420B7 
{
	int32_t ___connection;
	int32_t ___idx;
};
struct PipelineImpl_t422927EB35F759F18ECBA1C7B075AAC92918017E 
{
	int32_t ___FirstStageIndex;
	int32_t ___NumStages;
	int32_t ___receiveBufferOffset;
	int32_t ___sendBufferOffset;
	int32_t ___sharedBufferOffset;
	int32_t ___headerCapacity;
	int32_t ___payloadCapacity;
};
struct ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 
{
	int32_t ___Offset;
	int32_t ___Size;
};
struct U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62__padding[160];
	};
};
struct ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA 
{
	union
	{
		struct
		{
		};
		uint8_t ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA__padding[1];
	};
};
struct EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B 
{
	union
	{
		struct
		{
		};
		uint8_t EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B__padding[1];
	};
};
struct U3CValueU3Ee__FixedBuffer_tEC352804A969709D0AD6D5F8EE66E24EB79FC398 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CValueU3Ee__FixedBuffer_tEC352804A969709D0AD6D5F8EE66E24EB79FC398__padding[4];
	};
};
struct U3CPacketU3Ee__FixedBuffer_t55E02F8104D901D9FE76233288015124810472C7 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CPacketU3Ee__FixedBuffer_t55E02F8104D901D9FE76233288015124810472C7__padding[1472];
	};
};
struct ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF 
{
	intptr_t ____value;
};
struct ByReference_1_tEE7AA2C5164450CDD692EAA07021ED2A5C59A485 
{
	intptr_t ____value;
};
struct ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 
{
	intptr_t ____value;
};
struct ByReference_1_tCA902CDE792132BFB82E414335D24D0EDA9FC559 
{
	intptr_t ____value;
};
struct ByReference_1_tAF1677F5CC47801E99D4B73A467E457CFDA063F9 
{
	intptr_t ____value;
};
struct ByReference_1_t262F9DD539C2F73D7482B394D586E03B7CD1972B 
{
	intptr_t ____value;
};
struct ByReference_1_tDEBFA305DD44EB5DECC7D606D70182963FBA207D 
{
	intptr_t ____value;
};
struct ByReference_1_t2DF3BD16D90BA720C1C3CE9E5C782DD340F4E99F 
{
	intptr_t ____value;
};
struct ByReference_1_t00FFECF7F8F9508AC295597A1250BC3A466B7FEE 
{
	intptr_t ____value;
};
struct ByReference_1_t1DC25DAE18E76C99D6ED832F8777ECF86FEF8AF8 
{
	intptr_t ____value;
};
struct ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 
{
	intptr_t ____value;
};
struct ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 
{
	intptr_t ____value;
};
struct ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A 
{
	intptr_t ____value;
};
struct Enumerator_tE77DBDC5F3E4FED1452607A3D6A20E7C159AA0B8 
{
	List_1_t80D43CC426B520567FE49EEA17C1D8FD86D6696F* ____list;
	int32_t ____index;
	int32_t ____version;
	AnimationState_t90091AD2757C132602279750EFF7907F066817B0 ____current;
};
struct NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4 
{
	void* ___m_Data;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct SortJobDefer_2_t08B115591D33E0E12BE3194612F33E29C62FD509 
{
	NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___Data;
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___Comp;
};
typedef Il2CppFullySharedGenericStruct SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A;
struct SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03 
{
	int32_t* ___Data;
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___Comp;
	int32_t ___Length;
};
struct SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478 
{
	uint64_t* ___Data;
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___Comp;
	int32_t ___Length;
};
struct SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD 
{
	Il2CppFullySharedGenericStruct* ___Data;
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___Comp;
	int32_t ___Length;
};
struct UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D 
{
	uint8_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t2698BCDA35C9A619C8B06830DF4348F090657175 
{
	NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tAAB699F827C515727975973202558FB27BEC605E 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 
{
	Il2CppFullySharedGenericStruct* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tBB6961066733E78B8C22E5C4D4D5FF9A581981D1 
{
	Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct AccessFlags_tB7D400C853C05A1DB9C6B56DF14E43721F0B1739 
{
	int32_t ___value__;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 
{
	intptr_t ___m_Ptr;
	int32_t ___m_Version;
};
struct BoundingBoxClassifications_tDD23584A55BCD82E9D0E95DEA796190BF9AFAA0E 
{
	uint32_t ___value__;
};
struct BufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091 
{
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_Reader;
};
struct BufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4 
{
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___m_Writer;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExtendedFeatureFlags_t736CECC24E1DDF78CDF8A2B134DFF9B1CA2BE01F 
{
	int32_t ___value__;
};
#pragma pack(push, tp, 1)
struct FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_OffsetPadding[32];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0032;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0032_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_OffsetPadding[48];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0048;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0048_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1__padding[64];
	};
};
#pragma pack(pop, tp)
struct LightType_t2D4D43054E7473EECEB54493C0055AE074780234 
{
	int32_t ___value__;
};
struct LocalDeferMode_t5A0A748A1BF083CF1ABB97466747E233B90850DA 
{
	int32_t ___value__;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct NativeBitArray_t7D47863D3DFF1D41EE133D5107FFAF0D697BC00E 
{
	UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* ___m_BitArray;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_Allocator;
};
struct NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 
{
	ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB ___m_ConnectionId;
};
struct NetworkDelivery_t8AEDF5FAB32A531130149F7D6D89023D3164D6AD 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct PassMergeState_t7815130D2990D177421E7CB405CE173EC704A117 
{
	int32_t ___value__;
};
struct PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 
{
	PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 ___m_PhysicsHandle;
};
struct PhysicsRotate_t3AF8BA583108282C8B59872CB621EC366BC042B0 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction;
};
struct PlaneAlignment_t531EADCD75A8A621FF67C4788965BF89F076CFBC 
{
	int32_t ___value__;
};
struct PlaneClassifications_t5DBCE4263A18266041ADF725865DC7247E750AC8 
{
	uint32_t ___value__;
};
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
};
struct RenderGraphPassType_tD00EC2DAA135C660EE7E71652291A4672104EA2D 
{
	int32_t ___value__;
};
struct RenderGraphResourceType_t5F552AF06E38DEC5775B77F13C8783A895FCD086 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct ShadingRateCombiner_tF7F5DDD676DF45F67B2A7BC7F14373F4DFAD2B1C 
{
	int32_t ___value__;
};
struct ShadingRateFragmentSize_tE61BBA9B957F4537F04519746FCABE0F5FA94C9F 
{
	int32_t ___value__;
};
struct ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF 
{
	int32_t ___m_CullingPlaneCount;
	U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62 ___m_CullingPlanes;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_CullingSphere;
	float ___m_ShadowCascadeBlendCullingFactor;
	float ___m_CullingNearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_CullingMatrix;
};
struct TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642 
{
	int32_t ___value__;
};
struct TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D 
{
	int32_t ___value__;
};
struct TrackingState_t5487241B6888BB15D8448EBBC640835A011DBBC2 
{
	int32_t ___value__;
};
struct UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4 
{
	uint64_t* ___Ptr;
	int32_t ___Length;
	int32_t ___Capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2 
{
	void* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct VisibleLightFlags_t337DB92EFB0014AD6A250E1E45338B1194657CD8 
{
	int32_t ___value__;
};
struct XRMarkerType_tD5E73F22E94539514EB7EBFBDFDDD02A44A48E95 
{
	int32_t ___value__;
};
struct XRSpatialBufferType_t98AF612F3F015861B47D0E4ADA7DFE9839FCE0B5 
{
	int32_t ___value__;
};
struct XRTextureType_t5591061F923F907341986D46F0322DE15DCB9955 
{
	int32_t ___value__;
};
struct Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC 
{
	intptr_t ___Pointer;
	int32_t ___Items;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct HopPawnEntry_t47AA250F90984ADD7C3282787B94200CCFDEA02E 
{
	uint64_t ___clientId;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos;
	float ___yawDeg;
	int32_t ___currentPlatformIndex;
	int32_t ___bestPlatformIndex;
	bool ___isJumping;
	bool ___isCharging;
};
struct HopPawnEntry_t47AA250F90984ADD7C3282787B94200CCFDEA02E_marshaled_pinvoke
{
	uint64_t ___clientId;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos;
	float ___yawDeg;
	int32_t ___currentPlatformIndex;
	int32_t ___bestPlatformIndex;
	int32_t ___isJumping;
	int32_t ___isCharging;
};
struct HopPawnEntry_t47AA250F90984ADD7C3282787B94200CCFDEA02E_marshaled_com
{
	uint64_t ___clientId;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos;
	float ___yawDeg;
	int32_t ___currentPlatformIndex;
	int32_t ___bestPlatformIndex;
	int32_t ___isJumping;
	int32_t ___isCharging;
};
struct BoatStateEntry_tF74997E8F9D2505698CBE8554168F8D9FBAD669A 
{
	uint64_t ___clientId;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos;
	float ___yawDeg;
};
struct AnimatorParamCache_t8B920B60D5DFBA3F4443930387E48A47652E475D 
{
	bool ___Exclude;
	int32_t ___Hash;
	int32_t ___Type;
	U3CValueU3Ee__FixedBuffer_tEC352804A969709D0AD6D5F8EE66E24EB79FC398 ___Value;
};
struct AnimatorParamCache_t8B920B60D5DFBA3F4443930387E48A47652E475D_marshaled_pinvoke
{
	int32_t ___Exclude;
	int32_t ___Hash;
	int32_t ___Type;
	U3CValueU3Ee__FixedBuffer_tEC352804A969709D0AD6D5F8EE66E24EB79FC398 ___Value;
};
struct AnimatorParamCache_t8B920B60D5DFBA3F4443930387E48A47652E475D_marshaled_com
{
	int32_t ___Exclude;
	int32_t ___Hash;
	int32_t ___Type;
	U3CValueU3Ee__FixedBuffer_tEC352804A969709D0AD6D5F8EE66E24EB79FC398 ___Value;
};
struct AuthorityModes_t806779FFC4AB13524141AF858302480E032E4D54 
{
	int32_t ___value__;
};
struct __RpcExecStage_t5742FF9F2E363A53ECA9C00231E9BE396A6A6F39 
{
	int32_t ___value__;
};
struct ReceiveQueueItem_tC07D121A91E2DA50FCBD08D1720CE0B4BA0F93BE 
{
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___Reader;
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 ___Header;
	uint64_t ___SenderId;
	float ___Timestamp;
	int32_t ___MessageHeaderSerializedSize;
};
struct OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D 
{
	bool ___valid;
	int32_t ___lastUsedFrameIndex;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___viewID;
};
struct OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_marshaled_pinvoke
{
	int32_t ___valid;
	int32_t ___lastUsedFrameIndex;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___viewID;
};
struct OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_marshaled_com
{
	int32_t ___valid;
	int32_t ___lastUsedFrameIndex;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___viewID;
};
struct TransformWriteMode_tAC88F83F00B2B74873BDD3631AC07283279591D4 
{
	int32_t ___value__;
};
struct SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A 
{
	float4_t545A994996126766890C1F28B43EA823F2410190 ___receiverSphereLightSpace;
	float ___cascadeBlendCullingFactor;
};
struct Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127 
{
	bool ___isActive;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___viewID;
	int32_t ___planeCount;
	int32_t ___lastUsedFrameIndex;
};
struct Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127_marshaled_pinvoke
{
	int32_t ___isActive;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___viewID;
	int32_t ___planeCount;
	int32_t ___lastUsedFrameIndex;
};
struct Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127_marshaled_com
{
	int32_t ___isActive;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___viewID;
	int32_t ___planeCount;
	int32_t ___lastUsedFrameIndex;
};
struct PendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E 
{
	ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB ___Connection;
	int32_t ___BufferIndex;
};
struct SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 
{
	uint64_t ___ClientId;
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___NetworkPipeline;
};
struct SettingsOptions_t935A71692F21EE9D959FCAC00574AA018F8BA2CB 
{
	uint16_t ___value__;
};
struct BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B 
{
	BufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091 ___m_Implementation;
};
struct BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 
{
	BufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4 ___m_Implementation;
};
struct FixedList64Bytes_1_t137BDA0D26652E438404CA31731069295DAC8E1C 
{
	alignas(8) FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1 ___data;
};
struct NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t47E59A74649F4207823BA714DF59C940F74917E1 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t20401E81C3977721C4821E208D326838C60AB66B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tFF516D1DBC720351B560D9B3984FB895B01FD6E5 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB946AB7C39022A3069BADCA1BFB2EB857A84AAD9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6A74899EB7F47397AF0F8B81D065AF9E313C4830 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD3E166440DED38454F2B25BF9A375A5EBF8C47AB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4C11F337CF2A7773644650D071AA5F21F158A5E0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t21CCCF3F852F2C88956531DDBEE7D161399D1ADD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t113406E16457EBB6F723AA50A3A4A0EA14B8AFD2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC4A81087A69EB70E412E0F4AAC574880C05C7023 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD5E555C673712EB18839EB195B02215710DC5692 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t617E9AB997FA976725092F465E5BB075180FFF30 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9086C71A5110879F9F76FDDC0009F7C7CF9D1B36 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9F2DDC824E9AE9423E5F4D96E7EC4B5DC22B2E26 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3C4EB00D6E5BF0CBB74701AAFE714045834F8649 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7A7D87C39A73467D9004DF13D6673E93BD2330CA 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t00D6A202982682D01048CE46A6B5D3CE5E14FBDB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAB7416F94D07509D378DE0809D1A7FD14850DB95 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF3D0890AE9B0D75F6AD24D3F71812E749566F650 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7D062F6088F0A20A4420B76C6C8A5BEF40AC0CEB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2CBD21EAB7229CDAFB0E96544889F7EB97241310 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDD3CE9EF5F70858510DABB35CED98E57E5D5B325 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t44BB0C991DF66AC27C4E279C671B9CDAD4DF904C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tCBD32A38A0C6CD51C1BD885673896F83A3B0286C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t297CCD1F4B5B2F0D5D4F02F6294D70E2F2129CE3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF0A83538A02306EA7A8F22FEA945A6961365E8C8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD66836534F00AADA4D14B93A8662AF8DA2D65075 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t251C0B6A4D277C92366F302523FD5C0031FA1B31 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB8D8B86A987B7E27BD621893A826604AA3A66C5C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t43EBD22763C170C0B890F032988B8DB22807DDDE 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0BBC61E0123FC9C982A7F62EBA55B32F45F1C0F3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t85010600A230013CEAFF0C4764FC2A49F522CBE4 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeParallelHashMap_2_t75E2745DBFEAC14A7B7306A89FBFB3B562CEA497 
{
	UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707 ___m_HashMapData;
};
struct NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22 
{
	UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F ___m_MultiHashMapData;
};
struct ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 
{
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC220B03984F68939D089A1AE074266FCC0EC16CA 
{
	ByReference_1_tEE7AA2C5164450CDD692EAA07021ED2A5C59A485 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t7757FD353EBEBCCEB9A915C9409F036D59CBB91D 
{
	ByReference_1_tCA902CDE792132BFB82E414335D24D0EDA9FC559 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t78DDDA91D3B852BA5CC6CB683C25798669394299 
{
	ByReference_1_tAF1677F5CC47801E99D4B73A467E457CFDA063F9 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tDAF4105BB07ED8FF6685C401967838F0DA25C893 
{
	ByReference_1_t262F9DD539C2F73D7482B394D586E03B7CD1972B ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t018614F605F46379EE13B48E466D84493953A32A 
{
	ByReference_1_tDEBFA305DD44EB5DECC7D606D70182963FBA207D ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tE65ADDA676D9E1E10FBABBC43E6D77B76418998B 
{
	ByReference_1_t2DF3BD16D90BA720C1C3CE9E5C782DD340F4E99F ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t5D5DD3148CFA9A9039AB9D6C3D1E0E570A804E34 
{
	ByReference_1_t00FFECF7F8F9508AC295597A1250BC3A466B7FEE ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tEF932A6C6B8BDDF6BAAED1BF091FD48169920DDC 
{
	ByReference_1_t1DC25DAE18E76C99D6ED832F8777ECF86FEF8AF8 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer;
	int32_t ____length;
};
struct Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 ____pointer;
	int32_t ____length;
};
struct Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 
{
	ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A ____pointer;
	int32_t ____length;
};
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_SubsumedById;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Center;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size;
	int32_t ___m_Alignment;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	uint32_t ___m_Classifications;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_ParentId;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD 
{
	int32_t ___passId;
	int32_t ___type;
	bool ___hasFoveatedRasterization;
	int32_t ___extendedFeatureFlags;
	int32_t ___tag;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
	int32_t ___mergeState;
	int32_t ___nativePassIndex;
	int32_t ___nativeSubPassIndex;
	int32_t ___firstInput;
	int32_t ___numInputs;
	int32_t ___firstOutput;
	int32_t ___numOutputs;
	int32_t ___firstFragment;
	int32_t ___numFragments;
	int32_t ___firstFragmentInput;
	int32_t ___numFragmentInputs;
	int32_t ___firstSampledOnlyRaster;
	int32_t ___numSampledOnlyRaster;
	int32_t ___firstRandomAccessResource;
	int32_t ___numRandomAccessResources;
	int32_t ___firstCreate;
	int32_t ___numCreated;
	int32_t ___firstDestroy;
	int32_t ___numDestroyed;
	int32_t ___shadingRateImageIndex;
	int32_t ___fragmentInfoWidth;
	int32_t ___fragmentInfoHeight;
	int32_t ___fragmentInfoVolumeDepth;
	int32_t ___fragmentInfoSamples;
	int32_t ___waitOnGraphicsFencePassId;
	int32_t ___awaitingMyGraphicsFencePassId;
	bool ___asyncCompute;
	bool ___hasSideEffects;
	bool ___culled;
	bool ___beginNativeSubpass;
	bool ___fragmentInfoValid;
	bool ___fragmentInfoHasDepth;
	bool ___insertGraphicsFence;
	bool ___hasShadingRateStates;
};
struct PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_marshaled_pinvoke
{
	int32_t ___passId;
	int32_t ___type;
	int32_t ___hasFoveatedRasterization;
	int32_t ___extendedFeatureFlags;
	int32_t ___tag;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
	int32_t ___mergeState;
	int32_t ___nativePassIndex;
	int32_t ___nativeSubPassIndex;
	int32_t ___firstInput;
	int32_t ___numInputs;
	int32_t ___firstOutput;
	int32_t ___numOutputs;
	int32_t ___firstFragment;
	int32_t ___numFragments;
	int32_t ___firstFragmentInput;
	int32_t ___numFragmentInputs;
	int32_t ___firstSampledOnlyRaster;
	int32_t ___numSampledOnlyRaster;
	int32_t ___firstRandomAccessResource;
	int32_t ___numRandomAccessResources;
	int32_t ___firstCreate;
	int32_t ___numCreated;
	int32_t ___firstDestroy;
	int32_t ___numDestroyed;
	int32_t ___shadingRateImageIndex;
	int32_t ___fragmentInfoWidth;
	int32_t ___fragmentInfoHeight;
	int32_t ___fragmentInfoVolumeDepth;
	int32_t ___fragmentInfoSamples;
	int32_t ___waitOnGraphicsFencePassId;
	int32_t ___awaitingMyGraphicsFencePassId;
	int32_t ___asyncCompute;
	int32_t ___hasSideEffects;
	int32_t ___culled;
	int32_t ___beginNativeSubpass;
	int32_t ___fragmentInfoValid;
	int32_t ___fragmentInfoHasDepth;
	int32_t ___insertGraphicsFence;
	int32_t ___hasShadingRateStates;
};
struct PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_marshaled_com
{
	int32_t ___passId;
	int32_t ___type;
	int32_t ___hasFoveatedRasterization;
	int32_t ___extendedFeatureFlags;
	int32_t ___tag;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
	int32_t ___mergeState;
	int32_t ___nativePassIndex;
	int32_t ___nativeSubPassIndex;
	int32_t ___firstInput;
	int32_t ___numInputs;
	int32_t ___firstOutput;
	int32_t ___numOutputs;
	int32_t ___firstFragment;
	int32_t ___numFragments;
	int32_t ___firstFragmentInput;
	int32_t ___numFragmentInputs;
	int32_t ___firstSampledOnlyRaster;
	int32_t ___numSampledOnlyRaster;
	int32_t ___firstRandomAccessResource;
	int32_t ___numRandomAccessResources;
	int32_t ___firstCreate;
	int32_t ___numCreated;
	int32_t ___firstDestroy;
	int32_t ___numDestroyed;
	int32_t ___shadingRateImageIndex;
	int32_t ___fragmentInfoWidth;
	int32_t ___fragmentInfoHeight;
	int32_t ___fragmentInfoVolumeDepth;
	int32_t ___fragmentInfoSamples;
	int32_t ___waitOnGraphicsFencePassId;
	int32_t ___awaitingMyGraphicsFencePassId;
	int32_t ___asyncCompute;
	int32_t ___hasSideEffects;
	int32_t ___culled;
	int32_t ___beginNativeSubpass;
	int32_t ___fragmentInfoValid;
	int32_t ___fragmentInfoHasDepth;
	int32_t ___insertGraphicsFence;
	int32_t ___hasShadingRateStates;
};
struct PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	PhysicsRotate_t3AF8BA583108282C8B59872CB621EC366BC042B0 ___rotation;
};
struct ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C 
{
	uint32_t ___m_VersionIndex;
	uint32_t ___m_Validity;
	int32_t ___m_Type;
};
struct RpcSendParams_t39151164F00EFC9D0A040DC4CAB0A7954024020A 
{
	BaseRpcTarget_t698973F0857273C7C7EC35455C4853EB197AB29A* ___Target;
	int32_t ___LocalDeferMode;
};
struct RpcSendParams_t39151164F00EFC9D0A040DC4CAB0A7954024020A_marshaled_pinvoke
{
	BaseRpcTarget_t698973F0857273C7C7EC35455C4853EB197AB29A* ___Target;
	int32_t ___LocalDeferMode;
};
struct RpcSendParams_t39151164F00EFC9D0A040DC4CAB0A7954024020A_marshaled_com
{
	BaseRpcTarget_t698973F0857273C7C7EC35455C4853EB197AB29A* ___Target;
	int32_t ___LocalDeferMode;
};
struct ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projectionMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___shadowTransform;
	int32_t ___offsetX;
	int32_t ___offsetY;
	int32_t ___resolution;
	ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF ___splitData;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 
{
	int32_t ___m_LightType;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_FinalColor;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ScreenRect;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_LocalToWorldMatrix;
	float ___m_Range;
	float ___m_SpotAngle;
	float ___m_InnerSpotAngle;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_AreaSize;
	float ___m_ShapeRadius;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
	int32_t ___m_Flags;
};
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	Guid_t ___m_SessionId;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_ParentId;
};
struct XRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___U3CtrackableIdU3Ek__BackingField;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CposeU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CtrackingStateU3Ek__BackingField;
	intptr_t ___U3CnativePtrU3Ek__BackingField;
	uint32_t ___U3CclassificationsU3Ek__BackingField;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___U3CparentIdU3Ek__BackingField;
};
struct XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_LeftEyePose;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_RightEyePose;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_FixationPoint;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_ParentId;
};
struct XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	float ___m_EstimatedHeightScaleFactor;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_ParentId;
};
struct XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	Guid_t ___m_SessionId;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_ParentId;
};
struct XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_ParentId;
};
struct XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	float ___m_Distance;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_HitTrackableId;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_ParentId;
};
struct XRSpatialBuffer_tFD539C3057967D388337CBFF20FC0599DEF9C776 
{
	uint64_t ___U3CbufferIdU3Ek__BackingField;
	int32_t ___U3CbufferTypeU3Ek__BackingField;
};
struct XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 
{
	intptr_t ___m_NativeTexture;
	int32_t ___m_Width;
	int32_t ___m_Height;
	int32_t ___m_MipmapCount;
	int32_t ___m_Format;
	int32_t ___m_PropertyNameId;
	int32_t ___m_Depth;
	int32_t ___m_Dimension;
	int32_t ___m_TextureType;
};
struct XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id;
	Guid_t ___m_SourceImageId;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_ParentId;
};
struct XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	Guid_t ___m_ReferenceObjectGuid;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_ParentId;
};
struct ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE 
{
	uint16_t ___visibleLightIndex;
	uint16_t ___perLightShadowSliceIndex;
	uint16_t ___requestedResolution;
	uint16_t ___offsetX;
	uint16_t ___offsetY;
	uint16_t ___allocatedResolution;
	uint16_t ___m_ShadowProperties;
};
struct Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 
{
	Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC ___Range;
	int32_t ___BytesPerItem;
	int32_t ___AllocatedItems;
	uint8_t ___Log2Alignment;
	uint8_t ___Padding0;
	uint16_t ___Padding1;
	uint32_t ___Padding2;
};
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6 
{
	uint8_t* ___BufferPointer;
	int32_t ___Position;
	int32_t ___Length;
	int32_t ___Capacity;
	int32_t ___MaxCapacity;
	int32_t ___Allocator;
	bool ___BufferGrew;
};
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6_marshaled_pinvoke
{
	uint8_t* ___BufferPointer;
	int32_t ___Position;
	int32_t ___Length;
	int32_t ___Capacity;
	int32_t ___MaxCapacity;
	int32_t ___Allocator;
	int32_t ___BufferGrew;
};
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6_marshaled_com
{
	uint8_t* ___BufferPointer;
	int32_t ___Position;
	int32_t ___Length;
	int32_t ___Capacity;
	int32_t ___MaxCapacity;
	int32_t ___Allocator;
	int32_t ___BufferGrew;
};
struct Request_tAA55F47806E39B0E19B53273DCBFB5CF457F9187 
{
	UnsafeList_1_tBB6961066733E78B8C22E5C4D4D5FF9A581981D1 ___info;
	AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 ___readback;
};
struct SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 
{
	NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA ___BatchHeader;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___Writer;
	int32_t ___NetworkDelivery;
};
struct UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 
{
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___pipeline;
	int32_t ___stage;
	NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___connection;
};
struct UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 
{
	UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D ___meshLods;
	UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D ___crossFades;
};
struct ValueTuple_2_t4CF93CEF0394185EBB5E5DFF70EA5EA8C34A840D 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___Item1;
	int32_t ___Item2;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
	int32_t ___accessFlags;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
};
struct PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
};
struct PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
};
struct PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
	int32_t ___index;
	bool ___preserveCounterValue;
};
struct PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B_marshaled_pinvoke
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
	int32_t ___index;
	int32_t ___preserveCounterValue;
};
struct PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B_marshaled_com
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
	int32_t ___index;
	int32_t ___preserveCounterValue;
};
struct RpcParams_t230EE00CD9A98836455C756E14F0C575971412FD 
{
	RpcSendParams_t39151164F00EFC9D0A040DC4CAB0A7954024020A ___Send;
	RpcReceiveParams_tD05099D00D0DCD7C712D970AD96696DF2FB21D98 ___Receive;
};
struct RpcParams_t230EE00CD9A98836455C756E14F0C575971412FD_marshaled_pinvoke
{
	RpcSendParams_t39151164F00EFC9D0A040DC4CAB0A7954024020A_marshaled_pinvoke ___Send;
	RpcReceiveParams_tD05099D00D0DCD7C712D970AD96696DF2FB21D98 ___Receive;
};
struct RpcParams_t230EE00CD9A98836455C756E14F0C575971412FD_marshaled_com
{
	RpcSendParams_t39151164F00EFC9D0A040DC4CAB0A7954024020A_marshaled_com ___Send;
	RpcReceiveParams_tD05099D00D0DCD7C712D970AD96696DF2FB21D98 ___Receive;
};
struct URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9 
{
	NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 ___slices;
	uint32_t ___slicesValidMask;
};
struct UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66 
{
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 ___m_BlockData;
};
struct XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Size;
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_TextureDescriptor;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_ParentId;
};
struct XRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___U3CtrackableIdU3Ek__BackingField;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CposeU3Ek__BackingField;
	int32_t ___U3CtrackingStateU3Ek__BackingField;
	intptr_t ___U3CnativePtrU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CmarkerTypeU3Ek__BackingField;
	uint32_t ___U3CmarkerIdU3Ek__BackingField;
	XRSpatialBuffer_tFD539C3057967D388337CBFF20FC0599DEF9C776 ___U3CdataBufferU3Ek__BackingField;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___U3CparentIdU3Ek__BackingField;
};
struct TransferrableData_tE4092BB2D19869881CCCD6B9B3E54FDC904B3197 
{
	FixedList64Bytes_1_t137BDA0D26652E438404CA31731069295DAC8E1C ___m_RawAddressContainer;
};
struct TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7 
{
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_Body;
	int32_t ___m_TransformWriteMode;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_PhysicsTransform;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_TransformId;
	int32_t ___m_TransformDepth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearVelocity;
	float ___m_AngularVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_PositionFrom;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_RotationFrom;
};
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376 
{
	UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66 ___m_Stream;
};
struct NetworkEndpoint_t0F60A2EF4E82ED5F26845E5537772D24C32426AC 
{
	TransferrableData_tE4092BB2D19869881CCCD6B9B3E54FDC904B3197 ___Transferrable;
};
struct NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	int32_t _____rpc_exec_stage;
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___m_NetworkManager;
	RpcTarget_t0F23BD75DF373B0172AD08117DB945D6CD994832* ___U3CRpcTargetU3Ek__BackingField;
	bool ___U3CIsLocalPlayerU3Ek__BackingField;
	bool ___U3CIsOwnerU3Ek__BackingField;
	bool ___U3CIsServerU3Ek__BackingField;
	bool ___U3CHasAuthorityU3Ek__BackingField;
	bool ___U3CIsSessionOwnerU3Ek__BackingField;
	bool ___U3CServerIsHostU3Ek__BackingField;
	bool ___U3CIsClientU3Ek__BackingField;
	bool ___U3CIsHostU3Ek__BackingField;
	bool ___U3CIsOwnedByServerU3Ek__BackingField;
	bool ___U3CIsSpawnedU3Ek__BackingField;
	NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* ___m_NetworkObject;
	uint64_t ___U3CNetworkObjectIdU3Ek__BackingField;
	uint16_t ___U3CNetworkBehaviourIdU3Ek__BackingField;
	uint64_t ___U3COwnerClientIdU3Ek__BackingField;
	bool ___U3CIsDestroyingU3Ek__BackingField;
	bool ___m_VarInit;
	List_1_t498347DEA55185643F213F995B74FEE039FAD70F* ___m_DeliveryMappedNetworkVariableIndices;
	List_1_t3ED220D424138331023A4D1C1B67E3C63A19761B* ___m_DeliveryTypesForNetworkVariableGroups;
	List_1_tB6CC3AFBA7164AC34B1EF29A0A73721899567AE3* ___NetworkVariableFields;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___NetworkVariableIndexesToReset;
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___NetworkVariableIndexesToResetSet;
	uint64_t ___U3Cm_TargetIdBeingSynchronizedU3Ek__BackingField;
};
struct ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707 
{
	NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376 ___Container;
	UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2* ___List;
};
struct PendingPacket_t479815078D1E4D1B5441E44C39E685232AB4EE94 
{
	U3CPacketU3Ee__FixedBuffer_t55E02F8104D901D9FE76233288015124810472C7 ___Packet;
	ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB ___ConnectionId;
	NetworkEndpoint_t0F60A2EF4E82ED5F26845E5537772D24C32426AC ___Endpoint;
	int64_t ___PendingUntil;
	int32_t ___Length;
	int32_t ___Offset;
};
struct NetworkAnimator_tD8BA9A86CB82706429757E0FEDA16C813A4D1148  : public NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE
{
	int32_t ___AuthorityMode;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_Animator;
	List_1_t5FC9DC3B2571045D9D979C5CC8C26CB3FBA03617* ___TransitionStateInfoList;
	Dictionary_2_tC943D56617D8B8E84F642A39D9C23D41129D8A0D* ___m_DestinationStateToTransitionInfo;
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___LocalNetworkManager;
	bool ___DistributedAuthorityMode;
	AnimatorParametersListContainer_t5D800273EE702BAABD5B21AC3AB68EF5823364BA* ___AnimatorParameterEntries;
	Dictionary_2_t42A7C6B6AE53FB0118E4234D9C6536AF5C1F948E* ___m_AnimatorParameterEntryTable;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_TransitionHash;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_AnimationHash;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_LayerWeights;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_ParametersToUpdate;
	RpcParams_t230EE00CD9A98836455C756E14F0C575971412FD ___m_RpcParams;
	RuntimeObject* ___m_TargetGroup;
	AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187 ___m_AnimationMessage;
	NetworkAnimatorStateChangeHandler_t6E593CB01EAF361F1E5505A1DBC612332617979B* ___m_NetworkAnimatorStateChangeHandler;
	List_1_t608F513282432121FFB4853A1786723C4640BF7B* ___SynchronizationStateInfo;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___m_ParameterWriter;
	NativeArray_1_t2CBD21EAB7229CDAFB0E96544889F7EB97241310 ___m_CachedAnimatorParameters;
};
struct List_1_t608F513282432121FFB4853A1786723C4640BF7B_StaticFields
{
	AnimatorStateInfoU5BU5D_tDEA2B6BEAFA0A4BB9DD3A7357A66365CC5B62DED* ___s_emptyArray;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray;
};
struct List_1_t80D43CC426B520567FE49EEA17C1D8FD86D6696F_StaticFields
{
	AnimationStateU5BU5D_t5B8D6CC20EB9E7F6A791C202E72D66ABA5645778* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_ByteArrayCache;
};
struct InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_StaticFields
{
	InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___Invalid;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_StaticFields
{
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___s_Default;
};
struct ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C_StaticFields
{
	uint32_t ___s_CurrentValidBit;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_StaticFields
{
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___s_Default;
};
struct XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_StaticFields
{
	XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB ___s_Default;
};
struct XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_StaticFields
{
	XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 ___s_Default;
};
struct XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_StaticFields
{
	XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 ___k_Default;
};
struct XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_StaticFields
{
	XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C ___s_Default;
};
struct XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_StaticFields
{
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___s_Default;
};
struct XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_StaticFields
{
	XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___s_Default;
};
struct XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_StaticFields
{
	XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 ___s_Default;
};
struct XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_StaticFields
{
	XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 ___s_Default;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct AnimatorStateInfoU5BU5D_tDEA2B6BEAFA0A4BB9DD3A7357A66365CC5B62DED  : public RuntimeArray
{
	ALIGN_FIELD (8) AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 m_Items[1];

	inline AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisRequest_tAA55F47806E39B0E19B53273DCBFB5CF457F9187_m969A3A049B03E29AB3BE1C51850279A66AA353E2 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, Request_tAA55F47806E39B0E19B53273DCBFB5CF457F9187 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisHopPawnEntry_t47AA250F90984ADD7C3282787B94200CCFDEA02E_mE9726848E4F7DA1DE353AF747ACF6D04566CDCDD (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, HopPawnEntry_t47AA250F90984ADD7C3282787B94200CCFDEA02E ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisBoatStateEntry_tF74997E8F9D2505698CBE8554168F8D9FBAD669A_m79D9B7DEDB7D6784815F0FEFC6DE8CAB049A7CA9 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, BoatStateEntry_tF74997E8F9D2505698CBE8554168F8D9FBAD669A ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisRowingProgressEntry_t3BA27C9184456A51ACBC15629622165F645C10E0_m1B9BB50A3BE2EAA94C580D33B32609E3B13F5647 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, RowingProgressEntry_t3BA27C9184456A51ACBC15629622165F645C10E0 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisPlayerScoreEntry_t1589D41E7EDE41B6E5767D8713948FB500561655_m320F99D8631F5EAA0500B73BB5CD103DFCF2EC5C (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, PlayerScoreEntry_t1589D41E7EDE41B6E5767D8713948FB500561655 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisRunnerStateEntry_t5E91402350119B5BEC9FF4777E42F66EF8D4C597_mF1C8DEA76F06CB06461FE5CAC654A4B826D2DA3E (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, RunnerStateEntry_t5E91402350119B5BEC9FF4777E42F66EF8D4C597 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisClaimEntry_tEC10AE3878CE528667B104E561CC875463CCA5AD_m12E4E6D66B17CB40F574AAF4CAAC100C76A75FDB (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, ClaimEntry_tEC10AE3878CE528667B104E561CC875463CCA5AD ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisSubQueueItem_tAE6DA2A0B68107490190DB4680442767B9D420B7_m7936D9793231DF00A043430604DC46082A87F8FD (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, SubQueueItem_tAE6DA2A0B68107490190DB4680442767B9D420B7 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisReceiveQueueItem_tC07D121A91E2DA50FCBD08D1720CE0B4BA0F93BE_mDEE8D38C2E1801BA8F53B7F4FFE61A25090DE59B (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, ReceiveQueueItem_tC07D121A91E2DA50FCBD08D1720CE0B4BA0F93BE ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisSendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7_m12E0489E2E1E48667A24B5BD99F8721C9A0FFF21 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisPipelineImpl_t422927EB35F759F18ECBA1C7B075AAC92918017E_mE372F31BF61DB57512C121B9D376A73980ACDDC4 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, PipelineImpl_t422927EB35F759F18ECBA1C7B075AAC92918017E ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_m2CAE202D92BD72A85BE2DF55EF088B02CF320D0C (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899_m923116D3238150F6CE4341505066A968F204FF94 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisOccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_m5D6D424EA85E5C67A4C7886A061F55E58B8DF874 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisSplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A_mF1FD4BE7A4959FFBC666387FB738E803B628785C (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_m71C947FD457FF6751FC1D4E279E222FF46D254E3 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisSlot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127_mE7F7E5CF8D097EB1E39069715DC0619CBBED3798 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisPendingPacket_t479815078D1E4D1B5441E44C39E685232AB4EE94_mA1FC9DF36D2185E0874AB5CD7CCD50F67C9C7E1F (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, PendingPacket_t479815078D1E4D1B5441E44C39E685232AB4EE94 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisPendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E_m68F17942B8F41C829DF0C06886BD7C00CD1F01F5 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, PendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisSendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653_mF652D379171A232DD7D9834D917E48B6A5A6FC58 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* UnsafeUtility_ArrayElementAsRef_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_mE2EC96A1D8E6D4DF7EC659E128814755A7075557_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* UnsafeUtility_ArrayElementAsRef_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_mC51F8EF1765EE70896955EF51C596ADDC4E896FB_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* UnsafeUtility_ArrayElementAsRef_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m1EFB114B0998C1ECB40C7D8AF8D156995CBBB81A_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* UnsafeUtility_ArrayElementAsRef_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m96D507BA80BD38725EE300102E3C10D8A40FE7CD_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Span_1_GetPinnableReference_mBC5955DDAAEA56F142B5C441DB6FBD96F2AB6ADB_fshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mBFCDCB65BA72515FBC46506A6FF5600934A797E8 (NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m2AEFEE9AB59FEB7B2285E4681B828306675C9052 (NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C ___0_array, BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mF0E54F4AC97D8FD94CE48D98AF76A275ABFA9EA7 (NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_mFD25CE8592D33A36F07097B5F0F264A9E5F974DD (NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A ___0_array, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m72597CF41CB3E60884F1F6D9D7D7A8D41DE6A11F (NativeArray_1_tC4A81087A69EB70E412E0F4AAC574880C05C7023* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85_mCA0759DC82F6CE2B03B815B5AE180AE438C5FC75 (NativeArray_1_tC4A81087A69EB70E412E0F4AAC574880C05C7023 ___0_array, XRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m96640764DCE1F1900150DA0FC1D992D9DC52687D (NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mF5EED1132BA4E3F078ABB1D77391F85D2C362ED3 (NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 ___0_array, XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mCA06C3646E600B8615C70CB3DA97038528B18498 (NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_mEF979C95490DA1D4EBE00168CEDE5D9CD1EAD33D (NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 ___0_array, XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m35D30C4E671ACF3FD4F35E6442130E1969FF47FB (NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_mB26A6AAF91D8B86D19AD794FA6589CC54276F7A2 (NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 ___0_array, XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m0222D5E47FE3EFFE390B38DDFE36E134D67689FE (NativeArray_1_tD5E555C673712EB18839EB195B02215710DC5692* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D_mE329967751DA385F57327E0B744FF46331611F43 (NativeArray_1_tD5E555C673712EB18839EB195B02215710DC5692 ___0_array, XRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mD7AA8125519C235C250E28C485752B186B718D1F (NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mC947F5081695B2A0C00DE5C79175DD9513192195 (NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 ___0_array, XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mDC183B8E025B1A55DC178981EDE28DC1A82261D7 (NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_m7284DE28B51AEAC48F985EED8D69B63DBCE78395 (NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 ___0_array, XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mDF68F0A55BC88CA530F3FC16BD7C0D5C1DA4BF08 (NativeArray_1_t43267D13364B938F522273E473A86557B971CD63* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_m6A158CE920EDABA95EF5FFBAB9C73944D0AA86AF (NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 ___0_array, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m3F792CFB2FF29DB8098DDF0BFEE0FCCBAC8F1A19 (NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m2B21D728D081A37DE956DEDA0A332596438FB26E (NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 ___0_array, XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m02536E80A033E37A268BB288FE78991C3D04DC1B (NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_mF0361E92B5F60DD213A50949AABFC54264247DED (NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B ___0_array, XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m7A86C643E2B3050004055E36F8081C9BC174DF43_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_mEBD4E94BA49FB53B4CE7CD701343C838A7189795_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85_m836042FA527152AD16145FDB389BC473134931B1_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mEA8E3E8B8BFAD90BE489F5BB5FFA40AB0FE42C8F_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_mAF3536DC8A45B64F341A3FF9A3EB56C0C3CF9229_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m3F41B3C6E1850E30DF57CCB21C990C84A1BB0E9A_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D_m786089F5C6721FCF3692E18D56EA105A9EDBE942_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mB697C868BD5A34C03C1EA74873A2799A05ED5A72_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_mCA38CDBE9F042A16A1C0E2CB2162D93972CC2CFC_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mDE47ECB8AF94BBBEA38D5817983D851D4385B11B_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m6DCD64C34470921DC5ED8E8C5A215E259A7DE914_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m7CA699973CAB664C38EACC8EDC294DF364004117_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C NativeCopyUtility_CreateArrayFilledWithValue_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m0B3165E7EAA4FE1A9FE3EE1F264D20DD7BFD5E7B (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A NativeCopyUtility_CreateArrayFilledWithValue_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_mE98518CCB392D19534E6AA21868F7D7B91709C5C (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC4A81087A69EB70E412E0F4AAC574880C05C7023 NativeCopyUtility_CreateArrayFilledWithValue_TisXRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85_mFA18FB6DC94814707C4371EB1D59AFEC3F8AB483 (XRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85 ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 NativeCopyUtility_CreateArrayFilledWithValue_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_m1186BA1A3FB22F144960EFD13602C3C2216C4DC8 (XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 NativeCopyUtility_CreateArrayFilledWithValue_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m046E963E11DFA9E6D8A58C5843530B55DCBD29AD (XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 NativeCopyUtility_CreateArrayFilledWithValue_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m91C56E373771C01E633E080CF026074D24217C3C (XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD5E555C673712EB18839EB195B02215710DC5692 NativeCopyUtility_CreateArrayFilledWithValue_TisXRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D_m188BA8443ACE7FDD0DE574B1BEA412CC756B7A0C (XRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 NativeCopyUtility_CreateArrayFilledWithValue_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mA4D8DF9B2172AD0A6203C3E38F70CA72EA89E40A (XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 NativeCopyUtility_CreateArrayFilledWithValue_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_m5A82D69222D70FB1D1D3F8DE833F84C1E80E0BAC (XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 NativeCopyUtility_CreateArrayFilledWithValue_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mEB44B8A682264717B44069C2C7F12402869CD7F1 (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 NativeCopyUtility_CreateArrayFilledWithValue_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m7FE1027472937F29C1303EBCD69EB9FF420A5121 (XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B NativeCopyUtility_CreateArrayFilledWithValue_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m957DDCA98AC8F913B7A882DB8967417CAACDD4D8 (XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Capacity_m46A4E7D7799DE75073829FB2619656A3F855289C_inline (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_set_Capacity_m8CC8B7AC9C7326EDEC988BEEBA2674909CC72910 (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t20401E81C3977721C4821E208D326838C60AB66B NativeList_1_AsArray_mD76BA692764AC175B37DB58B94B5F37502169A05 (NativeList_1_t0ED3ACF089127F9B31C902007D8D412B32309F70* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArrayExtensions_ArraysEqual_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m371F23C2DC2DBA57E3D85BCE4B02753338F7F654 (NativeArray_1_t20401E81C3977721C4821E208D326838C60AB66B ___0_container, NativeArray_1_t20401E81C3977721C4821E208D326838C60AB66B ___1_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeList_1_AsArray_m935271AC90F399A1587B9D82894E71067F6769A6 (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArrayExtensions_ArraysEqual_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE8C4F089E2406DE47EC6EA8BA7F13E2C92CED5D8 (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_container, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___1_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_m52C72F3BC7DEFF08388883BE447B5952E54055CF_inline (NativeList_1_tCE9294F8D50CBBA2C6B0936EF47668AABCBFC129* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_mF4A7022C29DC159BBF46CF1C51F98928E946DD70_inline (NativeList_1_t7E4EB94D72E542AD9AE709E29DD6C427017735C8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeList_1_GetUnsafeReadOnlyPtr_m8BCFBC6190084C23188A5CB9B68515B1DE81C179_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m07EB4F1158547DE8665142C592D1BB3C7053F4B7_inline (ReadOnlySpan_1_t7757FD353EBEBCCEB9A915C9409F036D59CBB91D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m5CCEB612FF614DF8DE9421901729BEFE2D7B0AD6_inline (ReadOnlySpan_1_t78DDDA91D3B852BA5CC6CB683C25798669394299* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mCD7F7A19A4FE3CFC681EBB868E7A628651E990DD_inline (ReadOnlySpan_1_tDAF4105BB07ED8FF6685C401967838F0DA25C893* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m4102981C4F0B49F5D18D64832CA3DA186EF3C4C9_inline (ReadOnlySpan_1_t018614F605F46379EE13B48E466D84493953A32A* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m6DBE72B9C85A2BDD00D94C4768A52BB696095FEF_inline (ReadOnlySpan_1_tE65ADDA676D9E1E10FBABBC43E6D77B76418998B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m67BC66866D73FC2ED6CF39C57F9A4862B1C65438_inline (ReadOnlySpan_1_t5D5DD3148CFA9A9039AB9D6C3D1E0E570A804E34* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mE7136430139CEA341C562B7A7EDFE7C057793563_inline (ReadOnlySpan_1_tEF932A6C6B8BDDF6BAAED1BF091FD48169920DDC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelMultiHashMap_2__ctor_m2E9AAA535D5D589B1D9CA34C9CCD9D66CF1DF44B_fshared (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m574BF92AE3EB288AB58279FBED0B873AFEC5F56F (NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_mE305EBF30B698DC5F5DC8B70A6A3B08BDC7DD626 (NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C* __this, NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_mFCA72E41A56CB5CF71EB01A4A4D66B431F8932DA (NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B* __this, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m546F4FC4F00E93F0730BE9C5DC7648F384B6FB75 (NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0* __this, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_mD4A144FA99A1B1DFBC1DA2BECE2C44266FF2741C (NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F* __this, NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m4D65225E372EF48222C754B1F98BA0A08F636288 (NativeSlice_1_t2473975F09997A0D294B91A7118D96C985053A91* __this, NativeArray_1_t47E59A74649F4207823BA714DF59C940F74917E1 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m2044A196CEC2DB0C3D342CBAF6D643E413EE171A (NativeSlice_1_t9BFFF9586EFFB05517670778FC645523EFB2AA41* __this, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m03758007645ECCE5746C2DF0F3C00B857DBDAC22 (NativeSlice_1_t135E2A23AA4EBDBCA846942F90F29A5004E8ACB5* __this, NativeArray_1_tFF516D1DBC720351B560D9B3984FB895B01FD6E5 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m9BFC93FD998BD41E6249322EDA95916FC779B011 (NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F* __this, NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29 (NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8* __this, NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m30A468E661CB9801959FE209E0A67C877F5A013F (NativeSlice_1_t0ECD53A3C3E3274982441D79651584C7F63B6E97* __this, NativeArray_1_tB946AB7C39022A3069BADCA1BFB2EB857A84AAD9 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m73F2061C57DEB523833B7EB319F0C2377D8253F5 (NativeSlice_1_t79A5C61472DAE981DC745392A352491AEE9CF277* __this, NativeArray_1_t6A74899EB7F47397AF0F8B81D065AF9E313C4830 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m9AAD03E1840186A73E6DEB6585FC59C340D2861C (NativeSlice_1_t7B1E7744FBAF078F78D93365DECA9572D295ECAE* __this, NativeArray_1_tD3E166440DED38454F2B25BF9A375A5EBF8C47AB ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m12C15837FE5373229E6160FA849E4B723AA85DC3 (NativeSlice_1_tD956D063FC554DB22B1EA853619C01F718853C7F* __this, NativeArray_1_t21CCCF3F852F2C88956531DDBEE7D161399D1ADD ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m52F465B77EB44801B088D6851A88E0253957C389 (NativeSlice_1_t59F7AA82EEDAFC28903AC471BA1AB4D4AB648897* __this, NativeArray_1_t113406E16457EBB6F723AA50A3A4A0EA14B8AFD2 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m313B1A91AB4ADBA821C074187D67957126F93DFF_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m4C0C75BC6633B56253FD4A7CD7F38A34E73C6253_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_slice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m6FF566970889B5CFDC43EE82D21F45A254BA7978_gshared (NativeSlice_1_tA78E8047D38CFCADF8D3048D186F14050CEF9458* __this, NativeArray_1_t617E9AB997FA976725092F465E5BB075180FFF30 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m201AB4CECADE7804A6764BD2854BC42D43350049 (NativeSlice_1_t10EE15BD47CA7D87727E99494E581ADA4021B6B2* __this, NativeArray_1_t9F2DDC824E9AE9423E5F4D96E7EC4B5DC22B2E26 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_mB3722DE92029235F31FBD5EA0C922C94EC1EB1A6 (NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9* __this, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m60F25657F5AE104ED7F2F956B948FE7C704EDB5D (NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0* __this, NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m7A0D0D8A1439A72F1514624217FAB4B88C113BFD (NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9* __this, NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 NativeArray_1_AsReadOnlySpan_mE326C38BEA21D76FFA2FC6277F03B691FD78BCBA (NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisDefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8_mB748E41133FA648FD7D940AF0E971865BCA13E3F (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 ___0_roSpan, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_value, DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8 ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC220B03984F68939D089A1AE074266FCC0EC16CA NativeArray_1_AsReadOnlySpan_mC63E5C016C3C07DDF18DFD9A02917222DDB21015 (NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_TisDefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6_m3CEE3D91A42433B257641A0D31E5FD223FD3342A (ReadOnlySpan_1_tC220B03984F68939D089A1AE074266FCC0EC16CA ___0_roSpan, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___1_value, DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6 ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 NativeArray_1_AsReadOnlySpan_m06264171851390A04DB013C77825476FA7254C9C (NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisDefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1_mCCD413733A610B9D8F9FC3C9B02FF7F74EDF310B (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 ___0_roSpan, uint32_t ___1_value, DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1 ___2_comp, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisDefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8_mF045AD0E0A0315C9D98F9FD347EEEF6E24C73ADC (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_ptr, int32_t ___1_length, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___2_value, DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_TisDefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6_mF85FE315B6BD04F8B703C4EB4DDD36A9D24C2D8A (InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___0_ptr, int32_t ___1_length, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___2_value, DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisDefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1_m336558E7336C81B8B72EFCB422A4275D0FD0F09F (uint32_t* ___0_ptr, int32_t ___1_length, uint32_t ___2_value, DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_Compare_m2B69906CEFD90B0F959BCBA26240427D5E34E237 (DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_x, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_Compare_mFC06C4A12E61CBB1E919D96EAA1B14B36829682A (DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6* __this, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___0_x, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_Compare_m3D3D830C6ED5074DBB34AE5D0FD965358815B855 (DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1* __this, uint32_t ___0_x, uint32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m95FBD7CAAE1997DE4D22F9D8D6AEC37EB2B26D37 (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B32B9F06977E407E6CA99CA51A37F7DB63CC772 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mA1D6086C38D6952AA634FBC9BED57D65A58F68BA (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m20CFAAEF92F2BF57192AC6AC6672D34DB0378730 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1DB8637532087D9DDA1D1FA160D8396B23EE30D2 (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7823FBF7870907C0FBB1EAA0FADD3DCF95A52217 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0E63AE9C4FFB1E0893D9A562072BAFF57BFF74A3 (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m559DA77F56AD4E1B2E028B54702A892A46109FA1 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_Compare_m394F7F49471D14333A96E4D1609FF38B351FC316 (DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_Compare_mCE528A0DC7D946A4B73C6C1BA0BEF3EF89B13E1A (DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9* __this, uint64_t ___0_x, uint64_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline (void* ___0_destination, int32_t ___1_index, uint64_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m172AB754724D12C7E4938B1ACE01A7FF192AC73E_inline (void* ___0_destination, int32_t ___1_index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m824816C030A3E2FD028D3B4ECCC252E8E50DDF6E_inline (void* ___0_destination, int32_t ___1_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m7568EE94C3A5FC293CBBEDB556DC0DA15AAB9293 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m27590C9F0AEFCA1390119C115B59FA3F575C5654 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_mCF9CF53D2E83C285F1321C27C69557E4651D6ACB (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_mF3782B93EC1497E345160D7FF8BFDA1E96A061B1 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m2E6D9B5EA07821DABCEFA4B85DD48E1164B7DC55 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m447AB14969900EBF8D724FA0B06248EEC3C5BEE1 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m54023D89607E52DAAF70FC0AC1566BE018C94951 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_mA078BD6B0BDB0F4C3A6F227E4CA458FB10BF467D (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m32306F98F190471CE5FFF51A5B5DC5AC0CBCA87B (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mE83B78A4E21385E054DAB6E54096B204E27CCF05 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m64966317ECC8D7CDB0D08299D54C0515AFA10BC7 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mF3F91FD1CF91BB4367FD7C8CF287619B5166FFB7 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1FA1F41F025F787CA8D9C6A1F7B053556B2F6682 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m9E3D7E2805653AB57ACC999FCE41FD4C78A5FF31 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_mC7889E64AB70C508749FF7769C180D3BED4BC4CF (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m964B018FFC885A109E0433749F04B5B34653958B (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0D5C201A337A525CE82664BF10CB31AF56718F3C (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m2F5777B14162A9539E616742C8D29AC1769517D0 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m52C7968B61CD160CE7276D6768B010C26565185A (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m67CD3E816521190FB9EC7208099D2E5E393DBF7A (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_mB34BF7D82E1E5889BE988B230C11EE6842993231 (void* ___0_array, int32_t ___1_length, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m322E3D4D2DAD5DD1A61A78DCA08C5BE424E2BCAA (void* ___0_array, int32_t ___1_length, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m4809F01D470D4466F76AD547CCBB126B73C0DE04 (void* ___0_array, int32_t ___1_length, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_mB6DC15F5849FB6406A1E060F37717E801CA1AA9C (void* ___0_array, int32_t ___1_length, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 NativeArray_1_AsSpan_mAFE9F40CE04C84DFB0D6C5C338015A226B0A3EB9 (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03 NativeSortExtension_SortJob_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m32C5AA6495C39886E9F10952078CDA9AB97ADECF (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_span, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___1_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 NativeArray_1_AsSpan_m52988A12DB01292F1C64E6786AA600A03601EF98 (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478 NativeSortExtension_SortJob_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mA8CA6EFD2F7E8AEC5454721CD3338B95A4B706A8 (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 ___0_span, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___1_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF (ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UnsafeUtility_ReadArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE8E8016F9D75B5FE0F784B0B6EBEF71D6B31D134_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSerializer_1_get_IsWriter_m6978D539067CE30EC81B6491589C7C30A1E16C28 (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_WriteSynchronizationData_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_mA3456FEB695F9CC15E64DD92DE35A37E2A0DCDF1 (NetworkAnimator_tD8BA9A86CB82706429757E0FEDA16C813A4D1148* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* ___0_serializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_TisParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC_mA7F256E076673D43A8BCFCDB647841751F0196DE (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, ParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC* ___0_value, ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_TisAnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187_m98CDB92B1DB4B8B097365E89BE52CC1BE7F8A719 (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187* ___0_value, ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE77DBDC5F3E4FED1452607A3D6A20E7C159AA0B8 List_1_GetEnumerator_m83153DFE1C4E11A34D227E36CCD2CBABC48EA2EA (List_1_t80D43CC426B520567FE49EEA17C1D8FD86D6696F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_fshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimationState_t90091AD2757C132602279750EFF7907F066817B0 Enumerator_get_Current_m98B59DFF5B4E87E97FAD0D22CA521349CC953FB6_inline (Enumerator_tE77DBDC5F3E4FED1452607A3D6A20E7C159AA0B8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m43F11F7B4B423C4FA00AB8BAAA0F4845ADB3DCE8 (Enumerator_tE77DBDC5F3E4FED1452607A3D6A20E7C159AA0B8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSerializer_1_get_IsWriter_mA81CADE3680B019327BD43C92F4743B2140A83EB (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_WriteSynchronizationData_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m5CC9D1518284F56984451654F14C1C46DCE4BBB4 (NetworkAnimator_tD8BA9A86CB82706429757E0FEDA16C813A4D1148* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* ___0_serializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_TisParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC_mF3B6B99313E75B218B838EE496B43F5E735A6AB0 (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, ParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC* ___0_value, ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_TisAnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187_m12AAB7EEDCCF9DD9FDC4BCE76D34CCCBA6641BE4 (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187* ___0_value, ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mC98BDD461B319F62D6EC8507108556C3E2115CB8_inline (List_1_t608F513282432121FFB4853A1786723C4640BF7B* __this, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_t90091AD2757C132602279750EFF7907F066817B0 List_1_get_Item_m61FF2551C3D4EBBD84A9CA3132542D7477ADA76E (List_1_t80D43CC426B520567FE49EEA17C1D8FD86D6696F* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE84CAE1C2C3C804992294A454700ECB3273CA55C_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m8AD2AC9FAB3A7D5FD7D07A068AF8F75A0F12E6FB (List_1_t80D43CC426B520567FE49EEA17C1D8FD86D6696F* __this, int32_t ___0_index, AnimationState_t90091AD2757C132602279750EFF7907F066817B0 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMessage_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m23D20CD018A36929CBC0E566CA50D1B71AD6E17B (AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B ___0_serializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMessage_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_mC38DB4A479EB4701AE87B6136D8143352E7C488D (AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___0_serializer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* UnsafeUtilityInternal_ArrayElementAsRef_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_m6963A99A3BEB5DBAAC51E9BFAB6B7C5FFB1B6F7C_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* UnsafeUtilityInternal_ArrayElementAsRef_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_mF746F79DDB4E9E3AE6D6CB0BF1444F14B688DA8A_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* UnsafeUtilityInternal_ArrayElementAsRef_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m4FB830DBC0E037964D9CF80FF3A54F5BB55B1828_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* UnsafeUtilityInternal_ArrayElementAsRef_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m2A965F4CA426A546BB929C808676861734552C39_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_mFA58277CFA3A2687E5020487E60D64DBC18B9701_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_m92DA789CEA357B9A0813DF7F446B13EF73AD73D6_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85_m308806641E8EA9A66224F74ECF0BAE4F35E0CB04_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_m61FA291DB4F380818713C490D42D8D2DB54205F5_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m74A3F595A175C01339EC0C399A73A4581F6815B5_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_mBD9A9A310FE3166D59DBDC95A7D3045F53FA000F_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D_mDFEF405F49BB9B54263C12621B027ABAA7F03D7B_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mF7148BF1F0EEC1BA8D9BB9BBC4FDE837B554AF2F_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_m2EC8F6F083901CDB30B427A9774DA89B8194CDD1_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mAA206F483E8A9C1A8291AB9D2B375CEE484999DC_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m2AAEE729A64DBF51D7170C91EC0A436DE147E07D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_mA52E86322CB284662FE8CD2BA9CEFF26A297C164_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Capacity_m163371206E2F39354C1DF26C807700F2FDF08C8B_fshared_inline (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_fshared_inline (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0B7B877C8F00DCC1C95D7124B3B0D83C6D492345_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6CE8AF6F42FA98657985C680DB85747DAC856E2F_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeUtilityInternal_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA5895D44428BCE7F38A3E30CA324F5E0E599364F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC71868C665A692778D508E69E8AF1A631E0CD348_inline (void* ___0_destination, int32_t ___1_index, uint64_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UnsafeUtilityInternal_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5AE01E222FB08F27EB26C6D2FE6F873A34BE8707_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m38B84F4395041C32077D6BD505700613A549E5B2_inline (void* ___0_destination, int32_t ___1_index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtilityInternal_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4E48372E1097232C60446DED043FEC5C7A61C4B0_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA724E762E40FA0C9F59E22D26CD7760418780D94_inline (void* ___0_destination, int32_t ___1_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeUtilityInternal_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m504EAEDFA7F1C3551FBC5F11CFB40360033F8B84_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UnsafeUtilityInternal_ReadArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC8BDFAFE242DB675D668D2942EFD7CE36006251C_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m6282A828030925643699A976FC25E9208D4BA35E (List_1_t608F513282432121FFB4853A1786723C4640BF7B* __this, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisRequest_tAA55F47806E39B0E19B53273DCBFB5CF457F9187_m969A3A049B03E29AB3BE1C51850279A66AA353E2 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, Request_tAA55F47806E39B0E19B53273DCBFB5CF457F9187 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1 (void* ___0_destination, int64_t ___1_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisHopPawnEntry_t47AA250F90984ADD7C3282787B94200CCFDEA02E_mE9726848E4F7DA1DE353AF747ACF6D04566CDCDD (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, HopPawnEntry_t47AA250F90984ADD7C3282787B94200CCFDEA02E ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisBoatStateEntry_tF74997E8F9D2505698CBE8554168F8D9FBAD669A_m79D9B7DEDB7D6784815F0FEFC6DE8CAB049A7CA9 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, BoatStateEntry_tF74997E8F9D2505698CBE8554168F8D9FBAD669A ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisRowingProgressEntry_t3BA27C9184456A51ACBC15629622165F645C10E0_m1B9BB50A3BE2EAA94C580D33B32609E3B13F5647 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, RowingProgressEntry_t3BA27C9184456A51ACBC15629622165F645C10E0 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisPlayerScoreEntry_t1589D41E7EDE41B6E5767D8713948FB500561655_m320F99D8631F5EAA0500B73BB5CD103DFCF2EC5C (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, PlayerScoreEntry_t1589D41E7EDE41B6E5767D8713948FB500561655 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisRunnerStateEntry_t5E91402350119B5BEC9FF4777E42F66EF8D4C597_mF1C8DEA76F06CB06461FE5CAC654A4B826D2DA3E (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, RunnerStateEntry_t5E91402350119B5BEC9FF4777E42F66EF8D4C597 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisClaimEntry_tEC10AE3878CE528667B104E561CC875463CCA5AD_m12E4E6D66B17CB40F574AAF4CAAC100C76A75FDB (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, ClaimEntry_tEC10AE3878CE528667B104E561CC875463CCA5AD ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisSubQueueItem_tAE6DA2A0B68107490190DB4680442767B9D420B7_m7936D9793231DF00A043430604DC46082A87F8FD (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, SubQueueItem_tAE6DA2A0B68107490190DB4680442767B9D420B7 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisReceiveQueueItem_tC07D121A91E2DA50FCBD08D1720CE0B4BA0F93BE_mDEE8D38C2E1801BA8F53B7F4FFE61A25090DE59B (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, ReceiveQueueItem_tC07D121A91E2DA50FCBD08D1720CE0B4BA0F93BE ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisSendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7_m12E0489E2E1E48667A24B5BD99F8721C9A0FFF21 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisPipelineImpl_t422927EB35F759F18ECBA1C7B075AAC92918017E_mE372F31BF61DB57512C121B9D376A73980ACDDC4 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, PipelineImpl_t422927EB35F759F18ECBA1C7B075AAC92918017E ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_m2CAE202D92BD72A85BE2DF55EF088B02CF320D0C (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899_m923116D3238150F6CE4341505066A968F204FF94 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisOccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_m5D6D424EA85E5C67A4C7886A061F55E58B8DF874 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisSplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A_mF1FD4BE7A4959FFBC666387FB738E803B628785C (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_m71C947FD457FF6751FC1D4E279E222FF46D254E3 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisSlot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127_mE7F7E5CF8D097EB1E39069715DC0619CBBED3798 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisPendingPacket_t479815078D1E4D1B5441E44C39E685232AB4EE94_mA1FC9DF36D2185E0874AB5CD7CCD50F67C9C7E1F (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, PendingPacket_t479815078D1E4D1B5441E44C39E685232AB4EE94 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisPendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E_m68F17942B8F41C829DF0C06886BD7C00CD1F01F5 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, PendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisSendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653_mF652D379171A232DD7D9834D917E48B6A5A6FC58 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_mDA21180EDFBB39E049CCDE93CB60CB0643938694_inline (NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* UnsafeUtility_ArrayElementAsRef_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_mE2EC96A1D8E6D4DF7EC659E128814755A7075557_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_m9EA7C75DE41D07A2541AC0A25470A850BDC7BC31_inline (NativeArray_1_t4C11F337CF2A7773644650D071AA5F21F158A5E0 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t4C11F337CF2A7773644650D071AA5F21F158A5E0, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* UnsafeUtility_ArrayElementAsRef_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_mC51F8EF1765EE70896955EF51C596ADDC4E896FB_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m3E690F509525382CEAB5744F69A1B4EE4E8DAA14_inline (NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* UnsafeUtility_ArrayElementAsRef_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m1EFB114B0998C1ECB40C7D8AF8D156995CBBB81A_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_mA272EA3B0D40E27EE8A0C7C1D2C48B2BB7666865_inline (NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m4049A4C76A567998AA3C3143C472E438E2B27B5F_inline (NativeArray_1_t9086C71A5110879F9F76FDDC0009F7C7CF9D1B36 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t9086C71A5110879F9F76FDDC0009F7C7CF9D1B36, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* UnsafeUtility_ArrayElementAsRef_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m96D507BA80BD38725EE300102E3C10D8A40FE7CD_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;
inline TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* Span_1_GetPinnableReference_m1F64228CA55F0CDDC4F96688C2C9345DA183D47B (Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1* __this, const RuntimeMethod* method)
{
	return ((  TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* (*) (Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1*, const RuntimeMethod*))Span_1_GetPinnableReference_mBC5955DDAAEA56F142B5C441DB6FBD96F2AB6ADB_fshared)(__this, method);
}
inline int32_t Span_1_get_Length_m837D39395B41292FD42A4C8440B0CF2FCEACF63C_inline (Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
inline void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_fshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mBFCDCB65BA72515FBC46506A6FF5600934A797E8 (NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m2AEFEE9AB59FEB7B2285E4681B828306675C9052 (NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C ___0_array, BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mF0E54F4AC97D8FD94CE48D98AF76A275ABFA9EA7 (NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_mFD25CE8592D33A36F07097B5F0F264A9E5F974DD (NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A ___0_array, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m72597CF41CB3E60884F1F6D9D7D7A8D41DE6A11F (NativeArray_1_tC4A81087A69EB70E412E0F4AAC574880C05C7023* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85_mCA0759DC82F6CE2B03B815B5AE180AE438C5FC75 (NativeArray_1_tC4A81087A69EB70E412E0F4AAC574880C05C7023 ___0_array, XRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m96640764DCE1F1900150DA0FC1D992D9DC52687D (NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mF5EED1132BA4E3F078ABB1D77391F85D2C362ED3 (NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 ___0_array, XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mCA06C3646E600B8615C70CB3DA97038528B18498 (NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_mEF979C95490DA1D4EBE00168CEDE5D9CD1EAD33D (NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 ___0_array, XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m35D30C4E671ACF3FD4F35E6442130E1969FF47FB (NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_mB26A6AAF91D8B86D19AD794FA6589CC54276F7A2 (NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 ___0_array, XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m0222D5E47FE3EFFE390B38DDFE36E134D67689FE (NativeArray_1_tD5E555C673712EB18839EB195B02215710DC5692* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D_mE329967751DA385F57327E0B744FF46331611F43 (NativeArray_1_tD5E555C673712EB18839EB195B02215710DC5692 ___0_array, XRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mD7AA8125519C235C250E28C485752B186B718D1F (NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mC947F5081695B2A0C00DE5C79175DD9513192195 (NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 ___0_array, XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mDC183B8E025B1A55DC178981EDE28DC1A82261D7 (NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_m7284DE28B51AEAC48F985EED8D69B63DBCE78395 (NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 ___0_array, XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mDF68F0A55BC88CA530F3FC16BD7C0D5C1DA4BF08 (NativeArray_1_t43267D13364B938F522273E473A86557B971CD63* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_m6A158CE920EDABA95EF5FFBAB9C73944D0AA86AF (NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 ___0_array, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m3F792CFB2FF29DB8098DDF0BFEE0FCCBAC8F1A19 (NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m2B21D728D081A37DE956DEDA0A332596438FB26E (NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 ___0_array, XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m02536E80A033E37A268BB288FE78991C3D04DC1B (NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_mF0361E92B5F60DD213A50949AABFC54264247DED (NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B ___0_array, XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 ___1_value, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_mF3F5CA9830DAF701AD91BD01D78440AABC084116_inline (NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m7A86C643E2B3050004055E36F8081C9BC174DF43_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F (void* ___0_destination, void* ___1_source, int32_t ___2_size, int32_t ___3_count, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_m0FBF2D018CF7D32AB1A46A5398E1D50526A9F0C8_inline (NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_mEBD4E94BA49FB53B4CE7CD701343C838A7189795_inline (const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85_m3EA7691548A55A91177E4AA120A44D4F7B88E00A_inline (NativeArray_1_tC4A81087A69EB70E412E0F4AAC574880C05C7023 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tC4A81087A69EB70E412E0F4AAC574880C05C7023, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85_m836042FA527152AD16145FDB389BC473134931B1_inline (const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_m295A546A740130385DC2380594B002392A961F7E_inline (NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mEA8E3E8B8BFAD90BE489F5BB5FFA40AB0FE42C8F_inline (const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m89EB0658556F6B605E8D65EE5F68E31C7BFC28E3_inline (NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_mAF3536DC8A45B64F341A3FF9A3EB56C0C3CF9229_inline (const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m87CFF612A985E73F123C41072ED829BDD6A43CFF_inline (NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m3F41B3C6E1850E30DF57CCB21C990C84A1BB0E9A_inline (const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D_m94A29F6B9A4800B9E32609ECBB4EB96ECF019AE9_inline (NativeArray_1_tD5E555C673712EB18839EB195B02215710DC5692 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tD5E555C673712EB18839EB195B02215710DC5692, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D_m786089F5C6721FCF3692E18D56EA105A9EDBE942_inline (const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_m404269833648A3C28FC12B38F0934F48CBC53318_inline (NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mB697C868BD5A34C03C1EA74873A2799A05ED5A72_inline (const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_m61ACE269A99B6B265E45BDA182B500A079BA93F5_inline (NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_mCA38CDBE9F042A16A1C0E2CB2162D93972CC2CFC_inline (const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mC56E0B5DD47DCCA46B9E1648A7F8A19C90212506_inline (NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t43267D13364B938F522273E473A86557B971CD63, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mDE47ECB8AF94BBBEA38D5817983D851D4385B11B_inline (const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m023763C9C03A9C35194D2C4F26C899BAD0B89FDA_inline (NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m6DCD64C34470921DC5ED8E8C5A215E259A7DE914_inline (const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_mF2CB1DC411B52BA6B9D76B12B03B26E66EE5F47F_inline (NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m7CA699973CAB664C38EACC8EDC294DF364004117_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C NativeCopyUtility_CreateArrayFilledWithValue_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m0B3165E7EAA4FE1A9FE3EE1F264D20DD7BFD5E7B (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90 (void* ___0_destination, int32_t ___1_destinationStride, void* ___2_source, int32_t ___3_sourceStride, int32_t ___4_elementSize, int32_t ___5_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A NativeCopyUtility_CreateArrayFilledWithValue_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_mE98518CCB392D19534E6AA21868F7D7B91709C5C (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC4A81087A69EB70E412E0F4AAC574880C05C7023 NativeCopyUtility_CreateArrayFilledWithValue_TisXRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85_mFA18FB6DC94814707C4371EB1D59AFEC3F8AB483 (XRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85 ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 NativeCopyUtility_CreateArrayFilledWithValue_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_m1186BA1A3FB22F144960EFD13602C3C2216C4DC8 (XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 NativeCopyUtility_CreateArrayFilledWithValue_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m046E963E11DFA9E6D8A58C5843530B55DCBD29AD (XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 NativeCopyUtility_CreateArrayFilledWithValue_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m91C56E373771C01E633E080CF026074D24217C3C (XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD5E555C673712EB18839EB195B02215710DC5692 NativeCopyUtility_CreateArrayFilledWithValue_TisXRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D_m188BA8443ACE7FDD0DE574B1BEA412CC756B7A0C (XRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 NativeCopyUtility_CreateArrayFilledWithValue_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mA4D8DF9B2172AD0A6203C3E38F70CA72EA89E40A (XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 NativeCopyUtility_CreateArrayFilledWithValue_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_m5A82D69222D70FB1D1D3F8DE833F84C1E80E0BAC (XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 NativeCopyUtility_CreateArrayFilledWithValue_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mEB44B8A682264717B44069C2C7F12402869CD7F1 (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 NativeCopyUtility_CreateArrayFilledWithValue_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m7FE1027472937F29C1303EBCD69EB9FF420A5121 (XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B NativeCopyUtility_CreateArrayFilledWithValue_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m957DDCA98AC8F913B7A882DB8967417CAACDD4D8 (XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Capacity_m46A4E7D7799DE75073829FB2619656A3F855289C_inline (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_set_Capacity_m8CC8B7AC9C7326EDEC988BEEBA2674909CC72910 (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t20401E81C3977721C4821E208D326838C60AB66B NativeList_1_AsArray_mD76BA692764AC175B37DB58B94B5F37502169A05 (NativeList_1_t0ED3ACF089127F9B31C902007D8D412B32309F70* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArrayExtensions_ArraysEqual_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m371F23C2DC2DBA57E3D85BCE4B02753338F7F654 (NativeArray_1_t20401E81C3977721C4821E208D326838C60AB66B ___0_container, NativeArray_1_t20401E81C3977721C4821E208D326838C60AB66B ___1_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeList_1_AsArray_m935271AC90F399A1587B9D82894E71067F6769A6 (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArrayExtensions_ArraysEqual_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE8C4F089E2406DE47EC6EA8BA7F13E2C92CED5D8 (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_container, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___1_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_m52C72F3BC7DEFF08388883BE447B5952E54055CF_inline (NativeList_1_tCE9294F8D50CBBA2C6B0936EF47668AABCBFC129* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_mF4A7022C29DC159BBF46CF1C51F98928E946DD70_inline (NativeList_1_t7E4EB94D72E542AD9AE709E29DD6C427017735C8* __this, const RuntimeMethod* method) ;
inline PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD* NativeList_1_GetUnsafeReadOnlyPtr_mAD0E2B1C48A477761A76447416AEAA6D6ED08814 (NativeList_1_tA510052F24CA28040AE5D7A8BE6C6002296124A7* __this, const RuntimeMethod* method)
{
	return ((  PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD* (*) (NativeList_1_tA510052F24CA28040AE5D7A8BE6C6002296124A7*, const RuntimeMethod*))NativeList_1_GetUnsafeReadOnlyPtr_m8BCFBC6190084C23188A5CB9B68515B1DE81C179_fshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m07EB4F1158547DE8665142C592D1BB3C7053F4B7_inline (ReadOnlySpan_1_t7757FD353EBEBCCEB9A915C9409F036D59CBB91D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
inline PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C* NativeList_1_GetUnsafeReadOnlyPtr_mA39C682398D718BB372FE0097D45A0BCE762C6B8 (NativeList_1_tC4B04B5B98BEA4587A1187DC60F8C87F0920C4B1* __this, const RuntimeMethod* method)
{
	return ((  PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C* (*) (NativeList_1_tC4B04B5B98BEA4587A1187DC60F8C87F0920C4B1*, const RuntimeMethod*))NativeList_1_GetUnsafeReadOnlyPtr_m8BCFBC6190084C23188A5CB9B68515B1DE81C179_fshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m5CCEB612FF614DF8DE9421901729BEFE2D7B0AD6_inline (ReadOnlySpan_1_t78DDDA91D3B852BA5CC6CB683C25798669394299* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
inline PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE* NativeList_1_GetUnsafeReadOnlyPtr_mCF8AB9CC4E2F7114E1CCB245BB06C3DC3A436462 (NativeList_1_t60650BAC55FA3E0806E2A7B303C8A4B1B3176735* __this, const RuntimeMethod* method)
{
	return ((  PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE* (*) (NativeList_1_t60650BAC55FA3E0806E2A7B303C8A4B1B3176735*, const RuntimeMethod*))NativeList_1_GetUnsafeReadOnlyPtr_m8BCFBC6190084C23188A5CB9B68515B1DE81C179_fshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mCD7F7A19A4FE3CFC681EBB868E7A628651E990DD_inline (ReadOnlySpan_1_tDAF4105BB07ED8FF6685C401967838F0DA25C893* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
inline PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D* NativeList_1_GetUnsafeReadOnlyPtr_m52E6872391A81BBC435844F20BA8CE12B7BE3B57 (NativeList_1_tAD91DD25D285B5D001ACB76D5C1B638BA3E8E74D* __this, const RuntimeMethod* method)
{
	return ((  PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D* (*) (NativeList_1_tAD91DD25D285B5D001ACB76D5C1B638BA3E8E74D*, const RuntimeMethod*))NativeList_1_GetUnsafeReadOnlyPtr_m8BCFBC6190084C23188A5CB9B68515B1DE81C179_fshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m4102981C4F0B49F5D18D64832CA3DA186EF3C4C9_inline (ReadOnlySpan_1_t018614F605F46379EE13B48E466D84493953A32A* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
inline PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B* NativeList_1_GetUnsafeReadOnlyPtr_mCAC2B05EAD4F56B046D9A5488598AEB61FD0BBB4 (NativeList_1_tB3DABDBC2CD98907BC398426279D21CF380DD910* __this, const RuntimeMethod* method)
{
	return ((  PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B* (*) (NativeList_1_tB3DABDBC2CD98907BC398426279D21CF380DD910*, const RuntimeMethod*))NativeList_1_GetUnsafeReadOnlyPtr_m8BCFBC6190084C23188A5CB9B68515B1DE81C179_fshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m6DBE72B9C85A2BDD00D94C4768A52BB696095FEF_inline (ReadOnlySpan_1_tE65ADDA676D9E1E10FBABBC43E6D77B76418998B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
inline ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C* NativeList_1_GetUnsafeReadOnlyPtr_m7B1990C91FDFED00A2A453B1AD157D9F10DF5E48 (NativeList_1_t7E4EB94D72E542AD9AE709E29DD6C427017735C8* __this, const RuntimeMethod* method)
{
	return ((  ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C* (*) (NativeList_1_t7E4EB94D72E542AD9AE709E29DD6C427017735C8*, const RuntimeMethod*))NativeList_1_GetUnsafeReadOnlyPtr_m8BCFBC6190084C23188A5CB9B68515B1DE81C179_fshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m67BC66866D73FC2ED6CF39C57F9A4862B1C65438_inline (ReadOnlySpan_1_t5D5DD3148CFA9A9039AB9D6C3D1E0E570A804E34* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
inline ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC* NativeList_1_GetUnsafeReadOnlyPtr_m6DBE5A3E176CCC1FA6F298FEA3B29A4296C970DB (NativeList_1_t849341A90D92C0EDCE3EB2109A577334F76D37DA* __this, const RuntimeMethod* method)
{
	return ((  ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC* (*) (NativeList_1_t849341A90D92C0EDCE3EB2109A577334F76D37DA*, const RuntimeMethod*))NativeList_1_GetUnsafeReadOnlyPtr_m8BCFBC6190084C23188A5CB9B68515B1DE81C179_fshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mE7136430139CEA341C562B7A7EDFE7C057793563_inline (ReadOnlySpan_1_tEF932A6C6B8BDDF6BAAED1BF091FD48169920DDC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_fshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline void ValueTuple_2__ctor_m90E20F3BDB456A9E9F0690ECCE21B5796934682A (ValueTuple_2_t4CF93CEF0394185EBB5E5DFF70EA5EA8C34A840D* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_item1, int32_t ___1_item2, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD_fshared)((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)__this, (Il2CppFullySharedGenericAny)&___0_item1, (Il2CppFullySharedGenericAny)&___1_item2, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeParallelHashMapBucketData_tCF0D4586EE0009033007B1E1BD04D40BA0A9C8E9 UnsafeParallelHashMapData_GetBucketData_m0A5859EBE368E2E2BBBD321F9A7E28AEBF0EDDC3 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelMultiHashMap_2__ctor_m2E9AAA535D5D589B1D9CA34C9CCD9D66CF1DF44B (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelMultiHashMap_2__ctor_m2E9AAA535D5D589B1D9CA34C9CCD9D66CF1DF44B_fshared)(__this, ___0_capacity, ___1_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m574BF92AE3EB288AB58279FBED0B873AFEC5F56F (NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_mE305EBF30B698DC5F5DC8B70A6A3B08BDC7DD626 (NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C* __this, NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_mFCA72E41A56CB5CF71EB01A4A4D66B431F8932DA (NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B* __this, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m546F4FC4F00E93F0730BE9C5DC7648F384B6FB75 (NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0* __this, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_mD4A144FA99A1B1DFBC1DA2BECE2C44266FF2741C (NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F* __this, NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m4D65225E372EF48222C754B1F98BA0A08F636288 (NativeSlice_1_t2473975F09997A0D294B91A7118D96C985053A91* __this, NativeArray_1_t47E59A74649F4207823BA714DF59C940F74917E1 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m2044A196CEC2DB0C3D342CBAF6D643E413EE171A (NativeSlice_1_t9BFFF9586EFFB05517670778FC645523EFB2AA41* __this, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m03758007645ECCE5746C2DF0F3C00B857DBDAC22 (NativeSlice_1_t135E2A23AA4EBDBCA846942F90F29A5004E8ACB5* __this, NativeArray_1_tFF516D1DBC720351B560D9B3984FB895B01FD6E5 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m9BFC93FD998BD41E6249322EDA95916FC779B011 (NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F* __this, NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29 (NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8* __this, NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m30A468E661CB9801959FE209E0A67C877F5A013F (NativeSlice_1_t0ECD53A3C3E3274982441D79651584C7F63B6E97* __this, NativeArray_1_tB946AB7C39022A3069BADCA1BFB2EB857A84AAD9 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m73F2061C57DEB523833B7EB319F0C2377D8253F5 (NativeSlice_1_t79A5C61472DAE981DC745392A352491AEE9CF277* __this, NativeArray_1_t6A74899EB7F47397AF0F8B81D065AF9E313C4830 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m9AAD03E1840186A73E6DEB6585FC59C340D2861C (NativeSlice_1_t7B1E7744FBAF078F78D93365DECA9572D295ECAE* __this, NativeArray_1_tD3E166440DED38454F2B25BF9A375A5EBF8C47AB ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m12C15837FE5373229E6160FA849E4B723AA85DC3 (NativeSlice_1_tD956D063FC554DB22B1EA853619C01F718853C7F* __this, NativeArray_1_t21CCCF3F852F2C88956531DDBEE7D161399D1ADD ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m52F465B77EB44801B088D6851A88E0253957C389 (NativeSlice_1_t59F7AA82EEDAFC28903AC471BA1AB4D4AB648897* __this, NativeArray_1_t113406E16457EBB6F723AA50A3A4A0EA14B8AFD2 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
inline void NativeSlice_1__ctor_m313B1A91AB4ADBA821C074187D67957126F93DFF (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m313B1A91AB4ADBA821C074187D67957126F93DFF_fshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m4C0C75BC6633B56253FD4A7CD7F38A34E73C6253 (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_slice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m4C0C75BC6633B56253FD4A7CD7F38A34E73C6253_fshared)(__this, ___0_slice, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m6FF566970889B5CFDC43EE82D21F45A254BA7978 (NativeSlice_1_tA78E8047D38CFCADF8D3048D186F14050CEF9458* __this, NativeArray_1_t617E9AB997FA976725092F465E5BB075180FFF30 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tA78E8047D38CFCADF8D3048D186F14050CEF9458*, NativeArray_1_t617E9AB997FA976725092F465E5BB075180FFF30, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m6FF566970889B5CFDC43EE82D21F45A254BA7978_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m201AB4CECADE7804A6764BD2854BC42D43350049 (NativeSlice_1_t10EE15BD47CA7D87727E99494E581ADA4021B6B2* __this, NativeArray_1_t9F2DDC824E9AE9423E5F4D96E7EC4B5DC22B2E26 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_mB3722DE92029235F31FBD5EA0C922C94EC1EB1A6 (NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9* __this, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m60F25657F5AE104ED7F2F956B948FE7C704EDB5D (NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0* __this, NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m7A0D0D8A1439A72F1514624217FAB4B88C113BFD (NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9* __this, NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 NativeArray_1_AsReadOnlySpan_mE326C38BEA21D76FFA2FC6277F03B691FD78BCBA (NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisDefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8_mB748E41133FA648FD7D940AF0E971865BCA13E3F (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 ___0_roSpan, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_value, DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8 ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC220B03984F68939D089A1AE074266FCC0EC16CA NativeArray_1_AsReadOnlySpan_mC63E5C016C3C07DDF18DFD9A02917222DDB21015 (NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_TisDefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6_m3CEE3D91A42433B257641A0D31E5FD223FD3342A (ReadOnlySpan_1_tC220B03984F68939D089A1AE074266FCC0EC16CA ___0_roSpan, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___1_value, DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6 ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 NativeArray_1_AsReadOnlySpan_m06264171851390A04DB013C77825476FA7254C9C (NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisDefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1_mCCD413733A610B9D8F9FC3C9B02FF7F74EDF310B (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 ___0_roSpan, uint32_t ___1_value, DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1 ___2_comp, const RuntimeMethod* method) ;
inline int32_t ReadOnlySpan_1_get_Length_mF61164B41A8152ACB6105B33F27B617757703605_inline (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisDefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8_mF045AD0E0A0315C9D98F9FD347EEEF6E24C73ADC (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_ptr, int32_t ___1_length, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___2_value, DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8 ___3_comp, const RuntimeMethod* method) ;
inline int32_t ReadOnlySpan_1_get_Length_m374611371AE053D62AD05BA8C8B9FFDF0B82B996_inline (ReadOnlySpan_1_tC220B03984F68939D089A1AE074266FCC0EC16CA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tC220B03984F68939D089A1AE074266FCC0EC16CA*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_TisDefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6_mF85FE315B6BD04F8B703C4EB4DDD36A9D24C2D8A (InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___0_ptr, int32_t ___1_length, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___2_value, DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6 ___3_comp, const RuntimeMethod* method) ;
inline int32_t ReadOnlySpan_1_get_Length_m031225D82859BA85FEE8375AA52B4CE8DF1ACE00_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisDefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1_m336558E7336C81B8B72EFCB422A4275D0FD0F09F (uint32_t* ___0_ptr, int32_t ___1_length, uint32_t ___2_value, DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_Compare_m2B69906CEFD90B0F959BCBA26240427D5E34E237 (DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_x, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_Compare_mFC06C4A12E61CBB1E919D96EAA1B14B36829682A (DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6* __this, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___0_x, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_Compare_m3D3D830C6ED5074DBB34AE5D0FD965358815B855 (DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1* __this, uint32_t ___0_x, uint32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m95FBD7CAAE1997DE4D22F9D8D6AEC37EB2B26D37 (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B32B9F06977E407E6CA99CA51A37F7DB63CC772 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mA1D6086C38D6952AA634FBC9BED57D65A58F68BA (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m20CFAAEF92F2BF57192AC6AC6672D34DB0378730 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1DB8637532087D9DDA1D1FA160D8396B23EE30D2 (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7823FBF7870907C0FBB1EAA0FADD3DCF95A52217 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0E63AE9C4FFB1E0893D9A562072BAFF57BFF74A3 (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m559DA77F56AD4E1B2E028B54702A892A46109FA1 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_Compare_m394F7F49471D14333A96E4D1609FF38B351FC316 (DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_Compare_mCE528A0DC7D946A4B73C6C1BA0BEF3EF89B13E1A (DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9* __this, uint64_t ___0_x, uint64_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline (void* ___0_destination, int32_t ___1_index, uint64_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ActiveComparer_Compare_mA14126C7E24C5A91BDFE79B275F2239D84D79E70 (ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m172AB754724D12C7E4938B1ACE01A7FF192AC73E_inline (void* ___0_destination, int32_t ___1_index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventComparer_Compare_m3302ED5566E32C3FD932FFBD21136DBCF17C2C76 (EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m824816C030A3E2FD028D3B4ECCC252E8E50DDF6E_inline (void* ___0_destination, int32_t ___1_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m7568EE94C3A5FC293CBBEDB556DC0DA15AAB9293 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m27590C9F0AEFCA1390119C115B59FA3F575C5654 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_mCF9CF53D2E83C285F1321C27C69557E4651D6ACB (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_mF3782B93EC1497E345160D7FF8BFDA1E96A061B1 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m2E6D9B5EA07821DABCEFA4B85DD48E1164B7DC55 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m447AB14969900EBF8D724FA0B06248EEC3C5BEE1 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m54023D89607E52DAAF70FC0AC1566BE018C94951 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_mA078BD6B0BDB0F4C3A6F227E4CA458FB10BF467D (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m32306F98F190471CE5FFF51A5B5DC5AC0CBCA87B (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mE83B78A4E21385E054DAB6E54096B204E27CCF05 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m64966317ECC8D7CDB0D08299D54C0515AFA10BC7 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mF3F91FD1CF91BB4367FD7C8CF287619B5166FFB7 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1FA1F41F025F787CA8D9C6A1F7B053556B2F6682 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m9E3D7E2805653AB57ACC999FCE41FD4C78A5FF31 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_mC7889E64AB70C508749FF7769C180D3BED4BC4CF (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m964B018FFC885A109E0433749F04B5B34653958B (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0D5C201A337A525CE82664BF10CB31AF56718F3C (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m2F5777B14162A9539E616742C8D29AC1769517D0 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m52C7968B61CD160CE7276D6768B010C26565185A (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m67CD3E816521190FB9EC7208099D2E5E393DBF7A (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_mB34BF7D82E1E5889BE988B230C11EE6842993231 (void* ___0_array, int32_t ___1_length, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m322E3D4D2DAD5DD1A61A78DCA08C5BE424E2BCAA (void* ___0_array, int32_t ___1_length, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m4809F01D470D4466F76AD547CCBB126B73C0DE04 (void* ___0_array, int32_t ___1_length, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_mB6DC15F5849FB6406A1E060F37717E801CA1AA9C (void* ___0_array, int32_t ___1_length, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 NativeArray_1_AsSpan_mAFE9F40CE04C84DFB0D6C5C338015A226B0A3EB9 (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03 NativeSortExtension_SortJob_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m32C5AA6495C39886E9F10952078CDA9AB97ADECF (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_span, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___1_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 NativeArray_1_AsSpan_m52988A12DB01292F1C64E6786AA600A03601EF98 (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478 NativeSortExtension_SortJob_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mA8CA6EFD2F7E8AEC5454721CD3338B95A4B706A8 (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 ___0_span, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___1_comp, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
inline int32_t Span_1_get_Length_m62F446B5508B032A22CD1BA21D998626E6B8A5CC_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeStream_AllocateBlock_mAD29C962FDE6B17A135737E09693B6FAB6E974AF (NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* ___0_stream, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF (ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UnsafeUtility_ReadArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE8E8016F9D75B5FE0F784B0B6EBEF71D6B31D134_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSerializer_1_get_IsWriter_m6978D539067CE30EC81B6491589C7C30A1E16C28 (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_WriteSynchronizationData_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_mA3456FEB695F9CC15E64DD92DE35A37E2A0DCDF1 (NetworkAnimator_tD8BA9A86CB82706429757E0FEDA16C813A4D1148* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* ___0_serializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_TisParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC_mA7F256E076673D43A8BCFCDB647841751F0196DE (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, ParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC* ___0_value, ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_UpdateParameters_m4FA30B1826C8A13F28B94B4FD36ED9F0EFCD369D (NetworkAnimator_tD8BA9A86CB82706429757E0FEDA16C813A4D1148* __this, ParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC* ___0_parametersUpdate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_TisAnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187_m98CDB92B1DB4B8B097365E89BE52CC1BE7F8A719 (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187* ___0_value, ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE77DBDC5F3E4FED1452607A3D6A20E7C159AA0B8 List_1_GetEnumerator_m83153DFE1C4E11A34D227E36CCD2CBABC48EA2EA (List_1_t80D43CC426B520567FE49EEA17C1D8FD86D6696F* __this, const RuntimeMethod* method) ;
inline void Enumerator_Dispose_mA69D9CB7C92F7DFDC6BB82887D271219D07AC7FF (Enumerator_tE77DBDC5F3E4FED1452607A3D6A20E7C159AA0B8* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE77DBDC5F3E4FED1452607A3D6A20E7C159AA0B8*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_fshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimationState_t90091AD2757C132602279750EFF7907F066817B0 Enumerator_get_Current_m98B59DFF5B4E87E97FAD0D22CA521349CC953FB6_inline (Enumerator_tE77DBDC5F3E4FED1452607A3D6A20E7C159AA0B8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_UpdateAnimationState_m88291953F0225B43EBC4866235E6178D235AD268 (NetworkAnimator_tD8BA9A86CB82706429757E0FEDA16C813A4D1148* __this, AnimationState_t90091AD2757C132602279750EFF7907F066817B0 ___0_animationState, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m43F11F7B4B423C4FA00AB8BAAA0F4845ADB3DCE8 (Enumerator_tE77DBDC5F3E4FED1452607A3D6A20E7C159AA0B8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSerializer_1_get_IsWriter_mA81CADE3680B019327BD43C92F4743B2140A83EB (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_WriteSynchronizationData_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m5CC9D1518284F56984451654F14C1C46DCE4BBB4 (NetworkAnimator_tD8BA9A86CB82706429757E0FEDA16C813A4D1148* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* ___0_serializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_TisParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC_mF3B6B99313E75B218B838EE496B43F5E735A6AB0 (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, ParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC* ___0_value, ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_TisAnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187_m12AAB7EEDCCF9DD9FDC4BCE76D34CCCBA6641BE4 (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187* ___0_value, ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_WriteParameters_mD0E810D1896AA7C2172D8C1B297458A9BE2EB2A0 (NetworkAnimator_tD8BA9A86CB82706429757E0FEDA16C813A4D1148* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_writer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FastBufferWriter_ToArray_mC3A2B1C0D9DD5C11E08A371C70E600FC771B2E67_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mC98BDD461B319F62D6EC8507108556C3E2115CB8_inline (List_1_t608F513282432121FFB4853A1786723C4640BF7B* __this, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_fullPathHash_m583FA8FAAC28BF65A65166D100949833E515210F_inline (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6_inline (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_t90091AD2757C132602279750EFF7907F066817B0 List_1_get_Item_m61FF2551C3D4EBBD84A9CA3132542D7477ADA76E (List_1_t80D43CC426B520567FE49EEA17C1D8FD86D6696F* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD Animator_GetAnimatorTransitionInfo_mAB532C0834DEF3685C6E16C82B7A93B8875FC542 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetNextAnimatorStateInfo_m4661892C3F99329907EE3EE1C1FCB7974CDA2433 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_length_m2FAE317264F7C796427207F8F28E550DB49F9541_inline (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_speed_m473826E53D827AEE36A7FF0662AC4817C2EF3495_inline (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_speedMultiplier_mA078AADECC98C266C82E2756A351235DDC63A107_inline (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AnimatorTransitionInfo_get_duration_m15DB72ECD67D569CA85DA4CD46E4C92677BFF8B9_inline (AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AnimatorTransitionInfo_get_normalizedTime_m0D107F16FB8351EBB0E8F8A4367A69916E260072_inline (AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_m52263CF56042F57A80C268A8A38D89AD866572A9 (Dictionary_2_tC943D56617D8B8E84F642A39D9C23D41129D8A0D* __this, int32_t ___0_key, Dictionary_2_t6D1658640126313BDE4B1F19CE2B98BDE08F348E** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC943D56617D8B8E84F642A39D9C23D41129D8A0D*, int32_t, Dictionary_2_t6D1658640126313BDE4B1F19CE2B98BDE08F348E**, const RuntimeMethod*))Dictionary_2_TryGetValue_mE84CAE1C2C3C804992294A454700ECB3273CA55C_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_shortNameHash_mEE816B999C282A3BA95AFC64278B994E899B7004_inline (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_m3A20141F3BB5E34ED56057B61131956233A92440 (Dictionary_2_t6D1658640126313BDE4B1F19CE2B98BDE08F348E* __this, int32_t ___0_key, TransitionStateInfo_t06B15C902172AA351BC9AE9875A5D676D05FA567** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6D1658640126313BDE4B1F19CE2B98BDE08F348E*, int32_t, TransitionStateInfo_t06B15C902172AA351BC9AE9875A5D676D05FA567**, const RuntimeMethod*))Dictionary_2_TryGetValue_mE84CAE1C2C3C804992294A454700ECB3273CA55C_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m8AD2AC9FAB3A7D5FD7D07A068AF8F75A0F12E6FB (List_1_t80D43CC426B520567FE49EEA17C1D8FD86D6696F* __this, int32_t ___0_index, AnimationState_t90091AD2757C132602279750EFF7907F066817B0 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_layerCount_m75C20E7284800DFA0E4AD7EC23910BDB6D62BDA8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMessage_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m23D20CD018A36929CBC0E566CA50D1B71AD6E17B (AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B ___0_serializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMessage_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_mC38DB4A479EB4701AE87B6136D8143352E7C488D (AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___0_serializer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* UnsafeUtilityInternal_ArrayElementAsRef_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_m6963A99A3BEB5DBAAC51E9BFAB6B7C5FFB1B6F7C_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* UnsafeUtilityInternal_ArrayElementAsRef_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_mF746F79DDB4E9E3AE6D6CB0BF1444F14B688DA8A_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* UnsafeUtilityInternal_ArrayElementAsRef_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m4FB830DBC0E037964D9CF80FF3A54F5BB55B1828_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* UnsafeUtilityInternal_ArrayElementAsRef_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m2A965F4CA426A546BB929C808676861734552C39_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_mFA58277CFA3A2687E5020487E60D64DBC18B9701_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_m92DA789CEA357B9A0813DF7F446B13EF73AD73D6_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85_m308806641E8EA9A66224F74ECF0BAE4F35E0CB04_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_m61FA291DB4F380818713C490D42D8D2DB54205F5_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m74A3F595A175C01339EC0C399A73A4581F6815B5_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_mBD9A9A310FE3166D59DBDC95A7D3045F53FA000F_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D_mDFEF405F49BB9B54263C12621B027ABAA7F03D7B_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mF7148BF1F0EEC1BA8D9BB9BBC4FDE837B554AF2F_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_m2EC8F6F083901CDB30B427A9774DA89B8194CDD1_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mAA206F483E8A9C1A8291AB9D2B375CEE484999DC_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m2AAEE729A64DBF51D7170C91EC0A436DE147E07D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_mA52E86322CB284662FE8CD2BA9CEFF26A297C164_inline (const RuntimeMethod* method) ;
inline int32_t UnsafeList_1_get_Capacity_mA1DCA5E10F5482F6DBA7EA8E7869809E866340C8_inline (UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D*, const RuntimeMethod*))UnsafeList_1_get_Capacity_m163371206E2F39354C1DF26C807700F2FDF08C8B_fshared_inline)(__this, method);
}
inline int32_t UnsafeList_1_get_Length_m8F291AB2831EA4C84FE9829EBA0421F9E0DA70C8_inline (UnsafeList_1_t2698BCDA35C9A619C8B06830DF4348F090657175* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeList_1_t2698BCDA35C9A619C8B06830DF4348F090657175*, const RuntimeMethod*))UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_fshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline (int32_t ___0_value, const RuntimeMethod* method) ;
inline int32_t UnsafeList_1_get_Length_m33B6B84F4FE870EEB76A3E5D94630F4A5B759E12_inline (UnsafeList_1_tAAB699F827C515727975973202558FB27BEC605E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeList_1_tAAB699F827C515727975973202558FB27BEC605E*, const RuntimeMethod*))UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0B7B877C8F00DCC1C95D7124B3B0D83C6D492345_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6CE8AF6F42FA98657985C680DB85747DAC856E2F_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeUtilityInternal_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA5895D44428BCE7F38A3E30CA324F5E0E599364F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC71868C665A692778D508E69E8AF1A631E0CD348_inline (void* ___0_destination, int32_t ___1_index, uint64_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UnsafeUtilityInternal_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5AE01E222FB08F27EB26C6D2FE6F873A34BE8707_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m38B84F4395041C32077D6BD505700613A549E5B2_inline (void* ___0_destination, int32_t ___1_index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtilityInternal_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4E48372E1097232C60446DED043FEC5C7A61C4B0_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA724E762E40FA0C9F59E22D26CD7760418780D94_inline (void* ___0_destination, int32_t ___1_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeUtilityInternal_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m504EAEDFA7F1C3551FBC5F11CFB40360033F8B84_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UnsafeUtilityInternal_ReadArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC8BDFAFE242DB675D668D2942EFD7CE36006251C_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m6282A828030925643699A976FC25E9208D4BA35E (List_1_t608F513282432121FFB4853A1786723C4640BF7B* __this, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisRequest_tAA55F47806E39B0E19B53273DCBFB5CF457F9187_m4E449922364E9B8E4866691F93F6732CEAA7ABFD (NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Request_tAA55F47806E39B0E19B53273DCBFB5CF457F9187 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9* G_B2_0 = NULL;
	NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9));
		NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(Request_tAA55F47806E39B0E19B53273DCBFB5CF457F9187));
		Request_tAA55F47806E39B0E19B53273DCBFB5CF457F9187 L_3 = V_1;
		int32_t L_4 = ___1_length;
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisRequest_tAA55F47806E39B0E19B53273DCBFB5CF457F9187_m969A3A049B03E29AB3BE1C51850279A66AA353E2((&V_0), L_3, L_4, NULL);
		L_2->___m_Buffer = L_5;
		NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_15,NULL));
		uint32_t L_17 = sizeof(Request_tAA55F47806E39B0E19B53273DCBFB5CF457F9187);
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_17,NULL));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)il2cpp_codegen_multiply(L_16, L_18)), NULL);
	}

IL_005e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisHopPawnEntry_t47AA250F90984ADD7C3282787B94200CCFDEA02E_m205E06677FF658865EA476C507C1399F9AFDAB26 (NativeArray_1_t3C4EB00D6E5BF0CBB74701AAFE714045834F8649* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	HopPawnEntry_t47AA250F90984ADD7C3282787B94200CCFDEA02E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t3C4EB00D6E5BF0CBB74701AAFE714045834F8649* G_B2_0 = NULL;
	NativeArray_1_t3C4EB00D6E5BF0CBB74701AAFE714045834F8649* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_t3C4EB00D6E5BF0CBB74701AAFE714045834F8649* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_t3C4EB00D6E5BF0CBB74701AAFE714045834F8649* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_t3C4EB00D6E5BF0CBB74701AAFE714045834F8649));
		NativeArray_1_t3C4EB00D6E5BF0CBB74701AAFE714045834F8649* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(HopPawnEntry_t47AA250F90984ADD7C3282787B94200CCFDEA02E));
		HopPawnEntry_t47AA250F90984ADD7C3282787B94200CCFDEA02E L_3 = V_1;
		int32_t L_4 = ___1_length;
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisHopPawnEntry_t47AA250F90984ADD7C3282787B94200CCFDEA02E_mE9726848E4F7DA1DE353AF747ACF6D04566CDCDD((&V_0), L_3, L_4, NULL);
		L_2->___m_Buffer = L_5;
		NativeArray_1_t3C4EB00D6E5BF0CBB74701AAFE714045834F8649* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_t3C4EB00D6E5BF0CBB74701AAFE714045834F8649* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		NativeArray_1_t3C4EB00D6E5BF0CBB74701AAFE714045834F8649* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_t3C4EB00D6E5BF0CBB74701AAFE714045834F8649* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_15,NULL));
		uint32_t L_17 = sizeof(HopPawnEntry_t47AA250F90984ADD7C3282787B94200CCFDEA02E);
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_17,NULL));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)il2cpp_codegen_multiply(L_16, L_18)), NULL);
	}

IL_005e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisBoatStateEntry_tF74997E8F9D2505698CBE8554168F8D9FBAD669A_m58719302510D4C6ECBEB63DD8CED577E943EDE8B (NativeArray_1_t7A7D87C39A73467D9004DF13D6673E93BD2330CA* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	BoatStateEntry_tF74997E8F9D2505698CBE8554168F8D9FBAD669A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t7A7D87C39A73467D9004DF13D6673E93BD2330CA* G_B2_0 = NULL;
	NativeArray_1_t7A7D87C39A73467D9004DF13D6673E93BD2330CA* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_t7A7D87C39A73467D9004DF13D6673E93BD2330CA* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_t7A7D87C39A73467D9004DF13D6673E93BD2330CA* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_t7A7D87C39A73467D9004DF13D6673E93BD2330CA));
		NativeArray_1_t7A7D87C39A73467D9004DF13D6673E93BD2330CA* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(BoatStateEntry_tF74997E8F9D2505698CBE8554168F8D9FBAD669A));
		BoatStateEntry_tF74997E8F9D2505698CBE8554168F8D9FBAD669A L_3 = V_1;
		int32_t L_4 = ___1_length;
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisBoatStateEntry_tF74997E8F9D2505698CBE8554168F8D9FBAD669A_m79D9B7DEDB7D6784815F0FEFC6DE8CAB049A7CA9((&V_0), L_3, L_4, NULL);
		L_2->___m_Buffer = L_5;
		NativeArray_1_t7A7D87C39A73467D9004DF13D6673E93BD2330CA* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_t7A7D87C39A73467D9004DF13D6673E93BD2330CA* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		NativeArray_1_t7A7D87C39A73467D9004DF13D6673E93BD2330CA* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_t7A7D87C39A73467D9004DF13D6673E93BD2330CA* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_15,NULL));
		uint32_t L_17 = sizeof(BoatStateEntry_tF74997E8F9D2505698CBE8554168F8D9FBAD669A);
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_17,NULL));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)il2cpp_codegen_multiply(L_16, L_18)), NULL);
	}

IL_005e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisRowingProgressEntry_t3BA27C9184456A51ACBC15629622165F645C10E0_mE47AC0F125B8E68B1891A97EAF8F303BF9371BB5 (NativeArray_1_t00D6A202982682D01048CE46A6B5D3CE5E14FBDB* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RowingProgressEntry_t3BA27C9184456A51ACBC15629622165F645C10E0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t00D6A202982682D01048CE46A6B5D3CE5E14FBDB* G_B2_0 = NULL;
	NativeArray_1_t00D6A202982682D01048CE46A6B5D3CE5E14FBDB* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_t00D6A202982682D01048CE46A6B5D3CE5E14FBDB* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_t00D6A202982682D01048CE46A6B5D3CE5E14FBDB* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_t00D6A202982682D01048CE46A6B5D3CE5E14FBDB));
		NativeArray_1_t00D6A202982682D01048CE46A6B5D3CE5E14FBDB* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(RowingProgressEntry_t3BA27C9184456A51ACBC15629622165F645C10E0));
		RowingProgressEntry_t3BA27C9184456A51ACBC15629622165F645C10E0 L_3 = V_1;
		int32_t L_4 = ___1_length;
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisRowingProgressEntry_t3BA27C9184456A51ACBC15629622165F645C10E0_m1B9BB50A3BE2EAA94C580D33B32609E3B13F5647((&V_0), L_3, L_4, NULL);
		L_2->___m_Buffer = L_5;
		NativeArray_1_t00D6A202982682D01048CE46A6B5D3CE5E14FBDB* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_t00D6A202982682D01048CE46A6B5D3CE5E14FBDB* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		NativeArray_1_t00D6A202982682D01048CE46A6B5D3CE5E14FBDB* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_t00D6A202982682D01048CE46A6B5D3CE5E14FBDB* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_15,NULL));
		uint32_t L_17 = sizeof(RowingProgressEntry_t3BA27C9184456A51ACBC15629622165F645C10E0);
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_17,NULL));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)il2cpp_codegen_multiply(L_16, L_18)), NULL);
	}

IL_005e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisPlayerScoreEntry_t1589D41E7EDE41B6E5767D8713948FB500561655_m330975B6C12CB8210C39B5FF06593926742C2339 (NativeArray_1_tAB7416F94D07509D378DE0809D1A7FD14850DB95* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PlayerScoreEntry_t1589D41E7EDE41B6E5767D8713948FB500561655 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tAB7416F94D07509D378DE0809D1A7FD14850DB95* G_B2_0 = NULL;
	NativeArray_1_tAB7416F94D07509D378DE0809D1A7FD14850DB95* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_tAB7416F94D07509D378DE0809D1A7FD14850DB95* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_tAB7416F94D07509D378DE0809D1A7FD14850DB95* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_tAB7416F94D07509D378DE0809D1A7FD14850DB95));
		NativeArray_1_tAB7416F94D07509D378DE0809D1A7FD14850DB95* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(PlayerScoreEntry_t1589D41E7EDE41B6E5767D8713948FB500561655));
		PlayerScoreEntry_t1589D41E7EDE41B6E5767D8713948FB500561655 L_3 = V_1;
		int32_t L_4 = ___1_length;
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisPlayerScoreEntry_t1589D41E7EDE41B6E5767D8713948FB500561655_m320F99D8631F5EAA0500B73BB5CD103DFCF2EC5C((&V_0), L_3, L_4, NULL);
		L_2->___m_Buffer = L_5;
		NativeArray_1_tAB7416F94D07509D378DE0809D1A7FD14850DB95* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_tAB7416F94D07509D378DE0809D1A7FD14850DB95* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		NativeArray_1_tAB7416F94D07509D378DE0809D1A7FD14850DB95* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_tAB7416F94D07509D378DE0809D1A7FD14850DB95* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_15,NULL));
		uint32_t L_17 = sizeof(PlayerScoreEntry_t1589D41E7EDE41B6E5767D8713948FB500561655);
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_17,NULL));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)il2cpp_codegen_multiply(L_16, L_18)), NULL);
	}

IL_005e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisRunnerStateEntry_t5E91402350119B5BEC9FF4777E42F66EF8D4C597_m7A5609663F7D995AED37333DA54B3DA57E286F79 (NativeArray_1_tF3D0890AE9B0D75F6AD24D3F71812E749566F650* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RunnerStateEntry_t5E91402350119B5BEC9FF4777E42F66EF8D4C597 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF3D0890AE9B0D75F6AD24D3F71812E749566F650* G_B2_0 = NULL;
	NativeArray_1_tF3D0890AE9B0D75F6AD24D3F71812E749566F650* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_tF3D0890AE9B0D75F6AD24D3F71812E749566F650* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_tF3D0890AE9B0D75F6AD24D3F71812E749566F650* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_tF3D0890AE9B0D75F6AD24D3F71812E749566F650));
		NativeArray_1_tF3D0890AE9B0D75F6AD24D3F71812E749566F650* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(RunnerStateEntry_t5E91402350119B5BEC9FF4777E42F66EF8D4C597));
		RunnerStateEntry_t5E91402350119B5BEC9FF4777E42F66EF8D4C597 L_3 = V_1;
		int32_t L_4 = ___1_length;
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisRunnerStateEntry_t5E91402350119B5BEC9FF4777E42F66EF8D4C597_mF1C8DEA76F06CB06461FE5CAC654A4B826D2DA3E((&V_0), L_3, L_4, NULL);
		L_2->___m_Buffer = L_5;
		NativeArray_1_tF3D0890AE9B0D75F6AD24D3F71812E749566F650* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_tF3D0890AE9B0D75F6AD24D3F71812E749566F650* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		NativeArray_1_tF3D0890AE9B0D75F6AD24D3F71812E749566F650* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_tF3D0890AE9B0D75F6AD24D3F71812E749566F650* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_15,NULL));
		uint32_t L_17 = sizeof(RunnerStateEntry_t5E91402350119B5BEC9FF4777E42F66EF8D4C597);
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_17,NULL));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)il2cpp_codegen_multiply(L_16, L_18)), NULL);
	}

IL_005e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisClaimEntry_tEC10AE3878CE528667B104E561CC875463CCA5AD_m1B2186FBD44F9477D5E30B0312C8FE70D7C5BB6F (NativeArray_1_t7D062F6088F0A20A4420B76C6C8A5BEF40AC0CEB* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ClaimEntry_tEC10AE3878CE528667B104E561CC875463CCA5AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t7D062F6088F0A20A4420B76C6C8A5BEF40AC0CEB* G_B2_0 = NULL;
	NativeArray_1_t7D062F6088F0A20A4420B76C6C8A5BEF40AC0CEB* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_t7D062F6088F0A20A4420B76C6C8A5BEF40AC0CEB* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_t7D062F6088F0A20A4420B76C6C8A5BEF40AC0CEB* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_t7D062F6088F0A20A4420B76C6C8A5BEF40AC0CEB));
		NativeArray_1_t7D062F6088F0A20A4420B76C6C8A5BEF40AC0CEB* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(ClaimEntry_tEC10AE3878CE528667B104E561CC875463CCA5AD));
		ClaimEntry_tEC10AE3878CE528667B104E561CC875463CCA5AD L_3 = V_1;
		int32_t L_4 = ___1_length;
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisClaimEntry_tEC10AE3878CE528667B104E561CC875463CCA5AD_m12E4E6D66B17CB40F574AAF4CAAC100C76A75FDB((&V_0), L_3, L_4, NULL);
		L_2->___m_Buffer = L_5;
		NativeArray_1_t7D062F6088F0A20A4420B76C6C8A5BEF40AC0CEB* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_t7D062F6088F0A20A4420B76C6C8A5BEF40AC0CEB* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		NativeArray_1_t7D062F6088F0A20A4420B76C6C8A5BEF40AC0CEB* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_t7D062F6088F0A20A4420B76C6C8A5BEF40AC0CEB* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_15,NULL));
		uint32_t L_17 = sizeof(ClaimEntry_tEC10AE3878CE528667B104E561CC875463CCA5AD);
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_17,NULL));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)il2cpp_codegen_multiply(L_16, L_18)), NULL);
	}

IL_005e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisSubQueueItem_tAE6DA2A0B68107490190DB4680442767B9D420B7_m68CC523E037AB12AD6CFC494E6153C194DBCDD62 (NativeArray_1_tDD3CE9EF5F70858510DABB35CED98E57E5D5B325* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SubQueueItem_tAE6DA2A0B68107490190DB4680442767B9D420B7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDD3CE9EF5F70858510DABB35CED98E57E5D5B325* G_B2_0 = NULL;
	NativeArray_1_tDD3CE9EF5F70858510DABB35CED98E57E5D5B325* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_tDD3CE9EF5F70858510DABB35CED98E57E5D5B325* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_tDD3CE9EF5F70858510DABB35CED98E57E5D5B325* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_tDD3CE9EF5F70858510DABB35CED98E57E5D5B325));
		NativeArray_1_tDD3CE9EF5F70858510DABB35CED98E57E5D5B325* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(SubQueueItem_tAE6DA2A0B68107490190DB4680442767B9D420B7));
		SubQueueItem_tAE6DA2A0B68107490190DB4680442767B9D420B7 L_3 = V_1;
		int32_t L_4 = ___1_length;
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisSubQueueItem_tAE6DA2A0B68107490190DB4680442767B9D420B7_m7936D9793231DF00A043430604DC46082A87F8FD((&V_0), L_3, L_4, NULL);
		L_2->___m_Buffer = L_5;
		NativeArray_1_tDD3CE9EF5F70858510DABB35CED98E57E5D5B325* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_tDD3CE9EF5F70858510DABB35CED98E57E5D5B325* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		NativeArray_1_tDD3CE9EF5F70858510DABB35CED98E57E5D5B325* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_tDD3CE9EF5F70858510DABB35CED98E57E5D5B325* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_15,NULL));
		uint32_t L_17 = sizeof(SubQueueItem_tAE6DA2A0B68107490190DB4680442767B9D420B7);
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_17,NULL));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)il2cpp_codegen_multiply(L_16, L_18)), NULL);
	}

IL_005e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisReceiveQueueItem_tC07D121A91E2DA50FCBD08D1720CE0B4BA0F93BE_mF53A3FB9302728805D89C674E00E9FD0C5A16EC7 (NativeArray_1_t44BB0C991DF66AC27C4E279C671B9CDAD4DF904C* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ReceiveQueueItem_tC07D121A91E2DA50FCBD08D1720CE0B4BA0F93BE V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t44BB0C991DF66AC27C4E279C671B9CDAD4DF904C* G_B2_0 = NULL;
	NativeArray_1_t44BB0C991DF66AC27C4E279C671B9CDAD4DF904C* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_t44BB0C991DF66AC27C4E279C671B9CDAD4DF904C* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_t44BB0C991DF66AC27C4E279C671B9CDAD4DF904C* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_t44BB0C991DF66AC27C4E279C671B9CDAD4DF904C));
		NativeArray_1_t44BB0C991DF66AC27C4E279C671B9CDAD4DF904C* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(ReceiveQueueItem_tC07D121A91E2DA50FCBD08D1720CE0B4BA0F93BE));
		ReceiveQueueItem_tC07D121A91E2DA50FCBD08D1720CE0B4BA0F93BE L_3 = V_1;
		int32_t L_4 = ___1_length;
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisReceiveQueueItem_tC07D121A91E2DA50FCBD08D1720CE0B4BA0F93BE_mDEE8D38C2E1801BA8F53B7F4FFE61A25090DE59B((&V_0), L_3, L_4, NULL);
		L_2->___m_Buffer = L_5;
		NativeArray_1_t44BB0C991DF66AC27C4E279C671B9CDAD4DF904C* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_t44BB0C991DF66AC27C4E279C671B9CDAD4DF904C* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		NativeArray_1_t44BB0C991DF66AC27C4E279C671B9CDAD4DF904C* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_t44BB0C991DF66AC27C4E279C671B9CDAD4DF904C* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_15,NULL));
		uint32_t L_17 = sizeof(ReceiveQueueItem_tC07D121A91E2DA50FCBD08D1720CE0B4BA0F93BE);
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_17,NULL));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)il2cpp_codegen_multiply(L_16, L_18)), NULL);
	}

IL_005e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisSendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7_m2141D127309A530CB1FF375FBED0C99439F2413B (NativeArray_1_tCBD32A38A0C6CD51C1BD885673896F83A3B0286C* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tCBD32A38A0C6CD51C1BD885673896F83A3B0286C* G_B2_0 = NULL;
	NativeArray_1_tCBD32A38A0C6CD51C1BD885673896F83A3B0286C* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_tCBD32A38A0C6CD51C1BD885673896F83A3B0286C* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_tCBD32A38A0C6CD51C1BD885673896F83A3B0286C* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_tCBD32A38A0C6CD51C1BD885673896F83A3B0286C));
		NativeArray_1_tCBD32A38A0C6CD51C1BD885673896F83A3B0286C* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7));
		SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_3 = V_1;
		int32_t L_4 = ___1_length;
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisSendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7_m12E0489E2E1E48667A24B5BD99F8721C9A0FFF21((&V_0), L_3, L_4, NULL);
		L_2->___m_Buffer = L_5;
		NativeArray_1_tCBD32A38A0C6CD51C1BD885673896F83A3B0286C* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_tCBD32A38A0C6CD51C1BD885673896F83A3B0286C* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		NativeArray_1_tCBD32A38A0C6CD51C1BD885673896F83A3B0286C* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_tCBD32A38A0C6CD51C1BD885673896F83A3B0286C* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_15,NULL));
		uint32_t L_17 = sizeof(SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7);
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_17,NULL));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)il2cpp_codegen_multiply(L_16, L_18)), NULL);
	}

IL_005e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisPipelineImpl_t422927EB35F759F18ECBA1C7B075AAC92918017E_mAEF554F51923CAF5CF4A53590D318DA1B6F2334D (NativeArray_1_t297CCD1F4B5B2F0D5D4F02F6294D70E2F2129CE3* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PipelineImpl_t422927EB35F759F18ECBA1C7B075AAC92918017E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t297CCD1F4B5B2F0D5D4F02F6294D70E2F2129CE3* G_B2_0 = NULL;
	NativeArray_1_t297CCD1F4B5B2F0D5D4F02F6294D70E2F2129CE3* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_t297CCD1F4B5B2F0D5D4F02F6294D70E2F2129CE3* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_t297CCD1F4B5B2F0D5D4F02F6294D70E2F2129CE3* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_t297CCD1F4B5B2F0D5D4F02F6294D70E2F2129CE3));
		NativeArray_1_t297CCD1F4B5B2F0D5D4F02F6294D70E2F2129CE3* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(PipelineImpl_t422927EB35F759F18ECBA1C7B075AAC92918017E));
		PipelineImpl_t422927EB35F759F18ECBA1C7B075AAC92918017E L_3 = V_1;
		int32_t L_4 = ___1_length;
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisPipelineImpl_t422927EB35F759F18ECBA1C7B075AAC92918017E_mE372F31BF61DB57512C121B9D376A73980ACDDC4((&V_0), L_3, L_4, NULL);
		L_2->___m_Buffer = L_5;
		NativeArray_1_t297CCD1F4B5B2F0D5D4F02F6294D70E2F2129CE3* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_t297CCD1F4B5B2F0D5D4F02F6294D70E2F2129CE3* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		NativeArray_1_t297CCD1F4B5B2F0D5D4F02F6294D70E2F2129CE3* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_t297CCD1F4B5B2F0D5D4F02F6294D70E2F2129CE3* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_15,NULL));
		uint32_t L_17 = sizeof(PipelineImpl_t422927EB35F759F18ECBA1C7B075AAC92918017E);
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_17,NULL));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)il2cpp_codegen_multiply(L_16, L_18)), NULL);
	}

IL_005e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_mA4E73BF0E61F6F8D05434016CC16E2F35F11143B (NativeArray_1_tF0A83538A02306EA7A8F22FEA945A6961365E8C8* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF0A83538A02306EA7A8F22FEA945A6961365E8C8* G_B2_0 = NULL;
	NativeArray_1_tF0A83538A02306EA7A8F22FEA945A6961365E8C8* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_tF0A83538A02306EA7A8F22FEA945A6961365E8C8* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_tF0A83538A02306EA7A8F22FEA945A6961365E8C8* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_tF0A83538A02306EA7A8F22FEA945A6961365E8C8));
		NativeArray_1_tF0A83538A02306EA7A8F22FEA945A6961365E8C8* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2));
		UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 L_3 = V_1;
		int32_t L_4 = ___1_length;
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_m2CAE202D92BD72A85BE2DF55EF088B02CF320D0C((&V_0), L_3, L_4, NULL);
		L_2->___m_Buffer = L_5;
		NativeArray_1_tF0A83538A02306EA7A8F22FEA945A6961365E8C8* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_tF0A83538A02306EA7A8F22FEA945A6961365E8C8* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		NativeArray_1_tF0A83538A02306EA7A8F22FEA945A6961365E8C8* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_tF0A83538A02306EA7A8F22FEA945A6961365E8C8* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_15,NULL));
		uint32_t L_17 = sizeof(UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2);
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_17,NULL));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)il2cpp_codegen_multiply(L_16, L_18)), NULL);
	}

IL_005e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899_m8BBF99566189651A5A4D370C1CA2A0977A3A5751 (NativeArray_1_tD66836534F00AADA4D14B93A8662AF8DA2D65075* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tD66836534F00AADA4D14B93A8662AF8DA2D65075* G_B2_0 = NULL;
	NativeArray_1_tD66836534F00AADA4D14B93A8662AF8DA2D65075* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_tD66836534F00AADA4D14B93A8662AF8DA2D65075* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_tD66836534F00AADA4D14B93A8662AF8DA2D65075* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_tD66836534F00AADA4D14B93A8662AF8DA2D65075));
		NativeArray_1_tD66836534F00AADA4D14B93A8662AF8DA2D65075* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899));
		ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 L_3 = V_1;
		int32_t L_4 = ___1_length;
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899_m923116D3238150F6CE4341505066A968F204FF94((&V_0), L_3, L_4, NULL);
		L_2->___m_Buffer = L_5;
		NativeArray_1_tD66836534F00AADA4D14B93A8662AF8DA2D65075* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_tD66836534F00AADA4D14B93A8662AF8DA2D65075* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		NativeArray_1_tD66836534F00AADA4D14B93A8662AF8DA2D65075* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_tD66836534F00AADA4D14B93A8662AF8DA2D65075* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_15,NULL));
		uint32_t L_17 = sizeof(ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899);
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_17,NULL));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)il2cpp_codegen_multiply(L_16, L_18)), NULL);
	}

IL_005e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisOccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_m2B2B3C2CF331B986B51A47C36A235AA04C30AEAC (NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF* G_B2_0 = NULL;
	NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF));
		NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D));
		OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D L_3 = V_1;
		int32_t L_4 = ___1_length;
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisOccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_m5D6D424EA85E5C67A4C7886A061F55E58B8DF874((&V_0), L_3, L_4, NULL);
		L_2->___m_Buffer = L_5;
		NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_15,NULL));
		uint32_t L_17 = sizeof(OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D);
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_17,NULL));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)il2cpp_codegen_multiply(L_16, L_18)), NULL);
	}

IL_005e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisSplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A_m34E414E2482728954419B608C89D1997EE9B9A15 (NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443* G_B2_0 = NULL;
	NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443));
		NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A));
		SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A L_3 = V_1;
		int32_t L_4 = ___1_length;
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisSplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A_mF1FD4BE7A4959FFBC666387FB738E803B628785C((&V_0), L_3, L_4, NULL);
		L_2->___m_Buffer = L_5;
		NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_15,NULL));
		uint32_t L_17 = sizeof(SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A);
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_17,NULL));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)il2cpp_codegen_multiply(L_16, L_18)), NULL);
	}

IL_005e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_m3B0742CC415C55507DC1DFD9412CD88AC9DEF04D (NativeArray_1_t251C0B6A4D277C92366F302523FD5C0031FA1B31* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t251C0B6A4D277C92366F302523FD5C0031FA1B31* G_B2_0 = NULL;
	NativeArray_1_t251C0B6A4D277C92366F302523FD5C0031FA1B31* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_t251C0B6A4D277C92366F302523FD5C0031FA1B31* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_t251C0B6A4D277C92366F302523FD5C0031FA1B31* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_t251C0B6A4D277C92366F302523FD5C0031FA1B31));
		NativeArray_1_t251C0B6A4D277C92366F302523FD5C0031FA1B31* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750));
		UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 L_3 = V_1;
		int32_t L_4 = ___1_length;
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_m71C947FD457FF6751FC1D4E279E222FF46D254E3((&V_0), L_3, L_4, NULL);
		L_2->___m_Buffer = L_5;
		NativeArray_1_t251C0B6A4D277C92366F302523FD5C0031FA1B31* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_t251C0B6A4D277C92366F302523FD5C0031FA1B31* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		NativeArray_1_t251C0B6A4D277C92366F302523FD5C0031FA1B31* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_t251C0B6A4D277C92366F302523FD5C0031FA1B31* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_15,NULL));
		uint32_t L_17 = sizeof(UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750);
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_17,NULL));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)il2cpp_codegen_multiply(L_16, L_18)), NULL);
	}

IL_005e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisSlot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127_m3C9F2A22CEEEFE5A903070AC581C1013599DAAE7 (NativeArray_1_tB8D8B86A987B7E27BD621893A826604AA3A66C5C* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB8D8B86A987B7E27BD621893A826604AA3A66C5C* G_B2_0 = NULL;
	NativeArray_1_tB8D8B86A987B7E27BD621893A826604AA3A66C5C* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_tB8D8B86A987B7E27BD621893A826604AA3A66C5C* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_tB8D8B86A987B7E27BD621893A826604AA3A66C5C* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_tB8D8B86A987B7E27BD621893A826604AA3A66C5C));
		NativeArray_1_tB8D8B86A987B7E27BD621893A826604AA3A66C5C* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127));
		Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127 L_3 = V_1;
		int32_t L_4 = ___1_length;
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisSlot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127_mE7F7E5CF8D097EB1E39069715DC0619CBBED3798((&V_0), L_3, L_4, NULL);
		L_2->___m_Buffer = L_5;
		NativeArray_1_tB8D8B86A987B7E27BD621893A826604AA3A66C5C* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_tB8D8B86A987B7E27BD621893A826604AA3A66C5C* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		NativeArray_1_tB8D8B86A987B7E27BD621893A826604AA3A66C5C* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_tB8D8B86A987B7E27BD621893A826604AA3A66C5C* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_15,NULL));
		uint32_t L_17 = sizeof(Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127);
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_17,NULL));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)il2cpp_codegen_multiply(L_16, L_18)), NULL);
	}

IL_005e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisPendingPacket_t479815078D1E4D1B5441E44C39E685232AB4EE94_m2A04B4AB5647B4A2C8433C61D19B05A6A9D92363 (NativeArray_1_t43EBD22763C170C0B890F032988B8DB22807DDDE* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PendingPacket_t479815078D1E4D1B5441E44C39E685232AB4EE94 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t43EBD22763C170C0B890F032988B8DB22807DDDE* G_B2_0 = NULL;
	NativeArray_1_t43EBD22763C170C0B890F032988B8DB22807DDDE* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_t43EBD22763C170C0B890F032988B8DB22807DDDE* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_t43EBD22763C170C0B890F032988B8DB22807DDDE* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_t43EBD22763C170C0B890F032988B8DB22807DDDE));
		NativeArray_1_t43EBD22763C170C0B890F032988B8DB22807DDDE* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(PendingPacket_t479815078D1E4D1B5441E44C39E685232AB4EE94));
		PendingPacket_t479815078D1E4D1B5441E44C39E685232AB4EE94 L_3 = V_1;
		int32_t L_4 = ___1_length;
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisPendingPacket_t479815078D1E4D1B5441E44C39E685232AB4EE94_mA1FC9DF36D2185E0874AB5CD7CCD50F67C9C7E1F((&V_0), L_3, L_4, NULL);
		L_2->___m_Buffer = L_5;
		NativeArray_1_t43EBD22763C170C0B890F032988B8DB22807DDDE* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_t43EBD22763C170C0B890F032988B8DB22807DDDE* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		NativeArray_1_t43EBD22763C170C0B890F032988B8DB22807DDDE* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_t43EBD22763C170C0B890F032988B8DB22807DDDE* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_15,NULL));
		uint32_t L_17 = sizeof(PendingPacket_t479815078D1E4D1B5441E44C39E685232AB4EE94);
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_17,NULL));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)il2cpp_codegen_multiply(L_16, L_18)), NULL);
	}

IL_005e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisPendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E_mD9FCE64CE2722E2EC484C4FC94349FBF82A403BA (NativeArray_1_t0BBC61E0123FC9C982A7F62EBA55B32F45F1C0F3* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t0BBC61E0123FC9C982A7F62EBA55B32F45F1C0F3* G_B2_0 = NULL;
	NativeArray_1_t0BBC61E0123FC9C982A7F62EBA55B32F45F1C0F3* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_t0BBC61E0123FC9C982A7F62EBA55B32F45F1C0F3* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_t0BBC61E0123FC9C982A7F62EBA55B32F45F1C0F3* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_t0BBC61E0123FC9C982A7F62EBA55B32F45F1C0F3));
		NativeArray_1_t0BBC61E0123FC9C982A7F62EBA55B32F45F1C0F3* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(PendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E));
		PendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E L_3 = V_1;
		int32_t L_4 = ___1_length;
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisPendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E_m68F17942B8F41C829DF0C06886BD7C00CD1F01F5((&V_0), L_3, L_4, NULL);
		L_2->___m_Buffer = L_5;
		NativeArray_1_t0BBC61E0123FC9C982A7F62EBA55B32F45F1C0F3* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_t0BBC61E0123FC9C982A7F62EBA55B32F45F1C0F3* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		NativeArray_1_t0BBC61E0123FC9C982A7F62EBA55B32F45F1C0F3* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_t0BBC61E0123FC9C982A7F62EBA55B32F45F1C0F3* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_15,NULL));
		uint32_t L_17 = sizeof(PendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E);
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_17,NULL));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)il2cpp_codegen_multiply(L_16, L_18)), NULL);
	}

IL_005e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisSendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653_m6FBC35F7C469686C106893ABC3BCCF697B484C3B (NativeArray_1_t85010600A230013CEAFF0C4764FC2A49F522CBE4* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t85010600A230013CEAFF0C4764FC2A49F522CBE4* G_B2_0 = NULL;
	NativeArray_1_t85010600A230013CEAFF0C4764FC2A49F522CBE4* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_t85010600A230013CEAFF0C4764FC2A49F522CBE4* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_t85010600A230013CEAFF0C4764FC2A49F522CBE4* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_t85010600A230013CEAFF0C4764FC2A49F522CBE4));
		NativeArray_1_t85010600A230013CEAFF0C4764FC2A49F522CBE4* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653));
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_3 = V_1;
		int32_t L_4 = ___1_length;
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisSendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653_mF652D379171A232DD7D9834D917E48B6A5A6FC58((&V_0), L_3, L_4, NULL);
		L_2->___m_Buffer = L_5;
		NativeArray_1_t85010600A230013CEAFF0C4764FC2A49F522CBE4* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_t85010600A230013CEAFF0C4764FC2A49F522CBE4* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		NativeArray_1_t85010600A230013CEAFF0C4764FC2A49F522CBE4* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_t85010600A230013CEAFF0C4764FC2A49F522CBE4* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_15,NULL));
		uint32_t L_17 = sizeof(SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653);
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_17,NULL));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)il2cpp_codegen_multiply(L_16, L_18)), NULL);
	}

IL_005e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m8CE87D920E01F7DDBF409D77486D923A85F54A46_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericStruct* ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_16 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4);
	memset(V_0, 0, SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* G_B2_0 = NULL;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* G_B3_1 = NULL;
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_array;
		il2cpp_codegen_initobj(L_0, sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_array;
		Il2CppFullySharedGenericStruct* L_2 = ___2_allocator;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4);
		int32_t L_4 = ___1_length;
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_5;
		L_5 = InvokerFuncInvoker3< void*, Il2CppFullySharedGenericStruct*, Il2CppFullySharedGenericStruct, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_2, L_3, L_4);
		L_1->___m_Buffer = L_5;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_8 = ___0_array;
		Il2CppFullySharedGenericStruct* L_9 = ___2_allocator;
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)L_9, &L_11, L_10);
		typedef bool ( *func_L_13)(void*,const RuntimeMethod*);
		bool L_14 = ((func_L_13)L_12)(L_11.thisPtr,L_11.method);
		if (L_14)
		{
			G_B2_0 = L_8;
			goto IL_0041;
		}
		G_B1_0 = L_8;
	}
	{
		Il2CppFullySharedGenericStruct* L_15 = ___2_allocator;
		Il2CppConstrainedCallData L_17;
		Il2CppMethodPointer L_18 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)L_15, &L_17, L_16);
		typedef int32_t ( *func_L_19)(void*,const RuntimeMethod*);
		int32_t L_20 = ((func_L_19)L_18)(L_17.thisPtr,L_17.method);
		G_B3_0 = ((int32_t)(L_20));
		G_B3_1 = G_B1_0;
		goto IL_0042;
	}

IL_0041:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0042:
	{
		G_B3_1->___m_AllocatorLabel = G_B3_0;
		int32_t L_21 = ___3_options;
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_0065;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_22 = ___0_array;
		void* L_23 = L_22->___m_Buffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_24 = ___0_array;
		int32_t L_25 = L_24->___m_Length;
		int64_t L_26 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_25,NULL));
		uint32_t L_27 = SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4;
		int64_t L_28 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_27,NULL));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_23, ((int64_t)il2cpp_codegen_multiply(L_26, L_28)), NULL);
	}

IL_0065:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayExtensions_Reinterpret_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mA330D618BD7C45E856E6DA4F12CA02BE46428C2B_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t0548762ACE3F99CD59157CCF3E7926B6E1E0C81F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		uint32_t L_0 = SizeOf_T_t0548762ACE3F99CD59157CCF3E7926B6E1E0C81F;
		V_0 = (int32_t)L_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_1;
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___0_array), NULL);
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_2,NULL));
		int32_t L_4 = V_0;
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int32_t L_6 = V_1;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_6,NULL));
		V_2 = ((int64_t)(((int64_t)il2cpp_codegen_multiply(L_3, L_5))/L_7));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_8 = ___0_array;
		void* L_9;
		L_9 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_8, NULL);
		int64_t L_10 = V_2;
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(L_10,NULL));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_12;
		L_12 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_9, L_11, 1, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* NativeArrayExtensions_UnsafeElementAt_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_m172973527DE9C444ABA117A4CE8B1D951C896487 (NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 L_0 = ___0_array;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_mDA21180EDFBB39E049CCDE93CB60CB0643938694_inline(L_0, NULL);
		int32_t L_2 = ___1_index;
		ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* L_3;
		L_3 = UnsafeUtility_ArrayElementAsRef_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_mE2EC96A1D8E6D4DF7EC659E128814755A7075557_inline(L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* NativeArrayExtensions_UnsafeElementAt_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_m56159FAB7E5AD01E526C4937CB1FAFF4F8F52A7D (NativeArray_1_t4C11F337CF2A7773644650D071AA5F21F158A5E0 ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t4C11F337CF2A7773644650D071AA5F21F158A5E0 L_0 = ___0_array;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_m9EA7C75DE41D07A2541AC0A25470A850BDC7BC31_inline(L_0, NULL);
		int32_t L_2 = ___1_index;
		URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* L_3;
		L_3 = UnsafeUtility_ArrayElementAsRef_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_mC51F8EF1765EE70896955EF51C596ADDC4E896FB_inline(L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* NativeArrayExtensions_UnsafeElementAt_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m7A148B250029B4DD2D82AA8B6C6BECC028AFB7E1 (NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 L_0 = ___0_array;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m3E690F509525382CEAB5744F69A1B4EE4E8DAA14_inline(L_0, NULL);
		int32_t L_2 = ___1_index;
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* L_3;
		L_3 = UnsafeUtility_ArrayElementAsRef_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m1EFB114B0998C1ECB40C7D8AF8D156995CBBB81A_inline(L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeArrayExtensions_UnsafeElementAt_TisIl2CppFullySharedGenericStruct_mD5A55E88E7EFCC4A84DC649BF433F56B5C426745_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_array;
		void* L_1;
		L_1 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, NULL);
		int32_t L_2 = ___1_index;
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = ((  Il2CppFullySharedGenericStruct* (*) (void*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* NativeArrayExtensions_UnsafeElementAtMutable_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m7A59DCAA90F6829CC60BD80BD2CB07DEF9CF971C (NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 L_0 = ___0_array;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_mA272EA3B0D40E27EE8A0C7C1D2C48B2BB7666865_inline(L_0, NULL);
		int32_t L_2 = ___1_index;
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* L_3;
		L_3 = UnsafeUtility_ArrayElementAsRef_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m1EFB114B0998C1ECB40C7D8AF8D156995CBBB81A_inline(L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeArrayExtensions_UnsafeElementAtMutable_TisIl2CppFullySharedGenericStruct_m9C116426CA92D692BE5B19D3207BABE599300FFD_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_array;
		void* L_1;
		L_1 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, NULL);
		int32_t L_2 = ___1_index;
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = ((  Il2CppFullySharedGenericStruct* (*) (void*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* NativeArrayExtensions_UnsafeElementAtMutable_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m24F4B1E162F6D8C43CBC0EB6CA0AF42B0881A6FB (NativeArray_1_t9086C71A5110879F9F76FDDC0009F7C7CF9D1B36 ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t9086C71A5110879F9F76FDDC0009F7C7CF9D1B36 L_0 = ___0_array;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m4049A4C76A567998AA3C3143C472E438E2B27B5F_inline(L_0, NULL);
		int32_t L_2 = ___1_index;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* L_3;
		L_3 = UnsafeUtility_ArrayElementAsRef_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m96D507BA80BD38725EE300102E3C10D8A40FE7CD_inline(L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m3175E398B4F65381AF77AE7030D0D66B7C3D73C0_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_data, int32_t ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Il2CppFullySharedGenericStruct* L_0;
		L_0 = ((  Il2CppFullySharedGenericStruct* (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_data), NULL);
		V_1 = L_0;
		Il2CppFullySharedGenericStruct* L_1 = V_1;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_1,NULL));
		V_0 = (Il2CppFullySharedGenericStruct*)L_2;
		il2cpp_codegen_initobj((&V_2), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		Il2CppFullySharedGenericStruct* L_3 = V_0;
		(&V_2)->___m_Buffer = (void*)L_3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_data), NULL);
		(&V_2)->___m_Length = L_4;
		int32_t L_5 = ___1_allocator;
		(&V_2)->___m_AllocatorLabel = L_5;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m048BC49D48651EB55D6A05F4FD21DBB28C15A50B (Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 ___0_data, int32_t ___1_allocator, const RuntimeMethod* method) 
{
	TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* V_0 = NULL;
	TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* V_1 = NULL;
	NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_0;
		L_0 = Span_1_GetPinnableReference_m1F64228CA55F0CDDC4F96688C2C9345DA183D47B((&___0_data), NULL);
		V_1 = L_0;
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_1 = V_1;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7*,intptr_t,false,false>(L_1,NULL));
		V_0 = (TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7*)L_2;
		il2cpp_codegen_initobj((&V_2), sizeof(NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86));
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_3 = V_0;
		(&V_2)->___m_Buffer = (void*)L_3;
		int32_t L_4;
		L_4 = Span_1_get_Length_m837D39395B41292FD42A4C8440B0CF2FCEACF63C_inline((&___0_data), NULL);
		(&V_2)->___m_Length = L_4;
		int32_t L_5 = ___1_allocator;
		(&V_2)->___m_AllocatorLabel = L_5;
		NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		void* L_0 = ___0_dataPointer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_0)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisIl2CppFullySharedGenericStruct_m0BC1578CE50C348FF9B616BD602021A69F647803_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_mACBC0A203204486FDC878AE9ED795EC36BE4E772_fshared (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayUtils_EnsureCapacity_TisIl2CppFullySharedGenericStruct_m938B4EB2931FF9C2C46F85B047C222447D732032_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, int32_t ___1_capacity, int32_t ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_array;
		int32_t L_1;
		L_1 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, NULL);
		int32_t L_2 = ___1_capacity;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0025;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_3 = ___0_array;
		bool L_4;
		L_4 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_3, NULL);
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_5 = ___0_array;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0017:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_6 = ___0_array;
		int32_t L_7 = ___1_capacity;
		int32_t L_8 = ___2_allocator;
		int32_t L_9 = ___3_options;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_10), L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_6 = L_10;
	}

IL_0025:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayUtils_EnsureExactSize_TisIl2CppFullySharedGenericStruct_mF40CC7DA3F4AD30D85D7E77620C96AAC7230BA00_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, int32_t ___1_size, int32_t ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FE195FFC680019E0D99650FBC1F7489C26EC0E2);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	{
		int32_t L_0 = ___1_size;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral1FE195FFC680019E0D99650FBC1F7489C26EC0E2, NULL);
		return;
	}

IL_000f:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_array;
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, NULL);
		int32_t L_3 = ___1_size;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0034;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_4 = ___0_array;
		bool L_5;
		L_5 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, NULL);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_6 = ___0_array;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_6, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0026:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_7 = ___0_array;
		int32_t L_8 = ___1_size;
		int32_t L_9 = ___2_allocator;
		int32_t L_10 = ___3_options;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_11;
		memset((&L_11), 0, sizeof(L_11));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_11), L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_7 = L_11;
	}

IL_0034:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeBitArray_AsNativeArray_TisIl2CppFullySharedGenericStruct_m21100628DDFFD7266FDBA65757CFED3149F739BB_fshared (NativeBitArray_t7D47863D3DFF1D41EE133D5107FFAF0D697BC00E* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA962F74FF478A58434F9031A1A41F8C5ECDF42A6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint32_t L_0 = SizeOf_T_tA962F74FF478A58434F9031A1A41F8C5ECDF42A6;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, 8));
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_1 = __this->___m_BitArray;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Length;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)(L_2/L_3));
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_4 = __this->___m_BitArray;
		NullCheck(L_4);
		uint64_t* L_5 = L_4->___Ptr;
		int32_t L_6 = V_1;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_7;
		L_7 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)L_5, L_6, 1, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBitArray_CheckReadBounds_TisIl2CppFullySharedGenericStruct_m90E72A69672D7A6ABEB88D135A7E642E9E80B18A_fshared (NativeBitArray_t7D47863D3DFF1D41EE133D5107FFAF0D697BC00E* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t0E2536B333465CCD423B7DD2957A0C32E29E4E09 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint32_t L_0 = SizeOf_T_t0E2536B333465CCD423B7DD2957A0C32E29E4E09;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, 8));
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_1 = __this->___m_BitArray;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Length;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)(L_2/L_3));
		int32_t L_4 = V_1;
		if (L_4)
		{
			goto IL_0047;
		}
	}
	{
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_5 = __this->___m_BitArray;
		NullCheck(L_5);
		int32_t L_6 = L_5->___Length;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		uint32_t L_9 = SizeOf_T_t0E2536B333465CCD423B7DD2957A0C32E29E4E09;
		int32_t L_10 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, 8));
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7D46E972920967646C169FAEFE29793480D87717)), L_8, L_11, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_13 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_14 = __this->___m_BitArray;
		NullCheck(L_14);
		int32_t L_15 = L_14->___Length;
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)il2cpp_codegen_multiply(L_16, L_17)))))
		{
			goto IL_0082;
		}
	}
	{
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_18 = __this->___m_BitArray;
		NullCheck(L_18);
		int32_t L_19 = L_18->___Length;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		uint32_t L_22 = SizeOf_T_t0E2536B333465CCD423B7DD2957A0C32E29E4E09;
		int32_t L_23 = ((int32_t)L_22);
		RuntimeObject* L_24 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_23);
		String_t* L_25;
		L_25 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6F04E86C5302630688259CCA7C31D9B8620B26C3)), L_21, L_24, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_26 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_26, L_25, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, method);
	}

IL_0082:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_CopyFromReadOnlyCollection_TisIl2CppFullySharedGenericStruct_mDEE0C3C4491BED8D2513ACA060A0402918ACDC4B_fshared (RuntimeObject* ___0_source, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t45647A49FE978B1D0B0E997FC1BEA3661E2BF799 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 7));
	const Il2CppFullySharedGenericStruct L_22 = alloca(SizeOf_T_t45647A49FE978B1D0B0E997FC1BEA3661E2BF799);
	const Il2CppFullySharedGenericStruct L_24 = alloca(SizeOf_T_t45647A49FE978B1D0B0E997FC1BEA3661E2BF799);
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_t45647A49FE978B1D0B0E997FC1BEA3661E2BF799);
	memset(V_2, 0, SizeOf_T_t45647A49FE978B1D0B0E997FC1BEA3661E2BF799);
	{
		RuntimeObject* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___1_destination), NULL);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0052;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)));
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___0_source;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_6);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_5;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908)));
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		int32_t L_12;
		L_12 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___1_destination), NULL);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A423B3392F0CC999CACA5B01716A87105890364)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_16 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0052:
	{
		V_0 = 0;
		RuntimeObject* L_17 = ___0_source;
		NullCheck((RuntimeObject*)L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 3), (RuntimeObject*)L_17);
		V_1 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007b:
			{
				{
					RuntimeObject* L_19 = V_1;
					if (!L_19)
					{
						goto IL_0084;
					}
				}
				{
					RuntimeObject* L_20 = V_1;
					NullCheck((RuntimeObject*)L_20);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
				}

IL_0084:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0071_1;
			}

IL_005d_1:
			{
				RuntimeObject* L_21 = V_1;
				NullCheck(L_21);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericStruct* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 5), L_21, (Il2CppFullySharedGenericStruct*)L_22);
				il2cpp_codegen_memcpy(V_2, L_22, SizeOf_T_t45647A49FE978B1D0B0E997FC1BEA3661E2BF799);
				int32_t L_23 = V_0;
				il2cpp_codegen_memcpy(L_24, V_2, SizeOf_T_t45647A49FE978B1D0B0E997FC1BEA3661E2BF799);
				InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)), il2cpp_rgctx_method(method->rgctx_data, 8), (&___1_destination), L_23, L_24);
				int32_t L_25 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
			}

IL_0071_1:
			{
				RuntimeObject* L_26 = V_1;
				NullCheck((RuntimeObject*)L_26);
				bool L_27;
				L_27 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_26);
				if (L_27)
				{
					goto IL_005d_1;
				}
			}
			{
				goto IL_0085;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_CopyFromReadOnlyList_TisIl2CppFullySharedGenericStruct_m1C0BD9BC4A49627790DB2A5DE4AD180A76A521EA_fshared (RuntimeObject* ___0_source, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_destination, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tCED23063971432D2553EFD24D045EB088076A383 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_20 = alloca(SizeOf_T_tCED23063971432D2553EFD24D045EB088076A383);
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_source;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), (RuntimeObject*)L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___1_destination), NULL);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0052;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)));
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___0_source;
		NullCheck((RuntimeObject*)L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), (RuntimeObject*)L_6);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_5;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908)));
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		int32_t L_12;
		L_12 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___1_destination), NULL);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A423B3392F0CC999CACA5B01716A87105890364)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_16 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0052:
	{
		V_0 = 0;
		goto IL_0069;
	}

IL_0056:
	{
		int32_t L_17 = V_0;
		RuntimeObject* L_18 = ___0_source;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 3), L_18, L_19, (Il2CppFullySharedGenericStruct*)L_20);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), (&___1_destination), L_17, L_20);
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0069:
	{
		int32_t L_22 = V_0;
		RuntimeObject* L_23 = ___0_source;
		NullCheck((RuntimeObject*)L_23);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), (RuntimeObject*)L_23);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0056;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C NativeCopyUtility_CreateArrayFilledWithValue_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m0B3165E7EAA4FE1A9FE3EE1F264D20DD7BFD5E7B (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_length;
		int32_t L_1 = ___2_allocator;
		NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_mBFCDCB65BA72515FBC46506A6FF5600934A797E8((&L_2), L_0, L_1, 0, NULL);
		NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C L_3 = L_2;
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_4 = ___0_value;
		NativeCopyUtility_FillArrayWithValue_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m2AEFEE9AB59FEB7B2285E4681B828306675C9052(L_3, L_4, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A NativeCopyUtility_CreateArrayFilledWithValue_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_mE98518CCB392D19534E6AA21868F7D7B91709C5C (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_length;
		int32_t L_1 = ___2_allocator;
		NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_mF0E54F4AC97D8FD94CE48D98AF76A275ABFA9EA7((&L_2), L_0, L_1, 0, NULL);
		NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A L_3 = L_2;
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_4 = ___0_value;
		NativeCopyUtility_FillArrayWithValue_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_mFD25CE8592D33A36F07097B5F0F264A9E5F974DD(L_3, L_4, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC4A81087A69EB70E412E0F4AAC574880C05C7023 NativeCopyUtility_CreateArrayFilledWithValue_TisXRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85_mFA18FB6DC94814707C4371EB1D59AFEC3F8AB483 (XRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85 ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_length;
		int32_t L_1 = ___2_allocator;
		NativeArray_1_tC4A81087A69EB70E412E0F4AAC574880C05C7023 L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m72597CF41CB3E60884F1F6D9D7D7A8D41DE6A11F((&L_2), L_0, L_1, 0, NULL);
		NativeArray_1_tC4A81087A69EB70E412E0F4AAC574880C05C7023 L_3 = L_2;
		XRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85 L_4 = ___0_value;
		NativeCopyUtility_FillArrayWithValue_TisXRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85_mCA0759DC82F6CE2B03B815B5AE180AE438C5FC75(L_3, L_4, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 NativeCopyUtility_CreateArrayFilledWithValue_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_m1186BA1A3FB22F144960EFD13602C3C2216C4DC8 (XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_length;
		int32_t L_1 = ___2_allocator;
		NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m96640764DCE1F1900150DA0FC1D992D9DC52687D((&L_2), L_0, L_1, 0, NULL);
		NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 L_3 = L_2;
		XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 L_4 = ___0_value;
		NativeCopyUtility_FillArrayWithValue_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mF5EED1132BA4E3F078ABB1D77391F85D2C362ED3(L_3, L_4, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 NativeCopyUtility_CreateArrayFilledWithValue_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m046E963E11DFA9E6D8A58C5843530B55DCBD29AD (XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_length;
		int32_t L_1 = ___2_allocator;
		NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_mCA06C3646E600B8615C70CB3DA97038528B18498((&L_2), L_0, L_1, 0, NULL);
		NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 L_3 = L_2;
		XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB L_4 = ___0_value;
		NativeCopyUtility_FillArrayWithValue_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_mEF979C95490DA1D4EBE00168CEDE5D9CD1EAD33D(L_3, L_4, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 NativeCopyUtility_CreateArrayFilledWithValue_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m91C56E373771C01E633E080CF026074D24217C3C (XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_length;
		int32_t L_1 = ___2_allocator;
		NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m35D30C4E671ACF3FD4F35E6442130E1969FF47FB((&L_2), L_0, L_1, 0, NULL);
		NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 L_3 = L_2;
		XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 L_4 = ___0_value;
		NativeCopyUtility_FillArrayWithValue_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_mB26A6AAF91D8B86D19AD794FA6589CC54276F7A2(L_3, L_4, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD5E555C673712EB18839EB195B02215710DC5692 NativeCopyUtility_CreateArrayFilledWithValue_TisXRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D_m188BA8443ACE7FDD0DE574B1BEA412CC756B7A0C (XRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_length;
		int32_t L_1 = ___2_allocator;
		NativeArray_1_tD5E555C673712EB18839EB195B02215710DC5692 L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m0222D5E47FE3EFFE390B38DDFE36E134D67689FE((&L_2), L_0, L_1, 0, NULL);
		NativeArray_1_tD5E555C673712EB18839EB195B02215710DC5692 L_3 = L_2;
		XRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D L_4 = ___0_value;
		NativeCopyUtility_FillArrayWithValue_TisXRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D_mE329967751DA385F57327E0B744FF46331611F43(L_3, L_4, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 NativeCopyUtility_CreateArrayFilledWithValue_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mA4D8DF9B2172AD0A6203C3E38F70CA72EA89E40A (XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_length;
		int32_t L_1 = ___2_allocator;
		NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_mD7AA8125519C235C250E28C485752B186B718D1F((&L_2), L_0, L_1, 0, NULL);
		NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 L_3 = L_2;
		XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 L_4 = ___0_value;
		NativeCopyUtility_FillArrayWithValue_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mC947F5081695B2A0C00DE5C79175DD9513192195(L_3, L_4, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 NativeCopyUtility_CreateArrayFilledWithValue_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_m5A82D69222D70FB1D1D3F8DE833F84C1E80E0BAC (XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_length;
		int32_t L_1 = ___2_allocator;
		NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_mDC183B8E025B1A55DC178981EDE28DC1A82261D7((&L_2), L_0, L_1, 0, NULL);
		NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 L_3 = L_2;
		XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C L_4 = ___0_value;
		NativeCopyUtility_FillArrayWithValue_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_m7284DE28B51AEAC48F985EED8D69B63DBCE78395(L_3, L_4, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 NativeCopyUtility_CreateArrayFilledWithValue_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mEB44B8A682264717B44069C2C7F12402869CD7F1 (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_length;
		int32_t L_1 = ___2_allocator;
		NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_mDF68F0A55BC88CA530F3FC16BD7C0D5C1DA4BF08((&L_2), L_0, L_1, 0, NULL);
		NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 L_3 = L_2;
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_4 = ___0_value;
		NativeCopyUtility_FillArrayWithValue_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_m6A158CE920EDABA95EF5FFBAB9C73944D0AA86AF(L_3, L_4, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 NativeCopyUtility_CreateArrayFilledWithValue_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m7FE1027472937F29C1303EBCD69EB9FF420A5121 (XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_length;
		int32_t L_1 = ___2_allocator;
		NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m3F792CFB2FF29DB8098DDF0BFEE0FCCBAC8F1A19((&L_2), L_0, L_1, 0, NULL);
		NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 L_3 = L_2;
		XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD L_4 = ___0_value;
		NativeCopyUtility_FillArrayWithValue_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m2B21D728D081A37DE956DEDA0A332596438FB26E(L_3, L_4, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B NativeCopyUtility_CreateArrayFilledWithValue_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m957DDCA98AC8F913B7A882DB8967417CAACDD4D8 (XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_length;
		int32_t L_1 = ___2_allocator;
		NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m02536E80A033E37A268BB288FE78991C3D04DC1B((&L_2), L_0, L_1, 0, NULL);
		NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B L_3 = L_2;
		XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 L_4 = ___0_value;
		NativeCopyUtility_FillArrayWithValue_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_mF0361E92B5F60DD213A50949AABFC54264247DED(L_3, L_4, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeCopyUtility_CreateArrayFilledWithValue_TisIl2CppFullySharedGenericStruct_m571ABA3343713837DA5BBF428B02FB9AF4B266F6_fshared (Il2CppFullySharedGenericStruct ___0_value, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tE00E2EDF5114EDED253006285FA92C0F10576ABE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_tE00E2EDF5114EDED253006285FA92C0F10576ABE);
	{
		int32_t L_0 = ___1_length;
		int32_t L_1 = ___2_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_2), L_0, L_1, 0, il2cpp_rgctx_method(method->rgctx_data, 0));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, ___0_value, SizeOf_T_tE00E2EDF5114EDED253006285FA92C0F10576ABE);
		InvokerActionInvoker2< NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_3, L_4);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m2AEFEE9AB59FEB7B2285E4681B828306675C9052 (NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C ___0_array, BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C L_1 = ___0_array;
		void* L_2;
		L_2 = NativeArrayUnsafeUtility_GetUnsafePtr_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_mF3F5CA9830DAF701AD91BD01D78440AABC084116_inline(L_1, NULL);
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___1_value));
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m7A86C643E2B3050004055E36F8081C9BC174DF43_inline(NULL);
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_mFD25CE8592D33A36F07097B5F0F264A9E5F974DD (NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A ___0_array, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A L_1 = ___0_array;
		void* L_2;
		L_2 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_m0FBF2D018CF7D32AB1A46A5398E1D50526A9F0C8_inline(L_1, NULL);
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___1_value));
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_mEBD4E94BA49FB53B4CE7CD701343C838A7189795_inline(NULL);
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85_mCA0759DC82F6CE2B03B815B5AE180AE438C5FC75 (NativeArray_1_tC4A81087A69EB70E412E0F4AAC574880C05C7023 ___0_array, XRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NativeArray_1_tC4A81087A69EB70E412E0F4AAC574880C05C7023 L_1 = ___0_array;
		void* L_2;
		L_2 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85_m3EA7691548A55A91177E4AA120A44D4F7B88E00A_inline(L_1, NULL);
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___1_value));
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisXRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85_m836042FA527152AD16145FDB389BC473134931B1_inline(NULL);
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mF5EED1132BA4E3F078ABB1D77391F85D2C362ED3 (NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 ___0_array, XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 L_1 = ___0_array;
		void* L_2;
		L_2 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_m295A546A740130385DC2380594B002392A961F7E_inline(L_1, NULL);
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___1_value));
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mEA8E3E8B8BFAD90BE489F5BB5FFA40AB0FE42C8F_inline(NULL);
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_mEF979C95490DA1D4EBE00168CEDE5D9CD1EAD33D (NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 ___0_array, XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 L_1 = ___0_array;
		void* L_2;
		L_2 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m89EB0658556F6B605E8D65EE5F68E31C7BFC28E3_inline(L_1, NULL);
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___1_value));
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_mAF3536DC8A45B64F341A3FF9A3EB56C0C3CF9229_inline(NULL);
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_mB26A6AAF91D8B86D19AD794FA6589CC54276F7A2 (NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 ___0_array, XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 L_1 = ___0_array;
		void* L_2;
		L_2 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m87CFF612A985E73F123C41072ED829BDD6A43CFF_inline(L_1, NULL);
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___1_value));
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m3F41B3C6E1850E30DF57CCB21C990C84A1BB0E9A_inline(NULL);
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D_mE329967751DA385F57327E0B744FF46331611F43 (NativeArray_1_tD5E555C673712EB18839EB195B02215710DC5692 ___0_array, XRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NativeArray_1_tD5E555C673712EB18839EB195B02215710DC5692 L_1 = ___0_array;
		void* L_2;
		L_2 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D_m94A29F6B9A4800B9E32609ECBB4EB96ECF019AE9_inline(L_1, NULL);
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___1_value));
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisXRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D_m786089F5C6721FCF3692E18D56EA105A9EDBE942_inline(NULL);
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mC947F5081695B2A0C00DE5C79175DD9513192195 (NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 ___0_array, XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 L_1 = ___0_array;
		void* L_2;
		L_2 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_m404269833648A3C28FC12B38F0934F48CBC53318_inline(L_1, NULL);
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___1_value));
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mB697C868BD5A34C03C1EA74873A2799A05ED5A72_inline(NULL);
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_m7284DE28B51AEAC48F985EED8D69B63DBCE78395 (NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 ___0_array, XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 L_1 = ___0_array;
		void* L_2;
		L_2 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_m61ACE269A99B6B265E45BDA182B500A079BA93F5_inline(L_1, NULL);
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___1_value));
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_mCA38CDBE9F042A16A1C0E2CB2162D93972CC2CFC_inline(NULL);
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_m6A158CE920EDABA95EF5FFBAB9C73944D0AA86AF (NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 ___0_array, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 L_1 = ___0_array;
		void* L_2;
		L_2 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mC56E0B5DD47DCCA46B9E1648A7F8A19C90212506_inline(L_1, NULL);
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___1_value));
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mDE47ECB8AF94BBBEA38D5817983D851D4385B11B_inline(NULL);
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m2B21D728D081A37DE956DEDA0A332596438FB26E (NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 ___0_array, XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 L_1 = ___0_array;
		void* L_2;
		L_2 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m023763C9C03A9C35194D2C4F26C899BAD0B89FDA_inline(L_1, NULL);
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___1_value));
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m6DCD64C34470921DC5ED8E8C5A215E259A7DE914_inline(NULL);
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_mF0361E92B5F60DD213A50949AABFC54264247DED (NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B ___0_array, XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B L_1 = ___0_array;
		void* L_2;
		L_2 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_mF2CB1DC411B52BA6B9D76B12B03B26E66EE5F47F_inline(L_1, NULL);
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___1_value));
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m7CA699973CAB664C38EACC8EDC294DF364004117_inline(NULL);
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisIl2CppFullySharedGenericStruct_m9BA004AA9E08921C1D022258E9D5D201364F0772_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_array), NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = ___0_array;
		void* L_2;
		L_2 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, NULL);
		void* L_3;
		L_3 = ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))((Il2CppFullySharedGenericStruct*)___1_value, il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_5;
		L_5 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_array), NULL);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C NativeCopyUtility_PtrToNativeArrayWithDefault_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m81A5EBBFE16A88F76E5FEC15CE65A29404BE85BA (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___0_defaultT, void* ___1_source, int32_t ___2_sourceElementSize, int32_t ___3_length, int32_t ___4_allocator, const RuntimeMethod* method) 
{
	{
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_0 = ___0_defaultT;
		int32_t L_1 = ___3_length;
		int32_t L_2 = ___4_allocator;
		NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C L_3;
		L_3 = NativeCopyUtility_CreateArrayFilledWithValue_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m0B3165E7EAA4FE1A9FE3EE1F264D20DD7BFD5E7B(L_0, L_1, L_2, NULL);
		NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C L_4 = L_3;
		void* L_5;
		L_5 = NativeArrayUnsafeUtility_GetUnsafePtr_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_mF3F5CA9830DAF701AD91BD01D78440AABC084116_inline(L_4, NULL);
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m7A86C643E2B3050004055E36F8081C9BC174DF43_inline(NULL);
		void* L_7 = ___1_source;
		int32_t L_8 = ___2_sourceElementSize;
		int32_t L_9 = ___2_sourceElementSize;
		int32_t L_10 = ___3_length;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_m67B07EE2F0F39318EBCE447A32F59229E5849E03 (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___0_defaultT, void* ___1_source, int32_t ___2_sourceElementSize, int32_t ___3_length, int32_t ___4_allocator, const RuntimeMethod* method) 
{
	{
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_0 = ___0_defaultT;
		int32_t L_1 = ___3_length;
		int32_t L_2 = ___4_allocator;
		NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A L_3;
		L_3 = NativeCopyUtility_CreateArrayFilledWithValue_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_mE98518CCB392D19534E6AA21868F7D7B91709C5C(L_0, L_1, L_2, NULL);
		NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A L_4 = L_3;
		void* L_5;
		L_5 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_m0FBF2D018CF7D32AB1A46A5398E1D50526A9F0C8_inline(L_4, NULL);
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_mEBD4E94BA49FB53B4CE7CD701343C838A7189795_inline(NULL);
		void* L_7 = ___1_source;
		int32_t L_8 = ___2_sourceElementSize;
		int32_t L_9 = ___2_sourceElementSize;
		int32_t L_10 = ___3_length;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC4A81087A69EB70E412E0F4AAC574880C05C7023 NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85_m5C713BE8262D27E5D435FDC95205C0BD8838038A (XRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85 ___0_defaultT, void* ___1_source, int32_t ___2_sourceElementSize, int32_t ___3_length, int32_t ___4_allocator, const RuntimeMethod* method) 
{
	{
		XRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85 L_0 = ___0_defaultT;
		int32_t L_1 = ___3_length;
		int32_t L_2 = ___4_allocator;
		NativeArray_1_tC4A81087A69EB70E412E0F4AAC574880C05C7023 L_3;
		L_3 = NativeCopyUtility_CreateArrayFilledWithValue_TisXRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85_mFA18FB6DC94814707C4371EB1D59AFEC3F8AB483(L_0, L_1, L_2, NULL);
		NativeArray_1_tC4A81087A69EB70E412E0F4AAC574880C05C7023 L_4 = L_3;
		void* L_5;
		L_5 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85_m3EA7691548A55A91177E4AA120A44D4F7B88E00A_inline(L_4, NULL);
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_TisXRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85_m836042FA527152AD16145FDB389BC473134931B1_inline(NULL);
		void* L_7 = ___1_source;
		int32_t L_8 = ___2_sourceElementSize;
		int32_t L_9 = ___2_sourceElementSize;
		int32_t L_10 = ___3_length;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 NativeCopyUtility_PtrToNativeArrayWithDefault_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mC268C96EA513A12D149DB7DD98FD45B14FAAED6C (XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 ___0_defaultT, void* ___1_source, int32_t ___2_sourceElementSize, int32_t ___3_length, int32_t ___4_allocator, const RuntimeMethod* method) 
{
	{
		XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 L_0 = ___0_defaultT;
		int32_t L_1 = ___3_length;
		int32_t L_2 = ___4_allocator;
		NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 L_3;
		L_3 = NativeCopyUtility_CreateArrayFilledWithValue_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_m1186BA1A3FB22F144960EFD13602C3C2216C4DC8(L_0, L_1, L_2, NULL);
		NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 L_4 = L_3;
		void* L_5;
		L_5 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_m295A546A740130385DC2380594B002392A961F7E_inline(L_4, NULL);
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mEA8E3E8B8BFAD90BE489F5BB5FFA40AB0FE42C8F_inline(NULL);
		void* L_7 = ___1_source;
		int32_t L_8 = ___2_sourceElementSize;
		int32_t L_9 = ___2_sourceElementSize;
		int32_t L_10 = ___3_length;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m68C148FCDE1D73485F195AEC618D858B4262F130 (XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB ___0_defaultT, void* ___1_source, int32_t ___2_sourceElementSize, int32_t ___3_length, int32_t ___4_allocator, const RuntimeMethod* method) 
{
	{
		XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB L_0 = ___0_defaultT;
		int32_t L_1 = ___3_length;
		int32_t L_2 = ___4_allocator;
		NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 L_3;
		L_3 = NativeCopyUtility_CreateArrayFilledWithValue_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m046E963E11DFA9E6D8A58C5843530B55DCBD29AD(L_0, L_1, L_2, NULL);
		NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 L_4 = L_3;
		void* L_5;
		L_5 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m89EB0658556F6B605E8D65EE5F68E31C7BFC28E3_inline(L_4, NULL);
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_mAF3536DC8A45B64F341A3FF9A3EB56C0C3CF9229_inline(NULL);
		void* L_7 = ___1_source;
		int32_t L_8 = ___2_sourceElementSize;
		int32_t L_9 = ___2_sourceElementSize;
		int32_t L_10 = ___3_length;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_mFBE6A67140E3A7B0C381F58D8BAF7E82C9112DE9 (XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 ___0_defaultT, void* ___1_source, int32_t ___2_sourceElementSize, int32_t ___3_length, int32_t ___4_allocator, const RuntimeMethod* method) 
{
	{
		XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 L_0 = ___0_defaultT;
		int32_t L_1 = ___3_length;
		int32_t L_2 = ___4_allocator;
		NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 L_3;
		L_3 = NativeCopyUtility_CreateArrayFilledWithValue_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m91C56E373771C01E633E080CF026074D24217C3C(L_0, L_1, L_2, NULL);
		NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 L_4 = L_3;
		void* L_5;
		L_5 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m87CFF612A985E73F123C41072ED829BDD6A43CFF_inline(L_4, NULL);
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m3F41B3C6E1850E30DF57CCB21C990C84A1BB0E9A_inline(NULL);
		void* L_7 = ___1_source;
		int32_t L_8 = ___2_sourceElementSize;
		int32_t L_9 = ___2_sourceElementSize;
		int32_t L_10 = ___3_length;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD5E555C673712EB18839EB195B02215710DC5692 NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D_m34B400CA640245EBBBD457D4E4B19A05B339CD89 (XRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D ___0_defaultT, void* ___1_source, int32_t ___2_sourceElementSize, int32_t ___3_length, int32_t ___4_allocator, const RuntimeMethod* method) 
{
	{
		XRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D L_0 = ___0_defaultT;
		int32_t L_1 = ___3_length;
		int32_t L_2 = ___4_allocator;
		NativeArray_1_tD5E555C673712EB18839EB195B02215710DC5692 L_3;
		L_3 = NativeCopyUtility_CreateArrayFilledWithValue_TisXRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D_m188BA8443ACE7FDD0DE574B1BEA412CC756B7A0C(L_0, L_1, L_2, NULL);
		NativeArray_1_tD5E555C673712EB18839EB195B02215710DC5692 L_4 = L_3;
		void* L_5;
		L_5 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D_m94A29F6B9A4800B9E32609ECBB4EB96ECF019AE9_inline(L_4, NULL);
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_TisXRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D_m786089F5C6721FCF3692E18D56EA105A9EDBE942_inline(NULL);
		void* L_7 = ___1_source;
		int32_t L_8 = ___2_sourceElementSize;
		int32_t L_9 = ___2_sourceElementSize;
		int32_t L_10 = ___3_length;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_m0F0DFA6CF8BD9B8E924822206AA4B1672617D1DB (XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 ___0_defaultT, void* ___1_source, int32_t ___2_sourceElementSize, int32_t ___3_length, int32_t ___4_allocator, const RuntimeMethod* method) 
{
	{
		XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 L_0 = ___0_defaultT;
		int32_t L_1 = ___3_length;
		int32_t L_2 = ___4_allocator;
		NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 L_3;
		L_3 = NativeCopyUtility_CreateArrayFilledWithValue_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mA4D8DF9B2172AD0A6203C3E38F70CA72EA89E40A(L_0, L_1, L_2, NULL);
		NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 L_4 = L_3;
		void* L_5;
		L_5 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_m404269833648A3C28FC12B38F0934F48CBC53318_inline(L_4, NULL);
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mB697C868BD5A34C03C1EA74873A2799A05ED5A72_inline(NULL);
		void* L_7 = ___1_source;
		int32_t L_8 = ___2_sourceElementSize;
		int32_t L_9 = ___2_sourceElementSize;
		int32_t L_10 = ___3_length;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_mF13AB06CC703EF88ACF74D021D75DEB3296DA31F (XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C ___0_defaultT, void* ___1_source, int32_t ___2_sourceElementSize, int32_t ___3_length, int32_t ___4_allocator, const RuntimeMethod* method) 
{
	{
		XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C L_0 = ___0_defaultT;
		int32_t L_1 = ___3_length;
		int32_t L_2 = ___4_allocator;
		NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 L_3;
		L_3 = NativeCopyUtility_CreateArrayFilledWithValue_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_m5A82D69222D70FB1D1D3F8DE833F84C1E80E0BAC(L_0, L_1, L_2, NULL);
		NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 L_4 = L_3;
		void* L_5;
		L_5 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_m61ACE269A99B6B265E45BDA182B500A079BA93F5_inline(L_4, NULL);
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_mCA38CDBE9F042A16A1C0E2CB2162D93972CC2CFC_inline(NULL);
		void* L_7 = ___1_source;
		int32_t L_8 = ___2_sourceElementSize;
		int32_t L_9 = ___2_sourceElementSize;
		int32_t L_10 = ___3_length;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_m9D219AC5C947023807407B8A78D0B985F02FEB41 (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___0_defaultT, void* ___1_source, int32_t ___2_sourceElementSize, int32_t ___3_length, int32_t ___4_allocator, const RuntimeMethod* method) 
{
	{
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_0 = ___0_defaultT;
		int32_t L_1 = ___3_length;
		int32_t L_2 = ___4_allocator;
		NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 L_3;
		L_3 = NativeCopyUtility_CreateArrayFilledWithValue_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mEB44B8A682264717B44069C2C7F12402869CD7F1(L_0, L_1, L_2, NULL);
		NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 L_4 = L_3;
		void* L_5;
		L_5 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mC56E0B5DD47DCCA46B9E1648A7F8A19C90212506_inline(L_4, NULL);
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mDE47ECB8AF94BBBEA38D5817983D851D4385B11B_inline(NULL);
		void* L_7 = ___1_source;
		int32_t L_8 = ___2_sourceElementSize;
		int32_t L_9 = ___2_sourceElementSize;
		int32_t L_10 = ___3_length;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_mA66DFA699DF62924EF7B027BF00D52BD3593E8D0 (XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___0_defaultT, void* ___1_source, int32_t ___2_sourceElementSize, int32_t ___3_length, int32_t ___4_allocator, const RuntimeMethod* method) 
{
	{
		XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD L_0 = ___0_defaultT;
		int32_t L_1 = ___3_length;
		int32_t L_2 = ___4_allocator;
		NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 L_3;
		L_3 = NativeCopyUtility_CreateArrayFilledWithValue_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m7FE1027472937F29C1303EBCD69EB9FF420A5121(L_0, L_1, L_2, NULL);
		NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 L_4 = L_3;
		void* L_5;
		L_5 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m023763C9C03A9C35194D2C4F26C899BAD0B89FDA_inline(L_4, NULL);
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m6DCD64C34470921DC5ED8E8C5A215E259A7DE914_inline(NULL);
		void* L_7 = ___1_source;
		int32_t L_8 = ___2_sourceElementSize;
		int32_t L_9 = ___2_sourceElementSize;
		int32_t L_10 = ___3_length;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_mB88AA57DAC4DABA9795CE41DCFD3DC0EE918FA16 (XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 ___0_defaultT, void* ___1_source, int32_t ___2_sourceElementSize, int32_t ___3_length, int32_t ___4_allocator, const RuntimeMethod* method) 
{
	{
		XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 L_0 = ___0_defaultT;
		int32_t L_1 = ___3_length;
		int32_t L_2 = ___4_allocator;
		NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B L_3;
		L_3 = NativeCopyUtility_CreateArrayFilledWithValue_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m957DDCA98AC8F913B7A882DB8967417CAACDD4D8(L_0, L_1, L_2, NULL);
		NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B L_4 = L_3;
		void* L_5;
		L_5 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_mF2CB1DC411B52BA6B9D76B12B03B26E66EE5F47F_inline(L_4, NULL);
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m7CA699973CAB664C38EACC8EDC294DF364004117_inline(NULL);
		void* L_7 = ___1_source;
		int32_t L_8 = ___2_sourceElementSize;
		int32_t L_9 = ___2_sourceElementSize;
		int32_t L_10 = ___3_length;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeCopyUtility_PtrToNativeArrayWithDefault_TisIl2CppFullySharedGenericStruct_m5DB57E174831F787CAF177A674881BD0F8DC0C64_fshared (Il2CppFullySharedGenericStruct ___0_defaultT, void* ___1_source, int32_t ___2_sourceElementSize, int32_t ___3_length, int32_t ___4_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t46F0637140E4FF25028DE7404F0247222D7797BE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t46F0637140E4FF25028DE7404F0247222D7797BE);
	{
		il2cpp_codegen_memcpy(L_0, ___0_defaultT, SizeOf_T_t46F0637140E4FF25028DE7404F0247222D7797BE);
		int32_t L_1 = ___3_length;
		int32_t L_2 = ___4_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3;
		L_3 = InvokerFuncInvoker3< NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, Il2CppFullySharedGenericStruct, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, L_2);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_4 = L_3;
		void* L_5;
		L_5 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_4, NULL);
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		void* L_7 = ___1_source;
		int32_t L_8 = ___2_sourceElementSize;
		int32_t L_9 = ___2_sourceElementSize;
		int32_t L_10 = ___3_length;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeListExt_ResizeUninitializedTillPowerOf2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD9C7894534362C4133593982448C7E8A37F500CD (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___0_list, int32_t ___1_sizeToFit, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = NativeList_1_get_Capacity_m46A4E7D7799DE75073829FB2619656A3F855289C_inline((&___0_list), NULL);
		V_0 = L_0;
		int32_t L_1 = ___1_sizeToFit;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_3 = ___1_sizeToFit;
		int32_t L_4 = ___1_sizeToFit;
		___1_sizeToFit = ((int32_t)(L_3|((int32_t)(L_4>>1))));
		int32_t L_5 = ___1_sizeToFit;
		int32_t L_6 = ___1_sizeToFit;
		___1_sizeToFit = ((int32_t)(L_5|((int32_t)(L_6>>2))));
		int32_t L_7 = ___1_sizeToFit;
		int32_t L_8 = ___1_sizeToFit;
		___1_sizeToFit = ((int32_t)(L_7|((int32_t)(L_8>>4))));
		int32_t L_9 = ___1_sizeToFit;
		int32_t L_10 = ___1_sizeToFit;
		___1_sizeToFit = ((int32_t)(L_9|((int32_t)(L_10>>8))));
		int32_t L_11 = ___1_sizeToFit;
		int32_t L_12 = ___1_sizeToFit;
		___1_sizeToFit = ((int32_t)(L_11|((int32_t)(L_12>>((int32_t)16)))));
		int32_t L_13 = ___1_sizeToFit;
		___1_sizeToFit = ((int32_t)il2cpp_codegen_add(L_13, 1));
		int32_t L_14 = ___1_sizeToFit;
		NativeList_1_set_Capacity_m8CC8B7AC9C7326EDEC988BEEBA2674909CC72910((&___0_list), L_14, NULL);
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeListExt_ResizeUninitializedTillPowerOf2_TisIl2CppFullySharedGenericStruct_mD788BD9896C86DBECA800018BDD966909D21C01C_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_list, int32_t ___1_sizeToFit, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_list), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1 = ___1_sizeToFit;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_3 = ___1_sizeToFit;
		int32_t L_4 = ___1_sizeToFit;
		___1_sizeToFit = ((int32_t)(L_3|((int32_t)(L_4>>1))));
		int32_t L_5 = ___1_sizeToFit;
		int32_t L_6 = ___1_sizeToFit;
		___1_sizeToFit = ((int32_t)(L_5|((int32_t)(L_6>>2))));
		int32_t L_7 = ___1_sizeToFit;
		int32_t L_8 = ___1_sizeToFit;
		___1_sizeToFit = ((int32_t)(L_7|((int32_t)(L_8>>4))));
		int32_t L_9 = ___1_sizeToFit;
		int32_t L_10 = ___1_sizeToFit;
		___1_sizeToFit = ((int32_t)(L_9|((int32_t)(L_10>>8))));
		int32_t L_11 = ___1_sizeToFit;
		int32_t L_12 = ___1_sizeToFit;
		___1_sizeToFit = ((int32_t)(L_11|((int32_t)(L_12>>((int32_t)16)))));
		int32_t L_13 = ___1_sizeToFit;
		___1_sizeToFit = ((int32_t)il2cpp_codegen_add(L_13, 1));
		int32_t L_14 = ___1_sizeToFit;
		((  void (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_list), L_14, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeListExtensions_ArraysEqual_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_mFEAE04A1654F286C1C4255EE37A3A6E0AD230599 (NativeList_1_t0ED3ACF089127F9B31C902007D8D412B32309F70 ___0_container, NativeList_1_t0ED3ACF089127F9B31C902007D8D412B32309F70* ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeList_1_t0ED3ACF089127F9B31C902007D8D412B32309F70 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_t20401E81C3977721C4821E208D326838C60AB66B L_0;
		L_0 = NativeList_1_AsArray_mD76BA692764AC175B37DB58B94B5F37502169A05((&___0_container), NULL);
		NativeList_1_t0ED3ACF089127F9B31C902007D8D412B32309F70* L_1 = ___1_other;
		NativeList_1_t0ED3ACF089127F9B31C902007D8D412B32309F70 L_2 = (*(NativeList_1_t0ED3ACF089127F9B31C902007D8D412B32309F70*)L_1);
		V_0 = L_2;
		NativeArray_1_t20401E81C3977721C4821E208D326838C60AB66B L_3;
		L_3 = NativeList_1_AsArray_mD76BA692764AC175B37DB58B94B5F37502169A05((&V_0), NULL);
		bool L_4;
		L_4 = NativeArrayExtensions_ArraysEqual_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m371F23C2DC2DBA57E3D85BCE4B02753338F7F654(L_0, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeListExtensions_ArraysEqual_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m59CFC0915BE02AB7F8299700B1EDBE27D362D4A6 (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___0_container, NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* ___1_other, const RuntimeMethod* method) 
{
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_0;
		L_0 = NativeList_1_AsArray_m935271AC90F399A1587B9D82894E71067F6769A6((&___0_container), NULL);
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_1 = ___1_other;
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 L_2 = (*(NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213*)L_1);
		V_0 = L_2;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_3;
		L_3 = NativeList_1_AsArray_m935271AC90F399A1587B9D82894E71067F6769A6((&V_0), NULL);
		bool L_4;
		L_4 = NativeArrayExtensions_ArraysEqual_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE8C4F089E2406DE47EC6EA8BA7F13E2C92CED5D8(L_0, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mBBD877284D88BD7460DE885E06B863B2E9F3A6D6_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_container;
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* L_1 = ___1_other;
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_2 = (*(NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*)L_1);
		V_0 = L_2;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3;
		L_3 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&V_0), il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4;
		L_4 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mC6723FED5EED98A88A8D4E52D1F67DE9043E0981_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___1_other;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_0);
		bool L_2;
		L_2 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, (&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_m74A6311D620FEE94744587F8940A8EB6EFFEBFBB_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0;
		L_0 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* L_1 = ___1_other;
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_2 = (*(NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*)L_1);
		V_0 = L_2;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3;
		L_3 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&V_0), il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4;
		L_4 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mADA13D53936E5BB8844D9CB2CB696CA49E1F1505_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_0 = ___0_container;
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_1 = L_0.___m_ListData;
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 L_2 = (*(UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*)L_1);
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_3 = ___1_other;
		bool L_4;
		L_4 = ((  bool (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6, UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeListExtensions_LastIndex_TisNativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_m4B7BDE0F10642EFD409B360F6B0725BB3846ED3E (NativeList_1_tCE9294F8D50CBBA2C6B0936EF47668AABCBFC129* ___0_list, const RuntimeMethod* method) 
{
	{
		NativeList_1_tCE9294F8D50CBBA2C6B0936EF47668AABCBFC129* L_0 = ___0_list;
		int32_t L_1;
		L_1 = NativeList_1_get_Length_m52C72F3BC7DEFF08388883BE447B5952E54055CF_inline(L_0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_1, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeListExtensions_LastIndex_TisResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C_m412E3257A56B612F8F5EC7B1E5600D448520DDA8 (NativeList_1_t7E4EB94D72E542AD9AE709E29DD6C427017735C8* ___0_list, const RuntimeMethod* method) 
{
	{
		NativeList_1_t7E4EB94D72E542AD9AE709E29DD6C427017735C8* L_0 = ___0_list;
		int32_t L_1;
		L_1 = NativeList_1_get_Length_mF4A7022C29DC159BBF46CF1C51F98928E946DD70_inline(L_0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_1, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeListExtensions_LastIndex_TisIl2CppFullySharedGenericStruct_mD3D811FF697AB64208C086006419302AB1780507_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* L_0 = ___0_list;
		int32_t L_1;
		L_1 = ((  int32_t (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return ((int32_t)il2cpp_codegen_subtract(L_1, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7757FD353EBEBCCEB9A915C9409F036D59CBB91D NativeListExtensions_MakeReadOnlySpan_TisPassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_m59C921708D5625085FAAC4254BAFF31950D0186C (NativeList_1_tA510052F24CA28040AE5D7A8BE6C6002296124A7* ___0_list, int32_t ___1_first, int32_t ___2_numElements, const RuntimeMethod* method) 
{
	{
		NativeList_1_tA510052F24CA28040AE5D7A8BE6C6002296124A7* L_0 = ___0_list;
		PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD* L_1;
		L_1 = NativeList_1_GetUnsafeReadOnlyPtr_mAD0E2B1C48A477761A76447416AEAA6D6ED08814(L_0, NULL);
		int32_t L_2 = ___1_first;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		uint32_t L_4 = sizeof(PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD);
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD*,intptr_t,false,false>(((PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(L_3, (int32_t)L_4)))),NULL));
		int32_t L_6 = ___2_numElements;
		ReadOnlySpan_1_t7757FD353EBEBCCEB9A915C9409F036D59CBB91D L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlySpan_1__ctor_m07EB4F1158547DE8665142C592D1BB3C7053F4B7_inline((&L_7), (void*)L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t78DDDA91D3B852BA5CC6CB683C25798669394299 NativeListExtensions_MakeReadOnlySpan_TisPassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C_mF5AB6C29A932EB8D2B84CB74E8FEE0A27B557853 (NativeList_1_tC4B04B5B98BEA4587A1187DC60F8C87F0920C4B1* ___0_list, int32_t ___1_first, int32_t ___2_numElements, const RuntimeMethod* method) 
{
	{
		NativeList_1_tC4B04B5B98BEA4587A1187DC60F8C87F0920C4B1* L_0 = ___0_list;
		PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C* L_1;
		L_1 = NativeList_1_GetUnsafeReadOnlyPtr_mA39C682398D718BB372FE0097D45A0BCE762C6B8(L_0, NULL);
		int32_t L_2 = ___1_first;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		uint32_t L_4 = sizeof(PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C);
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C*,intptr_t,false,false>(((PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(L_3, (int32_t)L_4)))),NULL));
		int32_t L_6 = ___2_numElements;
		ReadOnlySpan_1_t78DDDA91D3B852BA5CC6CB683C25798669394299 L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlySpan_1__ctor_m5CCEB612FF614DF8DE9421901729BEFE2D7B0AD6_inline((&L_7), (void*)L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tDAF4105BB07ED8FF6685C401967838F0DA25C893 NativeListExtensions_MakeReadOnlySpan_TisPassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE_mE803779552F162CADB1C7DF73B8D24F38C0E4743 (NativeList_1_t60650BAC55FA3E0806E2A7B303C8A4B1B3176735* ___0_list, int32_t ___1_first, int32_t ___2_numElements, const RuntimeMethod* method) 
{
	{
		NativeList_1_t60650BAC55FA3E0806E2A7B303C8A4B1B3176735* L_0 = ___0_list;
		PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE* L_1;
		L_1 = NativeList_1_GetUnsafeReadOnlyPtr_mCF8AB9CC4E2F7114E1CCB245BB06C3DC3A436462(L_0, NULL);
		int32_t L_2 = ___1_first;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		uint32_t L_4 = sizeof(PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE);
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE*,intptr_t,false,false>(((PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(L_3, (int32_t)L_4)))),NULL));
		int32_t L_6 = ___2_numElements;
		ReadOnlySpan_1_tDAF4105BB07ED8FF6685C401967838F0DA25C893 L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlySpan_1__ctor_mCD7F7A19A4FE3CFC681EBB868E7A628651E990DD_inline((&L_7), (void*)L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t018614F605F46379EE13B48E466D84493953A32A NativeListExtensions_MakeReadOnlySpan_TisPassOutputData_t8EA364E560775D19D285839BA06710B337503E0D_mB41C394B5030066B0705CD1781BD51F19A263DFF (NativeList_1_tAD91DD25D285B5D001ACB76D5C1B638BA3E8E74D* ___0_list, int32_t ___1_first, int32_t ___2_numElements, const RuntimeMethod* method) 
{
	{
		NativeList_1_tAD91DD25D285B5D001ACB76D5C1B638BA3E8E74D* L_0 = ___0_list;
		PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D* L_1;
		L_1 = NativeList_1_GetUnsafeReadOnlyPtr_m52E6872391A81BBC435844F20BA8CE12B7BE3B57(L_0, NULL);
		int32_t L_2 = ___1_first;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		uint32_t L_4 = sizeof(PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D);
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D*,intptr_t,false,false>(((PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(L_3, (int32_t)L_4)))),NULL));
		int32_t L_6 = ___2_numElements;
		ReadOnlySpan_1_t018614F605F46379EE13B48E466D84493953A32A L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlySpan_1__ctor_m4102981C4F0B49F5D18D64832CA3DA186EF3C4C9_inline((&L_7), (void*)L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE65ADDA676D9E1E10FBABBC43E6D77B76418998B NativeListExtensions_MakeReadOnlySpan_TisPassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B_m30D04897C446E8EB9DB8B8559E7B5FFFBEFFB5AA (NativeList_1_tB3DABDBC2CD98907BC398426279D21CF380DD910* ___0_list, int32_t ___1_first, int32_t ___2_numElements, const RuntimeMethod* method) 
{
	{
		NativeList_1_tB3DABDBC2CD98907BC398426279D21CF380DD910* L_0 = ___0_list;
		PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B* L_1;
		L_1 = NativeList_1_GetUnsafeReadOnlyPtr_mCAC2B05EAD4F56B046D9A5488598AEB61FD0BBB4(L_0, NULL);
		int32_t L_2 = ___1_first;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		uint32_t L_4 = sizeof(PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B);
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B*,intptr_t,false,false>(((PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(L_3, (int32_t)L_4)))),NULL));
		int32_t L_6 = ___2_numElements;
		ReadOnlySpan_1_tE65ADDA676D9E1E10FBABBC43E6D77B76418998B L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlySpan_1__ctor_m6DBE72B9C85A2BDD00D94C4768A52BB696095FEF_inline((&L_7), (void*)L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t5D5DD3148CFA9A9039AB9D6C3D1E0E570A804E34 NativeListExtensions_MakeReadOnlySpan_TisResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C_m49CF9746A350A5413BE5497E87B442A4BEE5038F (NativeList_1_t7E4EB94D72E542AD9AE709E29DD6C427017735C8* ___0_list, int32_t ___1_first, int32_t ___2_numElements, const RuntimeMethod* method) 
{
	{
		NativeList_1_t7E4EB94D72E542AD9AE709E29DD6C427017735C8* L_0 = ___0_list;
		ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C* L_1;
		L_1 = NativeList_1_GetUnsafeReadOnlyPtr_m7B1990C91FDFED00A2A453B1AD157D9F10DF5E48(L_0, NULL);
		int32_t L_2 = ___1_first;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		uint32_t L_4 = sizeof(ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C);
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C*,intptr_t,false,false>(((ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(L_3, (int32_t)L_4)))),NULL));
		int32_t L_6 = ___2_numElements;
		ReadOnlySpan_1_t5D5DD3148CFA9A9039AB9D6C3D1E0E570A804E34 L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlySpan_1__ctor_m67BC66866D73FC2ED6CF39C57F9A4862B1C65438_inline((&L_7), (void*)L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tEF932A6C6B8BDDF6BAAED1BF091FD48169920DDC NativeListExtensions_MakeReadOnlySpan_TisResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC_m821B4C25F9F26CDDD4B24B52C01442C39B6BA2FF (NativeList_1_t849341A90D92C0EDCE3EB2109A577334F76D37DA* ___0_list, int32_t ___1_first, int32_t ___2_numElements, const RuntimeMethod* method) 
{
	{
		NativeList_1_t849341A90D92C0EDCE3EB2109A577334F76D37DA* L_0 = ___0_list;
		ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC* L_1;
		L_1 = NativeList_1_GetUnsafeReadOnlyPtr_m6DBE5A3E176CCC1FA6F298FEA3B29A4296C970DB(L_0, NULL);
		int32_t L_2 = ___1_first;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		uint32_t L_4 = sizeof(ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC);
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC*,intptr_t,false,false>(((ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(L_3, (int32_t)L_4)))),NULL));
		int32_t L_6 = ___2_numElements;
		ReadOnlySpan_1_tEF932A6C6B8BDDF6BAAED1BF091FD48169920DDC L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlySpan_1__ctor_mE7136430139CEA341C562B7A7EDFE7C057793563_inline((&L_7), (void*)L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 NativeListExtensions_MakeReadOnlySpan_TisIl2CppFullySharedGenericStruct_mE6F129DF69C6D1FFCECA7495F7A38D640D860092_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* ___0_list, int32_t ___1_first, int32_t ___2_numElements, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t763BE27078CDC0AAD600A5F83A4B0C80F6B363C6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	{
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* L_0 = ___0_list;
		Il2CppFullySharedGenericStruct* L_1;
		L_1 = ((  Il2CppFullySharedGenericStruct* (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, NULL);
		int32_t L_2 = ___1_first;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		uint32_t L_4 = SizeOf_T_t763BE27078CDC0AAD600A5F83A4B0C80F6B363C6;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(L_3, (int32_t)L_4)))),NULL));
		int32_t L_6 = ___2_numElements;
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline((&L_7), (void*)L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeListUnsafeUtility_GetInternalListDataPtrUnchecked_TisIl2CppFullySharedGenericStruct_mA545F925210D68602A18A2DA215F5C76D8B6BB44_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* L_0 = ___0_list;
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_1;
		L_1 = ((  UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, NULL);
		return (void*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeListUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_mF276C4717B50244A8CBD2C69F71927BC3EE3C6F3_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_list, const RuntimeMethod* method) 
{
	{
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_0 = ___0_list;
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_1 = L_0.___m_ListData;
		NullCheck(L_1);
		Il2CppFullySharedGenericStruct* L_2 = L_1->___Ptr;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeListUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m90E0BE74C866078E3AE84009FD36C754ABBD1989_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_list, const RuntimeMethod* method) 
{
	{
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_0 = ___0_list;
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_1 = L_0.___m_ListData;
		NullCheck(L_1);
		Il2CppFullySharedGenericStruct* L_2 = L_1->___Ptr;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t4CF93CEF0394185EBB5E5DFF70EA5EA8C34A840D NativeParallelHashMapExtensions_GetUniqueKeyArray_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m6DC98555F4354656A64ABD1F1FB14DAF5193C139_fshared (NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22 ___0_container, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1;
		L_1 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = L_1;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = L_2;
		int32_t L_4;
		L_4 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_4;
		int32_t L_5 = V_0;
		ValueTuple_2_t4CF93CEF0394185EBB5E5DFF70EA5EA8C34A840D L_6;
		memset((&L_6), 0, sizeof(L_6));
		ValueTuple_2__ctor_m90E20F3BDB456A9E9F0690ECCE21B5796934682A((&L_6), L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t4CF93CEF0394185EBB5E5DFF70EA5EA8C34A840D NativeParallelHashMapExtensions_GetUniqueKeyArray_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mF815B9736CCEA3077EC6C7408B1875AC7E360772_fshared (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F ___0_container, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1;
		L_1 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = L_1;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = L_2;
		int32_t L_4;
		L_4 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_4;
		int32_t L_5 = V_0;
		ValueTuple_2_t4CF93CEF0394185EBB5E5DFF70EA5EA8C34A840D L_6;
		memset((&L_6), 0, sizeof(L_6));
		ValueTuple_2__ctor_m90E20F3BDB456A9E9F0690ECCE21B5796934682A((&L_6), L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeParallelHashMapBucketData_tCF0D4586EE0009033007B1E1BD04D40BA0A9C8E9 NativeParallelHashMapExtensions_GetUnsafeBucketData_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mF7278677C2994CB4C9A7CABF4801CD22014BF931_fshared (NativeParallelHashMap_2_t75E2745DBFEAC14A7B7306A89FBFB3B562CEA497 ___0_container, const RuntimeMethod* method) 
{
	{
		NativeParallelHashMap_2_t75E2745DBFEAC14A7B7306A89FBFB3B562CEA497 L_0 = ___0_container;
		UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707 L_1 = L_0.___m_HashMapData;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = L_1.___m_Buffer;
		UnsafeParallelHashMapBucketData_tCF0D4586EE0009033007B1E1BD04D40BA0A9C8E9 L_3;
		L_3 = UnsafeParallelHashMapData_GetBucketData_m0A5859EBE368E2E2BBBD321F9A7E28AEBF0EDDC3((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeParallelHashMapBucketData_tCF0D4586EE0009033007B1E1BD04D40BA0A9C8E9 NativeParallelHashMapExtensions_GetUnsafeBucketData_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m87EBDF2435FBC6B614A8311BB42E60B104532398_fshared (NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22 ___0_container, const RuntimeMethod* method) 
{
	{
		NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22 L_0 = ___0_container;
		UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F L_1 = L_0.___m_MultiHashMapData;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = L_1.___m_Buffer;
		UnsafeParallelHashMapBucketData_tCF0D4586EE0009033007B1E1BD04D40BA0A9C8E9 L_3;
		L_3 = UnsafeParallelHashMapData_GetBucketData_m0A5859EBE368E2E2BBBD321F9A7E28AEBF0EDDC3((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeParallelHashMapExtensions_Remove_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m53F7E0A772565666D599D319F939426F7A896492_fshared (NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22 ___0_container, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TKey_t0DBD8AE3E40678E75578512D3E3EFD21E23599EE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_TValue_tEEC11F243A93B10B85AF655A7657238B9128AFC6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TKey_t0DBD8AE3E40678E75578512D3E3EFD21E23599EE);
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TValue_tEEC11F243A93B10B85AF655A7657238B9128AFC6);
	{
		UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F* L_0 = (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F*)(&(&___0_container)->___m_MultiHashMapData);
		il2cpp_codegen_memcpy(L_1, ___1_key, SizeOf_TKey_t0DBD8AE3E40678E75578512D3E3EFD21E23599EE);
		il2cpp_codegen_memcpy(L_2, ___2_value, SizeOf_TValue_tEEC11F243A93B10B85AF655A7657238B9128AFC6);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeParallelHashMapExtensions_Unique_TisIl2CppFullySharedGenericStruct_m674E0555765DADEA4A4C72541D65B14707EFC0EB_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA768F369FF07BC4A7486CD2E0630F1E249B49E80 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_tA768F369FF07BC4A7486CD2E0630F1E249B49E80);
	const Il2CppFullySharedGenericStruct L_14 = L_4;
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_T_tA768F369FF07BC4A7486CD2E0630F1E249B49E80);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericStruct V_3 = alloca(SizeOf_T_tA768F369FF07BC4A7486CD2E0630F1E249B49E80);
	memset(V_3, 0, SizeOf_T_tA768F369FF07BC4A7486CD2E0630F1E249B49E80);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_array), NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		V_0 = 0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_array), NULL);
		V_1 = L_1;
		int32_t L_2 = V_0;
		V_2 = L_2;
		goto IL_004d;
	}

IL_0019:
	{
		int32_t L_3 = V_2;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (&___0_array), L_3, (Il2CppFullySharedGenericStruct*)L_4);
		il2cpp_codegen_memcpy(V_3, L_4, SizeOf_T_tA768F369FF07BC4A7486CD2E0630F1E249B49E80);
		int32_t L_5 = V_0;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (&___0_array), L_5, (Il2CppFullySharedGenericStruct*)L_6);
		Il2CppConstrainedCallData L_8;
		Il2CppMethodPointer L_9 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)(Il2CppFullySharedGenericStruct*)V_3, &L_8, L_7);
		bool L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(L_9, L_8.method,L_8.thisPtr, L_6);
		if (L_10)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_11 = V_2;
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		V_2 = L_12;
		int32_t L_13 = V_0;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (&___0_array), L_13, (Il2CppFullySharedGenericStruct*)L_14);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), (&___0_array), L_12, L_14);
	}

IL_004d:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		V_0 = L_16;
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_18 = V_2;
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		V_2 = L_19;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeParallelMultiHashMapExtensions_Initialize_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m045B4C791A5970CFA228B174BE56E841E91C0E24_fshared (NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22* ___0_container, int32_t ___1_capacity, Il2CppFullySharedGenericStruct* ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* L_3 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	{
		NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22* L_0 = ___0_container;
		int32_t L_1 = ___1_capacity;
		Il2CppFullySharedGenericStruct* L_2 = ___2_allocator;
		Il2CppConstrainedCallData L_4;
		Il2CppMethodPointer L_5 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 0), (void*)L_2, &L_4, L_3);
		typedef AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ( *func_L_6)(void*,const RuntimeMethod*);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ((func_L_6)L_5)(L_4.thisPtr,L_4.method);
		UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F L_8;
		memset((&L_8), 0, sizeof(L_8));
		UnsafeParallelMultiHashMap_2__ctor_m2E9AAA535D5D589B1D9CA34C9CCD9D66CF1DF44B((&L_8), L_1, L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		L_0->___m_MultiHashMapData = L_8;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeReferenceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_mEB79BE46478F0134535EFD4F98EBA2EB0D1A7B3C_fshared (NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4 ___0_reference, const RuntimeMethod* method) 
{
	{
		NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4 L_0 = ___0_reference;
		void* L_1 = L_0.___m_Data;
		return (Il2CppFullySharedGenericStruct*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeReferenceUnsafeUtility_GetUnsafePtrWithoutChecks_TisIl2CppFullySharedGenericStruct_m5A817AC2C6E59D9CF8D617605C09B83FAC88845D_fshared (NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4 ___0_reference, const RuntimeMethod* method) 
{
	{
		NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4 L_0 = ___0_reference;
		void* L_1 = L_0.___m_Data;
		return (Il2CppFullySharedGenericStruct*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeReferenceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_mD8A8D6156E606899E693CDD4803C48CE4D38F13B_fshared (NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4 ___0_reference, const RuntimeMethod* method) 
{
	{
		NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4 L_0 = ___0_reference;
		void* L_1 = L_0.___m_Data;
		return (Il2CppFullySharedGenericStruct*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA NativeSliceExtensions_Slice_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m90886BC2D536378A6214D18FFA40D9D198770487 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m574BF92AE3EB288AB58279FBED0B873AFEC5F56F((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C NativeSliceExtensions_Slice_TisConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C_m610F0F37FF1EA5D8ABC70A39F5DB5F14315C69EE (NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_mE305EBF30B698DC5F5DC8B70A6A3B08BDC7DD626((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B NativeSliceExtensions_Slice_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m3BE9AFF11F3B0C3092F81D506EB518EF8280E369 (NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_mFCA72E41A56CB5CF71EB01A4A4D66B431F8932DA((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 NativeSliceExtensions_Slice_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m67CB4FE693AB4570CB58B357AAB28D0AC4162C93 (NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m546F4FC4F00E93F0730BE9C5DC7648F384B6FB75((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F NativeSliceExtensions_Slice_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mFCFE71D2C05399DB0A2F62F87B9F938E78E964B1 (NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_mD4A144FA99A1B1DFBC1DA2BECE2C44266FF2741C((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t2473975F09997A0D294B91A7118D96C985053A91 NativeSliceExtensions_Slice_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m2A89D94A32EE261CA668BB10708D5BDF0A2C0939 (NativeArray_1_t47E59A74649F4207823BA714DF59C940F74917E1 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t47E59A74649F4207823BA714DF59C940F74917E1 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t2473975F09997A0D294B91A7118D96C985053A91 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m4D65225E372EF48222C754B1F98BA0A08F636288((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t9BFFF9586EFFB05517670778FC645523EFB2AA41 NativeSliceExtensions_Slice_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mBEE9D202D3434CFA23877F0FA27745BFEB538585 (NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t9BFFF9586EFFB05517670778FC645523EFB2AA41 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m2044A196CEC2DB0C3D342CBAF6D643E413EE171A((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t135E2A23AA4EBDBCA846942F90F29A5004E8ACB5 NativeSliceExtensions_Slice_TisGfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180_mFEBD859496D2BB3162D83F70E0FCBD2C55B80725 (NativeArray_1_tFF516D1DBC720351B560D9B3984FB895B01FD6E5 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tFF516D1DBC720351B560D9B3984FB895B01FD6E5 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t135E2A23AA4EBDBCA846942F90F29A5004E8ACB5 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m03758007645ECCE5746C2DF0F3C00B857DBDAC22((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F NativeSliceExtensions_Slice_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC56CDE15F76977EC66E76AA6F18258BDFFCC76AF (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m9BFC93FD998BD41E6249322EDA95916FC779B011((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 NativeSliceExtensions_Slice_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m6FD1AF82FBEB746F5DED414A4AFF4B8EF1E02277 (NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t0ECD53A3C3E3274982441D79651584C7F63B6E97 NativeSliceExtensions_Slice_TisSerializedCommand_tC29E0C661BDD3D6C4B4EAEE095AADFCDF5CE97AB_m974A155D597D9137A6F37A7B5B82E685B5D22C88 (NativeArray_1_tB946AB7C39022A3069BADCA1BFB2EB857A84AAD9 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tB946AB7C39022A3069BADCA1BFB2EB857A84AAD9 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t0ECD53A3C3E3274982441D79651584C7F63B6E97 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m30A468E661CB9801959FE209E0A67C877F5A013F((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t79A5C61472DAE981DC745392A352491AEE9CF277 NativeSliceExtensions_Slice_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m69166D7D3B4770C1D291CC4CABCFE6F8D8C68F91 (NativeArray_1_t6A74899EB7F47397AF0F8B81D065AF9E313C4830 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t6A74899EB7F47397AF0F8B81D065AF9E313C4830 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t79A5C61472DAE981DC745392A352491AEE9CF277 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m73F2061C57DEB523833B7EB319F0C2377D8253F5((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t7B1E7744FBAF078F78D93365DECA9572D295ECAE NativeSliceExtensions_Slice_TisUIToolkitBatchMetricsInfo_tA5349B40F7E434CD3CB13205A211A8BD81D7DCE3_m0C613BFFAE33AAF9580F2B90A9E33BEBFC31960C (NativeArray_1_tD3E166440DED38454F2B25BF9A375A5EBF8C47AB ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tD3E166440DED38454F2B25BF9A375A5EBF8C47AB L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t7B1E7744FBAF078F78D93365DECA9572D295ECAE L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m9AAD03E1840186A73E6DEB6585FC59C340D2861C((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tD956D063FC554DB22B1EA853619C01F718853C7F NativeSliceExtensions_Slice_TisUnmanagedFilterFunction_t46D1C73262CD8245474DBC2CA5878C80E08A1B11_m71BE916E53CCF50A809D988A79D03A1249F0CAD1 (NativeArray_1_t21CCCF3F852F2C88956531DDBEE7D161399D1ADD ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t21CCCF3F852F2C88956531DDBEE7D161399D1ADD L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_tD956D063FC554DB22B1EA853619C01F718853C7F L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m12C15837FE5373229E6160FA849E4B723AA85DC3((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t59F7AA82EEDAFC28903AC471BA1AB4D4AB648897 NativeSliceExtensions_Slice_TisUnmanagedMaterialPropertyValue_t32418EF3A65B66312EE3D81C88513C1116711B75_mA58EF0FC74C1F2D7D110A10FCA92EAD0C037791B (NativeArray_1_t113406E16457EBB6F723AA50A3A4A0EA14B8AFD2 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t113406E16457EBB6F723AA50A3A4A0EA14B8AFD2 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t59F7AA82EEDAFC28903AC471BA1AB4D4AB648897 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m52F465B77EB44801B088D6851A88E0253957C389((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceExtensions_Slice_TisIl2CppFullySharedGenericStruct_mFB1AE1A459E87B8E3C3986EF14F956E30EAF24A3_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m313B1A91AB4ADBA821C074187D67957126F93DFF((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceExtensions_Slice_TisIl2CppFullySharedGenericStruct_m8604EAC32FCFF874A6AA4097703CF1DA1EFA00DE_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_thisSlice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_thisSlice;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m4C0C75BC6633B56253FD4A7CD7F38A34E73C6253((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA78E8047D38CFCADF8D3048D186F14050CEF9458 NativeSliceExtensions_Slice_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m67DC93FFFF1EFB4D93CFBCF2E9348A6B08DB63FC_gshared (NativeArray_1_t617E9AB997FA976725092F465E5BB075180FFF30 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t617E9AB997FA976725092F465E5BB075180FFF30 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_tA78E8047D38CFCADF8D3048D186F14050CEF9458 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m6FF566970889B5CFDC43EE82D21F45A254BA7978((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t10EE15BD47CA7D87727E99494E581ADA4021B6B2 NativeSliceExtensions_Slice_TisCpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93_m40EF9CD30D4E084D0907C662A80EF33FC649E1EA (NativeArray_1_t9F2DDC824E9AE9423E5F4D96E7EC4B5DC22B2E26 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t9F2DDC824E9AE9423E5F4D96E7EC4B5DC22B2E26 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t10EE15BD47CA7D87727E99494E581ADA4021B6B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m201AB4CECADE7804A6764BD2854BC42D43350049((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 NativeSliceExtensions_Slice_TisBackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D_mBE04543E2671A62D2C549826282EE4135B906C36 (NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_mB3722DE92029235F31FBD5EA0C922C94EC1EB1A6((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 NativeSliceExtensions_Slice_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_m877677D420E575DCBE695DCB60B1AF3FE9C1E81F (NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m60F25657F5AE104ED7F2F956B948FE7C704EDB5D((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 NativeSliceExtensions_Slice_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_mA902AF6CBD285F1A7F631E533330F582E702AEE0 (NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m7A0D0D8A1439A72F1514624217FAB4B88C113BFD((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mFE6F19196458580AE39F48B36CA1E4FB3E242032 (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___2_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = ___2_length;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_001f:
	{
		int32_t L_6 = ___1_stride;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_7 = ___1_stride;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F));
		int32_t L_12 = ___1_stride;
		(&V_0)->___m_Stride = L_12;
		void* L_13 = ___0_dataPointer;
		(&V_0)->___m_Buffer = (uint8_t*)L_13;
		int32_t L_14 = ___2_length;
		(&V_0)->___m_Length = L_14;
		NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m209A5CA848B5D71860FF727A488EBB61699F029D (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___2_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = ___2_length;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_001f:
	{
		int32_t L_6 = ___1_stride;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_7 = ___1_stride;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A));
		int32_t L_12 = ___1_stride;
		(&V_0)->___m_Stride = L_12;
		void* L_13 = ___0_dataPointer;
		(&V_0)->___m_Buffer = (uint8_t*)L_13;
		int32_t L_14 = ___2_length;
		(&V_0)->___m_Length = L_14;
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mF7B7FA019164962E7BF9FDB47A4AB92199BF9DDA (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___2_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = ___2_length;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_001f:
	{
		int32_t L_6 = ___1_stride;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_7 = ___1_stride;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2));
		int32_t L_12 = ___1_stride;
		(&V_0)->___m_Stride = L_12;
		void* L_13 = ___0_dataPointer;
		(&V_0)->___m_Buffer = (uint8_t*)L_13;
		int32_t L_14 = ___2_length;
		(&V_0)->___m_Length = L_14;
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisIl2CppFullySharedGenericStruct_mE65C843FF57523BD4FDD1642C5D01EE096A9E2E0_fshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___2_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = ___2_length;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_001f:
	{
		int32_t L_6 = ___1_stride;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_7 = ___1_stride;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52));
		int32_t L_12 = ___1_stride;
		(&V_0)->___m_Stride = L_12;
		void* L_13 = ___0_dataPointer;
		(&V_0)->___m_Buffer = (uint8_t*)L_13;
		int32_t L_14 = ___2_length;
		(&V_0)->___m_Length = L_14;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) 
{
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		return (void*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) 
{
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		return (void*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mFBA96C2F8E654CCDD8E763848FC9FE22A6B10AFD (NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___0_array, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_value, const RuntimeMethod* method) 
{
	DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 L_0;
		L_0 = NativeArray_1_AsReadOnlySpan_mE326C38BEA21D76FFA2FC6277F03B691FD78BCBA((&___0_array), NULL);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___1_value;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8));
		DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8 L_2 = V_0;
		int32_t L_3;
		L_3 = NativeSortExtension_BinarySearch_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisDefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8_mB748E41133FA648FD7D940AF0E971865BCA13E3F(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m70A23F9996288899EFD8F370B1759E06301828D2 (NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C ___0_array, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_tC220B03984F68939D089A1AE074266FCC0EC16CA L_0;
		L_0 = NativeArray_1_AsReadOnlySpan_mC63E5C016C3C07DDF18DFD9A02917222DDB21015((&___0_array), NULL);
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B L_1 = ___1_value;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6));
		DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6 L_2 = V_0;
		int32_t L_3;
		L_3 = NativeSortExtension_BinarySearch_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_TisDefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6_m3CEE3D91A42433B257641A0D31E5FD223FD3342A(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mC9279282A45E664CC781D4F3C87B50FA575B81B8 (NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 ___0_array, uint32_t ___1_value, const RuntimeMethod* method) 
{
	DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_0;
		L_0 = NativeArray_1_AsReadOnlySpan_m06264171851390A04DB013C77825476FA7254C9C((&___0_array), NULL);
		uint32_t L_1 = ___1_value;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1));
		DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1 L_2 = V_0;
		int32_t L_3;
		L_3 = NativeSortExtension_BinarySearch_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisDefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1_mCCD413733A610B9D8F9FC3C9B02FF7F74EDF310B(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_m3A6F8C968B38411A4351D3E06251E4A6830BDE23_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tAC2BA8E7A468F184EEB8E60D27E31625048FB901 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tAC2BA8E7A468F184EEB8E60D27E31625048FB901);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_tAC2BA8E7A468F184EEB8E60D27E31625048FB901);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericStruct, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_1, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_mF37FF893F4B9859C00A38E0D8AABABE18D409F58_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5D5D8920E337D7BD5E7768B87B99898C6903550B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t5D5D8920E337D7BD5E7768B87B99898C6903550B);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_t5D5D8920E337D7BD5E7768B87B99898C6903550B);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericStruct, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_1, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_mEED7C960744565E22ABDCF47B04BB4F1D3D4D3AF_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t580C6AF35755E86023C674933ABA4655842A27C6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t580C6AF35755E86023C674933ABA4655842A27C6);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_container;
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_t580C6AF35755E86023C674933ABA4655842A27C6);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, Il2CppFullySharedGenericStruct, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_mE00CC35601503008B6319F4E8011CE96782269AE_fshared (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 ___0_container, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tBEAE782C8CA74715F118D46BAEE2B326BB1472FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tBEAE782C8CA74715F118D46BAEE2B326BB1472FD);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_tBEAE782C8CA74715F118D46BAEE2B326BB1472FD);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericStruct, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_1, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_mEA378A66FE40F4B2A3ABCCE3C5CCDC6B77EEAC99_fshared (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_roSpan, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t16769CF6C20EA06B32C4B09516BDB65D2DC804AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t16769CF6C20EA06B32C4B09516BDB65D2DC804AB);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0 = ___0_roSpan;
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_t16769CF6C20EA06B32C4B09516BDB65D2DC804AB);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericStruct, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_m4BA2B56A0EB03E04AECC09FFCF0B4320A4788AD6_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tCE349946DF6DE9EA66C168BF8F86F155DB2F96D6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tCE349946DF6DE9EA66C168BF8F86F155DB2F96D6);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_tCE349946DF6DE9EA66C168BF8F86F155DB2F96D6);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericStruct, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_1, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_m0B57431881D9F67C3BDA5D83629DB00DCCDF1BC8_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericStruct ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t793E0D03910858DC2B73D845B262490416204DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t793E0D03910858DC2B73D845B262490416204DEC);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		il2cpp_codegen_memcpy(L_2, ___2_value, SizeOf_T_t793E0D03910858DC2B73D845B262490416204DEC);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_3 = V_0;
		int32_t L_4;
		L_4 = InvokerFuncInvoker4< int32_t, Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisDefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8_mB748E41133FA648FD7D940AF0E971865BCA13E3F (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 ___0_roSpan, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_value, DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8 ___2_comp, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_mF61164B41A8152ACB6105B33F27B617757703605_inline((&___0_roSpan), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_2;
		L_2 = il2cpp_span_get_item((EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)((Il2CppByReference*)&(((&___0_roSpan))->____pointer))->value, (0), ((&___0_roSpan))->____length);
		V_1 = L_2;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_3 = V_1;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*,intptr_t,false,false>(L_3,NULL));
		int32_t L_5 = V_0;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_6 = ___1_value;
		DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8 L_7 = ___2_comp;
		int32_t L_8;
		L_8 = NativeSortExtension_BinarySearch_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisDefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8_mF045AD0E0A0315C9D98F9FD347EEEF6E24C73ADC((EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}

IL_0020:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_TisDefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6_m3CEE3D91A42433B257641A0D31E5FD223FD3342A (ReadOnlySpan_1_tC220B03984F68939D089A1AE074266FCC0EC16CA ___0_roSpan, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___1_value, DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6 ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m374611371AE053D62AD05BA8C8B9FFDF0B82B996_inline((&___0_roSpan), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* L_2;
		L_2 = il2cpp_span_get_item((InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B*)((Il2CppByReference*)&(((&___0_roSpan))->____pointer))->value, (0), ((&___0_roSpan))->____length);
		V_1 = L_2;
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* L_3 = V_1;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B*,intptr_t,false,false>(L_3,NULL));
		int32_t L_5 = V_0;
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B L_6 = ___1_value;
		DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6 L_7 = ___2_comp;
		int32_t L_8;
		L_8 = NativeSortExtension_BinarySearch_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_TisDefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6_mF85FE315B6BD04F8B703C4EB4DDD36A9D24C2D8A((InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B*)L_4, L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_8;
	}

IL_0020:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisDefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1_mCCD413733A610B9D8F9FC3C9B02FF7F74EDF310B (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 ___0_roSpan, uint32_t ___1_value, DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1 ___2_comp, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m031225D82859BA85FEE8375AA52B4CE8DF1ACE00_inline((&___0_roSpan), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		uint32_t* L_2;
		L_2 = il2cpp_span_get_item((uint32_t*)((Il2CppByReference*)&(((&___0_roSpan))->____pointer))->value, (0), ((&___0_roSpan))->____length);
		V_1 = L_2;
		uint32_t* L_3 = V_1;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,uint32_t*,intptr_t,false,false>(L_3,NULL));
		int32_t L_5 = V_0;
		uint32_t L_6 = ___1_value;
		DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1 L_7 = ___2_comp;
		int32_t L_8;
		L_8 = NativeSortExtension_BinarySearch_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisDefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1_m336558E7336C81B8B72EFCB422A4275D0FD0F09F((uint32_t*)L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}

IL_0020:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m18BDEFA9ACBD2B0621A230F42CA1190C13E40A59_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t86EC7AD22FF03426071C18A93C53C043090B2574 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t4B8E50D69A3C0C52BFA0AC809A656B78ACD7003D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t86EC7AD22FF03426071C18A93C53C043090B2574);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t4B8E50D69A3C0C52BFA0AC809A656B78ACD7003D);
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_t86EC7AD22FF03426071C18A93C53C043090B2574);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___2_comp : &___2_comp), SizeOf_U_t4B8E50D69A3C0C52BFA0AC809A656B78ACD7003D);
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_2: *(void**)L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mEB3008F32EC83831765762622BBB11C6B7BC1D7C_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tAC1ED13514DC7721E37F0E9428452F902803F44E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t5E1257891E5DF132ADA82279AABD722E91B20974 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tAC1ED13514DC7721E37F0E9428452F902803F44E);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t5E1257891E5DF132ADA82279AABD722E91B20974);
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_tAC1ED13514DC7721E37F0E9428452F902803F44E);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___2_comp : &___2_comp), SizeOf_U_t5E1257891E5DF132ADA82279AABD722E91B20974);
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_2: *(void**)L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mD435A28E9461F36F9490F8E0CF60763FE5B5EED3_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t64CE80799B6032C409B9A49995F3A1337ED365A9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const uint32_t SizeOf_U_tCEA9DF823DA80CDD134DEEC8EAA2130FF21B9F33 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t64CE80799B6032C409B9A49995F3A1337ED365A9);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_tCEA9DF823DA80CDD134DEEC8EAA2130FF21B9F33);
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_container;
		void* L_1;
		L_1 = ((  void* (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, NULL);
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_container), NULL);
		il2cpp_codegen_memcpy(L_3, ___1_value, SizeOf_T_t64CE80799B6032C409B9A49995F3A1337ED365A9);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_comp : &___2_comp), SizeOf_U_tCEA9DF823DA80CDD134DEEC8EAA2130FF21B9F33);
		int32_t L_5;
		L_5 = InvokerFuncInvoker4< int32_t, Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, (Il2CppFullySharedGenericStruct*)L_1, L_2, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_4: *(void**)L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m67CE23383C6721FDEF03FE37FD31C02F398B4C2B_fshared (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 ___0_container, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5D28F59E0D72A034D6A60808B64A7E730475AD9A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_tF656C53A883AF4D5D9B227B29DB4D0D684C05432 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t5D28F59E0D72A034D6A60808B64A7E730475AD9A);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_tF656C53A883AF4D5D9B227B29DB4D0D684C05432);
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_t5D28F59E0D72A034D6A60808B64A7E730475AD9A);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___2_comp : &___2_comp), SizeOf_U_tF656C53A883AF4D5D9B227B29DB4D0D684C05432);
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_2: *(void**)L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA4AD54929CBC51F673331E05EF70F1A3C61783BD_fshared (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_roSpan, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tFB475C5E064202303E533828917CA17C0D122CE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const uint32_t SizeOf_U_tA10B3B582BC01AC97091AB427AF659549EF5A739 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_T_tFB475C5E064202303E533828917CA17C0D122CE3);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_U_tA10B3B582BC01AC97091AB427AF659549EF5A739);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_roSpan), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = ((  Il2CppFullySharedGenericStruct* (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_roSpan), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_2;
		Il2CppFullySharedGenericStruct* L_3 = V_1;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_3,NULL));
		int32_t L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, ___1_value, SizeOf_T_tFB475C5E064202303E533828917CA17C0D122CE3);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_comp : &___2_comp), SizeOf_U_tA10B3B582BC01AC97091AB427AF659549EF5A739);
		int32_t L_8;
		L_8 = InvokerFuncInvoker4< int32_t, Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, (Il2CppFullySharedGenericStruct*)L_4, L_5, L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_7: *(void**)L_7));
		return L_8;
	}

IL_0020:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mE55072B5E1ACDB3644FBC3A1E093674E369CBFFB_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tBE9BDD9637297B0CE397C47A92971E02E573170A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t1201D6465E6320EFCBD3E5906FA139D9C48D10A0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tBE9BDD9637297B0CE397C47A92971E02E573170A);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t1201D6465E6320EFCBD3E5906FA139D9C48D10A0);
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_tBE9BDD9637297B0CE397C47A92971E02E573170A);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___2_comp : &___2_comp), SizeOf_U_t1201D6465E6320EFCBD3E5906FA139D9C48D10A0);
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_2: *(void**)L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisDefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8_mF045AD0E0A0315C9D98F9FD347EEEF6E24C73ADC (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_ptr, int32_t ___1_length, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___2_value, DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8 ___3_comp, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___1_length;
		V_1 = L_0;
		goto IL_0045;
	}

IL_0006:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(L_2>>1))));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_3 = ___0_ptr;
		int32_t L_4 = V_2;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_7 = (*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)((EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(L_5, (int32_t)L_6)))));
		V_3 = L_7;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_8 = ___2_value;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_9 = V_3;
		int32_t L_10;
		L_10 = DefaultComparer_1_Compare_m2B69906CEFD90B0F959BCBA26240427D5E34E237((&___3_comp), L_8, L_9, NULL);
		V_4 = L_10;
		int32_t L_11 = V_4;
		if (L_11)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0034:
	{
		int32_t L_13 = V_4;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_14 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_0041:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)(L_16>>1));
	}

IL_0045:
	{
		int32_t L_17 = V_1;
		if (L_17)
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_18 = V_0;
		return ((~L_18));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_TisDefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6_mF85FE315B6BD04F8B703C4EB4DDD36A9D24C2D8A (InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___0_ptr, int32_t ___1_length, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___2_value, DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6 ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___1_length;
		V_1 = L_0;
		goto IL_0045;
	}

IL_0006:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(L_2>>1))));
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* L_3 = ___0_ptr;
		int32_t L_4 = V_2;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B);
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B L_7 = (*(InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B*)((InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(L_5, (int32_t)L_6)))));
		V_3 = L_7;
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B L_8 = ___2_value;
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B L_9 = V_3;
		int32_t L_10;
		L_10 = DefaultComparer_1_Compare_mFC06C4A12E61CBB1E919D96EAA1B14B36829682A((&___3_comp), L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_4 = L_10;
		int32_t L_11 = V_4;
		if (L_11)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0034:
	{
		int32_t L_13 = V_4;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_14 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_0041:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)(L_16>>1));
	}

IL_0045:
	{
		int32_t L_17 = V_1;
		if (L_17)
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_18 = V_0;
		return ((~L_18));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisDefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1_m336558E7336C81B8B72EFCB422A4275D0FD0F09F (uint32_t* ___0_ptr, int32_t ___1_length, uint32_t ___2_value, DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1 ___3_comp, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___1_length;
		V_1 = L_0;
		goto IL_0045;
	}

IL_0006:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(L_2>>1))));
		uint32_t* L_3 = ___0_ptr;
		int32_t L_4 = V_2;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(uint32_t);
		uint32_t L_7 = (*(uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(L_5, (int32_t)L_6)))));
		V_3 = L_7;
		uint32_t L_8 = ___2_value;
		uint32_t L_9 = V_3;
		int32_t L_10;
		L_10 = DefaultComparer_1_Compare_m3D3D830C6ED5074DBB34AE5D0FD965358815B855((&___3_comp), L_8, L_9, NULL);
		V_4 = L_10;
		int32_t L_11 = V_4;
		if (L_11)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0034:
	{
		int32_t L_13 = V_4;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_14 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_0041:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)(L_16>>1));
	}

IL_0045:
	{
		int32_t L_17 = V_1;
		if (L_17)
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_18 = V_0;
		return ((~L_18));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m8C0FBAD1AF39307C240BF78F1446848F39A6D0CF_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericStruct ___2_value, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericStruct V_3 = alloca(SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
	memset(V_3, 0, SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
	int32_t V_4 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___1_length;
		V_1 = L_0;
		goto IL_0045;
	}

IL_0006:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(L_2>>1))));
		Il2CppFullySharedGenericStruct* L_3 = ___0_ptr;
		int32_t L_4 = V_2;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D;
		il2cpp_codegen_memcpy(L_7, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(L_5, (int32_t)L_6)))), SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
		il2cpp_codegen_memcpy(V_3, L_7, SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
		il2cpp_codegen_memcpy(L_8, ___2_value, SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
		il2cpp_codegen_memcpy(L_9, V_3, SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___3_comp : &___3_comp), &L_11, L_10);
		int32_t L_13 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_12, L_11.method,L_11.thisPtr, L_8, L_9);
		V_4 = L_13;
		int32_t L_14 = V_4;
		if (L_14)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_15 = V_2;
		return L_15;
	}

IL_0034:
	{
		int32_t L_16 = V_4;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_17 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_0041:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)(L_19>>1));
	}

IL_0045:
	{
		int32_t L_20 = V_1;
		if (L_20)
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_21 = V_0;
		return ((~L_21));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_CheckComparer_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m85F09B28E4C56532C553F26702140AD780B0C83F_fshared (Il2CppFullySharedGenericStruct* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_19 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_25 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_31 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_38 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_45 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_51 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	const Il2CppFullySharedGenericStruct L_16 = L_2;
	const Il2CppFullySharedGenericStruct L_23 = L_2;
	const Il2CppFullySharedGenericStruct L_29 = L_2;
	const Il2CppFullySharedGenericStruct L_36 = L_2;
	const Il2CppFullySharedGenericStruct L_43 = L_2;
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	const Il2CppFullySharedGenericStruct L_17 = L_3;
	const Il2CppFullySharedGenericStruct L_24 = L_3;
	const Il2CppFullySharedGenericStruct L_30 = L_3;
	const Il2CppFullySharedGenericStruct L_37 = L_3;
	const Il2CppFullySharedGenericStruct L_44 = L_3;
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	const Il2CppFullySharedGenericStruct L_18 = L_4;
	const Il2CppFullySharedGenericStruct L_49 = L_4;
	const Il2CppFullySharedGenericStruct L_50 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	memset(V_0, 0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericStruct V_3 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	memset(V_3, 0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00da;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_1 = ___0_array;
		il2cpp_codegen_memcpy(L_2, L_1, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_6, L_5);
		int32_t L_8 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_7, L_6.method,L_6.thisPtr, L_3, L_4);
		if (!L_8)
		{
			goto IL_002a;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19710C29C28F677ED5E80B5C8FFB9B9F5CD6AB3A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_002a:
	{
		V_1 = 1;
		int32_t L_10 = ___1_length;
		int32_t L_11;
		L_11 = math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline(L_10, 8, NULL);
		V_2 = L_11;
		goto IL_00d3;
	}

IL_0039:
	{
		Il2CppFullySharedGenericStruct* L_12 = ___0_array;
		int32_t L_13 = V_1;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_13,NULL));
		uint32_t L_15 = SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619;
		il2cpp_codegen_memcpy(L_16, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, (int32_t)L_15)))), SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(V_3, L_16, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_17, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_18, V_3, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		Il2CppConstrainedCallData L_20;
		Il2CppMethodPointer L_21 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_20, L_19);
		int32_t L_22 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_21, L_20.method,L_20.thisPtr, L_17, L_18);
		if (L_22)
		{
			goto IL_006c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_23, V_3, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_24, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		Il2CppConstrainedCallData L_26;
		Il2CppMethodPointer L_27 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_26, L_25);
		int32_t L_28 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_27, L_26.method,L_26.thisPtr, L_23, L_24);
		if (!L_28)
		{
			goto IL_00cf;
		}
	}

IL_006c:
	{
		il2cpp_codegen_memcpy(L_29, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_30, V_3, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		Il2CppConstrainedCallData L_32;
		Il2CppMethodPointer L_33 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_32, L_31);
		int32_t L_34 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_33, L_32.method,L_32.thisPtr, L_29, L_30);
		if (L_34)
		{
			goto IL_0088;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_35 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_35, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0166BFBEA755AEC68D894E2718E0F43AC621B48E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, method);
	}

IL_0088:
	{
		il2cpp_codegen_memcpy(L_36, V_3, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_37, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		Il2CppConstrainedCallData L_39;
		Il2CppMethodPointer L_40 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_39, L_38);
		int32_t L_41 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_40, L_39.method,L_39.thisPtr, L_36, L_37);
		if (L_41)
		{
			goto IL_00a4;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_42 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F08B108AE90A47E2C4B3A0DC16321A36C9AFB54)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
	}

IL_00a4:
	{
		il2cpp_codegen_memcpy(L_43, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_44, V_3, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		Il2CppConstrainedCallData L_46;
		Il2CppMethodPointer L_47 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_46, L_45);
		int32_t L_48 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_47, L_46.method,L_46.thisPtr, L_43, L_44);
		il2cpp_codegen_memcpy(L_49, V_3, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_50, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		Il2CppConstrainedCallData L_52;
		Il2CppMethodPointer L_53 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_52, L_51);
		int32_t L_54 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_53, L_52.method,L_52.thisPtr, L_49, L_50);
		if ((!(((uint32_t)L_48) == ((uint32_t)L_54))))
		{
			goto IL_00da;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_55 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_55, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF83955BF61125FC832C506DE4DB5985B784A2C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_55, method);
	}

IL_00cf:
	{
		int32_t L_56 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_00d3:
	{
		int32_t L_57 = V_1;
		int32_t L_58 = V_2;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_0039;
		}
	}

IL_00da:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_CheckStrideMatchesSize_TisIl2CppFullySharedGenericStruct_mA73CB99208E9AE13EAB0F7E1854579E56B98B6E1_fshared (int32_t ___0_stride, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t1E4378C7A520A3CCB1C179FD37AC45442DD53E36 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		int32_t L_0 = ___0_stride;
		uint32_t L_1 = SizeOf_T_t1E4378C7A520A3CCB1C179FD37AC45442DD53E36;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9DDDC1BB86D19164517493AC7ED9674192AFD37)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m54023D89607E52DAAF70FC0AC1566BE018C94951 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___3_comp, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		goto IL_001a;
	}

IL_000c:
	{
		void* L_3 = ___0_array;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_lo;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_7 = ___3_comp;
		NativeSortExtension_Heapify_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m95FBD7CAAE1997DE4D22F9D8D6AEC37EB2B26D37(L_3, L_4, L_5, L_6, L_7, NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_001a:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_10 = V_0;
		V_2 = L_10;
		goto IL_003e;
	}

IL_0022:
	{
		void* L_11 = ___0_array;
		int32_t L_12 = ___1_lo;
		int32_t L_13 = ___1_lo;
		int32_t L_14 = V_2;
		NativeSortExtension_Swap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B32B9F06977E407E6CA99CA51A37F7DB63CC772(L_11, L_12, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_13, L_14)), 1)), NULL);
		void* L_15 = ___0_array;
		int32_t L_16 = V_2;
		int32_t L_17 = ___1_lo;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_18 = ___3_comp;
		NativeSortExtension_Heapify_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m95FBD7CAAE1997DE4D22F9D8D6AEC37EB2B26D37(L_15, 1, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), L_17, L_18, NULL);
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) > ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m64966317ECC8D7CDB0D08299D54C0515AFA10BC7 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___3_comp, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		goto IL_001a;
	}

IL_000c:
	{
		void* L_3 = ___0_array;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_lo;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_7 = ___3_comp;
		NativeSortExtension_Heapify_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mA1D6086C38D6952AA634FBC9BED57D65A58F68BA(L_3, L_4, L_5, L_6, L_7, NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_001a:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_10 = V_0;
		V_2 = L_10;
		goto IL_003e;
	}

IL_0022:
	{
		void* L_11 = ___0_array;
		int32_t L_12 = ___1_lo;
		int32_t L_13 = ___1_lo;
		int32_t L_14 = V_2;
		NativeSortExtension_Swap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m20CFAAEF92F2BF57192AC6AC6672D34DB0378730(L_11, L_12, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_13, L_14)), 1)), NULL);
		void* L_15 = ___0_array;
		int32_t L_16 = V_2;
		int32_t L_17 = ___1_lo;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_18 = ___3_comp;
		NativeSortExtension_Heapify_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mA1D6086C38D6952AA634FBC9BED57D65A58F68BA(L_15, 1, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), L_17, L_18, NULL);
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) > ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_mC7889E64AB70C508749FF7769C180D3BED4BC4CF (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___3_comp, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		goto IL_001a;
	}

IL_000c:
	{
		void* L_3 = ___0_array;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_lo;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_7 = ___3_comp;
		NativeSortExtension_Heapify_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1DB8637532087D9DDA1D1FA160D8396B23EE30D2(L_3, L_4, L_5, L_6, L_7, NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_001a:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_10 = V_0;
		V_2 = L_10;
		goto IL_003e;
	}

IL_0022:
	{
		void* L_11 = ___0_array;
		int32_t L_12 = ___1_lo;
		int32_t L_13 = ___1_lo;
		int32_t L_14 = V_2;
		NativeSortExtension_Swap_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7823FBF7870907C0FBB1EAA0FADD3DCF95A52217(L_11, L_12, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_13, L_14)), 1)), NULL);
		void* L_15 = ___0_array;
		int32_t L_16 = V_2;
		int32_t L_17 = ___1_lo;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_18 = ___3_comp;
		NativeSortExtension_Heapify_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1DB8637532087D9DDA1D1FA160D8396B23EE30D2(L_15, 1, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), L_17, L_18, NULL);
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) > ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m52C7968B61CD160CE7276D6768B010C26565185A (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___3_comp, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		goto IL_001a;
	}

IL_000c:
	{
		void* L_3 = ___0_array;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_lo;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_7 = ___3_comp;
		NativeSortExtension_Heapify_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0E63AE9C4FFB1E0893D9A562072BAFF57BFF74A3(L_3, L_4, L_5, L_6, L_7, NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_001a:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_10 = V_0;
		V_2 = L_10;
		goto IL_003e;
	}

IL_0022:
	{
		void* L_11 = ___0_array;
		int32_t L_12 = ___1_lo;
		int32_t L_13 = ___1_lo;
		int32_t L_14 = V_2;
		NativeSortExtension_Swap_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m559DA77F56AD4E1B2E028B54702A892A46109FA1(L_11, L_12, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_13, L_14)), 1)), NULL);
		void* L_15 = ___0_array;
		int32_t L_16 = V_2;
		int32_t L_17 = ___1_lo;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_18 = ___3_comp;
		NativeSortExtension_Heapify_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0E63AE9C4FFB1E0893D9A562072BAFF57BFF74A3(L_15, 1, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), L_17, L_18, NULL);
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) > ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m161F46C88A71F876EBED90282ED530DCA0E9A657_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE);
	const Il2CppFullySharedGenericAny L_18 = L_7;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		goto IL_001a;
	}

IL_000c:
	{
		void* L_3 = ___0_array;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_lo;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE);
		InvokerActionInvoker5< void*, int32_t, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_3, L_4, L_5, L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_7: *(void**)L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_001a:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_10 = V_0;
		V_2 = L_10;
		goto IL_003e;
	}

IL_0022:
	{
		void* L_11 = ___0_array;
		int32_t L_12 = ___1_lo;
		int32_t L_13 = ___1_lo;
		int32_t L_14 = V_2;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, L_12, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_13, L_14)), 1)), il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_15 = ___0_array;
		int32_t L_16 = V_2;
		int32_t L_17 = ___1_lo;
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE);
		InvokerActionInvoker5< void*, int32_t, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_15, 1, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_18: *(void**)L_18));
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) > ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m2CC31064DF6368EAF82AC8B93E49B5672AB577F8_fshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F);
	const Il2CppFullySharedGenericAny L_22 = L_9;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t* L_0 = ___2_hi;
		int32_t L_1 = *(L_0);
		int32_t* L_2 = ___1_lo;
		int32_t L_3 = *(L_2);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_1, L_3)), 1));
		int32_t L_4 = V_0;
		V_1 = ((int32_t)(L_4/2));
		goto IL_001c;
	}

IL_000e:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		int32_t* L_8 = ___1_lo;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F);
		InvokerActionInvoker5< void*, int32_t, int32_t, int32_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_5, L_6, L_7, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_9: *(void**)L_9));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_001c:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) >= ((int32_t)1)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_12 = V_0;
		V_2 = L_12;
		goto IL_0042;
	}

IL_0024:
	{
		void* L_13 = ___0_array;
		int32_t* L_14 = ___1_lo;
		int32_t L_15 = *(L_14);
		int32_t* L_16 = ___1_lo;
		int32_t L_17 = *(L_16);
		int32_t L_18 = V_2;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_13, L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_17, L_18)), 1)), il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_19 = ___0_array;
		int32_t L_20 = V_2;
		int32_t* L_21 = ___1_lo;
		il2cpp_codegen_memcpy(L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F);
		InvokerActionInvoker5< void*, int32_t, int32_t, int32_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_19, 1, ((int32_t)il2cpp_codegen_subtract(L_20, 1)), L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_22: *(void**)L_22));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
	}

IL_0042:
	{
		int32_t L_24 = V_2;
		if ((((int32_t)L_24) > ((int32_t)1)))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m95FBD7CAAE1997DE4D22F9D8D6AEC37EB2B26D37 (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___4_comp, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 V_2;
	memset((&V_2), 0, sizeof(V_2));
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939* G_B4_0 = NULL;
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939* G_B8_0 = NULL;
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___3_lo;
		int32_t L_2 = ___1_i;
		int32_t L_3;
		L_3 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1)), NULL);
		V_0 = L_3;
		goto IL_00a6;
	}

IL_0011:
	{
		int32_t L_4 = ___1_i;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_4));
		int32_t L_5 = V_1;
		int32_t L_6 = ___2_n;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939));
		G_B4_0 = (&___4_comp);
		goto IL_0033;
	}

IL_0033:
	{
		void* L_8 = ___0_array;
		int32_t L_9 = ___3_lo;
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_8, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_9, L_10)), 1)), NULL);
		void* L_12 = ___0_array;
		int32_t L_13 = ___3_lo;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_12, ((int32_t)il2cpp_codegen_add(L_13, L_14)), NULL);
		int32_t L_16;
		L_16 = DefaultComparer_1_Compare_m394F7F49471D14333A96E4D1609FF38B351FC316(G_B4_0, L_11, L_15, NULL);
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0059:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939));
		G_B8_0 = (&___4_comp);
		goto IL_0073;
	}

IL_0073:
	{
		void* L_19 = ___0_array;
		int32_t L_20 = ___3_lo;
		int32_t L_21 = V_1;
		int32_t L_22;
		L_22 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_19, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_20, L_21)), 1)), NULL);
		int32_t L_23 = V_0;
		int32_t L_24;
		L_24 = DefaultComparer_1_Compare_m394F7F49471D14333A96E4D1609FF38B351FC316(G_B8_0, L_22, L_23, NULL);
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00af;
		}
	}
	{
		void* L_25 = ___0_array;
		int32_t L_26 = ___3_lo;
		int32_t L_27 = ___1_i;
		void* L_28 = ___0_array;
		int32_t L_29 = ___3_lo;
		int32_t L_30 = V_1;
		int32_t L_31;
		L_31 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1)), NULL);
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline(L_25, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_26, L_27)), 1)), L_31, NULL);
		int32_t L_32 = V_1;
		___1_i = L_32;
	}

IL_00a6:
	{
		int32_t L_33 = ___1_i;
		int32_t L_34 = ___2_n;
		if ((((int32_t)L_33) <= ((int32_t)((int32_t)(L_34/2)))))
		{
			goto IL_0011;
		}
	}

IL_00af:
	{
		void* L_35 = ___0_array;
		int32_t L_36 = ___3_lo;
		int32_t L_37 = ___1_i;
		int32_t L_38 = V_0;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline(L_35, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1)), L_38, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mA1D6086C38D6952AA634FBC9BED57D65A58F68BA (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___4_comp, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9* G_B4_0 = NULL;
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9* G_B8_0 = NULL;
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___3_lo;
		int32_t L_2 = ___1_i;
		uint64_t L_3;
		L_3 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1)), NULL);
		V_0 = L_3;
		goto IL_00a6;
	}

IL_0011:
	{
		int32_t L_4 = ___1_i;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_4));
		int32_t L_5 = V_1;
		int32_t L_6 = ___2_n;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9));
		G_B4_0 = (&___4_comp);
		goto IL_0033;
	}

IL_0033:
	{
		void* L_8 = ___0_array;
		int32_t L_9 = ___3_lo;
		int32_t L_10 = V_1;
		uint64_t L_11;
		L_11 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_8, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_9, L_10)), 1)), NULL);
		void* L_12 = ___0_array;
		int32_t L_13 = ___3_lo;
		int32_t L_14 = V_1;
		uint64_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_12, ((int32_t)il2cpp_codegen_add(L_13, L_14)), NULL);
		int32_t L_16;
		L_16 = DefaultComparer_1_Compare_mCE528A0DC7D946A4B73C6C1BA0BEF3EF89B13E1A(G_B4_0, L_11, L_15, NULL);
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0059:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9));
		G_B8_0 = (&___4_comp);
		goto IL_0073;
	}

IL_0073:
	{
		void* L_19 = ___0_array;
		int32_t L_20 = ___3_lo;
		int32_t L_21 = V_1;
		uint64_t L_22;
		L_22 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_19, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_20, L_21)), 1)), NULL);
		uint64_t L_23 = V_0;
		int32_t L_24;
		L_24 = DefaultComparer_1_Compare_mCE528A0DC7D946A4B73C6C1BA0BEF3EF89B13E1A(G_B8_0, L_22, L_23, NULL);
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00af;
		}
	}
	{
		void* L_25 = ___0_array;
		int32_t L_26 = ___3_lo;
		int32_t L_27 = ___1_i;
		void* L_28 = ___0_array;
		int32_t L_29 = ___3_lo;
		int32_t L_30 = V_1;
		uint64_t L_31;
		L_31 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1)), NULL);
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline(L_25, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_26, L_27)), 1)), L_31, NULL);
		int32_t L_32 = V_1;
		___1_i = L_32;
	}

IL_00a6:
	{
		int32_t L_33 = ___1_i;
		int32_t L_34 = ___2_n;
		if ((((int32_t)L_33) <= ((int32_t)((int32_t)(L_34/2)))))
		{
			goto IL_0011;
		}
	}

IL_00af:
	{
		void* L_35 = ___0_array;
		int32_t L_36 = ___3_lo;
		int32_t L_37 = ___1_i;
		uint64_t L_38 = V_0;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline(L_35, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1)), L_38, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1DB8637532087D9DDA1D1FA160D8396B23EE30D2 (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___4_comp, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA V_2;
	memset((&V_2), 0, sizeof(V_2));
	ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA* G_B4_0 = NULL;
	ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA* G_B8_0 = NULL;
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___3_lo;
		int32_t L_2 = ___1_i;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1)), NULL);
		V_0 = L_3;
		goto IL_00a6;
	}

IL_0011:
	{
		int32_t L_4 = ___1_i;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_4));
		int32_t L_5 = V_1;
		int32_t L_6 = ___2_n;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA));
		G_B4_0 = (&___4_comp);
		goto IL_0033;
	}

IL_0033:
	{
		void* L_8 = ___0_array;
		int32_t L_9 = ___3_lo;
		int32_t L_10 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_8, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_9, L_10)), 1)), NULL);
		void* L_12 = ___0_array;
		int32_t L_13 = ___3_lo;
		int32_t L_14 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_12, ((int32_t)il2cpp_codegen_add(L_13, L_14)), NULL);
		int32_t L_16;
		L_16 = ActiveComparer_Compare_mA14126C7E24C5A91BDFE79B275F2239D84D79E70(G_B4_0, L_11, L_15, NULL);
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0059:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA));
		G_B8_0 = (&___4_comp);
		goto IL_0073;
	}

IL_0073:
	{
		void* L_19 = ___0_array;
		int32_t L_20 = ___3_lo;
		int32_t L_21 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_19, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_20, L_21)), 1)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_0;
		int32_t L_24;
		L_24 = ActiveComparer_Compare_mA14126C7E24C5A91BDFE79B275F2239D84D79E70(G_B8_0, L_22, L_23, NULL);
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00af;
		}
	}
	{
		void* L_25 = ___0_array;
		int32_t L_26 = ___3_lo;
		int32_t L_27 = ___1_i;
		void* L_28 = ___0_array;
		int32_t L_29 = ___3_lo;
		int32_t L_30 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1)), NULL);
		UnsafeUtility_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m172AB754724D12C7E4938B1ACE01A7FF192AC73E_inline(L_25, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_26, L_27)), 1)), L_31, NULL);
		int32_t L_32 = V_1;
		___1_i = L_32;
	}

IL_00a6:
	{
		int32_t L_33 = ___1_i;
		int32_t L_34 = ___2_n;
		if ((((int32_t)L_33) <= ((int32_t)((int32_t)(L_34/2)))))
		{
			goto IL_0011;
		}
	}

IL_00af:
	{
		void* L_35 = ___0_array;
		int32_t L_36 = ___3_lo;
		int32_t L_37 = ___1_i;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = V_0;
		UnsafeUtility_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m172AB754724D12C7E4938B1ACE01A7FF192AC73E_inline(L_35, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1)), L_38, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0E63AE9C4FFB1E0893D9A562072BAFF57BFF74A3 (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___4_comp, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B V_2;
	memset((&V_2), 0, sizeof(V_2));
	EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B* G_B4_0 = NULL;
	EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B* G_B8_0 = NULL;
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___3_lo;
		int32_t L_2 = ___1_i;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1)), NULL);
		V_0 = L_3;
		goto IL_00a6;
	}

IL_0011:
	{
		int32_t L_4 = ___1_i;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_4));
		int32_t L_5 = V_1;
		int32_t L_6 = ___2_n;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B));
		G_B4_0 = (&___4_comp);
		goto IL_0033;
	}

IL_0033:
	{
		void* L_8 = ___0_array;
		int32_t L_9 = ___3_lo;
		int32_t L_10 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_8, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_9, L_10)), 1)), NULL);
		void* L_12 = ___0_array;
		int32_t L_13 = ___3_lo;
		int32_t L_14 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_12, ((int32_t)il2cpp_codegen_add(L_13, L_14)), NULL);
		int32_t L_16;
		L_16 = EventComparer_Compare_m3302ED5566E32C3FD932FFBD21136DBCF17C2C76(G_B4_0, L_11, L_15, NULL);
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0059:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B));
		G_B8_0 = (&___4_comp);
		goto IL_0073;
	}

IL_0073:
	{
		void* L_19 = ___0_array;
		int32_t L_20 = ___3_lo;
		int32_t L_21 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_22;
		L_22 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_19, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_20, L_21)), 1)), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23 = V_0;
		int32_t L_24;
		L_24 = EventComparer_Compare_m3302ED5566E32C3FD932FFBD21136DBCF17C2C76(G_B8_0, L_22, L_23, NULL);
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00af;
		}
	}
	{
		void* L_25 = ___0_array;
		int32_t L_26 = ___3_lo;
		int32_t L_27 = ___1_i;
		void* L_28 = ___0_array;
		int32_t L_29 = ___3_lo;
		int32_t L_30 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_31;
		L_31 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1)), NULL);
		UnsafeUtility_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m824816C030A3E2FD028D3B4ECCC252E8E50DDF6E_inline(L_25, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_26, L_27)), 1)), L_31, NULL);
		int32_t L_32 = V_1;
		___1_i = L_32;
	}

IL_00a6:
	{
		int32_t L_33 = ___1_i;
		int32_t L_34 = ___2_n;
		if ((((int32_t)L_33) <= ((int32_t)((int32_t)(L_34/2)))))
		{
			goto IL_0011;
		}
	}

IL_00af:
	{
		void* L_35 = ___0_array;
		int32_t L_36 = ___3_lo;
		int32_t L_37 = ___1_i;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_38 = V_0;
		UnsafeUtility_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m824816C030A3E2FD028D3B4ECCC252E8E50DDF6E_inline(L_35, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1)), L_38, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m0AA47961221DDE83E16CD07FB4C4DC6635F44756_fshared (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	void* L_18 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_31 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
	const Il2CppFullySharedGenericStruct L_13 = L_3;
	const Il2CppFullySharedGenericStruct L_29 = L_3;
	const Il2CppFullySharedGenericStruct L_41 = L_3;
	const Il2CppFullySharedGenericStruct L_48 = L_3;
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
	const Il2CppFullySharedGenericStruct L_30 = L_17;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	const Il2CppFullySharedGenericAny L_9 = L_7;
	const Il2CppFullySharedGenericAny L_23 = L_7;
	const Il2CppFullySharedGenericAny L_25 = L_7;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
	memset(V_0, 0, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	memset(V_2, 0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	Il2CppFullySharedGenericAny G_B4_0 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	memset(G_B4_0, 0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	memset(G_B3_0, 0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	Il2CppFullySharedGenericAny G_B8_0 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	memset(G_B8_0, 0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	Il2CppFullySharedGenericAny G_B7_0 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	memset(G_B7_0, 0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___3_lo;
		int32_t L_2 = ___1_i;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1)), (Il2CppFullySharedGenericStruct*)L_3);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
		goto IL_00a6;
	}

IL_0011:
	{
		int32_t L_4 = ___1_i;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_4));
		int32_t L_5 = V_1;
		int32_t L_6 = ___2_n;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(L_7, V_2, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		bool L_8 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 2), L_7);
		if (L_8)
		{
			il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
			goto IL_0033;
		}
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	}
	{
		il2cpp_codegen_memcpy(L_9, G_B3_0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(V_2, L_9, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	}

IL_0033:
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___3_lo;
		int32_t L_12 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_11, L_12)), 1)), (Il2CppFullySharedGenericStruct*)L_13);
		void* L_14 = ___0_array;
		int32_t L_15 = ___3_lo;
		int32_t L_16 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), (Il2CppFullySharedGenericStruct*)L_17);
		Il2CppConstrainedCallData L_19;
		Il2CppMethodPointer L_20 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)G_B4_0, &L_19, L_18);
		int32_t L_21 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_20, L_19.method,L_19.thisPtr, L_13, L_17);
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0059:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(L_23, V_2, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		bool L_24 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 2), L_23);
		if (L_24)
		{
			il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
			goto IL_0073;
		}
		il2cpp_codegen_memcpy(G_B7_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	}
	{
		il2cpp_codegen_memcpy(L_25, G_B7_0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(V_2, L_25, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	}

IL_0073:
	{
		void* L_26 = ___0_array;
		int32_t L_27 = ___3_lo;
		int32_t L_28 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_26, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_27, L_28)), 1)), (Il2CppFullySharedGenericStruct*)L_29);
		il2cpp_codegen_memcpy(L_30, V_0, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
		Il2CppConstrainedCallData L_32;
		Il2CppMethodPointer L_33 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)G_B8_0, &L_32, L_31);
		int32_t L_34 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_33, L_32.method,L_32.thisPtr, L_29, L_30);
		if ((((int32_t)L_34) < ((int32_t)0)))
		{
			goto IL_00af;
		}
	}
	{
		void* L_35 = ___0_array;
		int32_t L_36 = ___3_lo;
		int32_t L_37 = ___1_i;
		void* L_38 = ___0_array;
		int32_t L_39 = ___3_lo;
		int32_t L_40 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, L_40)), 1)), (Il2CppFullySharedGenericStruct*)L_41);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_35, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1)), L_41);
		int32_t L_42 = V_1;
		___1_i = L_42;
	}

IL_00a6:
	{
		int32_t L_43 = ___1_i;
		int32_t L_44 = ___2_n;
		if ((((int32_t)L_43) <= ((int32_t)((int32_t)(L_44/2)))))
		{
			goto IL_0011;
		}
	}

IL_00af:
	{
		void* L_45 = ___0_array;
		int32_t L_46 = ___3_lo;
		int32_t L_47 = ___1_i;
		il2cpp_codegen_memcpy(L_48, V_0, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_45, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_46, L_47)), 1)), L_48);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapifyStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6B0A1FA3EA057556E42D3B8022C12B8256BDE921_fshared (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t* ___3_lo, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	void* L_21 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_35 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
	const Il2CppFullySharedGenericStruct L_15 = L_4;
	const Il2CppFullySharedGenericStruct L_33 = L_4;
	const Il2CppFullySharedGenericStruct L_47 = L_4;
	const Il2CppFullySharedGenericStruct L_55 = L_4;
	const Il2CppFullySharedGenericStruct L_20 = alloca(SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
	const Il2CppFullySharedGenericStruct L_34 = L_20;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	const Il2CppFullySharedGenericAny L_10 = L_8;
	const Il2CppFullySharedGenericAny L_26 = L_8;
	const Il2CppFullySharedGenericAny L_28 = L_8;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
	memset(V_0, 0, SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	memset(V_2, 0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	Il2CppFullySharedGenericAny G_B4_0 = alloca(SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	memset(G_B4_0, 0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	memset(G_B3_0, 0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	Il2CppFullySharedGenericAny G_B8_0 = alloca(SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	memset(G_B8_0, 0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	Il2CppFullySharedGenericAny G_B7_0 = alloca(SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	memset(G_B7_0, 0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	{
		void* L_0 = ___0_array;
		int32_t* L_1 = ___3_lo;
		int32_t L_2 = *(L_1);
		int32_t L_3 = ___1_i;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_2, L_3)), 1)), (Il2CppFullySharedGenericStruct*)L_4);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
		goto IL_00ac;
	}

IL_0012:
	{
		int32_t L_5 = ___1_i;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_5));
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_n;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_005c;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		bool L_9 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 2), L_8);
		if (L_9)
		{
			il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
			goto IL_0034;
		}
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	}
	{
		il2cpp_codegen_memcpy(L_10, G_B3_0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		il2cpp_codegen_memcpy(V_2, L_10, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	}

IL_0034:
	{
		void* L_11 = ___0_array;
		int32_t* L_12 = ___3_lo;
		int32_t L_13 = *(L_12);
		int32_t L_14 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_11, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_13, L_14)), 1)), (Il2CppFullySharedGenericStruct*)L_15);
		void* L_16 = ___0_array;
		int32_t* L_17 = ___3_lo;
		int32_t L_18 = *(L_17);
		int32_t L_19 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_16, ((int32_t)il2cpp_codegen_add(L_18, L_19)), (Il2CppFullySharedGenericStruct*)L_20);
		Il2CppConstrainedCallData L_22;
		Il2CppMethodPointer L_23 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)G_B4_0, &L_22, L_21);
		int32_t L_24 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_23, L_22.method,L_22.thisPtr, L_15, L_20);
		if ((((int32_t)L_24) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_005c:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		il2cpp_codegen_memcpy(L_26, V_2, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		bool L_27 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 2), L_26);
		if (L_27)
		{
			il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
			goto IL_0076;
		}
		il2cpp_codegen_memcpy(G_B7_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	}
	{
		il2cpp_codegen_memcpy(L_28, G_B7_0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		il2cpp_codegen_memcpy(V_2, L_28, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	}

IL_0076:
	{
		void* L_29 = ___0_array;
		int32_t* L_30 = ___3_lo;
		int32_t L_31 = *(L_30);
		int32_t L_32 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_29, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_31, L_32)), 1)), (Il2CppFullySharedGenericStruct*)L_33);
		il2cpp_codegen_memcpy(L_34, V_0, SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
		Il2CppConstrainedCallData L_36;
		Il2CppMethodPointer L_37 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)G_B8_0, &L_36, L_35);
		int32_t L_38 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_37, L_36.method,L_36.thisPtr, L_33, L_34);
		if ((((int32_t)L_38) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		void* L_39 = ___0_array;
		int32_t* L_40 = ___3_lo;
		int32_t L_41 = *(L_40);
		int32_t L_42 = ___1_i;
		void* L_43 = ___0_array;
		int32_t* L_44 = ___3_lo;
		int32_t L_45 = *(L_44);
		int32_t L_46 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_43, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_45, L_46)), 1)), (Il2CppFullySharedGenericStruct*)L_47);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_39, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_42)), 1)), L_47);
		int32_t L_48 = V_1;
		___1_i = L_48;
	}

IL_00ac:
	{
		int32_t L_49 = ___1_i;
		int32_t L_50 = ___2_n;
		if ((((int32_t)L_49) <= ((int32_t)((int32_t)(L_50/2)))))
		{
			goto IL_0012;
		}
	}

IL_00b5:
	{
		void* L_51 = ___0_array;
		int32_t* L_52 = ___3_lo;
		int32_t L_53 = *(L_52);
		int32_t L_54 = ___1_i;
		il2cpp_codegen_memcpy(L_55, V_0, SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_51, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_53, L_54)), 1)), L_55);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m447AB14969900EBF8D724FA0B06248EEC3C5BEE1 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___3_comp, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939* G_B6_0 = NULL;
	{
		int32_t L_0 = ___1_lo;
		V_0 = L_0;
		goto IL_0068;
	}

IL_0004:
	{
		int32_t L_1 = V_0;
		V_1 = L_1;
		void* L_2 = ___0_array;
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		V_2 = L_4;
		goto IL_0026;
	}

IL_0012:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = V_1;
		void* L_7 = ___0_array;
		int32_t L_8 = V_1;
		int32_t L_9;
		L_9 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_7, L_8, NULL);
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline(L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), L_9, NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_0026:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_lo;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939));
		G_B6_0 = (&___3_comp);
		goto IL_0044;
	}

IL_0044:
	{
		int32_t L_14 = V_2;
		void* L_15 = ___0_array;
		int32_t L_16 = V_1;
		int32_t L_17;
		L_17 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_15, L_16, NULL);
		int32_t L_18;
		L_18 = DefaultComparer_1_Compare_m394F7F49471D14333A96E4D1609FF38B351FC316(G_B6_0, L_14, L_17, NULL);
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}

IL_005a:
	{
		void* L_19 = ___0_array;
		int32_t L_20 = V_1;
		int32_t L_21 = V_2;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline(L_19, ((int32_t)il2cpp_codegen_add(L_20, 1)), L_21, NULL);
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0068:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = ___2_hi;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mE83B78A4E21385E054DAB6E54096B204E27CCF05 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___3_comp, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9* G_B6_0 = NULL;
	{
		int32_t L_0 = ___1_lo;
		V_0 = L_0;
		goto IL_0068;
	}

IL_0004:
	{
		int32_t L_1 = V_0;
		V_1 = L_1;
		void* L_2 = ___0_array;
		int32_t L_3 = V_0;
		uint64_t L_4;
		L_4 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		V_2 = L_4;
		goto IL_0026;
	}

IL_0012:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = V_1;
		void* L_7 = ___0_array;
		int32_t L_8 = V_1;
		uint64_t L_9;
		L_9 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_7, L_8, NULL);
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline(L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), L_9, NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_0026:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_lo;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9));
		G_B6_0 = (&___3_comp);
		goto IL_0044;
	}

IL_0044:
	{
		uint64_t L_14 = V_2;
		void* L_15 = ___0_array;
		int32_t L_16 = V_1;
		uint64_t L_17;
		L_17 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_15, L_16, NULL);
		int32_t L_18;
		L_18 = DefaultComparer_1_Compare_mCE528A0DC7D946A4B73C6C1BA0BEF3EF89B13E1A(G_B6_0, L_14, L_17, NULL);
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}

IL_005a:
	{
		void* L_19 = ___0_array;
		int32_t L_20 = V_1;
		uint64_t L_21 = V_2;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline(L_19, ((int32_t)il2cpp_codegen_add(L_20, 1)), L_21, NULL);
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0068:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = ___2_hi;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m9E3D7E2805653AB57ACC999FCE41FD4C78A5FF31 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___3_comp, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA V_3;
	memset((&V_3), 0, sizeof(V_3));
	ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA* G_B6_0 = NULL;
	{
		int32_t L_0 = ___1_lo;
		V_0 = L_0;
		goto IL_0068;
	}

IL_0004:
	{
		int32_t L_1 = V_0;
		V_1 = L_1;
		void* L_2 = ___0_array;
		int32_t L_3 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		V_2 = L_4;
		goto IL_0026;
	}

IL_0012:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = V_1;
		void* L_7 = ___0_array;
		int32_t L_8 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_7, L_8, NULL);
		UnsafeUtility_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m172AB754724D12C7E4938B1ACE01A7FF192AC73E_inline(L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), L_9, NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_0026:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_lo;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA));
		G_B6_0 = (&___3_comp);
		goto IL_0044;
	}

IL_0044:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_2;
		void* L_15 = ___0_array;
		int32_t L_16 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_15, L_16, NULL);
		int32_t L_18;
		L_18 = ActiveComparer_Compare_mA14126C7E24C5A91BDFE79B275F2239D84D79E70(G_B6_0, L_14, L_17, NULL);
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}

IL_005a:
	{
		void* L_19 = ___0_array;
		int32_t L_20 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_2;
		UnsafeUtility_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m172AB754724D12C7E4938B1ACE01A7FF192AC73E_inline(L_19, ((int32_t)il2cpp_codegen_add(L_20, 1)), L_21, NULL);
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0068:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = ___2_hi;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m2F5777B14162A9539E616742C8D29AC1769517D0 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___3_comp, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B V_3;
	memset((&V_3), 0, sizeof(V_3));
	EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B* G_B6_0 = NULL;
	{
		int32_t L_0 = ___1_lo;
		V_0 = L_0;
		goto IL_0068;
	}

IL_0004:
	{
		int32_t L_1 = V_0;
		V_1 = L_1;
		void* L_2 = ___0_array;
		int32_t L_3 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		L_4 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		V_2 = L_4;
		goto IL_0026;
	}

IL_0012:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = V_1;
		void* L_7 = ___0_array;
		int32_t L_8 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_7, L_8, NULL);
		UnsafeUtility_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m824816C030A3E2FD028D3B4ECCC252E8E50DDF6E_inline(L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), L_9, NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_0026:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_lo;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B));
		G_B6_0 = (&___3_comp);
		goto IL_0044;
	}

IL_0044:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = V_2;
		void* L_15 = ___0_array;
		int32_t L_16 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17;
		L_17 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_15, L_16, NULL);
		int32_t L_18;
		L_18 = EventComparer_Compare_m3302ED5566E32C3FD932FFBD21136DBCF17C2C76(G_B6_0, L_14, L_17, NULL);
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}

IL_005a:
	{
		void* L_19 = ___0_array;
		int32_t L_20 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_21 = V_2;
		UnsafeUtility_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m824816C030A3E2FD028D3B4ECCC252E8E50DDF6E_inline(L_19, ((int32_t)il2cpp_codegen_add(L_20, 1)), L_21, NULL);
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0068:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = ___2_hi;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1C2A4A941C9938043B515BF59D9169D0066A8F1F_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
	const Il2CppFullySharedGenericStruct L_9 = L_4;
	const Il2CppFullySharedGenericStruct L_16 = L_4;
	const Il2CppFullySharedGenericStruct L_26 = L_4;
	const Il2CppFullySharedGenericStruct L_19 = alloca(SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	const Il2CppFullySharedGenericAny L_15 = L_13;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
	memset(V_2, 0, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	memset(V_3, 0, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	memset(G_B6_0, 0, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	Il2CppFullySharedGenericAny G_B5_0 = alloca(SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	memset(G_B5_0, 0, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	{
		int32_t L_0 = ___1_lo;
		V_0 = L_0;
		goto IL_0068;
	}

IL_0004:
	{
		int32_t L_1 = V_0;
		V_1 = L_1;
		void* L_2 = ___0_array;
		int32_t L_3 = V_0;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), (Il2CppFullySharedGenericStruct*)L_4);
		il2cpp_codegen_memcpy(V_2, L_4, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
		goto IL_0026;
	}

IL_0012:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = V_1;
		void* L_7 = ___0_array;
		int32_t L_8 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_7, L_8, (Il2CppFullySharedGenericStruct*)L_9);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_0026:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_lo;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
		il2cpp_codegen_memcpy(L_13, V_3, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 3), L_13);
		if (L_14)
		{
			il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
			goto IL_0044;
		}
		il2cpp_codegen_memcpy(G_B5_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	}
	{
		il2cpp_codegen_memcpy(L_15, G_B5_0, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
		il2cpp_codegen_memcpy(V_3, L_15, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	}

IL_0044:
	{
		il2cpp_codegen_memcpy(L_16, V_2, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
		void* L_17 = ___0_array;
		int32_t L_18 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_17, L_18, (Il2CppFullySharedGenericStruct*)L_19);
		Il2CppConstrainedCallData L_21;
		Il2CppMethodPointer L_22 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B6_0, &L_21, L_20);
		int32_t L_23 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_22, L_21.method,L_21.thisPtr, L_16, L_19);
		if ((((int32_t)L_23) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}

IL_005a:
	{
		void* L_24 = ___0_array;
		int32_t L_25 = V_1;
		il2cpp_codegen_memcpy(L_26, V_2, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_24, ((int32_t)il2cpp_codegen_add(L_25, 1)), L_26);
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0068:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = ___2_hi;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC6CFFB0A8FC1BF15EAECA35C424AEF6EC0770471_fshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_22 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
	const Il2CppFullySharedGenericStruct L_10 = L_5;
	const Il2CppFullySharedGenericStruct L_18 = L_5;
	const Il2CppFullySharedGenericStruct L_28 = L_5;
	const Il2CppFullySharedGenericStruct L_21 = alloca(SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	const Il2CppFullySharedGenericAny L_17 = L_15;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
	memset(V_2, 0, SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	memset(V_3, 0, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	memset(G_B6_0, 0, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	Il2CppFullySharedGenericAny G_B5_0 = alloca(SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	memset(G_B5_0, 0, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	{
		int32_t* L_0 = ___1_lo;
		int32_t L_1 = *(L_0);
		V_0 = L_1;
		goto IL_006a;
	}

IL_0005:
	{
		int32_t L_2 = V_0;
		V_1 = L_2;
		void* L_3 = ___0_array;
		int32_t L_4 = V_0;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_3, ((int32_t)il2cpp_codegen_add(L_4, 1)), (Il2CppFullySharedGenericStruct*)L_5);
		il2cpp_codegen_memcpy(V_2, L_5, SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
		goto IL_0027;
	}

IL_0013:
	{
		void* L_6 = ___0_array;
		int32_t L_7 = V_1;
		void* L_8 = ___0_array;
		int32_t L_9 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_8, L_9, (Il2CppFullySharedGenericStruct*)L_10);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_0027:
	{
		int32_t L_12 = V_1;
		int32_t* L_13 = ___1_lo;
		int32_t L_14 = *(L_13);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_005c;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
		il2cpp_codegen_memcpy(L_15, V_3, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
		bool L_16 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 3), L_15);
		if (L_16)
		{
			il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
			goto IL_0046;
		}
		il2cpp_codegen_memcpy(G_B5_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	}
	{
		il2cpp_codegen_memcpy(L_17, G_B5_0, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
		il2cpp_codegen_memcpy(V_3, L_17, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	}

IL_0046:
	{
		il2cpp_codegen_memcpy(L_18, V_2, SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
		void* L_19 = ___0_array;
		int32_t L_20 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_19, L_20, (Il2CppFullySharedGenericStruct*)L_21);
		Il2CppConstrainedCallData L_23;
		Il2CppMethodPointer L_24 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B6_0, &L_23, L_22);
		int32_t L_25 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_24, L_23.method,L_23.thisPtr, L_18, L_21);
		if ((((int32_t)L_25) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}

IL_005c:
	{
		void* L_26 = ___0_array;
		int32_t L_27 = V_1;
		il2cpp_codegen_memcpy(L_28, V_2, SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_26, ((int32_t)il2cpp_codegen_add(L_27, 1)), L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_006a:
	{
		int32_t L_30 = V_0;
		int32_t* L_31 = ___2_hi;
		int32_t L_32 = *(L_31);
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_mB34BF7D82E1E5889BE988B230C11EE6842993231 (void* ___0_array, int32_t ___1_length, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_length;
		int32_t L_2 = ___1_length;
		int32_t L_3;
		L_3 = CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED(L_2, NULL);
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_4 = ___2_comp;
		NativeSortExtension_IntroSort_R_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m7568EE94C3A5FC293CBBEDB556DC0DA15AAB9293(L_0, 0, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), ((int32_t)il2cpp_codegen_multiply(2, L_3)), L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m322E3D4D2DAD5DD1A61A78DCA08C5BE424E2BCAA (void* ___0_array, int32_t ___1_length, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_length;
		int32_t L_2 = ___1_length;
		int32_t L_3;
		L_3 = CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED(L_2, NULL);
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_4 = ___2_comp;
		NativeSortExtension_IntroSort_R_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m27590C9F0AEFCA1390119C115B59FA3F575C5654(L_0, 0, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), ((int32_t)il2cpp_codegen_multiply(2, L_3)), L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m4809F01D470D4466F76AD547CCBB126B73C0DE04 (void* ___0_array, int32_t ___1_length, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_length;
		int32_t L_2 = ___1_length;
		int32_t L_3;
		L_3 = CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED(L_2, NULL);
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_4 = ___2_comp;
		NativeSortExtension_IntroSort_R_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_mCF9CF53D2E83C285F1321C27C69557E4651D6ACB(L_0, 0, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), ((int32_t)il2cpp_codegen_multiply(2, L_3)), L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_mB6DC15F5849FB6406A1E060F37717E801CA1AA9C (void* ___0_array, int32_t ___1_length, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_length;
		int32_t L_2 = ___1_length;
		int32_t L_3;
		L_3 = CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED(L_2, NULL);
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_4 = ___2_comp;
		NativeSortExtension_IntroSort_R_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_mF3782B93EC1497E345160D7FF8BFDA1E96A061B1(L_0, 0, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), ((int32_t)il2cpp_codegen_multiply(2, L_3)), L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1BA8C658F1FBC5741051F484F1DC355BD941EDBF_fshared (void* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t984657F3CA449F6965F5B6A61D21C535A3B6AD2F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_t984657F3CA449F6965F5B6A61D21C535A3B6AD2F);
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_length;
		int32_t L_2 = ___1_length;
		int32_t L_3;
		L_3 = CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED(L_2, NULL);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_comp : &___2_comp), SizeOf_U_t984657F3CA449F6965F5B6A61D21C535A3B6AD2F);
		InvokerActionInvoker5< void*, int32_t, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, 0, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), ((int32_t)il2cpp_codegen_multiply(2, L_3)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_4: *(void**)L_4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m61BCDF19FE675663E30578C052D29F6003D56756_fshared (void* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t4F6752C130AC1C36A17CEAC700E4F057F6DDC553 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_t4F6752C130AC1C36A17CEAC700E4F057F6DDC553);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		void* L_0 = ___0_array;
		V_0 = 0;
		int32_t L_1 = ___1_length;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		int32_t L_2 = ___1_length;
		int32_t L_3;
		L_3 = CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED(L_2, NULL);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_comp : &___2_comp), SizeOf_U_t4F6752C130AC1C36A17CEAC700E4F057F6DDC553);
		InvokerActionInvoker5< void*, int32_t*, int32_t*, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, (&V_0), (&V_1), ((int32_t)il2cpp_codegen_multiply(2, L_3)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_4: *(void**)L_4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSortStruct_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m27C179EA7B364CA3BA2C517B4C526F7142C7A6A2_fshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2__hi, int32_t ___3_depth, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
	const Il2CppFullySharedGenericAny L_18 = L_12;
	const Il2CppFullySharedGenericAny L_30 = L_12;
	const Il2CppFullySharedGenericAny L_34 = L_12;
	const Il2CppFullySharedGenericAny L_38 = L_12;
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
	const Il2CppFullySharedGenericAny L_43 = L_23;
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t* L_0 = ___2__hi;
		int32_t L_1 = *(L_0);
		V_0 = L_1;
		goto IL_0093;
	}

IL_0008:
	{
		int32_t L_2 = V_0;
		int32_t* L_3 = ___1_lo;
		int32_t L_4 = *(L_3);
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_2, L_4)), 1));
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)16))))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		int32_t L_7 = V_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_0029;
		}
	}
	{
		void* L_8 = ___0_array;
		int32_t* L_9 = ___1_lo;
		int32_t L_10 = *(L_9);
		int32_t L_11 = V_0;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_8, L_10, L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_12: *(void**)L_12));
		return;
	}

IL_0029:
	{
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)3))))
		{
			goto IL_0052;
		}
	}
	{
		void* L_14 = ___0_array;
		int32_t* L_15 = ___1_lo;
		int32_t L_16 = *(L_15);
		int32_t L_17 = V_0;
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_14, L_16, ((int32_t)il2cpp_codegen_subtract(L_17, 1)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_18: *(void**)L_18));
		void* L_19 = ___0_array;
		int32_t* L_20 = ___1_lo;
		int32_t L_21 = *(L_20);
		int32_t L_22 = V_0;
		il2cpp_codegen_memcpy(L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_19, L_21, L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_23: *(void**)L_23));
		void* L_24 = ___0_array;
		int32_t L_25 = V_0;
		int32_t L_26 = V_0;
		il2cpp_codegen_memcpy(L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_24, ((int32_t)il2cpp_codegen_subtract(L_25, 1)), L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_27: *(void**)L_27));
		return;
	}

IL_0052:
	{
		void* L_28 = ___0_array;
		int32_t* L_29 = ___1_lo;
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		InvokerActionInvoker4< void*, int32_t*, int32_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_28, L_29, (&V_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_30: *(void**)L_30));
		return;
	}

IL_005e:
	{
		int32_t L_31 = ___3_depth;
		if (L_31)
		{
			goto IL_006d;
		}
	}
	{
		void* L_32 = ___0_array;
		int32_t* L_33 = ___1_lo;
		il2cpp_codegen_memcpy(L_34, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		InvokerActionInvoker4< void*, int32_t*, int32_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_32, L_33, (&V_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_34: *(void**)L_34));
		return;
	}

IL_006d:
	{
		int32_t L_35 = ___3_depth;
		___3_depth = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		void* L_36 = ___0_array;
		int32_t* L_37 = ___1_lo;
		il2cpp_codegen_memcpy(L_38, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		int32_t L_39;
		L_39 = InvokerFuncInvoker4< int32_t, void*, int32_t*, int32_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_36, L_37, (&V_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_38: *(void**)L_38));
		V_2 = L_39;
		void* L_40 = ___0_array;
		int32_t L_41 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = ___3_depth;
		il2cpp_codegen_memcpy(L_43, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		InvokerActionInvoker5< void*, int32_t*, int32_t*, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_40, (&V_3), (&V_0), L_42, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_43: *(void**)L_43));
		int32_t L_44 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_44, 1));
	}

IL_0093:
	{
		int32_t L_45 = V_0;
		int32_t* L_46 = ___1_lo;
		int32_t L_47 = *(L_46);
		if ((((int32_t)L_45) > ((int32_t)L_47)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m7568EE94C3A5FC293CBBEDB556DC0DA15AAB9293 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		goto IL_0086;
	}

IL_0005:
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)16))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		void* L_5 = ___0_array;
		int32_t L_6 = ___1_lo;
		int32_t L_7 = ___2_hi;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_8 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m2E6D9B5EA07821DABCEFA4B85DD48E1164B7DC55(L_5, L_6, L_7, L_8, NULL);
		return;
	}

IL_0024:
	{
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_004b;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lo;
		int32_t L_12 = ___2_hi;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_13 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m2E6D9B5EA07821DABCEFA4B85DD48E1164B7DC55(L_10, L_11, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), L_13, NULL);
		void* L_14 = ___0_array;
		int32_t L_15 = ___1_lo;
		int32_t L_16 = ___2_hi;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_17 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m2E6D9B5EA07821DABCEFA4B85DD48E1164B7DC55(L_14, L_15, L_16, L_17, NULL);
		void* L_18 = ___0_array;
		int32_t L_19 = ___2_hi;
		int32_t L_20 = ___2_hi;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_21 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m2E6D9B5EA07821DABCEFA4B85DD48E1164B7DC55(L_18, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), L_20, L_21, NULL);
		return;
	}

IL_004b:
	{
		void* L_22 = ___0_array;
		int32_t L_23 = ___1_lo;
		int32_t L_24 = ___2_hi;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_25 = ___4_comp;
		NativeSortExtension_InsertionSort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m447AB14969900EBF8D724FA0B06248EEC3C5BEE1(L_22, L_23, L_24, L_25, NULL);
		return;
	}

IL_0056:
	{
		int32_t L_26 = ___3_depth;
		if (L_26)
		{
			goto IL_0064;
		}
	}
	{
		void* L_27 = ___0_array;
		int32_t L_28 = ___1_lo;
		int32_t L_29 = ___2_hi;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_30 = ___4_comp;
		NativeSortExtension_HeapSort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m54023D89607E52DAAF70FC0AC1566BE018C94951(L_27, L_28, L_29, L_30, NULL);
		return;
	}

IL_0064:
	{
		int32_t L_31 = ___3_depth;
		___3_depth = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		void* L_32 = ___0_array;
		int32_t L_33 = ___1_lo;
		int32_t L_34 = ___2_hi;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_35 = ___4_comp;
		int32_t L_36;
		L_36 = NativeSortExtension_Partition_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_mA078BD6B0BDB0F4C3A6F227E4CA458FB10BF467D(L_32, L_33, L_34, L_35, NULL);
		V_1 = L_36;
		void* L_37 = ___0_array;
		int32_t L_38 = V_1;
		int32_t L_39 = ___2_hi;
		int32_t L_40 = ___3_depth;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_41 = ___4_comp;
		NativeSortExtension_IntroSort_R_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m7568EE94C3A5FC293CBBEDB556DC0DA15AAB9293(L_37, ((int32_t)il2cpp_codegen_add(L_38, 1)), L_39, L_40, L_41, il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_42 = V_1;
		___2_hi = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_0086:
	{
		int32_t L_43 = ___2_hi;
		int32_t L_44 = ___1_lo;
		if ((((int32_t)L_43) > ((int32_t)L_44)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m27590C9F0AEFCA1390119C115B59FA3F575C5654 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		goto IL_0086;
	}

IL_0005:
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)16))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		void* L_5 = ___0_array;
		int32_t L_6 = ___1_lo;
		int32_t L_7 = ___2_hi;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_8 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m32306F98F190471CE5FFF51A5B5DC5AC0CBCA87B(L_5, L_6, L_7, L_8, NULL);
		return;
	}

IL_0024:
	{
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_004b;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lo;
		int32_t L_12 = ___2_hi;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_13 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m32306F98F190471CE5FFF51A5B5DC5AC0CBCA87B(L_10, L_11, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), L_13, NULL);
		void* L_14 = ___0_array;
		int32_t L_15 = ___1_lo;
		int32_t L_16 = ___2_hi;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_17 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m32306F98F190471CE5FFF51A5B5DC5AC0CBCA87B(L_14, L_15, L_16, L_17, NULL);
		void* L_18 = ___0_array;
		int32_t L_19 = ___2_hi;
		int32_t L_20 = ___2_hi;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_21 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m32306F98F190471CE5FFF51A5B5DC5AC0CBCA87B(L_18, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), L_20, L_21, NULL);
		return;
	}

IL_004b:
	{
		void* L_22 = ___0_array;
		int32_t L_23 = ___1_lo;
		int32_t L_24 = ___2_hi;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_25 = ___4_comp;
		NativeSortExtension_InsertionSort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mE83B78A4E21385E054DAB6E54096B204E27CCF05(L_22, L_23, L_24, L_25, NULL);
		return;
	}

IL_0056:
	{
		int32_t L_26 = ___3_depth;
		if (L_26)
		{
			goto IL_0064;
		}
	}
	{
		void* L_27 = ___0_array;
		int32_t L_28 = ___1_lo;
		int32_t L_29 = ___2_hi;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_30 = ___4_comp;
		NativeSortExtension_HeapSort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m64966317ECC8D7CDB0D08299D54C0515AFA10BC7(L_27, L_28, L_29, L_30, NULL);
		return;
	}

IL_0064:
	{
		int32_t L_31 = ___3_depth;
		___3_depth = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		void* L_32 = ___0_array;
		int32_t L_33 = ___1_lo;
		int32_t L_34 = ___2_hi;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_35 = ___4_comp;
		int32_t L_36;
		L_36 = NativeSortExtension_Partition_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mF3F91FD1CF91BB4367FD7C8CF287619B5166FFB7(L_32, L_33, L_34, L_35, NULL);
		V_1 = L_36;
		void* L_37 = ___0_array;
		int32_t L_38 = V_1;
		int32_t L_39 = ___2_hi;
		int32_t L_40 = ___3_depth;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_41 = ___4_comp;
		NativeSortExtension_IntroSort_R_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m27590C9F0AEFCA1390119C115B59FA3F575C5654(L_37, ((int32_t)il2cpp_codegen_add(L_38, 1)), L_39, L_40, L_41, il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_42 = V_1;
		___2_hi = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_0086:
	{
		int32_t L_43 = ___2_hi;
		int32_t L_44 = ___1_lo;
		if ((((int32_t)L_43) > ((int32_t)L_44)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_mCF9CF53D2E83C285F1321C27C69557E4651D6ACB (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		goto IL_0086;
	}

IL_0005:
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)16))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		void* L_5 = ___0_array;
		int32_t L_6 = ___1_lo;
		int32_t L_7 = ___2_hi;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_8 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1FA1F41F025F787CA8D9C6A1F7B053556B2F6682(L_5, L_6, L_7, L_8, NULL);
		return;
	}

IL_0024:
	{
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_004b;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lo;
		int32_t L_12 = ___2_hi;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_13 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1FA1F41F025F787CA8D9C6A1F7B053556B2F6682(L_10, L_11, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), L_13, NULL);
		void* L_14 = ___0_array;
		int32_t L_15 = ___1_lo;
		int32_t L_16 = ___2_hi;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_17 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1FA1F41F025F787CA8D9C6A1F7B053556B2F6682(L_14, L_15, L_16, L_17, NULL);
		void* L_18 = ___0_array;
		int32_t L_19 = ___2_hi;
		int32_t L_20 = ___2_hi;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_21 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1FA1F41F025F787CA8D9C6A1F7B053556B2F6682(L_18, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), L_20, L_21, NULL);
		return;
	}

IL_004b:
	{
		void* L_22 = ___0_array;
		int32_t L_23 = ___1_lo;
		int32_t L_24 = ___2_hi;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_25 = ___4_comp;
		NativeSortExtension_InsertionSort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m9E3D7E2805653AB57ACC999FCE41FD4C78A5FF31(L_22, L_23, L_24, L_25, NULL);
		return;
	}

IL_0056:
	{
		int32_t L_26 = ___3_depth;
		if (L_26)
		{
			goto IL_0064;
		}
	}
	{
		void* L_27 = ___0_array;
		int32_t L_28 = ___1_lo;
		int32_t L_29 = ___2_hi;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_30 = ___4_comp;
		NativeSortExtension_HeapSort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_mC7889E64AB70C508749FF7769C180D3BED4BC4CF(L_27, L_28, L_29, L_30, NULL);
		return;
	}

IL_0064:
	{
		int32_t L_31 = ___3_depth;
		___3_depth = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		void* L_32 = ___0_array;
		int32_t L_33 = ___1_lo;
		int32_t L_34 = ___2_hi;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_35 = ___4_comp;
		int32_t L_36;
		L_36 = NativeSortExtension_Partition_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m964B018FFC885A109E0433749F04B5B34653958B(L_32, L_33, L_34, L_35, NULL);
		V_1 = L_36;
		void* L_37 = ___0_array;
		int32_t L_38 = V_1;
		int32_t L_39 = ___2_hi;
		int32_t L_40 = ___3_depth;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_41 = ___4_comp;
		NativeSortExtension_IntroSort_R_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_mCF9CF53D2E83C285F1321C27C69557E4651D6ACB(L_37, ((int32_t)il2cpp_codegen_add(L_38, 1)), L_39, L_40, L_41, il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_42 = V_1;
		___2_hi = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_0086:
	{
		int32_t L_43 = ___2_hi;
		int32_t L_44 = ___1_lo;
		if ((((int32_t)L_43) > ((int32_t)L_44)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_mF3782B93EC1497E345160D7FF8BFDA1E96A061B1 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		goto IL_0086;
	}

IL_0005:
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)16))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		void* L_5 = ___0_array;
		int32_t L_6 = ___1_lo;
		int32_t L_7 = ___2_hi;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_8 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0D5C201A337A525CE82664BF10CB31AF56718F3C(L_5, L_6, L_7, L_8, NULL);
		return;
	}

IL_0024:
	{
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_004b;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lo;
		int32_t L_12 = ___2_hi;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_13 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0D5C201A337A525CE82664BF10CB31AF56718F3C(L_10, L_11, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), L_13, NULL);
		void* L_14 = ___0_array;
		int32_t L_15 = ___1_lo;
		int32_t L_16 = ___2_hi;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_17 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0D5C201A337A525CE82664BF10CB31AF56718F3C(L_14, L_15, L_16, L_17, NULL);
		void* L_18 = ___0_array;
		int32_t L_19 = ___2_hi;
		int32_t L_20 = ___2_hi;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_21 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0D5C201A337A525CE82664BF10CB31AF56718F3C(L_18, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), L_20, L_21, NULL);
		return;
	}

IL_004b:
	{
		void* L_22 = ___0_array;
		int32_t L_23 = ___1_lo;
		int32_t L_24 = ___2_hi;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_25 = ___4_comp;
		NativeSortExtension_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m2F5777B14162A9539E616742C8D29AC1769517D0(L_22, L_23, L_24, L_25, NULL);
		return;
	}

IL_0056:
	{
		int32_t L_26 = ___3_depth;
		if (L_26)
		{
			goto IL_0064;
		}
	}
	{
		void* L_27 = ___0_array;
		int32_t L_28 = ___1_lo;
		int32_t L_29 = ___2_hi;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_30 = ___4_comp;
		NativeSortExtension_HeapSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m52C7968B61CD160CE7276D6768B010C26565185A(L_27, L_28, L_29, L_30, NULL);
		return;
	}

IL_0064:
	{
		int32_t L_31 = ___3_depth;
		___3_depth = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		void* L_32 = ___0_array;
		int32_t L_33 = ___1_lo;
		int32_t L_34 = ___2_hi;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_35 = ___4_comp;
		int32_t L_36;
		L_36 = NativeSortExtension_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m67CD3E816521190FB9EC7208099D2E5E393DBF7A(L_32, L_33, L_34, L_35, NULL);
		V_1 = L_36;
		void* L_37 = ___0_array;
		int32_t L_38 = V_1;
		int32_t L_39 = ___2_hi;
		int32_t L_40 = ___3_depth;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_41 = ___4_comp;
		NativeSortExtension_IntroSort_R_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_mF3782B93EC1497E345160D7FF8BFDA1E96A061B1(L_37, ((int32_t)il2cpp_codegen_add(L_38, 1)), L_39, L_40, L_41, il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_42 = V_1;
		___2_hi = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_0086:
	{
		int32_t L_43 = ___2_hi;
		int32_t L_44 = ___1_lo;
		if ((((int32_t)L_43) > ((int32_t)L_44)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mE7D2E7D393807B71500A81BC5FDE51DB09E4FEB8_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
	const Il2CppFullySharedGenericAny L_13 = L_8;
	const Il2CppFullySharedGenericAny L_25 = L_8;
	const Il2CppFullySharedGenericAny L_30 = L_8;
	const Il2CppFullySharedGenericAny L_35 = L_8;
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
	const Il2CppFullySharedGenericAny L_41 = L_17;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		goto IL_0086;
	}

IL_0005:
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)16))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		void* L_5 = ___0_array;
		int32_t L_6 = ___1_lo;
		int32_t L_7 = ___2_hi;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_5, L_6, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_8: *(void**)L_8));
		return;
	}

IL_0024:
	{
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_004b;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lo;
		int32_t L_12 = ___2_hi;
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_10, L_11, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_13: *(void**)L_13));
		void* L_14 = ___0_array;
		int32_t L_15 = ___1_lo;
		int32_t L_16 = ___2_hi;
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_14, L_15, L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_17: *(void**)L_17));
		void* L_18 = ___0_array;
		int32_t L_19 = ___2_hi;
		int32_t L_20 = ___2_hi;
		il2cpp_codegen_memcpy(L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_18, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_21: *(void**)L_21));
		return;
	}

IL_004b:
	{
		void* L_22 = ___0_array;
		int32_t L_23 = ___1_lo;
		int32_t L_24 = ___2_hi;
		il2cpp_codegen_memcpy(L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_22, L_23, L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_25: *(void**)L_25));
		return;
	}

IL_0056:
	{
		int32_t L_26 = ___3_depth;
		if (L_26)
		{
			goto IL_0064;
		}
	}
	{
		void* L_27 = ___0_array;
		int32_t L_28 = ___1_lo;
		int32_t L_29 = ___2_hi;
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_27, L_28, L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_30: *(void**)L_30));
		return;
	}

IL_0064:
	{
		int32_t L_31 = ___3_depth;
		___3_depth = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		void* L_32 = ___0_array;
		int32_t L_33 = ___1_lo;
		int32_t L_34 = ___2_hi;
		il2cpp_codegen_memcpy(L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		int32_t L_36;
		L_36 = InvokerFuncInvoker4< int32_t, void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_32, L_33, L_34, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_35: *(void**)L_35));
		V_1 = L_36;
		void* L_37 = ___0_array;
		int32_t L_38 = V_1;
		int32_t L_39 = ___2_hi;
		int32_t L_40 = ___3_depth;
		il2cpp_codegen_memcpy(L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker5< void*, int32_t, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_37, ((int32_t)il2cpp_codegen_add(L_38, 1)), L_39, L_40, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_41: *(void**)L_41));
		int32_t L_42 = V_1;
		___2_hi = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_0086:
	{
		int32_t L_43 = ___2_hi;
		int32_t L_44 = ___1_lo;
		if ((((int32_t)L_43) > ((int32_t)L_44)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_mA078BD6B0BDB0F4C3A6F227E4CA458FB10BF467D (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___3_comp, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 V_4;
	memset((&V_4), 0, sizeof(V_4));
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939* G_B4_0 = NULL;
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939* G_B8_0 = NULL;
	{
		int32_t L_0 = ___1_lo;
		int32_t L_1 = ___2_hi;
		int32_t L_2 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, L_2))/2))));
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lo;
		int32_t L_5 = V_0;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_6 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m2E6D9B5EA07821DABCEFA4B85DD48E1164B7DC55(L_3, L_4, L_5, L_6, NULL);
		void* L_7 = ___0_array;
		int32_t L_8 = ___1_lo;
		int32_t L_9 = ___2_hi;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_10 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m2E6D9B5EA07821DABCEFA4B85DD48E1164B7DC55(L_7, L_8, L_9, L_10, NULL);
		void* L_11 = ___0_array;
		int32_t L_12 = V_0;
		int32_t L_13 = ___2_hi;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_14 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m2E6D9B5EA07821DABCEFA4B85DD48E1164B7DC55(L_11, L_12, L_13, L_14, NULL);
		void* L_15 = ___0_array;
		int32_t L_16 = V_0;
		int32_t L_17;
		L_17 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_15, L_16, NULL);
		V_1 = L_17;
		void* L_18 = ___0_array;
		int32_t L_19 = V_0;
		int32_t L_20 = ___2_hi;
		NativeSortExtension_Swap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B32B9F06977E407E6CA99CA51A37F7DB63CC772(L_18, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, 1)), NULL);
		int32_t L_21 = ___1_lo;
		V_2 = L_21;
		int32_t L_22 = ___2_hi;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		goto IL_00c0;
	}

IL_0040:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = ___2_hi;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_007a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939));
		G_B4_0 = (&___3_comp);
		goto IL_0060;
	}

IL_0060:
	{
		int32_t L_26 = V_1;
		void* L_27 = ___0_array;
		int32_t L_28 = V_2;
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		V_2 = L_29;
		int32_t L_30;
		L_30 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_27, L_29, NULL);
		int32_t L_31;
		L_31 = DefaultComparer_1_Compare_m394F7F49471D14333A96E4D1609FF38B351FC316(G_B4_0, L_26, L_30, NULL);
		if ((((int32_t)L_31) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}

IL_007a:
	{
		int32_t L_32 = V_3;
		int32_t L_33 = V_2;
		if ((((int32_t)L_32) <= ((int32_t)L_33)))
		{
			goto IL_00b4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939));
		G_B8_0 = (&___3_comp);
		goto IL_009a;
	}

IL_009a:
	{
		int32_t L_35 = V_1;
		void* L_36 = ___0_array;
		int32_t L_37 = V_3;
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		V_3 = L_38;
		int32_t L_39;
		L_39 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_36, L_38, NULL);
		int32_t L_40;
		L_40 = DefaultComparer_1_Compare_m394F7F49471D14333A96E4D1609FF38B351FC316(G_B8_0, L_35, L_39, NULL);
		if ((((int32_t)L_40) < ((int32_t)0)))
		{
			goto IL_007a;
		}
	}

IL_00b4:
	{
		int32_t L_41 = V_2;
		int32_t L_42 = V_3;
		if ((((int32_t)L_41) >= ((int32_t)L_42)))
		{
			goto IL_00c7;
		}
	}
	{
		void* L_43 = ___0_array;
		int32_t L_44 = V_2;
		int32_t L_45 = V_3;
		NativeSortExtension_Swap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B32B9F06977E407E6CA99CA51A37F7DB63CC772(L_43, L_44, L_45, NULL);
	}

IL_00c0:
	{
		int32_t L_46 = V_2;
		int32_t L_47 = V_3;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0040;
		}
	}

IL_00c7:
	{
		void* L_48 = ___0_array;
		int32_t L_49 = V_2;
		int32_t L_50 = ___2_hi;
		NativeSortExtension_Swap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B32B9F06977E407E6CA99CA51A37F7DB63CC772(L_48, L_49, ((int32_t)il2cpp_codegen_subtract(L_50, 1)), NULL);
		int32_t L_51 = V_2;
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mF3F91FD1CF91BB4367FD7C8CF287619B5166FFB7 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___3_comp, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 V_4;
	memset((&V_4), 0, sizeof(V_4));
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9* G_B4_0 = NULL;
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9* G_B8_0 = NULL;
	{
		int32_t L_0 = ___1_lo;
		int32_t L_1 = ___2_hi;
		int32_t L_2 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, L_2))/2))));
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lo;
		int32_t L_5 = V_0;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_6 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m32306F98F190471CE5FFF51A5B5DC5AC0CBCA87B(L_3, L_4, L_5, L_6, NULL);
		void* L_7 = ___0_array;
		int32_t L_8 = ___1_lo;
		int32_t L_9 = ___2_hi;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_10 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m32306F98F190471CE5FFF51A5B5DC5AC0CBCA87B(L_7, L_8, L_9, L_10, NULL);
		void* L_11 = ___0_array;
		int32_t L_12 = V_0;
		int32_t L_13 = ___2_hi;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_14 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m32306F98F190471CE5FFF51A5B5DC5AC0CBCA87B(L_11, L_12, L_13, L_14, NULL);
		void* L_15 = ___0_array;
		int32_t L_16 = V_0;
		uint64_t L_17;
		L_17 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_15, L_16, NULL);
		V_1 = L_17;
		void* L_18 = ___0_array;
		int32_t L_19 = V_0;
		int32_t L_20 = ___2_hi;
		NativeSortExtension_Swap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m20CFAAEF92F2BF57192AC6AC6672D34DB0378730(L_18, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, 1)), NULL);
		int32_t L_21 = ___1_lo;
		V_2 = L_21;
		int32_t L_22 = ___2_hi;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		goto IL_00c0;
	}

IL_0040:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = ___2_hi;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_007a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9));
		G_B4_0 = (&___3_comp);
		goto IL_0060;
	}

IL_0060:
	{
		uint64_t L_26 = V_1;
		void* L_27 = ___0_array;
		int32_t L_28 = V_2;
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		V_2 = L_29;
		uint64_t L_30;
		L_30 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_27, L_29, NULL);
		int32_t L_31;
		L_31 = DefaultComparer_1_Compare_mCE528A0DC7D946A4B73C6C1BA0BEF3EF89B13E1A(G_B4_0, L_26, L_30, NULL);
		if ((((int32_t)L_31) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}

IL_007a:
	{
		int32_t L_32 = V_3;
		int32_t L_33 = V_2;
		if ((((int32_t)L_32) <= ((int32_t)L_33)))
		{
			goto IL_00b4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9));
		G_B8_0 = (&___3_comp);
		goto IL_009a;
	}

IL_009a:
	{
		uint64_t L_35 = V_1;
		void* L_36 = ___0_array;
		int32_t L_37 = V_3;
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		V_3 = L_38;
		uint64_t L_39;
		L_39 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_36, L_38, NULL);
		int32_t L_40;
		L_40 = DefaultComparer_1_Compare_mCE528A0DC7D946A4B73C6C1BA0BEF3EF89B13E1A(G_B8_0, L_35, L_39, NULL);
		if ((((int32_t)L_40) < ((int32_t)0)))
		{
			goto IL_007a;
		}
	}

IL_00b4:
	{
		int32_t L_41 = V_2;
		int32_t L_42 = V_3;
		if ((((int32_t)L_41) >= ((int32_t)L_42)))
		{
			goto IL_00c7;
		}
	}
	{
		void* L_43 = ___0_array;
		int32_t L_44 = V_2;
		int32_t L_45 = V_3;
		NativeSortExtension_Swap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m20CFAAEF92F2BF57192AC6AC6672D34DB0378730(L_43, L_44, L_45, NULL);
	}

IL_00c0:
	{
		int32_t L_46 = V_2;
		int32_t L_47 = V_3;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0040;
		}
	}

IL_00c7:
	{
		void* L_48 = ___0_array;
		int32_t L_49 = V_2;
		int32_t L_50 = ___2_hi;
		NativeSortExtension_Swap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m20CFAAEF92F2BF57192AC6AC6672D34DB0378730(L_48, L_49, ((int32_t)il2cpp_codegen_subtract(L_50, 1)), NULL);
		int32_t L_51 = V_2;
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m964B018FFC885A109E0433749F04B5B34653958B (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___3_comp, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA V_4;
	memset((&V_4), 0, sizeof(V_4));
	ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA* G_B4_0 = NULL;
	ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA* G_B8_0 = NULL;
	{
		int32_t L_0 = ___1_lo;
		int32_t L_1 = ___2_hi;
		int32_t L_2 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, L_2))/2))));
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lo;
		int32_t L_5 = V_0;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_6 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1FA1F41F025F787CA8D9C6A1F7B053556B2F6682(L_3, L_4, L_5, L_6, NULL);
		void* L_7 = ___0_array;
		int32_t L_8 = ___1_lo;
		int32_t L_9 = ___2_hi;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_10 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1FA1F41F025F787CA8D9C6A1F7B053556B2F6682(L_7, L_8, L_9, L_10, NULL);
		void* L_11 = ___0_array;
		int32_t L_12 = V_0;
		int32_t L_13 = ___2_hi;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_14 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1FA1F41F025F787CA8D9C6A1F7B053556B2F6682(L_11, L_12, L_13, L_14, NULL);
		void* L_15 = ___0_array;
		int32_t L_16 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_15, L_16, NULL);
		V_1 = L_17;
		void* L_18 = ___0_array;
		int32_t L_19 = V_0;
		int32_t L_20 = ___2_hi;
		NativeSortExtension_Swap_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7823FBF7870907C0FBB1EAA0FADD3DCF95A52217(L_18, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, 1)), NULL);
		int32_t L_21 = ___1_lo;
		V_2 = L_21;
		int32_t L_22 = ___2_hi;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		goto IL_00c0;
	}

IL_0040:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = ___2_hi;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_007a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA));
		G_B4_0 = (&___3_comp);
		goto IL_0060;
	}

IL_0060:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_1;
		void* L_27 = ___0_array;
		int32_t L_28 = V_2;
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		V_2 = L_29;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_27, L_29, NULL);
		int32_t L_31;
		L_31 = ActiveComparer_Compare_mA14126C7E24C5A91BDFE79B275F2239D84D79E70(G_B4_0, L_26, L_30, NULL);
		if ((((int32_t)L_31) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}

IL_007a:
	{
		int32_t L_32 = V_3;
		int32_t L_33 = V_2;
		if ((((int32_t)L_32) <= ((int32_t)L_33)))
		{
			goto IL_00b4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA));
		G_B8_0 = (&___3_comp);
		goto IL_009a;
	}

IL_009a:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = V_1;
		void* L_36 = ___0_array;
		int32_t L_37 = V_3;
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		V_3 = L_38;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_36, L_38, NULL);
		int32_t L_40;
		L_40 = ActiveComparer_Compare_mA14126C7E24C5A91BDFE79B275F2239D84D79E70(G_B8_0, L_35, L_39, NULL);
		if ((((int32_t)L_40) < ((int32_t)0)))
		{
			goto IL_007a;
		}
	}

IL_00b4:
	{
		int32_t L_41 = V_2;
		int32_t L_42 = V_3;
		if ((((int32_t)L_41) >= ((int32_t)L_42)))
		{
			goto IL_00c7;
		}
	}
	{
		void* L_43 = ___0_array;
		int32_t L_44 = V_2;
		int32_t L_45 = V_3;
		NativeSortExtension_Swap_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7823FBF7870907C0FBB1EAA0FADD3DCF95A52217(L_43, L_44, L_45, NULL);
	}

IL_00c0:
	{
		int32_t L_46 = V_2;
		int32_t L_47 = V_3;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0040;
		}
	}

IL_00c7:
	{
		void* L_48 = ___0_array;
		int32_t L_49 = V_2;
		int32_t L_50 = ___2_hi;
		NativeSortExtension_Swap_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7823FBF7870907C0FBB1EAA0FADD3DCF95A52217(L_48, L_49, ((int32_t)il2cpp_codegen_subtract(L_50, 1)), NULL);
		int32_t L_51 = V_2;
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m67CD3E816521190FB9EC7208099D2E5E393DBF7A (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___3_comp, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B V_4;
	memset((&V_4), 0, sizeof(V_4));
	EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B* G_B4_0 = NULL;
	EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B* G_B8_0 = NULL;
	{
		int32_t L_0 = ___1_lo;
		int32_t L_1 = ___2_hi;
		int32_t L_2 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, L_2))/2))));
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lo;
		int32_t L_5 = V_0;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_6 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0D5C201A337A525CE82664BF10CB31AF56718F3C(L_3, L_4, L_5, L_6, NULL);
		void* L_7 = ___0_array;
		int32_t L_8 = ___1_lo;
		int32_t L_9 = ___2_hi;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_10 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0D5C201A337A525CE82664BF10CB31AF56718F3C(L_7, L_8, L_9, L_10, NULL);
		void* L_11 = ___0_array;
		int32_t L_12 = V_0;
		int32_t L_13 = ___2_hi;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_14 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0D5C201A337A525CE82664BF10CB31AF56718F3C(L_11, L_12, L_13, L_14, NULL);
		void* L_15 = ___0_array;
		int32_t L_16 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17;
		L_17 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_15, L_16, NULL);
		V_1 = L_17;
		void* L_18 = ___0_array;
		int32_t L_19 = V_0;
		int32_t L_20 = ___2_hi;
		NativeSortExtension_Swap_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m559DA77F56AD4E1B2E028B54702A892A46109FA1(L_18, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, 1)), NULL);
		int32_t L_21 = ___1_lo;
		V_2 = L_21;
		int32_t L_22 = ___2_hi;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		goto IL_00c0;
	}

IL_0040:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = ___2_hi;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_007a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B));
		G_B4_0 = (&___3_comp);
		goto IL_0060;
	}

IL_0060:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_26 = V_1;
		void* L_27 = ___0_array;
		int32_t L_28 = V_2;
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		V_2 = L_29;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_30;
		L_30 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_27, L_29, NULL);
		int32_t L_31;
		L_31 = EventComparer_Compare_m3302ED5566E32C3FD932FFBD21136DBCF17C2C76(G_B4_0, L_26, L_30, NULL);
		if ((((int32_t)L_31) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}

IL_007a:
	{
		int32_t L_32 = V_3;
		int32_t L_33 = V_2;
		if ((((int32_t)L_32) <= ((int32_t)L_33)))
		{
			goto IL_00b4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B));
		G_B8_0 = (&___3_comp);
		goto IL_009a;
	}

IL_009a:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_35 = V_1;
		void* L_36 = ___0_array;
		int32_t L_37 = V_3;
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		V_3 = L_38;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_39;
		L_39 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_36, L_38, NULL);
		int32_t L_40;
		L_40 = EventComparer_Compare_m3302ED5566E32C3FD932FFBD21136DBCF17C2C76(G_B8_0, L_35, L_39, NULL);
		if ((((int32_t)L_40) < ((int32_t)0)))
		{
			goto IL_007a;
		}
	}

IL_00b4:
	{
		int32_t L_41 = V_2;
		int32_t L_42 = V_3;
		if ((((int32_t)L_41) >= ((int32_t)L_42)))
		{
			goto IL_00c7;
		}
	}
	{
		void* L_43 = ___0_array;
		int32_t L_44 = V_2;
		int32_t L_45 = V_3;
		NativeSortExtension_Swap_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m559DA77F56AD4E1B2E028B54702A892A46109FA1(L_43, L_44, L_45, NULL);
	}

IL_00c0:
	{
		int32_t L_46 = V_2;
		int32_t L_47 = V_3;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0040;
		}
	}

IL_00c7:
	{
		void* L_48 = ___0_array;
		int32_t L_49 = V_2;
		int32_t L_50 = ___2_hi;
		NativeSortExtension_Swap_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m559DA77F56AD4E1B2E028B54702A892A46109FA1(L_48, L_49, ((int32_t)il2cpp_codegen_subtract(L_50, 1)), NULL);
		int32_t L_51 = V_2;
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6BB9FFB51FC10B9DC7A645E05CB970F49DD9C278_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const uint32_t SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_33 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_47 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
	const Il2CppFullySharedGenericStruct L_28 = L_17;
	const Il2CppFullySharedGenericStruct L_42 = L_17;
	const Il2CppFullySharedGenericStruct L_32 = alloca(SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
	const Il2CppFullySharedGenericStruct L_46 = L_32;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	const Il2CppFullySharedGenericAny L_25 = L_6;
	const Il2CppFullySharedGenericAny L_27 = L_6;
	const Il2CppFullySharedGenericAny L_39 = L_6;
	const Il2CppFullySharedGenericAny L_41 = L_6;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
	memset(V_1, 0, SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	memset(V_4, 0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	Il2CppFullySharedGenericAny G_B4_0 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	memset(G_B4_0, 0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	memset(G_B3_0, 0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	Il2CppFullySharedGenericAny G_B8_0 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	memset(G_B8_0, 0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	Il2CppFullySharedGenericAny G_B7_0 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	memset(G_B7_0, 0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	{
		int32_t L_0 = ___1_lo;
		int32_t L_1 = ___2_hi;
		int32_t L_2 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, L_2))/2))));
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lo;
		int32_t L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_3, L_4, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_6: *(void**)L_6));
		void* L_7 = ___0_array;
		int32_t L_8 = ___1_lo;
		int32_t L_9 = ___2_hi;
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_7, L_8, L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_10: *(void**)L_10));
		void* L_11 = ___0_array;
		int32_t L_12 = V_0;
		int32_t L_13 = ___2_hi;
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_11, L_12, L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_14: *(void**)L_14));
		void* L_15 = ___0_array;
		int32_t L_16 = V_0;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_15, L_16, (Il2CppFullySharedGenericStruct*)L_17);
		il2cpp_codegen_memcpy(V_1, L_17, SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
		void* L_18 = ___0_array;
		int32_t L_19 = V_0;
		int32_t L_20 = ___2_hi;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, 1)), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_21 = ___1_lo;
		V_2 = L_21;
		int32_t L_22 = ___2_hi;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		goto IL_00c0;
	}

IL_0040:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = ___2_hi;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_007a;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(L_25, V_4, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		bool L_26 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_25);
		if (L_26)
		{
			il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
			goto IL_0060;
		}
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	}
	{
		il2cpp_codegen_memcpy(L_27, G_B3_0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(V_4, L_27, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	}

IL_0060:
	{
		il2cpp_codegen_memcpy(L_28, V_1, SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
		void* L_29 = ___0_array;
		int32_t L_30 = V_2;
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		V_2 = L_31;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_29, L_31, (Il2CppFullySharedGenericStruct*)L_32);
		Il2CppConstrainedCallData L_34;
		Il2CppMethodPointer L_35 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)G_B4_0, &L_34, L_33);
		int32_t L_36 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_35, L_34.method,L_34.thisPtr, L_28, L_32);
		if ((((int32_t)L_36) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}

IL_007a:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = V_2;
		if ((((int32_t)L_37) <= ((int32_t)L_38)))
		{
			goto IL_00b4;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(L_39, V_4, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		bool L_40 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_39);
		if (L_40)
		{
			il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
			goto IL_009a;
		}
		il2cpp_codegen_memcpy(G_B7_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	}
	{
		il2cpp_codegen_memcpy(L_41, G_B7_0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(V_4, L_41, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	}

IL_009a:
	{
		il2cpp_codegen_memcpy(L_42, V_1, SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
		void* L_43 = ___0_array;
		int32_t L_44 = V_3;
		int32_t L_45 = ((int32_t)il2cpp_codegen_subtract(L_44, 1));
		V_3 = L_45;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_43, L_45, (Il2CppFullySharedGenericStruct*)L_46);
		Il2CppConstrainedCallData L_48;
		Il2CppMethodPointer L_49 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)G_B8_0, &L_48, L_47);
		int32_t L_50 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_49, L_48.method,L_48.thisPtr, L_42, L_46);
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_007a;
		}
	}

IL_00b4:
	{
		int32_t L_51 = V_2;
		int32_t L_52 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)L_52)))
		{
			goto IL_00c7;
		}
	}
	{
		void* L_53 = ___0_array;
		int32_t L_54 = V_2;
		int32_t L_55 = V_3;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_53, L_54, L_55, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_00c0:
	{
		int32_t L_56 = V_2;
		int32_t L_57 = V_3;
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_0040;
		}
	}

IL_00c7:
	{
		void* L_58 = ___0_array;
		int32_t L_59 = V_2;
		int32_t L_60 = ___2_hi;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_58, L_59, ((int32_t)il2cpp_codegen_subtract(L_60, 1)), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_61 = V_2;
		return L_61;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_PartitionStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m73AD8A0117E3A2C21C4A32B60389FD87BFF08909_fshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const uint32_t SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_44 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_58 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_24 = alloca(SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
	const Il2CppFullySharedGenericStruct L_39 = L_24;
	const Il2CppFullySharedGenericStruct L_53 = L_24;
	const Il2CppFullySharedGenericStruct L_43 = alloca(SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
	const Il2CppFullySharedGenericStruct L_57 = L_43;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	const Il2CppFullySharedGenericAny L_36 = L_10;
	const Il2CppFullySharedGenericAny L_38 = L_10;
	const Il2CppFullySharedGenericAny L_50 = L_10;
	const Il2CppFullySharedGenericAny L_52 = L_10;
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
	memset(V_1, 0, SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	memset(V_4, 0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	Il2CppFullySharedGenericAny G_B4_0 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	memset(G_B4_0, 0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	memset(G_B3_0, 0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	Il2CppFullySharedGenericAny G_B8_0 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	memset(G_B8_0, 0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	Il2CppFullySharedGenericAny G_B7_0 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	memset(G_B7_0, 0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	{
		int32_t* L_0 = ___1_lo;
		int32_t L_1 = *(L_0);
		int32_t* L_2 = ___2_hi;
		int32_t L_3 = *(L_2);
		int32_t* L_4 = ___1_lo;
		int32_t L_5 = *(L_4);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_3, L_5))/2))));
		void* L_6 = ___0_array;
		int32_t* L_7 = ___1_lo;
		int32_t L_8 = *(L_7);
		int32_t L_9 = V_0;
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_6, L_8, L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_10: *(void**)L_10));
		void* L_11 = ___0_array;
		int32_t* L_12 = ___1_lo;
		int32_t L_13 = *(L_12);
		int32_t* L_14 = ___2_hi;
		int32_t L_15 = *(L_14);
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_11, L_13, L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_16: *(void**)L_16));
		void* L_17 = ___0_array;
		int32_t L_18 = V_0;
		int32_t* L_19 = ___2_hi;
		int32_t L_20 = *(L_19);
		il2cpp_codegen_memcpy(L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_17, L_18, L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_21: *(void**)L_21));
		void* L_22 = ___0_array;
		int32_t L_23 = V_0;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_22, L_23, (Il2CppFullySharedGenericStruct*)L_24);
		il2cpp_codegen_memcpy(V_1, L_24, SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
		void* L_25 = ___0_array;
		int32_t L_26 = V_0;
		int32_t* L_27 = ___2_hi;
		int32_t L_28 = *(L_27);
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_25, L_26, ((int32_t)il2cpp_codegen_subtract(L_28, 1)), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t* L_29 = ___1_lo;
		int32_t L_30 = *(L_29);
		V_2 = L_30;
		int32_t* L_31 = ___2_hi;
		int32_t L_32 = *(L_31);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
		goto IL_00cb;
	}

IL_004a:
	{
		int32_t L_33 = V_2;
		int32_t* L_34 = ___2_hi;
		int32_t L_35 = *(L_34);
		if ((((int32_t)L_33) >= ((int32_t)L_35)))
		{
			goto IL_0085;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		il2cpp_codegen_memcpy(L_36, V_4, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		bool L_37 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_36);
		if (L_37)
		{
			il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
			goto IL_006b;
		}
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	}
	{
		il2cpp_codegen_memcpy(L_38, G_B3_0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		il2cpp_codegen_memcpy(V_4, L_38, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	}

IL_006b:
	{
		il2cpp_codegen_memcpy(L_39, V_1, SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
		void* L_40 = ___0_array;
		int32_t L_41 = V_2;
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		V_2 = L_42;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_40, L_42, (Il2CppFullySharedGenericStruct*)L_43);
		Il2CppConstrainedCallData L_45;
		Il2CppMethodPointer L_46 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)G_B4_0, &L_45, L_44);
		int32_t L_47 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_46, L_45.method,L_45.thisPtr, L_39, L_43);
		if ((((int32_t)L_47) > ((int32_t)0)))
		{
			goto IL_004a;
		}
	}

IL_0085:
	{
		int32_t L_48 = V_3;
		int32_t L_49 = V_2;
		if ((((int32_t)L_48) <= ((int32_t)L_49)))
		{
			goto IL_00bf;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		il2cpp_codegen_memcpy(L_50, V_4, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		bool L_51 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_50);
		if (L_51)
		{
			il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
			goto IL_00a5;
		}
		il2cpp_codegen_memcpy(G_B7_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	}
	{
		il2cpp_codegen_memcpy(L_52, G_B7_0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		il2cpp_codegen_memcpy(V_4, L_52, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	}

IL_00a5:
	{
		il2cpp_codegen_memcpy(L_53, V_1, SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
		void* L_54 = ___0_array;
		int32_t L_55 = V_3;
		int32_t L_56 = ((int32_t)il2cpp_codegen_subtract(L_55, 1));
		V_3 = L_56;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_54, L_56, (Il2CppFullySharedGenericStruct*)L_57);
		Il2CppConstrainedCallData L_59;
		Il2CppMethodPointer L_60 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)G_B8_0, &L_59, L_58);
		int32_t L_61 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_60, L_59.method,L_59.thisPtr, L_53, L_57);
		if ((((int32_t)L_61) < ((int32_t)0)))
		{
			goto IL_0085;
		}
	}

IL_00bf:
	{
		int32_t L_62 = V_2;
		int32_t L_63 = V_3;
		if ((((int32_t)L_62) >= ((int32_t)L_63)))
		{
			goto IL_00d2;
		}
	}
	{
		void* L_64 = ___0_array;
		int32_t L_65 = V_2;
		int32_t L_66 = V_3;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_64, L_65, L_66, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_00cb:
	{
		int32_t L_67 = V_2;
		int32_t L_68 = V_3;
		if ((((int32_t)L_67) < ((int32_t)L_68)))
		{
			goto IL_004a;
		}
	}

IL_00d2:
	{
		void* L_69 = ___0_array;
		int32_t L_70 = V_2;
		int32_t* L_71 = ___2_hi;
		int32_t L_72 = *(L_71);
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_69, L_70, ((int32_t)il2cpp_codegen_subtract(L_72, 1)), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_73 = V_2;
		return L_73;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m3F424B0619C8F1DE51A5059CE9F9B9C77E8AD2E5_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		InvokerActionInvoker2< Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m1859D96C5F86215E7A5E852801B9AE8C2B95E239_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m4FEF95715361F218DC8D173A80638DD74D4CF9DC_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		InvokerActionInvoker2< NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_mBF35B93651FA209CF501B41C815D071FE63CDA88_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_span), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = ((  Il2CppFullySharedGenericStruct* (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_span), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_2;
		Il2CppFullySharedGenericStruct* L_3 = V_1;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_3,NULL));
		int32_t L_5 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_6 = V_2;
		InvokerActionInvoker3< void*, int32_t, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, (void*)L_4, L_5, L_6);
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (Il2CppFullySharedGenericStruct*)L_7;
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_mB449135843E754594001B0EAD70A205709265163_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m197B30912ECA075B47D7BD7712A9F37F52EA5D8D_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		InvokerActionInvoker3< void*, int32_t, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (void*)L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m5E371D15E2A098907CED70FD190AB6E6A7A7286D_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t8392FCD72BC16205155382ED30EBB421226175FF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t8392FCD72BC16205155382ED30EBB421226175FF);
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp), SizeOf_U_t8392FCD72BC16205155382ED30EBB421226175FF);
		InvokerActionInvoker2< Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m740CC60990F0F5017BED9F38F26CECFCC1BA78C1_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t716BCA6917D7AE5B382B05528161A14F7E0D2216 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t716BCA6917D7AE5B382B05528161A14F7E0D2216);
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp), SizeOf_U_t716BCA6917D7AE5B382B05528161A14F7E0D2216);
		InvokerActionInvoker2< Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m201F2E16B83FD461CE57913123761F986C0F912D_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tBB6E307985DBD1BF69234321DCE63D47A5A3854A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_U_tBB6E307985DBD1BF69234321DCE63D47A5A3854A);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	int32_t V_1 = 0;
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_container;
		void* L_1;
		L_1 = ((  void* (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, NULL);
		V_0 = (Il2CppFullySharedGenericStruct*)L_1;
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_container), NULL);
		V_1 = L_2;
		Il2CppFullySharedGenericStruct* L_3 = V_0;
		int32_t L_4 = V_1;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___1_comp : &___1_comp), SizeOf_U_tBB6E307985DBD1BF69234321DCE63D47A5A3854A);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, (void*)L_3, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_5: *(void**)L_5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m9FF262B17E1E7B2DCDC9470732751FBAE353C73E_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tAD27A7B134D0C0741758D3AEDEB8E2EC75D7DB4F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_U_tAD27A7B134D0C0741758D3AEDEB8E2EC75D7DB4F);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_span), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = ((  Il2CppFullySharedGenericStruct* (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_span), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_2;
		Il2CppFullySharedGenericStruct* L_3 = V_1;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_3,NULL));
		int32_t L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___1_comp : &___1_comp), SizeOf_U_tAD27A7B134D0C0741758D3AEDEB8E2EC75D7DB4F);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, (void*)L_4, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_6: *(void**)L_6));
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (Il2CppFullySharedGenericStruct*)L_7;
	}

IL_0021:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mEA0AAB94EC7DADF99B56086E173D45DD63A2AF35_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t0522B71478B41B1C4B354E36ABEFBD88E1F2B88D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t0522B71478B41B1C4B354E36ABEFBD88E1F2B88D);
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp), SizeOf_U_t0522B71478B41B1C4B354E36ABEFBD88E1F2B88D);
		InvokerActionInvoker2< Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m0344C3607D0847D8650FC8FA00506A1B1F86BE56 (int32_t* ___0_ptr, int32_t ___1_length, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_2 = ___2_comp;
		NativeSortExtension_IntroSort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_mB34BF7D82E1E5889BE988B230C11EE6842993231((void*)L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mEA1E342C937F1CBF8B0D3DA4587287B30FEF3409 (uint64_t* ___0_ptr, int32_t ___1_length, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		uint64_t* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_2 = ___2_comp;
		NativeSortExtension_IntroSort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m322E3D4D2DAD5DD1A61A78DCA08C5BE424E2BCAA((void*)L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m383B74DDD5F54C3E0E999F92EE2FFA16BC3382DB (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_ptr, int32_t ___1_length, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_2 = ___2_comp;
		NativeSortExtension_IntroSort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m4809F01D470D4466F76AD547CCBB126B73C0DE04((void*)L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_mF83C5EC5250358209A4F74DFF2A8122AD780F310 (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_ptr, int32_t ___1_length, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_2 = ___2_comp;
		NativeSortExtension_IntroSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_mB6DC15F5849FB6406A1E060F37717E801CA1AA9C((void*)L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC1D8773F403E942EBAE0283BDE80699517E8BBA1_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t0AA3CBE142BDF838CEA47DDD683A9421842FBB68 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t0AA3CBE142BDF838CEA47DDD683A9421842FBB68);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_comp : &___2_comp), SizeOf_U_t0AA3CBE142BDF838CEA47DDD683A9421842FBB68);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (void*)L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_2: *(void**)L_2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortIndices_TisIl2CppFullySharedGenericStruct_m8294508A624290C25F7FD9D80316080CE83309F8_fshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_indices, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___1_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_0 = ___0_indices;
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_1 = ___1_values;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		InvokerActionInvoker3< Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortIndices_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mF75387D15CB11681384340B94B35E7AF9D80662F_fshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_indices, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___1_values, Il2CppFullySharedGenericStruct ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const uint32_t SizeOf_U_t1A65BC80DBFF9DF0B0C300328302D7C99591952D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_U_t1A65BC80DBFF9DF0B0C300328302D7C99591952D);
	const SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E L_7 = alloca(SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E V_2 = alloca(SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC);
	memset(V_2, 0, SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___1_values), NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_1;
		L_1 = ((  Il2CppFullySharedGenericStruct* (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___1_values), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_1;
		Il2CppFullySharedGenericStruct* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_2,NULL));
		V_0 = (Il2CppFullySharedGenericStruct*)L_3;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_4 = ___0_indices;
		il2cpp_codegen_initobj((SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E*)V_2, SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC);
		Il2CppFullySharedGenericStruct* L_5 = V_0;
		il2cpp_codegen_write_field_data<Il2CppFullySharedGenericStruct*, false>((SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E*)V_2, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),0), il2cpp_rgctx_offset(method->rgctx_data, 3), L_5);
		il2cpp_codegen_memcpy(L_6, ___2_comp, SizeOf_U_t1A65BC80DBFF9DF0B0C300328302D7C99591952D);
		il2cpp_codegen_write_field_data<true>((SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E*)V_2, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),1), il2cpp_rgctx_offset(method->rgctx_data, 5), L_6, SizeOf_U_t1A65BC80DBFF9DF0B0C300328302D7C99591952D);
		il2cpp_codegen_memcpy(L_7, V_2, SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC);
		InvokerActionInvoker2< Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316, SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL, L_4, L_7);
		uintptr_t L_8 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (Il2CppFullySharedGenericStruct*)L_8;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03 NativeSortExtension_SortJob_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E3417425C9B76FA372D6033A174ABAA465BFFAC (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_container, const RuntimeMethod* method) 
{
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_0;
		L_0 = NativeArray_1_AsSpan_mAFE9F40CE04C84DFB0D6C5C338015A226B0A3EB9((&___0_container), NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939));
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_1 = V_0;
		SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03 L_2;
		L_2 = NativeSortExtension_SortJob_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m32C5AA6495C39886E9F10952078CDA9AB97ADECF(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478 NativeSortExtension_SortJob_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m558724A75AB46A488295884665059D7611FECE27 (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___0_container, const RuntimeMethod* method) 
{
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 L_0;
		L_0 = NativeArray_1_AsSpan_m52988A12DB01292F1C64E6786AA600A03601EF98((&___0_container), NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9));
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_1 = V_0;
		SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478 L_2;
		L_2 = NativeSortExtension_SortJob_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mA8CA6EFD2F7E8AEC5454721CD3338B95A4B706A8(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_m52C3084BCC423645720ECD04047E9DFF095C1E04_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_2;
		L_2 = InvokerFuncInvoker2< SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_mB0EF9F438D8F4C889C4190D038616A751AD65191_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_2;
		L_2 = InvokerFuncInvoker2< SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_m618668B901D3B28C9500C5AF37A84C0F064D750B_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_container;
		void* L_1;
		L_1 = ((  void* (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, NULL);
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_container), NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_3 = V_0;
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_4;
		L_4 = InvokerFuncInvoker3< SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD, Il2CppFullySharedGenericStruct*, int32_t, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, (Il2CppFullySharedGenericStruct*)L_1, L_2, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_m0E2D3F6358F92058E2A1689788F26C5180DCA723_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0 = ___0_span;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_2;
		L_2 = InvokerFuncInvoker2< SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_mAD15487126464DAE40F7F98A11708118DC89AA8D_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_2;
		L_2 = InvokerFuncInvoker2< SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_mCDB8D25250D9675E93E37552EA51A8CB24C09931_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD));
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		(&V_0)->___Data = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___Length = L_1;
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522* L_2 = (DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522*)(&(&V_0)->___Comp);
		il2cpp_codegen_initobj(L_2, sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03 NativeSortExtension_SortJob_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m32C5AA6495C39886E9F10952078CDA9AB97ADECF (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_span, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___1_comp, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline((&___0_span), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t* L_2;
		L_2 = il2cpp_span_get_item((int32_t*)((Il2CppByReference*)&(((&___0_span))->____pointer))->value, (0), ((&___0_span))->____length);
		V_2 = L_2;
		int32_t* L_3 = V_2;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>(L_3,NULL));
		V_1 = (int32_t*)L_4;
		il2cpp_codegen_initobj((&V_3), sizeof(SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03));
		int32_t* L_5 = V_1;
		(&V_3)->___Data = L_5;
		int32_t L_6 = V_0;
		(&V_3)->___Length = L_6;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_7 = ___1_comp;
		(&V_3)->___Comp = L_7;
		SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03 L_8 = V_3;
		return L_8;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03));
		uintptr_t L_9 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		(&V_3)->___Data = (int32_t*)L_9;
		(&V_3)->___Length = 0;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_10 = ___1_comp;
		(&V_3)->___Comp = L_10;
		SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03 L_11 = V_3;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478 NativeSortExtension_SortJob_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mA8CA6EFD2F7E8AEC5454721CD3338B95A4B706A8 (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 ___0_span, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___1_comp, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint64_t* V_1 = NULL;
	uint64_t* V_2 = NULL;
	SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m62F446B5508B032A22CD1BA21D998626E6B8A5CC_inline((&___0_span), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		uint64_t* L_2;
		L_2 = il2cpp_span_get_item((uint64_t*)((Il2CppByReference*)&(((&___0_span))->____pointer))->value, (0), ((&___0_span))->____length);
		V_2 = L_2;
		uint64_t* L_3 = V_2;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,uint64_t*,intptr_t,false,false>(L_3,NULL));
		V_1 = (uint64_t*)L_4;
		il2cpp_codegen_initobj((&V_3), sizeof(SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478));
		uint64_t* L_5 = V_1;
		(&V_3)->___Data = L_5;
		int32_t L_6 = V_0;
		(&V_3)->___Length = L_6;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_7 = ___1_comp;
		(&V_3)->___Comp = L_7;
		SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478 L_8 = V_3;
		return L_8;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478));
		uintptr_t L_9 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		(&V_3)->___Data = (uint64_t*)L_9;
		(&V_3)->___Length = 0;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_10 = ___1_comp;
		(&V_3)->___Comp = L_10;
		SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478 L_11 = V_3;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mDEDD35A24EC7064750CF9A006D9ED072EC9CC47A_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t8C703775DC289FA78AE776C82FDD1614C468B12B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_SortJob_2_t91AF45E9356CB7D6C30BB1201E6533ACAB970FEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t8C703775DC289FA78AE776C82FDD1614C468B12B);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_2 = alloca(SizeOf_SortJob_2_t91AF45E9356CB7D6C30BB1201E6533ACAB970FEC);
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp), SizeOf_U_t8C703775DC289FA78AE776C82FDD1614C468B12B);
		InvokerActionInvoker3< Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_1: *(void**)L_1), (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_SortJob_2_t91AF45E9356CB7D6C30BB1201E6533ACAB970FEC);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mB3A64630AC80B0CD54DDB37DABCA63F03F45C57D_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t0E14C11FCB10DDF82D8692C80ED63664F909D249 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_SortJob_2_tCE99FB9688E01536AB80846FA62279179AC0709A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t0E14C11FCB10DDF82D8692C80ED63664F909D249);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_2 = alloca(SizeOf_SortJob_2_tCE99FB9688E01536AB80846FA62279179AC0709A);
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp), SizeOf_U_t0E14C11FCB10DDF82D8692C80ED63664F909D249);
		InvokerActionInvoker3< Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_1: *(void**)L_1), (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_SortJob_2_tCE99FB9688E01536AB80846FA62279179AC0709A);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m156DD6D59CA5B809BEFB0724A56CACE0B92B035D_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t02C55F23A1A61BD14220D0BFF6D029617DDF7EFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const uint32_t SizeOf_SortJob_2_t6BA338B0152457B9323965CD909F5CA799B6D1C4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_U_t02C55F23A1A61BD14220D0BFF6D029617DDF7EFF);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_4 = alloca(SizeOf_SortJob_2_t6BA338B0152457B9323965CD909F5CA799B6D1C4);
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_container;
		void* L_1;
		L_1 = ((  void* (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, NULL);
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_container), NULL);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___1_comp : &___1_comp), SizeOf_U_t02C55F23A1A61BD14220D0BFF6D029617DDF7EFF);
		InvokerActionInvoker4< Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericAny, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, (Il2CppFullySharedGenericStruct*)L_1, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_3: *(void**)L_3), (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)L_4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_SortJob_2_t6BA338B0152457B9323965CD909F5CA799B6D1C4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA47E9D98FCFFC3B156B359C1A1265D485601FBAA_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const uint32_t SizeOf_U_t4184EF00B6B20CF1D23ACC689B69FAE0AFCDD0C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_U_t4184EF00B6B20CF1D23ACC689B69FAE0AFCDD0C1);
	const Il2CppFullySharedGenericAny L_10 = L_7;
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_8 = alloca(SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_11 = L_8;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	Il2CppFullySharedGenericStruct* V_2 = NULL;
	SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A V_3 = alloca(SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
	memset(V_3, 0, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_span), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = ((  Il2CppFullySharedGenericStruct* (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_span), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_2;
		Il2CppFullySharedGenericStruct* L_3 = V_2;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_3,NULL));
		V_1 = (Il2CppFullySharedGenericStruct*)L_4;
		il2cpp_codegen_initobj((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_3, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		Il2CppFullySharedGenericStruct* L_5 = V_1;
		il2cpp_codegen_write_field_data<Il2CppFullySharedGenericStruct*, false>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_3, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),0), il2cpp_rgctx_offset(method->rgctx_data, 3), L_5);
		int32_t L_6 = V_0;
		il2cpp_codegen_write_field_data<int32_t, false>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_3, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),2), il2cpp_rgctx_offset(method->rgctx_data, 4), L_6);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? ___1_comp : &___1_comp), SizeOf_U_t4184EF00B6B20CF1D23ACC689B69FAE0AFCDD0C1);
		il2cpp_codegen_write_field_data<true>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_3, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),1), il2cpp_rgctx_offset(method->rgctx_data, 6), L_7, SizeOf_U_t4184EF00B6B20CF1D23ACC689B69FAE0AFCDD0C1);
		il2cpp_codegen_memcpy(L_8, V_3, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		return;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_3, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		uintptr_t L_9 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		il2cpp_codegen_write_field_data<Il2CppFullySharedGenericStruct*, false>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_3, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),0), il2cpp_rgctx_offset(method->rgctx_data, 3), (Il2CppFullySharedGenericStruct*)L_9);
		il2cpp_codegen_write_field_data<int32_t, false>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_3, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),2), il2cpp_rgctx_offset(method->rgctx_data, 4), 0);
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? ___1_comp : &___1_comp), SizeOf_U_t4184EF00B6B20CF1D23ACC689B69FAE0AFCDD0C1);
		il2cpp_codegen_write_field_data<true>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_3, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),1), il2cpp_rgctx_offset(method->rgctx_data, 6), L_10, SizeOf_U_t4184EF00B6B20CF1D23ACC689B69FAE0AFCDD0C1);
		il2cpp_codegen_memcpy(L_11, V_3, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_11, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m803FCB042598C1E503C59013F0DD3E33DE8D5F04_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tEAE35D4DEFE1BC3BB9AF8F3483A8B44B86D86D58 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_SortJob_2_t5A79827293D20DC4A7E8D5EB4FAD12EAF62D5859 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_tEAE35D4DEFE1BC3BB9AF8F3483A8B44B86D86D58);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_2 = alloca(SizeOf_SortJob_2_t5A79827293D20DC4A7E8D5EB4FAD12EAF62D5859);
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp), SizeOf_U_tEAE35D4DEFE1BC3BB9AF8F3483A8B44B86D86D58);
		InvokerActionInvoker3< Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_1: *(void**)L_1), (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_SortJob_2_t5A79827293D20DC4A7E8D5EB4FAD12EAF62D5859);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m337928D5AC4C50E948C80C38FB30ABDD0FEDFEE2_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_U_t42D5912367A307AEEE9667CC0F4FD8E82570C246 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t42D5912367A307AEEE9667CC0F4FD8E82570C246);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_3 = alloca(SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
	SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A V_0 = alloca(SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
	memset(V_0, 0, SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
	{
		il2cpp_codegen_initobj((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_0, SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		il2cpp_codegen_write_field_data<Il2CppFullySharedGenericStruct*, false>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),0), il2cpp_rgctx_offset(method->rgctx_data, 1), L_0);
		int32_t L_1 = ___1_length;
		il2cpp_codegen_write_field_data<int32_t, false>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),2), il2cpp_rgctx_offset(method->rgctx_data, 2), L_1);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_comp : &___2_comp), SizeOf_U_t42D5912367A307AEEE9667CC0F4FD8E82570C246);
		il2cpp_codegen_write_field_data<true>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),1), il2cpp_rgctx_offset(method->rgctx_data, 4), L_2, SizeOf_U_t42D5912367A307AEEE9667CC0F4FD8E82570C246);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJobDefer_2_t08B115591D33E0E12BE3194612F33E29C62FD509 NativeSortExtension_SortJobDefer_TisIl2CppFullySharedGenericStruct_m32EF1EDFDD285088E68A52C9FA22CF962A0315F0_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		SortJobDefer_2_t08B115591D33E0E12BE3194612F33E29C62FD509 L_2;
		L_2 = InvokerFuncInvoker2< SortJobDefer_2_t08B115591D33E0E12BE3194612F33E29C62FD509, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJobDefer_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m08A07FE4FC0572B5AD96D95F043F26AD8020A463_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericAny ___1_comp, SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_U_tA3EA785A061FC1C615AD0676A68BC523D16DDB4F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_tA3EA785A061FC1C615AD0676A68BC523D16DDB4F);
	const SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A L_2 = alloca(SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
	SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A V_0 = alloca(SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
	memset(V_0, 0, SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
	{
		il2cpp_codegen_initobj((SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A*)V_0, SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_0 = ___0_container;
		il2cpp_codegen_write_field_data<NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1, false>((SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),0), il2cpp_rgctx_offset(method->rgctx_data, 1), L_0);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___1_comp : &___1_comp), SizeOf_U_tA3EA785A061FC1C615AD0676A68BC523D16DDB4F);
		il2cpp_codegen_write_field_data<true>((SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),1), il2cpp_rgctx_offset(method->rgctx_data, 3), L_1, SizeOf_U_tA3EA785A061FC1C615AD0676A68BC523D16DDB4F);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B32B9F06977E407E6CA99CA51A37F7DB63CC772 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_lhs;
		int32_t L_2;
		L_2 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_0, L_1, NULL);
		V_0 = L_2;
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		void* L_5 = ___0_array;
		int32_t L_6 = ___2_rhs;
		int32_t L_7;
		L_7 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_5, L_6, NULL);
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline(L_3, L_4, L_7, NULL);
		void* L_8 = ___0_array;
		int32_t L_9 = ___2_rhs;
		int32_t L_10 = V_0;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline(L_8, L_9, L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m20CFAAEF92F2BF57192AC6AC6672D34DB0378730 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_lhs;
		uint64_t L_2;
		L_2 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_0, L_1, NULL);
		V_0 = L_2;
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		void* L_5 = ___0_array;
		int32_t L_6 = ___2_rhs;
		uint64_t L_7;
		L_7 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_5, L_6, NULL);
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline(L_3, L_4, L_7, NULL);
		void* L_8 = ___0_array;
		int32_t L_9 = ___2_rhs;
		uint64_t L_10 = V_0;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline(L_8, L_9, L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7823FBF7870907C0FBB1EAA0FADD3DCF95A52217 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_lhs;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_0, L_1, NULL);
		V_0 = L_2;
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		void* L_5 = ___0_array;
		int32_t L_6 = ___2_rhs;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_5, L_6, NULL);
		UnsafeUtility_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m172AB754724D12C7E4938B1ACE01A7FF192AC73E_inline(L_3, L_4, L_7, NULL);
		void* L_8 = ___0_array;
		int32_t L_9 = ___2_rhs;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		UnsafeUtility_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m172AB754724D12C7E4938B1ACE01A7FF192AC73E_inline(L_8, L_9, L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m559DA77F56AD4E1B2E028B54702A892A46109FA1 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_lhs;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_0, L_1, NULL);
		V_0 = L_2;
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		void* L_5 = ___0_array;
		int32_t L_6 = ___2_rhs;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		L_7 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_5, L_6, NULL);
		UnsafeUtility_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m824816C030A3E2FD028D3B4ECCC252E8E50DDF6E_inline(L_3, L_4, L_7, NULL);
		void* L_8 = ___0_array;
		int32_t L_9 = ___2_rhs;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = V_0;
		UnsafeUtility_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m824816C030A3E2FD028D3B4ECCC252E8E50DDF6E_inline(L_8, L_9, L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisIl2CppFullySharedGenericStruct_m657D09FBF8CC0DCADE61F3DC08251120E778AAEF_fshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	memset(V_0, 0, SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_lhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		void* L_5 = ___0_array;
		int32_t L_6 = ___2_rhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_5, L_6, (Il2CppFullySharedGenericStruct*)L_7);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_3, L_4, L_7);
		void* L_8 = ___0_array;
		int32_t L_9 = ___2_rhs;
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_8, L_9, L_10);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m2E6D9B5EA07821DABCEFA4B85DD48E1164B7DC55 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___3_comp, const RuntimeMethod* method) 
{
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939* G_B3_0 = NULL;
	{
		int32_t L_0 = ___1_lhs;
		int32_t L_1 = ___2_rhs;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939));
		G_B3_0 = (&___3_comp);
		goto IL_001e;
	}

IL_001e:
	{
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		int32_t L_5;
		L_5 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_3, L_4, NULL);
		void* L_6 = ___0_array;
		int32_t L_7 = ___2_rhs;
		int32_t L_8;
		L_8 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_6, L_7, NULL);
		int32_t L_9;
		L_9 = DefaultComparer_1_Compare_m394F7F49471D14333A96E4D1609FF38B351FC316(G_B3_0, L_5, L_8, NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lhs;
		int32_t L_12 = ___2_rhs;
		NativeSortExtension_Swap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B32B9F06977E407E6CA99CA51A37F7DB63CC772(L_10, L_11, L_12, NULL);
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m32306F98F190471CE5FFF51A5B5DC5AC0CBCA87B (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___3_comp, const RuntimeMethod* method) 
{
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9* G_B3_0 = NULL;
	{
		int32_t L_0 = ___1_lhs;
		int32_t L_1 = ___2_rhs;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9));
		G_B3_0 = (&___3_comp);
		goto IL_001e;
	}

IL_001e:
	{
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		uint64_t L_5;
		L_5 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_3, L_4, NULL);
		void* L_6 = ___0_array;
		int32_t L_7 = ___2_rhs;
		uint64_t L_8;
		L_8 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_6, L_7, NULL);
		int32_t L_9;
		L_9 = DefaultComparer_1_Compare_mCE528A0DC7D946A4B73C6C1BA0BEF3EF89B13E1A(G_B3_0, L_5, L_8, NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lhs;
		int32_t L_12 = ___2_rhs;
		NativeSortExtension_Swap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m20CFAAEF92F2BF57192AC6AC6672D34DB0378730(L_10, L_11, L_12, NULL);
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1FA1F41F025F787CA8D9C6A1F7B053556B2F6682 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___3_comp, const RuntimeMethod* method) 
{
	ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA V_0;
	memset((&V_0), 0, sizeof(V_0));
	ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA* G_B3_0 = NULL;
	{
		int32_t L_0 = ___1_lhs;
		int32_t L_1 = ___2_rhs;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA));
		G_B3_0 = (&___3_comp);
		goto IL_001e;
	}

IL_001e:
	{
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_3, L_4, NULL);
		void* L_6 = ___0_array;
		int32_t L_7 = ___2_rhs;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_6, L_7, NULL);
		int32_t L_9;
		L_9 = ActiveComparer_Compare_mA14126C7E24C5A91BDFE79B275F2239D84D79E70(G_B3_0, L_5, L_8, NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lhs;
		int32_t L_12 = ___2_rhs;
		NativeSortExtension_Swap_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7823FBF7870907C0FBB1EAA0FADD3DCF95A52217(L_10, L_11, L_12, NULL);
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0D5C201A337A525CE82664BF10CB31AF56718F3C (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___3_comp, const RuntimeMethod* method) 
{
	EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B V_0;
	memset((&V_0), 0, sizeof(V_0));
	EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B* G_B3_0 = NULL;
	{
		int32_t L_0 = ___1_lhs;
		int32_t L_1 = ___2_rhs;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B));
		G_B3_0 = (&___3_comp);
		goto IL_001e;
	}

IL_001e:
	{
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_3, L_4, NULL);
		void* L_6 = ___0_array;
		int32_t L_7 = ___2_rhs;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_6, L_7, NULL);
		int32_t L_9;
		L_9 = EventComparer_Compare_m3302ED5566E32C3FD932FFBD21136DBCF17C2C76(G_B3_0, L_5, L_8, NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lhs;
		int32_t L_12 = ___2_rhs;
		NativeSortExtension_Swap_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m559DA77F56AD4E1B2E028B54702A892A46109FA1(L_10, L_11, L_12, NULL);
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C_fshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_tFC2A00320878DE26C1676CA44DEC8F6FC9EA8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_tFC2A00320878DE26C1676CA44DEC8F6FC9EA8F14);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_tFC2A00320878DE26C1676CA44DEC8F6FC9EA8F14);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	const Il2CppFullySharedGenericAny L_4 = L_2;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	memset(V_0, 0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	memset(G_B3_0, 0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	memset(G_B2_0, 0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	{
		int32_t L_0 = ___1_lhs;
		int32_t L_1 = ___2_rhs;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_2);
		if (L_3)
		{
			il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
			goto IL_001e;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	}
	{
		il2cpp_codegen_memcpy(L_4, G_B2_0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	}

IL_001e:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = ___1_lhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_5, L_6, (Il2CppFullySharedGenericStruct*)L_7);
		void* L_8 = ___0_array;
		int32_t L_9 = ___2_rhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_8, L_9, (Il2CppFullySharedGenericStruct*)L_10);
		Il2CppConstrainedCallData L_12;
		Il2CppMethodPointer L_13 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)G_B3_0, &L_12, L_11);
		int32_t L_14 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_13, L_12.method,L_12.thisPtr, L_7, L_10);
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		void* L_15 = ___0_array;
		int32_t L_16 = ___1_lhs;
		int32_t L_17 = ___2_rhs;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_15, L_16, L_17, il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItemsStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mABB5AA1A8A886F39277828BE310D8FDE2424F322_fshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t3C28AADEDB0D36242D2223B92B887BAF86BA60F0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t3C28AADEDB0D36242D2223B92B887BAF86BA60F0);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t3C28AADEDB0D36242D2223B92B887BAF86BA60F0);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	const Il2CppFullySharedGenericAny L_4 = L_2;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	memset(V_0, 0, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	memset(G_B3_0, 0, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	memset(G_B2_0, 0, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	{
		int32_t L_0 = ___1_lhs;
		int32_t L_1 = ___2_rhs;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_2);
		if (L_3)
		{
			il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
			goto IL_001e;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	}
	{
		il2cpp_codegen_memcpy(L_4, G_B2_0, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	}

IL_001e:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = ___1_lhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_5, L_6, (Il2CppFullySharedGenericStruct*)L_7);
		void* L_8 = ___0_array;
		int32_t L_9 = ___2_rhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_8, L_9, (Il2CppFullySharedGenericStruct*)L_10);
		Il2CppConstrainedCallData L_12;
		Il2CppMethodPointer L_13 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)G_B3_0, &L_12, L_11);
		int32_t L_14 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_13, L_12.method,L_12.thisPtr, L_7, L_10);
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		void* L_15 = ___0_array;
		int32_t L_16 = ___1_lhs;
		int32_t L_17 = ___2_rhs;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_15, L_16, L_17, il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapStruct_TisIl2CppFullySharedGenericStruct_m9261658699D5BEE6D69B7E825EEA155299319C24_fshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	memset(V_0, 0, SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_lhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		void* L_5 = ___0_array;
		int32_t L_6 = ___2_rhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_5, L_6, (Il2CppFullySharedGenericStruct*)L_7);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_3, L_4, L_7);
		void* L_8 = ___0_array;
		int32_t L_9 = ___2_rhs;
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_8, L_9, L_10);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 NativeStream_ScheduleConstruct_TisIl2CppFullySharedGenericStruct_m27645D3BD937891B0D2D164E55DCCD4A4F4D4E89_fshared (NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* ___0_stream, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___1_bufferCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___2_dependency, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* L_0 = ___0_stream;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___3_allocator;
		NativeStream_AllocateBlock_mAD29C962FDE6B17A135737E09693B6FAB6E974AF(L_0, L_1, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707));
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_2;
		L_2 = ((  UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___1_bufferCount), NULL);
		(&V_0)->___List = (UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2*)L_2;
		NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* L_3 = ___0_stream;
		NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376 L_4 = (*(NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376*)L_3);
		(&V_0)->___Container = L_4;
		ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707 L_5 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6 = ___2_dependency;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_7;
		L_7 = IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF(L_5, L_6, IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF_RuntimeMethod_var);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeStream_ToNativeArray_TisIl2CppFullySharedGenericStruct_m7F7EEAC0A5F9619B9A028BE880C504844C338E8D_fshared (NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66* L_0 = (UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66*)(&__this->___m_Stream);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___0_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2;
		L_2 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkAnimator_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3BFAAA7F6B67998E2CA00E0ECA8295B399938C07 (NetworkAnimator_tD8BA9A86CB82706429757E0FEDA16C813A4D1148* __this, AnimatorParamCache_t8B920B60D5DFBA3F4443930387E48A47652E475D* ___0_animatorParamCache, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		AnimatorParamCache_t8B920B60D5DFBA3F4443930387E48A47652E475D* L_0 = ___0_animatorParamCache;
		U3CValueU3Ee__FixedBuffer_tEC352804A969709D0AD6D5F8EE66E24EB79FC398* L_1 = (U3CValueU3Ee__FixedBuffer_tEC352804A969709D0AD6D5F8EE66E24EB79FC398*)(&L_0->___Value);
		uint8_t* L_2 = (uint8_t*)(&L_1->___FixedElementField);
		V_1 = L_2;
		uint8_t* L_3 = V_1;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_3,NULL));
		V_0 = (void*)L_4;
		void* L_5 = V_0;
		bool L_6;
		L_6 = UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline(L_5, 0, NULL);
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_7;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkAnimator_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA95C7643EC59F63B0743076F08B6636B7D95554F (NetworkAnimator_tD8BA9A86CB82706429757E0FEDA16C813A4D1148* __this, AnimatorParamCache_t8B920B60D5DFBA3F4443930387E48A47652E475D* ___0_animatorParamCache, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		AnimatorParamCache_t8B920B60D5DFBA3F4443930387E48A47652E475D* L_0 = ___0_animatorParamCache;
		U3CValueU3Ee__FixedBuffer_tEC352804A969709D0AD6D5F8EE66E24EB79FC398* L_1 = (U3CValueU3Ee__FixedBuffer_tEC352804A969709D0AD6D5F8EE66E24EB79FC398*)(&L_0->___Value);
		uint8_t* L_2 = (uint8_t*)(&L_1->___FixedElementField);
		V_1 = L_2;
		uint8_t* L_3 = V_1;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_3,NULL));
		V_0 = (void*)L_4;
		void* L_5 = V_0;
		int32_t L_6;
		L_6 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_5, 0, NULL);
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_7;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkAnimator_GetValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m843946DBAEF42C93893630074A328408E1E4782E (NetworkAnimator_tD8BA9A86CB82706429757E0FEDA16C813A4D1148* __this, AnimatorParamCache_t8B920B60D5DFBA3F4443930387E48A47652E475D* ___0_animatorParamCache, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		AnimatorParamCache_t8B920B60D5DFBA3F4443930387E48A47652E475D* L_0 = ___0_animatorParamCache;
		U3CValueU3Ee__FixedBuffer_tEC352804A969709D0AD6D5F8EE66E24EB79FC398* L_1 = (U3CValueU3Ee__FixedBuffer_tEC352804A969709D0AD6D5F8EE66E24EB79FC398*)(&L_0->___Value);
		uint8_t* L_2 = (uint8_t*)(&L_1->___FixedElementField);
		V_1 = L_2;
		uint8_t* L_3 = V_1;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_3,NULL));
		V_0 = (void*)L_4;
		void* L_5 = V_0;
		float L_6;
		L_6 = UnsafeUtility_ReadArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE8E8016F9D75B5FE0F784B0B6EBEF71D6B31D134_inline(L_5, 0, NULL);
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_7;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_GetValue_TisIl2CppFullySharedGenericAny_mE83FAAE8FC8A0AB7747611AE469929D6126D3EB1_fshared (NetworkAnimator_tD8BA9A86CB82706429757E0FEDA16C813A4D1148* __this, AnimatorParamCache_t8B920B60D5DFBA3F4443930387E48A47652E475D* ___0_animatorParamCache, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t3BB64FD60CC6C48AC2D5122C3B149DF54738A5D2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t3BB64FD60CC6C48AC2D5122C3B149DF54738A5D2);
	void* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		AnimatorParamCache_t8B920B60D5DFBA3F4443930387E48A47652E475D* L_0 = ___0_animatorParamCache;
		U3CValueU3Ee__FixedBuffer_tEC352804A969709D0AD6D5F8EE66E24EB79FC398* L_1 = (U3CValueU3Ee__FixedBuffer_tEC352804A969709D0AD6D5F8EE66E24EB79FC398*)(&L_0->___Value);
		uint8_t* L_2 = (uint8_t*)(&L_1->___FixedElementField);
		V_1 = L_2;
		uint8_t* L_3 = V_1;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_3,NULL));
		V_0 = (void*)L_4;
		void* L_5 = V_0;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_5, 0, (Il2CppFullySharedGenericAny*)L_6);
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint8_t*)L_7;
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_T_t3BB64FD60CC6C48AC2D5122C3B149DF54738A5D2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_OnSynchronize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m32F76BD87E364FC0E2087BA571B5B53D26323A97 (NetworkAnimator_tD8BA9A86CB82706429757E0FEDA16C813A4D1148* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* ___0_serializer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_tE77DBDC5F3E4FED1452607A3D6A20E7C159AA0B8 V_3;
	memset((&V_3), 0, sizeof(V_3));
	AnimationState_t90091AD2757C132602279750EFF7907F066817B0 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* L_0 = ___0_serializer;
		bool L_1;
		L_1 = BufferSerializer_1_get_IsWriter_m6978D539067CE30EC81B6491589C7C30A1E16C28(L_0, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* L_2 = ___0_serializer;
		NetworkAnimator_WriteSynchronizationData_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_mA3456FEB695F9CC15E64DD92DE35A37E2A0DCDF1(__this, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC));
		il2cpp_codegen_initobj((&V_1), sizeof(AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187));
		BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* L_3 = ___0_serializer;
		il2cpp_codegen_initobj((&V_2), sizeof(ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3));
		ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 L_4 = V_2;
		BufferSerializer_1_SerializeValue_TisParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC_mA7F256E076673D43A8BCFCDB647841751F0196DE(L_3, (&V_0), L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		NetworkAnimator_UpdateParameters_m4FA30B1826C8A13F28B94B4FD36ED9F0EFCD369D(__this, (&V_0), NULL);
		BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* L_5 = ___0_serializer;
		il2cpp_codegen_initobj((&V_2), sizeof(ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3));
		ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 L_6 = V_2;
		BufferSerializer_1_SerializeValue_TisAnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187_m98CDB92B1DB4B8B097365E89BE52CC1BE7F8A719(L_5, (&V_1), L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
		AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187 L_7 = V_1;
		List_1_t80D43CC426B520567FE49EEA17C1D8FD86D6696F* L_8 = L_7.___AnimationStates;
		NullCheck(L_8);
		Enumerator_tE77DBDC5F3E4FED1452607A3D6A20E7C159AA0B8 L_9;
		L_9 = List_1_GetEnumerator_m83153DFE1C4E11A34D227E36CCD2CBABC48EA2EA(L_8, NULL);
		V_3 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0074:
			{
				Enumerator_Dispose_mA69D9CB7C92F7DFDC6BB82887D271219D07AC7FF((&V_3), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0069_1;
			}

IL_0058_1:
			{
				AnimationState_t90091AD2757C132602279750EFF7907F066817B0 L_10;
				L_10 = Enumerator_get_Current_m98B59DFF5B4E87E97FAD0D22CA521349CC953FB6_inline((&V_3), NULL);
				V_4 = L_10;
				AnimationState_t90091AD2757C132602279750EFF7907F066817B0 L_11 = V_4;
				NetworkAnimator_UpdateAnimationState_m88291953F0225B43EBC4866235E6178D235AD268(__this, L_11, NULL);
			}

IL_0069_1:
			{
				bool L_12;
				L_12 = Enumerator_MoveNext_m43F11F7B4B423C4FA00AB8BAAA0F4845ADB3DCE8((&V_3), NULL);
				if (L_12)
				{
					goto IL_0058_1;
				}
			}
			{
				goto IL_0082;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0082:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_OnSynchronize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_mAFB1747FF374942A0AB3501EDC873E4E45133C2E (NetworkAnimator_tD8BA9A86CB82706429757E0FEDA16C813A4D1148* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* ___0_serializer, const RuntimeMethod* method) 
{
	ParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_tE77DBDC5F3E4FED1452607A3D6A20E7C159AA0B8 V_3;
	memset((&V_3), 0, sizeof(V_3));
	AnimationState_t90091AD2757C132602279750EFF7907F066817B0 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* L_0 = ___0_serializer;
		bool L_1;
		L_1 = BufferSerializer_1_get_IsWriter_mA81CADE3680B019327BD43C92F4743B2140A83EB(L_0, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* L_2 = ___0_serializer;
		NetworkAnimator_WriteSynchronizationData_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m5CC9D1518284F56984451654F14C1C46DCE4BBB4(__this, L_2, NULL);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC));
		il2cpp_codegen_initobj((&V_1), sizeof(AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187));
		BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* L_3 = ___0_serializer;
		il2cpp_codegen_initobj((&V_2), sizeof(ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3));
		ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 L_4 = V_2;
		BufferSerializer_1_SerializeValue_TisParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC_mF3B6B99313E75B218B838EE496B43F5E735A6AB0(L_3, (&V_0), L_4, NULL);
		NetworkAnimator_UpdateParameters_m4FA30B1826C8A13F28B94B4FD36ED9F0EFCD369D(__this, (&V_0), NULL);
		BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* L_5 = ___0_serializer;
		il2cpp_codegen_initobj((&V_2), sizeof(ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3));
		ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 L_6 = V_2;
		BufferSerializer_1_SerializeValue_TisAnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187_m12AAB7EEDCCF9DD9FDC4BCE76D34CCCBA6641BE4(L_5, (&V_1), L_6, NULL);
		AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187 L_7 = V_1;
		List_1_t80D43CC426B520567FE49EEA17C1D8FD86D6696F* L_8 = L_7.___AnimationStates;
		NullCheck(L_8);
		Enumerator_tE77DBDC5F3E4FED1452607A3D6A20E7C159AA0B8 L_9;
		L_9 = List_1_GetEnumerator_m83153DFE1C4E11A34D227E36CCD2CBABC48EA2EA(L_8, NULL);
		V_3 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0074:
			{
				Enumerator_Dispose_mA69D9CB7C92F7DFDC6BB82887D271219D07AC7FF((&V_3), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0069_1;
			}

IL_0058_1:
			{
				AnimationState_t90091AD2757C132602279750EFF7907F066817B0 L_10;
				L_10 = Enumerator_get_Current_m98B59DFF5B4E87E97FAD0D22CA521349CC953FB6_inline((&V_3), NULL);
				V_4 = L_10;
				AnimationState_t90091AD2757C132602279750EFF7907F066817B0 L_11 = V_4;
				NetworkAnimator_UpdateAnimationState_m88291953F0225B43EBC4866235E6178D235AD268(__this, L_11, NULL);
			}

IL_0069_1:
			{
				bool L_12;
				L_12 = Enumerator_MoveNext_m43F11F7B4B423C4FA00AB8BAAA0F4845ADB3DCE8((&V_3), NULL);
				if (L_12)
				{
					goto IL_0058_1;
				}
			}
			{
				goto IL_0082;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0082:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_OnSynchronize_TisIl2CppFullySharedGenericAny_m8DF0E4A9E959743B9ED61A5F162AB9F594365025_fshared (NetworkAnimator_tD8BA9A86CB82706429757E0FEDA16C813A4D1148* __this, BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10* ___0_serializer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_tE77DBDC5F3E4FED1452607A3D6A20E7C159AA0B8 V_3;
	memset((&V_3), 0, sizeof(V_3));
	AnimationState_t90091AD2757C132602279750EFF7907F066817B0 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10* L_0 = ___0_serializer;
		bool L_1;
		L_1 = ((  bool (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10* L_2 = ___0_serializer;
		((  void (*) (NetworkAnimator_tD8BA9A86CB82706429757E0FEDA16C813A4D1148*, BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC));
		il2cpp_codegen_initobj((&V_1), sizeof(AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187));
		BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10* L_3 = ___0_serializer;
		il2cpp_codegen_initobj((&V_2), sizeof(ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3));
		ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 L_4 = V_2;
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, ParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC*, ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, (&V_0), L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		NetworkAnimator_UpdateParameters_m4FA30B1826C8A13F28B94B4FD36ED9F0EFCD369D(__this, (&V_0), NULL);
		BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10* L_5 = ___0_serializer;
		il2cpp_codegen_initobj((&V_2), sizeof(ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3));
		ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 L_6 = V_2;
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187*, ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_5, (&V_1), L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
		AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187 L_7 = V_1;
		List_1_t80D43CC426B520567FE49EEA17C1D8FD86D6696F* L_8 = L_7.___AnimationStates;
		NullCheck(L_8);
		Enumerator_tE77DBDC5F3E4FED1452607A3D6A20E7C159AA0B8 L_9;
		L_9 = List_1_GetEnumerator_m83153DFE1C4E11A34D227E36CCD2CBABC48EA2EA(L_8, NULL);
		V_3 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0074:
			{
				Enumerator_Dispose_mA69D9CB7C92F7DFDC6BB82887D271219D07AC7FF((&V_3), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0069_1;
			}

IL_0058_1:
			{
				AnimationState_t90091AD2757C132602279750EFF7907F066817B0 L_10;
				L_10 = Enumerator_get_Current_m98B59DFF5B4E87E97FAD0D22CA521349CC953FB6_inline((&V_3), NULL);
				V_4 = L_10;
				AnimationState_t90091AD2757C132602279750EFF7907F066817B0 L_11 = V_4;
				NetworkAnimator_UpdateAnimationState_m88291953F0225B43EBC4866235E6178D235AD268(__this, L_11, NULL);
			}

IL_0069_1:
			{
				bool L_12;
				L_12 = Enumerator_MoveNext_m43F11F7B4B423C4FA00AB8BAAA0F4845ADB3DCE8((&V_3), NULL);
				if (L_12)
				{
					goto IL_0058_1;
				}
			}
			{
				goto IL_0082;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0082:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_WriteSynchronizationData_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_mA3456FEB695F9CC15E64DD92DE35A37E2A0DCDF1 (NetworkAnimator_tD8BA9A86CB82706429757E0FEDA16C813A4D1148* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* ___0_serializer, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m3A20141F3BB5E34ED56057B61131956233A92440_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m52263CF56042F57A80C268A8A38D89AD866572A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC98BDD461B319F62D6EC8507108556C3E2115CB8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticInit);
	ParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	ParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC V_2;
	memset((&V_2), 0, sizeof(V_2));
	ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	bool V_8 = false;
	AnimationState_t90091AD2757C132602279750EFF7907F066817B0 V_9;
	memset((&V_9), 0, sizeof(V_9));
	AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD V_10;
	memset((&V_10), 0, sizeof(V_10));
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Dictionary_2_t6D1658640126313BDE4B1F19CE2B98BDE08F348E* V_12 = NULL;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	TransitionStateInfo_t06B15C902172AA351BC9AE9875A5D676D05FA567* V_16 = NULL;
	List_1_t608F513282432121FFB4853A1786723C4640BF7B* G_B8_0 = NULL;
	List_1_t608F513282432121FFB4853A1786723C4640BF7B* G_B7_0 = NULL;
	float G_B13_0 = 0.0f;
	float G_B12_0 = 0.0f;
	float G_B14_0 = 0.0f;
	float G_B14_1 = 0.0f;
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___m_ParametersToUpdate;
		NullCheck(L_0);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_0, NULL);
		V_1 = 0;
		goto IL_0032;
	}

IL_000f:
	{
		NativeArray_1_t2CBD21EAB7229CDAFB0E96544889F7EB97241310* L_1 = (NativeArray_1_t2CBD21EAB7229CDAFB0E96544889F7EB97241310*)(&__this->___m_CachedAnimatorParameters);
		int32_t L_2 = V_1;
		AnimatorParamCache_t8B920B60D5DFBA3F4443930387E48A47652E475D L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_ITEM(AnimatorParamCache_t8B920B60D5DFBA3F4443930387E48A47652E475D, (L_1)->___m_Buffer, L_2);
		bool L_4 = L_3.___Exclude;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = __this->___m_ParametersToUpdate;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_5, L_6, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_002e:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0032:
	{
		int32_t L_8 = V_1;
		NativeArray_1_t2CBD21EAB7229CDAFB0E96544889F7EB97241310* L_9 = (NativeArray_1_t2CBD21EAB7229CDAFB0E96544889F7EB97241310*)(&__this->___m_CachedAnimatorParameters);
		int32_t L_10;
		L_10 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_9)->___m_Length);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_000f;
		}
	}
	{
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_11 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&__this->___m_ParameterWriter);
		NetworkAnimator_WriteParameters_mD0E810D1896AA7C2172D8C1B297458A9BE2EB2A0(__this, L_11, NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(ParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC));
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_12 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&__this->___m_ParameterWriter);
		CHECKED_LOCAL_INIT(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticInit,(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = FastBufferWriter_ToArray_mC3A2B1C0D9DD5C11E08A371C70E600FC771B2E67_inline(L_12, NULL);
		(&V_2)->___Parameters = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___Parameters), (void*)L_13);
		ParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC L_14 = V_2;
		V_0 = L_14;
		BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* L_15 = ___0_serializer;
		il2cpp_codegen_initobj((&V_3), sizeof(ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3));
		ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 L_16 = V_3;
		BufferSerializer_1_SerializeValue_TisParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC_mA7F256E076673D43A8BCFCDB647841751F0196DE(L_15, (&V_0), L_16, il2cpp_rgctx_method(method->rgctx_data, 0));
		AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187* L_17 = (AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187*)(&__this->___m_AnimationMessage);
		L_17->___IsDirtyCount = 0;
		V_4 = 0;
		goto IL_0212;
	}

IL_008d:
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_18 = __this->___m_Animator;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_20;
		L_20 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_18, L_19, NULL);
		V_5 = L_20;
		List_1_t608F513282432121FFB4853A1786723C4640BF7B* L_21 = __this->___SynchronizationStateInfo;
		List_1_t608F513282432121FFB4853A1786723C4640BF7B* L_22 = L_21;
		if (L_22)
		{
			G_B8_0 = L_22;
			goto IL_00a8;
		}
		G_B7_0 = L_22;
	}
	{
		goto IL_00af;
	}

IL_00a8:
	{
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_23 = V_5;
		NullCheck(G_B8_0);
		List_1_Add_mC98BDD461B319F62D6EC8507108556C3E2115CB8_inline(G_B8_0, L_23, List_1_Add_mC98BDD461B319F62D6EC8507108556C3E2115CB8_RuntimeMethod_var);
	}

IL_00af:
	{
		int32_t L_24;
		L_24 = AnimatorStateInfo_get_fullPathHash_m583FA8FAAC28BF65A65166D100949833E515210F_inline((&V_5), NULL);
		V_6 = L_24;
		float L_25;
		L_25 = AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6_inline((&V_5), NULL);
		V_7 = L_25;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_26 = __this->___m_Animator;
		int32_t L_27 = V_4;
		NullCheck(L_26);
		bool L_28;
		L_28 = Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830(L_26, L_27, NULL);
		V_8 = L_28;
		AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187* L_29 = (AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187*)(&__this->___m_AnimationMessage);
		List_1_t80D43CC426B520567FE49EEA17C1D8FD86D6696F* L_30 = L_29->___AnimationStates;
		int32_t L_31 = V_4;
		NullCheck(L_30);
		AnimationState_t90091AD2757C132602279750EFF7907F066817B0 L_32;
		L_32 = List_1_get_Item_m61FF2551C3D4EBBD84A9CA3132542D7477ADA76E(L_30, L_31, NULL);
		V_9 = L_32;
		bool L_33 = V_8;
		if (!L_33)
		{
			goto IL_01c4;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_34 = __this->___m_Animator;
		int32_t L_35 = V_4;
		NullCheck(L_34);
		AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD L_36;
		L_36 = Animator_GetAnimatorTransitionInfo_mAB532C0834DEF3685C6E16C82B7A93B8875FC542(L_34, L_35, NULL);
		V_10 = L_36;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_37 = __this->___m_Animator;
		int32_t L_38 = V_4;
		NullCheck(L_37);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_39;
		L_39 = Animator_GetNextAnimatorStateInfo_m4661892C3F99329907EE3EE1C1FCB7974CDA2433(L_37, L_38, NULL);
		V_11 = L_39;
		float L_40;
		L_40 = AnimatorStateInfo_get_length_m2FAE317264F7C796427207F8F28E550DB49F9541_inline((&V_11), NULL);
		if ((!(((float)L_40) > ((float)(0.0f)))))
		{
			goto IL_017a;
		}
	}
	{
		float L_41;
		L_41 = AnimatorStateInfo_get_speed_m473826E53D827AEE36A7FF0662AC4817C2EF3495_inline((&V_11), NULL);
		float L_42;
		L_42 = AnimatorStateInfo_get_speedMultiplier_mA078AADECC98C266C82E2756A351235DDC63A107_inline((&V_11), NULL);
		V_13 = ((float)il2cpp_codegen_multiply(L_41, L_42));
		float L_43;
		L_43 = AnimatorStateInfo_get_length_m2FAE317264F7C796427207F8F28E550DB49F9541_inline((&V_11), NULL);
		float L_44 = V_13;
		V_14 = ((float)il2cpp_codegen_multiply(L_43, L_44));
		float L_45;
		L_45 = AnimatorTransitionInfo_get_duration_m15DB72ECD67D569CA85DA4CD46E4C92677BFF8B9_inline((&V_10), NULL);
		float L_46;
		L_46 = AnimatorTransitionInfo_get_duration_m15DB72ECD67D569CA85DA4CD46E4C92677BFF8B9_inline((&V_10), NULL);
		float L_47;
		L_47 = AnimatorTransitionInfo_get_normalizedTime_m0D107F16FB8351EBB0E8F8A4367A69916E260072_inline((&V_10), NULL);
		float L_48;
		L_48 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_45, ((float)il2cpp_codegen_multiply(L_46, L_47)), NULL);
		V_15 = ((float)il2cpp_codegen_multiply(L_48, (0.5f)));
		float L_49 = V_15;
		if ((((float)L_49) > ((float)(0.0f))))
		{
			G_B13_0 = (1.0f);
			goto IL_016c;
		}
		G_B12_0 = (1.0f);
	}
	{
		G_B14_0 = (0.0f);
		G_B14_1 = G_B12_0;
		goto IL_0171;
	}

IL_016c:
	{
		float L_50 = V_15;
		float L_51 = V_14;
		G_B14_0 = ((float)(L_50/L_51));
		G_B14_1 = G_B13_0;
	}

IL_0171:
	{
		float L_52;
		L_52 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(G_B14_1, G_B14_0, NULL);
		V_7 = L_52;
		goto IL_0181;
	}

IL_017a:
	{
		V_7 = (0.0f);
	}

IL_0181:
	{
		int32_t L_53;
		L_53 = AnimatorStateInfo_get_fullPathHash_m583FA8FAAC28BF65A65166D100949833E515210F_inline((&V_11), NULL);
		V_6 = L_53;
		Dictionary_2_tC943D56617D8B8E84F642A39D9C23D41129D8A0D* L_54 = __this->___m_DestinationStateToTransitionInfo;
		int32_t L_55 = V_4;
		NullCheck(L_54);
		bool L_56;
		L_56 = Dictionary_2_TryGetValue_m52263CF56042F57A80C268A8A38D89AD866572A9(L_54, L_55, (&V_12), Dictionary_2_TryGetValue_m52263CF56042F57A80C268A8A38D89AD866572A9_RuntimeMethod_var);
		if (!L_56)
		{
			goto IL_01c4;
		}
	}
	{
		Dictionary_2_t6D1658640126313BDE4B1F19CE2B98BDE08F348E* L_57 = V_12;
		int32_t L_58;
		L_58 = AnimatorStateInfo_get_shortNameHash_mEE816B999C282A3BA95AFC64278B994E899B7004_inline((&V_11), NULL);
		NullCheck(L_57);
		bool L_59;
		L_59 = Dictionary_2_TryGetValue_m3A20141F3BB5E34ED56057B61131956233A92440(L_57, L_58, (&V_16), Dictionary_2_TryGetValue_m3A20141F3BB5E34ED56057B61131956233A92440_RuntimeMethod_var);
		if (!L_59)
		{
			goto IL_01c4;
		}
	}
	{
		TransitionStateInfo_t06B15C902172AA351BC9AE9875A5D676D05FA567* L_60 = V_16;
		NullCheck(L_60);
		int32_t L_61 = L_60->___OriginatingState;
		V_6 = L_61;
		TransitionStateInfo_t06B15C902172AA351BC9AE9875A5D676D05FA567* L_62 = V_16;
		NullCheck(L_62);
		int32_t L_63 = L_62->___DestinationState;
		(&V_9)->___DestinationStateHash = L_63;
	}

IL_01c4:
	{
		bool L_64 = V_8;
		(&V_9)->___Transition = L_64;
		int32_t L_65 = V_6;
		(&V_9)->___StateHash = L_65;
		float L_66 = V_7;
		(&V_9)->___NormalizedTime = L_66;
		int32_t L_67 = V_4;
		(&V_9)->___Layer = L_67;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_68 = __this->___m_LayerWeights;
		int32_t L_69 = V_4;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		float L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		(&V_9)->___Weight = L_71;
		AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187* L_72 = (AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187*)(&__this->___m_AnimationMessage);
		List_1_t80D43CC426B520567FE49EEA17C1D8FD86D6696F* L_73 = L_72->___AnimationStates;
		int32_t L_74 = V_4;
		AnimationState_t90091AD2757C132602279750EFF7907F066817B0 L_75 = V_9;
		NullCheck(L_73);
		List_1_set_Item_m8AD2AC9FAB3A7D5FD7D07A068AF8F75A0F12E6FB(L_73, L_74, L_75, NULL);
		int32_t L_76 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_0212:
	{
		int32_t L_77 = V_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_78 = __this->___m_Animator;
		NullCheck(L_78);
		int32_t L_79;
		L_79 = Animator_get_layerCount_m75C20E7284800DFA0E4AD7EC23910BDB6D62BDA8(L_78, NULL);
		if ((((int32_t)L_77) < ((int32_t)L_79)))
		{
			goto IL_008d;
		}
	}
	{
		AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187* L_80 = (AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187*)(&__this->___m_AnimationMessage);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_81 = __this->___m_Animator;
		NullCheck(L_81);
		int32_t L_82;
		L_82 = Animator_get_layerCount_m75C20E7284800DFA0E4AD7EC23910BDB6D62BDA8(L_81, NULL);
		L_80->___IsDirtyCount = L_82;
		AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187* L_83 = (AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187*)(&__this->___m_AnimationMessage);
		BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* L_84 = ___0_serializer;
		BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B L_85 = (*(BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B*)L_84);
		AnimationMessage_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m23D20CD018A36929CBC0E566CA50D1B71AD6E17B(L_83, L_85, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_WriteSynchronizationData_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m5CC9D1518284F56984451654F14C1C46DCE4BBB4 (NetworkAnimator_tD8BA9A86CB82706429757E0FEDA16C813A4D1148* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* ___0_serializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m3A20141F3BB5E34ED56057B61131956233A92440_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m52263CF56042F57A80C268A8A38D89AD866572A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC98BDD461B319F62D6EC8507108556C3E2115CB8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticInit);
	ParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	ParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC V_2;
	memset((&V_2), 0, sizeof(V_2));
	ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	bool V_8 = false;
	AnimationState_t90091AD2757C132602279750EFF7907F066817B0 V_9;
	memset((&V_9), 0, sizeof(V_9));
	AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD V_10;
	memset((&V_10), 0, sizeof(V_10));
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Dictionary_2_t6D1658640126313BDE4B1F19CE2B98BDE08F348E* V_12 = NULL;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	TransitionStateInfo_t06B15C902172AA351BC9AE9875A5D676D05FA567* V_16 = NULL;
	List_1_t608F513282432121FFB4853A1786723C4640BF7B* G_B8_0 = NULL;
	List_1_t608F513282432121FFB4853A1786723C4640BF7B* G_B7_0 = NULL;
	float G_B13_0 = 0.0f;
	float G_B12_0 = 0.0f;
	float G_B14_0 = 0.0f;
	float G_B14_1 = 0.0f;
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___m_ParametersToUpdate;
		NullCheck(L_0);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_0, NULL);
		V_1 = 0;
		goto IL_0032;
	}

IL_000f:
	{
		NativeArray_1_t2CBD21EAB7229CDAFB0E96544889F7EB97241310* L_1 = (NativeArray_1_t2CBD21EAB7229CDAFB0E96544889F7EB97241310*)(&__this->___m_CachedAnimatorParameters);
		int32_t L_2 = V_1;
		AnimatorParamCache_t8B920B60D5DFBA3F4443930387E48A47652E475D L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_ITEM(AnimatorParamCache_t8B920B60D5DFBA3F4443930387E48A47652E475D, (L_1)->___m_Buffer, L_2);
		bool L_4 = L_3.___Exclude;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = __this->___m_ParametersToUpdate;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_5, L_6, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_002e:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0032:
	{
		int32_t L_8 = V_1;
		NativeArray_1_t2CBD21EAB7229CDAFB0E96544889F7EB97241310* L_9 = (NativeArray_1_t2CBD21EAB7229CDAFB0E96544889F7EB97241310*)(&__this->___m_CachedAnimatorParameters);
		int32_t L_10;
		L_10 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_9)->___m_Length);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_000f;
		}
	}
	{
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_11 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&__this->___m_ParameterWriter);
		NetworkAnimator_WriteParameters_mD0E810D1896AA7C2172D8C1B297458A9BE2EB2A0(__this, L_11, NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(ParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC));
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_12 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&__this->___m_ParameterWriter);
		CHECKED_LOCAL_INIT(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticInit,(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = FastBufferWriter_ToArray_mC3A2B1C0D9DD5C11E08A371C70E600FC771B2E67_inline(L_12, NULL);
		(&V_2)->___Parameters = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___Parameters), (void*)L_13);
		ParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC L_14 = V_2;
		V_0 = L_14;
		BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* L_15 = ___0_serializer;
		il2cpp_codegen_initobj((&V_3), sizeof(ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3));
		ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 L_16 = V_3;
		BufferSerializer_1_SerializeValue_TisParametersUpdateMessage_tA77A911264605B5AE8FE181D2A1BA78A4E2B41CC_mF3B6B99313E75B218B838EE496B43F5E735A6AB0(L_15, (&V_0), L_16, NULL);
		AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187* L_17 = (AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187*)(&__this->___m_AnimationMessage);
		L_17->___IsDirtyCount = 0;
		V_4 = 0;
		goto IL_0212;
	}

IL_008d:
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_18 = __this->___m_Animator;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_20;
		L_20 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_18, L_19, NULL);
		V_5 = L_20;
		List_1_t608F513282432121FFB4853A1786723C4640BF7B* L_21 = __this->___SynchronizationStateInfo;
		List_1_t608F513282432121FFB4853A1786723C4640BF7B* L_22 = L_21;
		if (L_22)
		{
			G_B8_0 = L_22;
			goto IL_00a8;
		}
		G_B7_0 = L_22;
	}
	{
		goto IL_00af;
	}

IL_00a8:
	{
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_23 = V_5;
		NullCheck(G_B8_0);
		List_1_Add_mC98BDD461B319F62D6EC8507108556C3E2115CB8_inline(G_B8_0, L_23, List_1_Add_mC98BDD461B319F62D6EC8507108556C3E2115CB8_RuntimeMethod_var);
	}

IL_00af:
	{
		int32_t L_24;
		L_24 = AnimatorStateInfo_get_fullPathHash_m583FA8FAAC28BF65A65166D100949833E515210F_inline((&V_5), NULL);
		V_6 = L_24;
		float L_25;
		L_25 = AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6_inline((&V_5), NULL);
		V_7 = L_25;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_26 = __this->___m_Animator;
		int32_t L_27 = V_4;
		NullCheck(L_26);
		bool L_28;
		L_28 = Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830(L_26, L_27, NULL);
		V_8 = L_28;
		AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187* L_29 = (AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187*)(&__this->___m_AnimationMessage);
		List_1_t80D43CC426B520567FE49EEA17C1D8FD86D6696F* L_30 = L_29->___AnimationStates;
		int32_t L_31 = V_4;
		NullCheck(L_30);
		AnimationState_t90091AD2757C132602279750EFF7907F066817B0 L_32;
		L_32 = List_1_get_Item_m61FF2551C3D4EBBD84A9CA3132542D7477ADA76E(L_30, L_31, NULL);
		V_9 = L_32;
		bool L_33 = V_8;
		if (!L_33)
		{
			goto IL_01c4;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_34 = __this->___m_Animator;
		int32_t L_35 = V_4;
		NullCheck(L_34);
		AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD L_36;
		L_36 = Animator_GetAnimatorTransitionInfo_mAB532C0834DEF3685C6E16C82B7A93B8875FC542(L_34, L_35, NULL);
		V_10 = L_36;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_37 = __this->___m_Animator;
		int32_t L_38 = V_4;
		NullCheck(L_37);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_39;
		L_39 = Animator_GetNextAnimatorStateInfo_m4661892C3F99329907EE3EE1C1FCB7974CDA2433(L_37, L_38, NULL);
		V_11 = L_39;
		float L_40;
		L_40 = AnimatorStateInfo_get_length_m2FAE317264F7C796427207F8F28E550DB49F9541_inline((&V_11), NULL);
		if ((!(((float)L_40) > ((float)(0.0f)))))
		{
			goto IL_017a;
		}
	}
	{
		float L_41;
		L_41 = AnimatorStateInfo_get_speed_m473826E53D827AEE36A7FF0662AC4817C2EF3495_inline((&V_11), NULL);
		float L_42;
		L_42 = AnimatorStateInfo_get_speedMultiplier_mA078AADECC98C266C82E2756A351235DDC63A107_inline((&V_11), NULL);
		V_13 = ((float)il2cpp_codegen_multiply(L_41, L_42));
		float L_43;
		L_43 = AnimatorStateInfo_get_length_m2FAE317264F7C796427207F8F28E550DB49F9541_inline((&V_11), NULL);
		float L_44 = V_13;
		V_14 = ((float)il2cpp_codegen_multiply(L_43, L_44));
		float L_45;
		L_45 = AnimatorTransitionInfo_get_duration_m15DB72ECD67D569CA85DA4CD46E4C92677BFF8B9_inline((&V_10), NULL);
		float L_46;
		L_46 = AnimatorTransitionInfo_get_duration_m15DB72ECD67D569CA85DA4CD46E4C92677BFF8B9_inline((&V_10), NULL);
		float L_47;
		L_47 = AnimatorTransitionInfo_get_normalizedTime_m0D107F16FB8351EBB0E8F8A4367A69916E260072_inline((&V_10), NULL);
		float L_48;
		L_48 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_45, ((float)il2cpp_codegen_multiply(L_46, L_47)), NULL);
		V_15 = ((float)il2cpp_codegen_multiply(L_48, (0.5f)));
		float L_49 = V_15;
		if ((((float)L_49) > ((float)(0.0f))))
		{
			G_B13_0 = (1.0f);
			goto IL_016c;
		}
		G_B12_0 = (1.0f);
	}
	{
		G_B14_0 = (0.0f);
		G_B14_1 = G_B12_0;
		goto IL_0171;
	}

IL_016c:
	{
		float L_50 = V_15;
		float L_51 = V_14;
		G_B14_0 = ((float)(L_50/L_51));
		G_B14_1 = G_B13_0;
	}

IL_0171:
	{
		float L_52;
		L_52 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(G_B14_1, G_B14_0, NULL);
		V_7 = L_52;
		goto IL_0181;
	}

IL_017a:
	{
		V_7 = (0.0f);
	}

IL_0181:
	{
		int32_t L_53;
		L_53 = AnimatorStateInfo_get_fullPathHash_m583FA8FAAC28BF65A65166D100949833E515210F_inline((&V_11), NULL);
		V_6 = L_53;
		Dictionary_2_tC943D56617D8B8E84F642A39D9C23D41129D8A0D* L_54 = __this->___m_DestinationStateToTransitionInfo;
		int32_t L_55 = V_4;
		NullCheck(L_54);
		bool L_56;
		L_56 = Dictionary_2_TryGetValue_m52263CF56042F57A80C268A8A38D89AD866572A9(L_54, L_55, (&V_12), Dictionary_2_TryGetValue_m52263CF56042F57A80C268A8A38D89AD866572A9_RuntimeMethod_var);
		if (!L_56)
		{
			goto IL_01c4;
		}
	}
	{
		Dictionary_2_t6D1658640126313BDE4B1F19CE2B98BDE08F348E* L_57 = V_12;
		int32_t L_58;
		L_58 = AnimatorStateInfo_get_shortNameHash_mEE816B999C282A3BA95AFC64278B994E899B7004_inline((&V_11), NULL);
		NullCheck(L_57);
		bool L_59;
		L_59 = Dictionary_2_TryGetValue_m3A20141F3BB5E34ED56057B61131956233A92440(L_57, L_58, (&V_16), Dictionary_2_TryGetValue_m3A20141F3BB5E34ED56057B61131956233A92440_RuntimeMethod_var);
		if (!L_59)
		{
			goto IL_01c4;
		}
	}
	{
		TransitionStateInfo_t06B15C902172AA351BC9AE9875A5D676D05FA567* L_60 = V_16;
		NullCheck(L_60);
		int32_t L_61 = L_60->___OriginatingState;
		V_6 = L_61;
		TransitionStateInfo_t06B15C902172AA351BC9AE9875A5D676D05FA567* L_62 = V_16;
		NullCheck(L_62);
		int32_t L_63 = L_62->___DestinationState;
		(&V_9)->___DestinationStateHash = L_63;
	}

IL_01c4:
	{
		bool L_64 = V_8;
		(&V_9)->___Transition = L_64;
		int32_t L_65 = V_6;
		(&V_9)->___StateHash = L_65;
		float L_66 = V_7;
		(&V_9)->___NormalizedTime = L_66;
		int32_t L_67 = V_4;
		(&V_9)->___Layer = L_67;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_68 = __this->___m_LayerWeights;
		int32_t L_69 = V_4;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		float L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		(&V_9)->___Weight = L_71;
		AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187* L_72 = (AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187*)(&__this->___m_AnimationMessage);
		List_1_t80D43CC426B520567FE49EEA17C1D8FD86D6696F* L_73 = L_72->___AnimationStates;
		int32_t L_74 = V_4;
		AnimationState_t90091AD2757C132602279750EFF7907F066817B0 L_75 = V_9;
		NullCheck(L_73);
		List_1_set_Item_m8AD2AC9FAB3A7D5FD7D07A068AF8F75A0F12E6FB(L_73, L_74, L_75, NULL);
		int32_t L_76 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_0212:
	{
		int32_t L_77 = V_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_78 = __this->___m_Animator;
		NullCheck(L_78);
		int32_t L_79;
		L_79 = Animator_get_layerCount_m75C20E7284800DFA0E4AD7EC23910BDB6D62BDA8(L_78, NULL);
		if ((((int32_t)L_77) < ((int32_t)L_79)))
		{
			goto IL_008d;
		}
	}
	{
		AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187* L_80 = (AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187*)(&__this->___m_AnimationMessage);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_81 = __this->___m_Animator;
		NullCheck(L_81);
		int32_t L_82;
		L_82 = Animator_get_layerCount_m75C20E7284800DFA0E4AD7EC23910BDB6D62BDA8(L_81, NULL);
		L_80->___IsDirtyCount = L_82;
		AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187* L_83 = (AnimationMessage_tF1A1A3CF56E776370CB13D68C38EB2433C4CC187*)(&__this->___m_AnimationMessage);
		BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* L_84 = ___0_serializer;
		BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 L_85 = (*(BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0*)L_84);
		AnimationMessage_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_mC38DB4A479EB4701AE87B6136D8143352E7C488D(L_83, L_85, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_y;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_x;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FastBufferWriter_ToArray_mC3A2B1C0D9DD5C11E08A371C70E600FC771B2E67_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticInit);
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B4_0 = NULL;
	{
		CHECKED_LOCAL_INIT(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticInit,(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0;
		L_0 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		V_1 = L_3;
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0015;
		}
		G_B1_0 = L_2;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if (L_5)
		{
			G_B3_0 = G_B1_0;
			goto IL_001a;
		}
		G_B2_0 = G_B1_0;
	}

IL_0015:
	{
		uintptr_t L_6 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = (uint8_t*)L_6;
		G_B4_0 = G_B2_0;
		goto IL_0023;
	}

IL_001a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		NullCheck(L_7);
		uintptr_t L_8 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_0 = (uint8_t*)L_8;
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		uint8_t* L_9 = V_0;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_10 = __this->___Handle;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___BufferPointer;
		CHECKED_LOCAL_INIT(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticInit,(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_12;
		L_12 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline(__this, NULL);
		int64_t L_13 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_12,NULL));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_9, (void*)L_11, L_13, NULL);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		return G_B4_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_fullPathHash_m583FA8FAAC28BF65A65166D100949833E515210F_inline (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_FullPath;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6_inline (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_NormalizedTime;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_length_m2FAE317264F7C796427207F8F28E550DB49F9541_inline (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_Length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_speed_m473826E53D827AEE36A7FF0662AC4817C2EF3495_inline (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_Speed;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_speedMultiplier_mA078AADECC98C266C82E2756A351235DDC63A107_inline (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_SpeedMultiplier;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AnimatorTransitionInfo_get_duration_m15DB72ECD67D569CA85DA4CD46E4C92677BFF8B9_inline (AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_Duration;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AnimatorTransitionInfo_get_normalizedTime_m0D107F16FB8351EBB0E8F8A4367A69916E260072_inline (AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_NormalizedTime;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		float L_2 = ___1_b;
		return L_2;
	}

IL_0006:
	{
		float L_3 = ___0_a;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_shortNameHash_mEE816B999C282A3BA95AFC64278B994E899B7004_inline (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Name;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* UnsafeUtility_ArrayElementAsRef_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_mE2EC96A1D8E6D4DF7EC659E128814755A7075557_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		int32_t L_1 = ___1_index;
		ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* L_2;
		L_2 = UnsafeUtilityInternal_ArrayElementAsRef_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_m6963A99A3BEB5DBAAC51E9BFAB6B7C5FFB1B6F7C_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* UnsafeUtility_ArrayElementAsRef_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_mC51F8EF1765EE70896955EF51C596ADDC4E896FB_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		int32_t L_1 = ___1_index;
		URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* L_2;
		L_2 = UnsafeUtilityInternal_ArrayElementAsRef_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_mF746F79DDB4E9E3AE6D6CB0BF1444F14B688DA8A_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* UnsafeUtility_ArrayElementAsRef_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m1EFB114B0998C1ECB40C7D8AF8D156995CBBB81A_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		int32_t L_1 = ___1_index;
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* L_2;
		L_2 = UnsafeUtilityInternal_ArrayElementAsRef_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m4FB830DBC0E037964D9CF80FF3A54F5BB55B1828_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* UnsafeUtility_ArrayElementAsRef_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m96D507BA80BD38725EE300102E3C10D8A40FE7CD_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		int32_t L_1 = ___1_index;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* L_2;
		L_2 = UnsafeUtilityInternal_ArrayElementAsRef_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m2A965F4CA426A546BB929C808676861734552C39_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m7A86C643E2B3050004055E36F8081C9BC174DF43_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_mFA58277CFA3A2687E5020487E60D64DBC18B9701_inline(NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_mEBD4E94BA49FB53B4CE7CD701343C838A7189795_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_m92DA789CEA357B9A0813DF7F446B13EF73AD73D6_inline(NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85_m836042FA527152AD16145FDB389BC473134931B1_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisXRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85_m308806641E8EA9A66224F74ECF0BAE4F35E0CB04_inline(NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mEA8E3E8B8BFAD90BE489F5BB5FFA40AB0FE42C8F_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_m61FA291DB4F380818713C490D42D8D2DB54205F5_inline(NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_mAF3536DC8A45B64F341A3FF9A3EB56C0C3CF9229_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m74A3F595A175C01339EC0C399A73A4581F6815B5_inline(NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m3F41B3C6E1850E30DF57CCB21C990C84A1BB0E9A_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_mBD9A9A310FE3166D59DBDC95A7D3045F53FA000F_inline(NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D_m786089F5C6721FCF3692E18D56EA105A9EDBE942_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisXRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D_mDFEF405F49BB9B54263C12621B027ABAA7F03D7B_inline(NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mB697C868BD5A34C03C1EA74873A2799A05ED5A72_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mF7148BF1F0EEC1BA8D9BB9BBC4FDE837B554AF2F_inline(NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_mCA38CDBE9F042A16A1C0E2CB2162D93972CC2CFC_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_m2EC8F6F083901CDB30B427A9774DA89B8194CDD1_inline(NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mDE47ECB8AF94BBBEA38D5817983D851D4385B11B_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mAA206F483E8A9C1A8291AB9D2B375CEE484999DC_inline(NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m6DCD64C34470921DC5ED8E8C5A215E259A7DE914_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m2AAEE729A64DBF51D7170C91EC0A436DE147E07D_inline(NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m7CA699973CAB664C38EACC8EDC294DF364004117_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_mA52E86322CB284662FE8CD2BA9CEFF26A297C164_inline(NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Capacity_m46A4E7D7799DE75073829FB2619656A3F855289C_inline (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, const RuntimeMethod* method) 
{
	{
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_0 = __this->___m_ListData;
		int32_t L_1;
		L_1 = UnsafeList_1_get_Capacity_mA1DCA5E10F5482F6DBA7EA8E7869809E866340C8_inline((UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D*)L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_m52C72F3BC7DEFF08388883BE447B5952E54055CF_inline (NativeList_1_tCE9294F8D50CBBA2C6B0936EF47668AABCBFC129* __this, const RuntimeMethod* method) 
{
	{
		UnsafeList_1_t2698BCDA35C9A619C8B06830DF4348F090657175* L_0 = __this->___m_ListData;
		int32_t L_1;
		L_1 = UnsafeList_1_get_Length_m8F291AB2831EA4C84FE9829EBA0421F9E0DA70C8_inline((UnsafeList_1_t2698BCDA35C9A619C8B06830DF4348F090657175*)L_0, NULL);
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_mF4A7022C29DC159BBF46CF1C51F98928E946DD70_inline (NativeList_1_t7E4EB94D72E542AD9AE709E29DD6C427017735C8* __this, const RuntimeMethod* method) 
{
	{
		UnsafeList_1_tAAB699F827C515727975973202558FB27BEC605E* L_0 = __this->___m_ListData;
		int32_t L_1;
		L_1 = UnsafeList_1_get_Length_m33B6B84F4FE870EEB76A3E5D94630F4A5B759E12_inline((UnsafeList_1_tAAB699F827C515727975973202558FB27BEC605E*)L_0, NULL);
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m07EB4F1158547DE8665142C592D1BB3C7053F4B7_inline (ReadOnlySpan_1_t7757FD353EBEBCCEB9A915C9409F036D59CBB91D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD* L_2;
		L_2 = il2cpp_unsafe_as_ref<PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD>((uint8_t*)L_1);
		ByReference_1_tCA902CDE792132BFB82E414335D24D0EDA9FC559 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m5CCEB612FF614DF8DE9421901729BEFE2D7B0AD6_inline (ReadOnlySpan_1_t78DDDA91D3B852BA5CC6CB683C25798669394299* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C* L_2;
		L_2 = il2cpp_unsafe_as_ref<PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C>((uint8_t*)L_1);
		ByReference_1_tAF1677F5CC47801E99D4B73A467E457CFDA063F9 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mCD7F7A19A4FE3CFC681EBB868E7A628651E990DD_inline (ReadOnlySpan_1_tDAF4105BB07ED8FF6685C401967838F0DA25C893* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE* L_2;
		L_2 = il2cpp_unsafe_as_ref<PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE>((uint8_t*)L_1);
		ByReference_1_t262F9DD539C2F73D7482B394D586E03B7CD1972B L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m4102981C4F0B49F5D18D64832CA3DA186EF3C4C9_inline (ReadOnlySpan_1_t018614F605F46379EE13B48E466D84493953A32A* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D* L_2;
		L_2 = il2cpp_unsafe_as_ref<PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D>((uint8_t*)L_1);
		ByReference_1_tDEBFA305DD44EB5DECC7D606D70182963FBA207D L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m6DBE72B9C85A2BDD00D94C4768A52BB696095FEF_inline (ReadOnlySpan_1_tE65ADDA676D9E1E10FBABBC43E6D77B76418998B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B* L_2;
		L_2 = il2cpp_unsafe_as_ref<PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B>((uint8_t*)L_1);
		ByReference_1_t2DF3BD16D90BA720C1C3CE9E5C782DD340F4E99F L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m67BC66866D73FC2ED6CF39C57F9A4862B1C65438_inline (ReadOnlySpan_1_t5D5DD3148CFA9A9039AB9D6C3D1E0E570A804E34* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C* L_2;
		L_2 = il2cpp_unsafe_as_ref<ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C>((uint8_t*)L_1);
		ByReference_1_t00FFECF7F8F9508AC295597A1250BC3A466B7FEE L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mE7136430139CEA341C562B7A7EDFE7C057793563_inline (ReadOnlySpan_1_tEF932A6C6B8BDDF6BAAED1BF091FD48169920DDC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC* L_2;
		L_2 = il2cpp_unsafe_as_ref<ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC>((uint8_t*)L_1);
		ByReference_1_t1DC25DAE18E76C99D6ED832F8777ECF86FEF8AF8 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_4 = ___0_pointer;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((uint8_t*)L_4);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_6;
		memset((&L_6), 0, sizeof(L_6));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_6), L_5);
		__this->____pointer = L_6;
		int32_t L_7 = ___1_length;
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0B7B877C8F00DCC1C95D7124B3B0D83C6D492345_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6CE8AF6F42FA98657985C680DB85747DAC856E2F_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint64_t L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA5895D44428BCE7F38A3E30CA324F5E0E599364F_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline (void* ___0_destination, int32_t ___1_index, uint64_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint64_t L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC71868C665A692778D508E69E8AF1A631E0CD348_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5AE01E222FB08F27EB26C6D2FE6F873A34BE8707_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m172AB754724D12C7E4938B1ACE01A7FF192AC73E_inline (void* ___0_destination, int32_t ___1_index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m38B84F4395041C32077D6BD505700613A549E5B2_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4E48372E1097232C60446DED043FEC5C7A61C4B0_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m824816C030A3E2FD028D3B4ECCC252E8E50DDF6E_inline (void* ___0_destination, int32_t ___1_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA724E762E40FA0C9F59E22D26CD7760418780D94_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		bool L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m504EAEDFA7F1C3551FBC5F11CFB40360033F8B84_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UnsafeUtility_ReadArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE8E8016F9D75B5FE0F784B0B6EBEF71D6B31D134_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		float L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC8BDFAFE242DB675D668D2942EFD7CE36006251C_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimationState_t90091AD2757C132602279750EFF7907F066817B0 Enumerator_get_Current_m98B59DFF5B4E87E97FAD0D22CA521349CC953FB6_inline (Enumerator_tE77DBDC5F3E4FED1452607A3D6A20E7C159AA0B8* __this, const RuntimeMethod* method) 
{
	{
		AnimationState_t90091AD2757C132602279750EFF7907F066817B0 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_9);
		return;
	}

IL_0034:
	{
		int32_t L_10 = ___0_item;
		List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mC98BDD461B319F62D6EC8507108556C3E2115CB8_inline (List_1_t608F513282432121FFB4853A1786723C4640BF7B* __this, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___0_item, const RuntimeMethod* method) 
{
	AnimatorStateInfoU5BU5D_tDEA2B6BEAFA0A4BB9DD3A7357A66365CC5B62DED* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		AnimatorStateInfoU5BU5D_tDEA2B6BEAFA0A4BB9DD3A7357A66365CC5B62DED* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		AnimatorStateInfoU5BU5D_tDEA2B6BEAFA0A4BB9DD3A7357A66365CC5B62DED* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		AnimatorStateInfoU5BU5D_tDEA2B6BEAFA0A4BB9DD3A7357A66365CC5B62DED* L_7 = V_0;
		int32_t L_8 = V_1;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2)L_9);
		return;
	}

IL_0034:
	{
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_10 = ___0_item;
		List_1_AddWithResize_m6282A828030925643699A976FC25E9208D4BA35E(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) 
{
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_2 = __this->___Handle;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Length;
		if ((((int32_t)L_1) > ((int32_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_4 = __this->___Handle;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Length;
		return L_5;
	}

IL_0024:
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_6 = __this->___Handle;
		NullCheck(L_6);
		int32_t L_7 = L_6->___Position;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline (int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* UnsafeUtilityInternal_ArrayElementAsRef_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_m6963A99A3BEB5DBAAC51E9BFAB6B7C5FFB1B6F7C_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		return (ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20*)(((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* UnsafeUtilityInternal_ArrayElementAsRef_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_mF746F79DDB4E9E3AE6D6CB0BF1444F14B688DA8A_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		return (URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9*)(((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* UnsafeUtilityInternal_ArrayElementAsRef_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m4FB830DBC0E037964D9CF80FF3A54F5BB55B1828_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		return (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805*)(((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* UnsafeUtilityInternal_ArrayElementAsRef_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m2A965F4CA426A546BB929C808676861734552C39_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		return (ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE*)(((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_mFA58277CFA3A2687E5020487E60D64DBC18B9701_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_m92DA789CEA357B9A0813DF7F446B13EF73AD73D6_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85_m308806641E8EA9A66224F74ECF0BAE4F35E0CB04_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_m61FA291DB4F380818713C490D42D8D2DB54205F5_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m74A3F595A175C01339EC0C399A73A4581F6815B5_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_mBD9A9A310FE3166D59DBDC95A7D3045F53FA000F_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D_mDFEF405F49BB9B54263C12621B027ABAA7F03D7B_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRMarker_tB71230354250D35F3BC8629A43B81E8A4BFA6C3D);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mF7148BF1F0EEC1BA8D9BB9BBC4FDE837B554AF2F_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_m2EC8F6F083901CDB30B427A9774DA89B8194CDD1_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mAA206F483E8A9C1A8291AB9D2B375CEE484999DC_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m2AAEE729A64DBF51D7170C91EC0A436DE147E07D_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_mA52E86322CB284662FE8CD2BA9CEFF26A297C164_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Capacity_m163371206E2F39354C1DF26C807700F2FDF08C8B_fshared_inline (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_capacity;
		int32_t L_1;
		L_1 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_fshared_inline (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_length;
		int32_t L_1;
		L_1 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0B7B877C8F00DCC1C95D7124B3B0D83C6D492345_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int32_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6CE8AF6F42FA98657985C680DB85747DAC856E2F_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int32_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = ___2_value;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeUtilityInternal_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA5895D44428BCE7F38A3E30CA324F5E0E599364F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint64_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint64_t L_6 = (*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC71868C665A692778D508E69E8AF1A631E0CD348_inline (void* ___0_destination, int32_t ___1_index, uint64_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint64_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint64_t L_6 = ___2_value;
		*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UnsafeUtilityInternal_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5AE01E222FB08F27EB26C6D2FE6F873A34BE8707_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m38B84F4395041C32077D6BD505700613A549E5B2_inline (void* ___0_destination, int32_t ___1_index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___2_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtilityInternal_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4E48372E1097232C60446DED043FEC5C7A61C4B0_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA724E762E40FA0C9F59E22D26CD7760418780D94_inline (void* ___0_destination, int32_t ___1_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___2_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeUtilityInternal_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m504EAEDFA7F1C3551FBC5F11CFB40360033F8B84_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(bool);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		bool L_6 = (*(bool*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UnsafeUtilityInternal_ReadArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC8BDFAFE242DB675D668D2942EFD7CE36006251C_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(float);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float L_6 = (*(float*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
