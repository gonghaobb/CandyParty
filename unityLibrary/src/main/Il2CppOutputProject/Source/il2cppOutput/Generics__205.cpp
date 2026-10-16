#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF;
struct Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E;
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
struct Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70;
struct Action_2_t67647DD70912484E9205AC38396D2849ED602730;
struct AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D;
struct AsyncOperationBase_1_t68343092B601A5CBDA605C4BBF46A2BC7014F59F;
struct AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751;
struct DelegateList_1_tACD45E40B18C717004FC47629F57F611B51C998E;
struct DelegateList_1_tC070A3D40FCD92D36D6C762C004DDB78978B4F88;
struct DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD;
struct Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE;
struct Dictionary_2_tC671E97FB5C542AA785863491CA2CF37DA59AE5D;
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0;
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
struct Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434;
struct Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7;
struct Func_2_t4413089D739AA5DDB9D744DB3B447A0246563A86;
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
struct HashSet_1_tB813E9BB87712BD40D5CDC96CDB692FCBBEB5267;
struct IEnumerable_1_tD2DF6EA151EBD4C1A34B00D12E6EDF71C2D7FF87;
struct IEnumerable_1_t7B49162831DA056A94E530D1F87645F9A0E6B656;
struct IEnumerable_1_t49D46D05C9CAED83A186A681FA4E70422E0A92EF;
struct IEnumerable_1_tC91C43EA1819EB895C7131A70B77731B6775E46C;
struct IEnumerable_1_t114D5E5E6CF4A56F768063D5EA233AED073FEF90;
struct IEnumerable_1_tE0FCEA1D747D45FA2EAAA937DC7CABC81AA82A3C;
struct IEnumerable_1_tA064DEEF811E85382EAD3383AFF68FD9F4E5913E;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerable_1_t38653E65BFB6CE747A02D783EA1BEA73B4995B2B;
struct IEnumerable_1_t4804B7A160C51B4EAD4D7AB37D81FA6D03E45F8E;
struct IEnumerable_1_t872718823D97832A53641C22943D770968336CDD;
struct IEnumerable_1_t352FDDEA001ABE8E1D67849D2E2F3D1D75B03D41;
struct IEnumerable_1_tF78C5A55C1D093F0B8CD95E0247BA2EE703D9D55;
struct IEnumerable_1_t6D5FFB1B4A97F30426C5D394135AD0D2FAEAE680;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerable_1_tE68C0EBDE2BD8CE8F4C18A6AEFB672D5B674C7DC;
struct IEnumerable_1_tB869CEDF8C7C2D9CF935980DB5D1E72C54DF5F1B;
struct IEnumerator_1_t425A9C5B0888C963EC6A4B0C0F99236EDB18F583;
struct IEnumerator_1_t977444817CF344943DE87B03641107C8F885BAB3;
struct IEnumerator_1_t50DA4E0CC6B2FCE5B13749E407B2ED432453C4F4;
struct IEnumerator_1_tBC35835C3EB76EE1C528081A97709A6EBED8A33B;
struct IEnumerator_1_tC961DE61E6FC968A1093AC937E9C23B14B61597D;
struct IEnumerator_1_t62E1C014CE192AAF3D0E63C154CDC53D78D8A17B;
struct IEnumerator_1_t8FA46572A78639B858747F8601A87E15E3AD958F;
struct IEnumerator_1_t932A71AE131987A587CB330B9D5FF14DD6D7F622;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_t29A8CA7355FCD9DC17EBB7F096703BD8AD63C49F;
struct IEnumerator_1_t00A2C2D58A4802A7EC9814C0D007E9C7A5DFE52D;
struct IEnumerator_1_t1302B886C06D4CDCC86AD1923C91991509E47E6D;
struct IEnumerator_1_t736E9F8BD2FD38A5E9EA2E8A510AFED788D05010;
struct IEnumerator_1_t737E5D96E5E3657734509E507812DBA5E7EDD547;
struct IEnumerator_1_tB41B292FAFD525FC5C54D7E469F0BA1A193CA8B1;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_tB9C3929E93FDD987A623AE6EA71479718DEDDE7C;
struct IEnumerator_1_tAB17DB1459F45B67DF7512E19425B26C4B6A9407;
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4;
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
struct ListWithEvents_1_tE17E3C4786AF60909D570A474EDAB620896FF2FB;
struct ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF;
struct List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843;
struct List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C;
struct List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307;
struct ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B;
struct Queue_1_t541F36B96C754EC0884473F496C69455654CE269;
struct Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D;
struct Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC;
struct Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73;
struct Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D;
struct Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8;
struct Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D;
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E;
struct Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9;
struct Queue_1_t1128269E1155A77715448252CF09883B35E2D83C;
struct Queue_1_tD0B32970076D62B677279D96972006677EEE25A7;
struct Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153;
struct Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850;
struct Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF;
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41;
struct Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A;
struct Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF;
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
struct TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970;
struct BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A;
struct BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1;
struct BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C;
struct SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343;
struct ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389;
struct ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331;
struct AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A;
struct GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC;
struct NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C;
struct ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F;
struct NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152;
struct TypeU5BU5D_t386A95FC3A42CDDC6693AD26E6C6B717BEFC82B3;
struct AccessibilityNode_t9998B596BE3A0232C1CFE3B2610DF52E0338A49A;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct IAllocationStrategy_tBA79AEDCB2794BBB55BCD903B96EFBBB77583D77;
struct IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067;
struct IOperationCacheKey_t39BE25F281EA1D574F074D55F4CAF08F13DF3CCA;
struct IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C;
struct IResourceProvider_tAD356B19CE0730462C3D5B6E7FBAD905342B9247;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tFE6CE62D67D61F940F6BF8AE9D22B703E0E83BC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t62E1C014CE192AAF3D0E63C154CDC53D78D8A17B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IResourceProvider_tAD356B19CE0730462C3D5B6E7FBAD905342B9247_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05610D25C7DBBDB071AEA3EBE257EB80F7BE35A9;
IL2CPP_EXTERN_C String_t* _stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25;
IL2CPP_EXTERN_C String_t* _stringLiteral50FBAEBA1E034B056BB4A216B2BE8DC46B7EE5F4;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70;
IL2CPP_EXTERN_C String_t* _stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_Acquire_mCDDF68BFF0F5C6450044727445B62722A15BDC0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_InternalGetDownloadStatus_mB5722FDD78A3C1070EB8D85F52C41FF1D22DAA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_Release_mF6710B199D5B6D484B6133E8BD599EF5ADD33BD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_WaitForCompletion_m79B9DA519122674BFB51B968E6E7C94B04D1267B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_get_IsDone_m5CE276DB16D5DC467F8DC24D48C1F9673A3B6786_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_get_OperationException_m45DB51ADF168EF07BEAFFD24D5A6ECAB7DE916AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_get_Status_m2826D9CA9BE09868CC0A611B33DFE15B03C1F047_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAD1782419344B04D36CFECF62A116E94574A3413_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke;

struct BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A;
struct BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1;
struct BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C;
struct ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389;
struct ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331;
struct AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562;
struct EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A;
struct GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC;
struct NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C;
struct ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F;
struct NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EmptyArray_1_t9289360F3663B1BEC27F229FEE8182AC045C931B  : public RuntimeObject
{
};
struct EmptyArray_1_t49961B2AD665FD8980AA9E0EF8868CF9738D9F4F  : public RuntimeObject
{
};
struct EmptyArray_1_t734A9B12F7D1FAA24DA75420A14E9084FD420625  : public RuntimeObject
{
};
struct EmptyArray_1_t849D96721854622FBB927351A0174ADAC0B239F9  : public RuntimeObject
{
};
struct EmptyArray_1_t692B58AFAED6F55B45924E251B036A18DA20E251  : public RuntimeObject
{
};
struct EmptyArray_1_t6CAC2B30CBBB3DF2C0516D226F177A7023251E16  : public RuntimeObject
{
};
struct EmptyArray_1_t386DAC36B5BCF1BFA38347278C84233B9D2B7A95  : public RuntimeObject
{
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F  : public RuntimeObject
{
};
struct EmptyArray_1_t0D07744D06CBE1D5EFB0F376FCD9DE664680DB24  : public RuntimeObject
{
};
struct EmptyArray_1_t196EE387A43D25F791B9DE12BA2836EE54C33DBE  : public RuntimeObject
{
};
struct EmptyArray_1_tC3101D21B01AAD70B5DC5FEAD1EA8BFE6D84A621  : public RuntimeObject
{
};
struct EmptyArray_1_t2984B8F74E4B1E6C047125D296C6C06779CA328D  : public RuntimeObject
{
};
struct EmptyArray_1_t77BFDB090CFC6AE661834F0BD4ED43833F4F079D  : public RuntimeObject
{
};
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5  : public RuntimeObject
{
};
struct EmptyArray_1_tD26FE3075DC228BE87FC137E462D9B9D87345E09  : public RuntimeObject
{
};
struct EmptyArray_1_t056A375939E428E7C9460D3E2642DBDD3FD61751  : public RuntimeObject
{
};
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843  : public RuntimeObject
{
	AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct QueueDebugView_1_t8BB38E64819624DE272D7E28A299B19F779A6D9E  : public RuntimeObject
{
};
struct Queue_1_t541F36B96C754EC0884473F496C69455654CE269  : public RuntimeObject
{
	BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D  : public RuntimeObject
{
	BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC  : public RuntimeObject
{
	BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73  : public RuntimeObject
{
	ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D  : public RuntimeObject
{
	ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8  : public RuntimeObject
{
	EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D  : public RuntimeObject
{
	GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9  : public RuntimeObject
{
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t1128269E1155A77715448252CF09883B35E2D83C  : public RuntimeObject
{
	NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tD0B32970076D62B677279D96972006677EEE25A7  : public RuntimeObject
{
	ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153  : public RuntimeObject
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850  : public RuntimeObject
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A  : public RuntimeObject
{
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF  : public RuntimeObject
{
	NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D  : public RuntimeObject
{
	Func_2_t4413089D739AA5DDB9D744DB3B447A0246563A86* ___U3CInternalIdTransformFuncU3Ek__BackingField;
	Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* ___U3CWebRequestOverrideU3Ek__BackingField;
	bool ___CallbackHooksEnabled;
	ListWithEvents_1_tE17E3C4786AF60909D570A474EDAB620896FF2FB* ___m_ResourceProviders;
	RuntimeObject* ___m_allocator;
	ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF* ___m_UpdateReceivers;
	List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1* ___m_UpdateReceiversToRemove;
	bool ___m_UpdatingReceivers;
	bool ___m_InsideUpdateMethod;
	Dictionary_2_tC671E97FB5C542AA785863491CA2CF37DA59AE5D* ___m_providerMap;
	Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE* ___m_AssetOperationCache;
	HashSet_1_tB813E9BB87712BD40D5CDC96CDB692FCBBEB5267* ___m_TrackedInstanceOperations;
	DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* ___m_UpdateCallbacks;
	List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C* ___m_DeferredCompleteCallbacks;
	bool ___m_InsideExecuteDeferredCallbacksMethod;
	List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* ___m_DeferredCallbacksToRegister;
	Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* ___m_ReleaseOpNonCached;
	Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* ___m_ReleaseOpCached;
	Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* ___m_ReleaseInstanceOp;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___U3CCertificateHandlerInstanceU3Ek__BackingField;
	bool ___m_RegisteredForCallbacks;
	Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* ___m_ProviderOperationTypeCache;
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
struct AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 
{
	AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D* ___m_InternalOp;
	int32_t ___m_Version;
	String_t* ___m_LocationName;
};
struct AsyncOperationHandle_1_t1C528FE6811277600BF62A159B485F4FFABFA222 
{
	AsyncOperationBase_1_t68343092B601A5CBDA605C4BBF46A2BC7014F59F* ___m_InternalOp;
	int32_t ___m_Version;
	String_t* ___m_LocationName;
};
struct AsyncOperationHandle_1_tA8880E46029B4940231544D15BD46E6C5AAAFE65 
{
	AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751* ___m_InternalOp;
	int32_t ___m_Version;
	String_t* ___m_LocationName;
};
struct BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___MeasurementParent;
	int32_t ___ItemId;
	float ___Item;
	double ___TimeSent;
};
struct Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 
{
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ____q;
	int32_t ____version;
	int32_t ____index;
	int32_t ____currentElement;
};
struct Enumerator_t2D4422D03B66E15DB324EDDEC9B8B8BE994B2ACE 
{
	Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* ____q;
	int32_t ____version;
	int32_t ____index;
	float ____currentElement;
};
struct Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891 
{
	Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* ____q;
	int32_t ____version;
	int32_t ____index;
	uint32_t ____currentElement;
};
struct Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1 
{
	Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* ____q;
	int32_t ____version;
	int32_t ____index;
	Il2CppSharedGenericObject* ____currentElement;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C;
struct QuaternionCompositeComparer_t021E6DC8E7FE8C9C8CC75C2512807E2F9ACA4E33 
{
	union
	{
		struct
		{
		};
		uint8_t QuaternionCompositeComparer_tB9B33B549A8BC21247D26B8DFC6C150150CDB4AA__padding[1];
	};
};
struct QuaternionCompositeComparer_t226CF0226C9A2F5DA3083FF966A2A8328E1B140B 
{
	union
	{
		struct
		{
		};
		uint8_t QuaternionCompositeComparer_tB9B33B549A8BC21247D26B8DFC6C150150CDB4AA__padding[1];
	};
};
struct ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 
{
	uint32_t ___Item1;
	uint32_t ___Item2;
};
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D 
{
	RuntimeObject* ___m_InternalOp;
	int32_t ___m_Version;
	String_t* ___m_LocationName;
};
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke
{
	RuntimeObject* ___m_InternalOp;
	int32_t ___m_Version;
	char* ___m_LocationName;
};
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com
{
	RuntimeObject* ___m_InternalOp;
	int32_t ___m_Version;
	Il2CppChar* ___m_LocationName;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E 
{
	int64_t ___Value;
};
struct DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D 
{
	int64_t ___TotalBytes;
	int64_t ___DownloadedBytes;
	bool ___IsDone;
};
struct DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_pinvoke
{
	int64_t ___TotalBytes;
	int64_t ___DownloadedBytes;
	int32_t ___IsDone;
};
struct DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_com
{
	int64_t ___TotalBytes;
	int64_t ___DownloadedBytes;
	int32_t ___IsDone;
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
struct EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD 
{
	uint32_t ____state;
};
struct GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 
{
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_Tags;
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___m_Info;
};
struct GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7_marshaled_pinvoke
{
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_Tags;
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___m_Info;
};
struct GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7_marshaled_com
{
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_Tags;
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___m_Info;
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
struct ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631 
{
	int32_t ___m_Version;
	RuntimeObject* ___m_InternalOp;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_ResourceManager;
};
struct ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_pinvoke
{
	int32_t ___m_Version;
	RuntimeObject* ___m_InternalOp;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_ResourceManager;
};
struct ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_com
{
	int32_t ___m_Version;
	RuntimeObject* ___m_InternalOp;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_ResourceManager;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 
{
	uint64_t ___NetworkId;
	float ___ReleaseTime;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
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
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 
{
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ___Ancestors;
	String_t* ___VersionString;
	Type_t* ___ModelType;
};
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke* ___Ancestors;
	char* ___VersionString;
	Type_t* ___ModelType;
};
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com* ___Ancestors;
	Il2CppChar* ___VersionString;
	Type_t* ___ModelType;
};
struct ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 
{
	uint32_t ____state;
};
struct U3CbuttonsU3Ee__FixedBuffer_t32316838CB3560CC83CB36DE00B3352EF9FF122F 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CbuttonsU3Ee__FixedBuffer_t32316838CB3560CC83CB36DE00B3352EF9FF122F__padding[40];
	};
};
struct BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___MeasurementParent;
	int32_t ___ItemId;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Item;
	double ___TimeSent;
};
struct BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___MeasurementParent;
	int32_t ___ItemId;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Item;
	double ___TimeSent;
};
struct Enumerator_tC96CE84B09FB9FC6E4EFEE6D5C06D5EF1B71B9B5 
{
	Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* ____q;
	int32_t ____version;
	int32_t ____index;
	BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B ____currentElement;
};
struct Enumerator_t125C05E9FF652475E0BCF0E4A90A0DF5E495FD8C 
{
	Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* ____q;
	int32_t ____version;
	int32_t ____index;
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ____currentElement;
};
struct Enumerator_tCF6A1348051624B29431EFA1119C303ECE490753 
{
	Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* ____q;
	int32_t ____version;
	int32_t ____index;
	GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 ____currentElement;
};
struct Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B 
{
	Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* ____q;
	int32_t ____version;
	int32_t ____index;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ____currentElement;
};
struct Enumerator_t3C2A019B409CEB54CD6349665DC33F8292D54B5E 
{
	Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* ____q;
	int32_t ____version;
	int32_t ____index;
	ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 ____currentElement;
};
struct Enumerator_t46A96D1902EB6E630D5DAADD490183C6117140EB 
{
	Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* ____q;
	int32_t ____version;
	int32_t ____index;
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ____currentElement;
};
struct ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 
{
	int32_t ___Item1;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___Item2;
};
struct AsyncOperationStatus_t1D89963C21E9A4C34EF3312FDFE60060339C2A88 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct EventSource_t395F7AD9932CE73777C8DB122DE6638A61AAA07E 
{
	int32_t ___value__;
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
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	int32_t ___value__;
};
struct ProviderBehaviourFlags_t9746DB555DCE3A375EC29BD12E12C2C549CC6E63 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SceneHandle_t4C3B517546B91EF78A6ED15DDC6C54AB5E03D8A3 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_Value;
};
struct Notification_tED870867AF530FAEB6362B7549AE12223A56C542 
{
	uint8_t ___value__;
};
struct Command_t8AE6C32AB4C4E5FC4B8C77082D0EE5275B3414B9 
{
	int32_t ___value__;
};
struct Type_t978C0427FF2CB3DE1CC7BB6CC19BAC9005EC519D 
{
	int32_t ___value__;
};
struct Type_tDE4005CDD70E001C9402FEE8D2F2431154FED092 
{
	int32_t ___value__;
};
struct ButtonsState_tDD5A3F9241886C7E1BA2975DF6E7045C321583E3 
{
	U3CbuttonsU3Ee__FixedBuffer_t32316838CB3560CC83CB36DE00B3352EF9FF122F ___buttons;
};
struct Type_tBD67F20EC8969784B5377C5DC8F261E207A14792 
{
	int32_t ___value__;
};
struct Direction_tCF5F04CE76DF556D8ABCA537FC7C977681A14996 
{
	int32_t ___value__;
};
struct Type_tDA196B70B848DC5CD4982EBF31E0945B199A68C7 
{
	int32_t ___value__;
};
struct Button_tA3E7AF5F245F630CB38476BAB013B509F53B35B8 
{
	uint32_t ___value__;
};
struct Type_tAD126B1DC1FD450FB4C782B18131374A55C28858 
{
	int32_t ___value__;
};
struct AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751 : public RuntimeObject {};
struct Enumerator_t46E99F03F8FD9AA09E082FAC4B9EAA28B317595E 
{
	Queue_1_t541F36B96C754EC0884473F496C69455654CE269* ____q;
	int32_t ____version;
	int32_t ____index;
	BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 ____currentElement;
};
struct Enumerator_t691F16C68346C86A806E537EAA594F815F1A67F5 
{
	Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* ____q;
	int32_t ____version;
	int32_t ____index;
	BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 ____currentElement;
};
struct Enumerator_tF5E6D2CF41C59A70D02DEBEDEAD60CE503DA841F 
{
	Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* ____q;
	int32_t ____version;
	int32_t ____index;
	ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 ____currentElement;
};
struct CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F 
{
	int32_t ___type;
	int32_t ___command;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 
{
	int32_t ___type;
	int32_t ___keyCode;
	ButtonsState_tDD5A3F9241886C7E1BA2975DF6E7045C321583E3 ___buttonsState;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD 
{
	int32_t ___type;
	int32_t ___direction;
	bool ___shouldBeUsed;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___direction;
	int32_t ___shouldBeUsed;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_com
{
	int32_t ___type;
	int32_t ___direction;
	int32_t ___shouldBeUsed;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D 
{
	SceneHandle_t4C3B517546B91EF78A6ED15DDC6C54AB5E03D8A3 ___m_Handle;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___worldOrientation;
	float ___maxDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	bool ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___worldOrientation;
	float ___maxDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	int32_t ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_com
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___worldOrientation;
	float ___maxDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	int32_t ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A 
{
	Il2CppChar ___character;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_pinvoke
{
	uint8_t ___character;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_com
{
	uint8_t ___character;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A 
{
	AccessibilityNode_t9998B596BE3A0232C1CFE3B2610DF52E0338A49A* ___U3CfocusedNodeU3Ek__BackingField;
	float ___U3CfontScaleU3Ek__BackingField;
	bool ___U3CisBoldTextEnabledU3Ek__BackingField;
	bool ___U3CisClosedCaptioningEnabledU3Ek__BackingField;
	bool ___U3CisScreenReaderEnabledU3Ek__BackingField;
	uint8_t ___U3CnotificationU3Ek__BackingField;
};
struct NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_marshaled_pinvoke
{
	AccessibilityNode_t9998B596BE3A0232C1CFE3B2610DF52E0338A49A* ___U3CfocusedNodeU3Ek__BackingField;
	float ___U3CfontScaleU3Ek__BackingField;
	int32_t ___U3CisBoldTextEnabledU3Ek__BackingField;
	int32_t ___U3CisClosedCaptioningEnabledU3Ek__BackingField;
	int32_t ___U3CisScreenReaderEnabledU3Ek__BackingField;
	uint8_t ___U3CnotificationU3Ek__BackingField;
};
struct NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_marshaled_com
{
	AccessibilityNode_t9998B596BE3A0232C1CFE3B2610DF52E0338A49A* ___U3CfocusedNodeU3Ek__BackingField;
	float ___U3CfontScaleU3Ek__BackingField;
	int32_t ___U3CisBoldTextEnabledU3Ek__BackingField;
	int32_t ___U3CisClosedCaptioningEnabledU3Ek__BackingField;
	int32_t ___U3CisScreenReaderEnabledU3Ek__BackingField;
	uint8_t ___U3CnotificationU3Ek__BackingField;
};
struct Enumerator_t351DC2DCB37605FA3E4D39DD9EB14A8950BF9CEC 
{
	Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* ____q;
	int32_t ____version;
	int32_t ____index;
	NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D ____currentElement;
};
struct Enumerator_t6366B8DEAF63A586D589D8598AE169C872E71AB1 
{
	Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* ____q;
	int32_t ____version;
	int32_t ____index;
	NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A ____currentElement;
};
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};
struct Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434  : public MulticastDelegate_t
{
};
struct Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7  : public MulticastDelegate_t
{
};
struct ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B : public RuntimeObject {};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ____type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ____type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____managedEvent_OffsetPadding[8];
			RuntimeObject* ____managedEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____managedEvent_OffsetPadding_forAlignmentOnly[8];
			RuntimeObject* ____managedEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____keyEvent_OffsetPadding[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____keyEvent_OffsetPadding_forAlignmentOnly[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____pointerEvent_OffsetPadding[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 ____pointerEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____pointerEvent_OffsetPadding_forAlignmentOnly[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 ____pointerEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____textInputEvent_OffsetPadding[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A ____textInputEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____textInputEvent_OffsetPadding_forAlignmentOnly[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A ____textInputEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____commandEvent_OffsetPadding[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____commandEvent_OffsetPadding_forAlignmentOnly[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____navigationEvent_OffsetPadding[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD ____navigationEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____navigationEvent_OffsetPadding_forAlignmentOnly[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD ____navigationEvent_forAlignmentOnly;
		};
	};
};
struct Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ____type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ____type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____managedEvent_OffsetPadding[8];
			Il2CppIUnknown* ____managedEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____managedEvent_OffsetPadding_forAlignmentOnly[8];
			Il2CppIUnknown* ____managedEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____keyEvent_OffsetPadding[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____keyEvent_OffsetPadding_forAlignmentOnly[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____pointerEvent_OffsetPadding[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_pinvoke ____pointerEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____pointerEvent_OffsetPadding_forAlignmentOnly[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_pinvoke ____pointerEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____textInputEvent_OffsetPadding[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_pinvoke ____textInputEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____textInputEvent_OffsetPadding_forAlignmentOnly[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_pinvoke ____textInputEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____commandEvent_OffsetPadding[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____commandEvent_OffsetPadding_forAlignmentOnly[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____navigationEvent_OffsetPadding[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_pinvoke ____navigationEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____navigationEvent_OffsetPadding_forAlignmentOnly[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_pinvoke ____navigationEvent_forAlignmentOnly;
		};
	};
};
struct Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ____type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ____type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____managedEvent_OffsetPadding[8];
			Il2CppIUnknown* ____managedEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____managedEvent_OffsetPadding_forAlignmentOnly[8];
			Il2CppIUnknown* ____managedEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____keyEvent_OffsetPadding[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____keyEvent_OffsetPadding_forAlignmentOnly[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____pointerEvent_OffsetPadding[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_com ____pointerEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____pointerEvent_OffsetPadding_forAlignmentOnly[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_com ____pointerEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____textInputEvent_OffsetPadding[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_com ____textInputEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____textInputEvent_OffsetPadding_forAlignmentOnly[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_com ____textInputEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____commandEvent_OffsetPadding[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____commandEvent_OffsetPadding_forAlignmentOnly[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____navigationEvent_OffsetPadding[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_com ____navigationEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____navigationEvent_OffsetPadding_forAlignmentOnly[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_com ____navigationEvent_forAlignmentOnly;
		};
	};
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 
{
	Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* ____q;
	int32_t ____version;
	int32_t ____index;
	Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 ____currentElement;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct EmptyArray_1_t9289360F3663B1BEC27F229FEE8182AC045C931B_StaticFields
{
	BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* ___Value;
};
struct EmptyArray_1_t49961B2AD665FD8980AA9E0EF8868CF9738D9F4F_StaticFields
{
	BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* ___Value;
};
struct EmptyArray_1_t734A9B12F7D1FAA24DA75420A14E9084FD420625_StaticFields
{
	BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* ___Value;
};
struct EmptyArray_1_t849D96721854622FBB927351A0174ADAC0B239F9_StaticFields
{
	ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* ___Value;
};
struct EmptyArray_1_t692B58AFAED6F55B45924E251B036A18DA20E251_StaticFields
{
	ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* ___Value;
};
struct EmptyArray_1_t6CAC2B30CBBB3DF2C0516D226F177A7023251E16_StaticFields
{
	EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* ___Value;
};
struct EmptyArray_1_t386DAC36B5BCF1BFA38347278C84233B9D2B7A95_StaticFields
{
	GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* ___Value;
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Value;
};
struct EmptyArray_1_t0D07744D06CBE1D5EFB0F376FCD9DE664680DB24_StaticFields
{
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* ___Value;
};
struct EmptyArray_1_t196EE387A43D25F791B9DE12BA2836EE54C33DBE_StaticFields
{
	NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* ___Value;
};
struct EmptyArray_1_tC3101D21B01AAD70B5DC5FEAD1EA8BFE6D84A621_StaticFields
{
	ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* ___Value;
};
struct EmptyArray_1_t2984B8F74E4B1E6C047125D296C6C06779CA328D_StaticFields
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___Value;
};
struct EmptyArray_1_t77BFDB090CFC6AE661834F0BD4ED43833F4F079D_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___Value;
};
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___Value;
};
struct EmptyArray_1_tD26FE3075DC228BE87FC137E462D9B9D87345E09_StaticFields
{
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ___Value;
};
struct EmptyArray_1_t056A375939E428E7C9460D3E2642DBDD3FD61751_StaticFields
{
	NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* ___Value;
};
struct List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843_StaticFields
{
	AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562* ___s_emptyArray;
};
struct ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_StaticFields
{
	Action_2_t67647DD70912484E9205AC38396D2849ED602730* ___U3CExceptionHandlerU3Ek__BackingField;
	int32_t ___s_GroupOperationTypeHash;
	int32_t ___s_InstanceOperationTypeHash;
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
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
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
struct Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_StaticFields
{
	TypeU5BU5D_t386A95FC3A42CDDC6693AD26E6C6B717BEFC82B3* ___TypesWithState;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A  : public RuntimeArray
{
	ALIGN_FIELD (8) BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 m_Items[1];

	inline BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___MeasurementParent), (void*)NULL);
	}
	inline BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___MeasurementParent), (void*)NULL);
	}
};
struct BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1  : public RuntimeArray
{
	ALIGN_FIELD (8) BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B m_Items[1];

	inline BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___MeasurementParent), (void*)NULL);
	}
	inline BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___MeasurementParent), (void*)NULL);
	}
};
struct BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C  : public RuntimeArray
{
	ALIGN_FIELD (8) BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 m_Items[1];

	inline BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___MeasurementParent), (void*)NULL);
	}
	inline BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___MeasurementParent), (void*)NULL);
	}
};
struct ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389  : public RuntimeArray
{
	ALIGN_FIELD (8) ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 m_Items[1];

	inline ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Item2))->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Item2))->___m_LocationName), (void*)NULL);
		#endif
	}
	inline ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Item2))->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Item2))->___m_LocationName), (void*)NULL);
		#endif
	}
};
struct ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331  : public RuntimeArray
{
	ALIGN_FIELD (8) ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 m_Items[1];

	inline ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 value)
	{
		m_Items[index] = value;
	}
};
struct EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A  : public RuntimeArray
{
	ALIGN_FIELD (8) Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 m_Items[1];

	inline Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____managedEvent), (void*)NULL);
	}
	inline Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____managedEvent), (void*)NULL);
	}
};
struct GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2  : public RuntimeArray
{
	ALIGN_FIELD (8) GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 m_Items[1];

	inline GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Tags), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Info), (void*)NULL);
		#endif
	}
	inline GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Tags), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Info), (void*)NULL);
		#endif
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
struct JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC  : public RuntimeArray
{
	ALIGN_FIELD (8) JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 m_Items[1];

	inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 value)
	{
		m_Items[index] = value;
	}
};
struct NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C  : public RuntimeArray
{
	ALIGN_FIELD (8) NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D m_Items[1];

	inline NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D value)
	{
		m_Items[index] = value;
	}
};
struct ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD  : public RuntimeArray
{
	ALIGN_FIELD (8) ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 m_Items[1];

	inline ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 value)
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
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F  : public RuntimeArray
{
	ALIGN_FIELD (8) fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 m_Items[1];

	inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Ancestors), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___VersionString), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ModelType), (void*)NULL);
		#endif
	}
	inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Ancestors), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___VersionString), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ModelType), (void*)NULL);
		#endif
	}
};
struct NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152  : public RuntimeArray
{
	ALIGN_FIELD (8) NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A m_Items[1];

	inline NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CfocusedNodeU3Ek__BackingField), (void*)NULL);
	}
	inline NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CfocusedNodeU3Ek__BackingField), (void*)NULL);
	}
};
struct AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562  : public RuntimeArray
{
	ALIGN_FIELD (8) AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D m_Items[1];

	inline AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_LocationName), (void*)NULL);
		#endif
	}
	inline AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_LocationName), (void*)NULL);
		#endif
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D Func_1_Invoke_m4AD1EF42FEA65A73A0F97B32AEAA011ACD11834A_inline (Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_1_IsValid_m51391A3D1B19BA409CAF88AA386A8EEAC5496C76_gshared (AsyncOperationHandle_1_t1C528FE6811277600BF62A159B485F4FFABFA222* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_1_get_IsDone_mA62617BF5EED4764A6CDE680487591ADE555EFAC_gshared (AsyncOperationHandle_1_t1C528FE6811277600BF62A159B485F4FFABFA222* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AsyncOperationHandle_1_WaitForCompletion_m799DDFA35954AD4E5A43FAD68252156477058BAC_gshared (AsyncOperationHandle_1_t1C528FE6811277600BF62A159B485F4FFABFA222* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D AsyncOperationHandle_1_InternalGetDownloadStatus_m4EC6D5A222739A1E7F5F63E06A624D77EA9AD2DF_gshared (AsyncOperationHandle_1_t1C528FE6811277600BF62A159B485F4FFABFA222* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_visited, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D AsyncOperationHandle_1_op_Implicit_m1EEE8EEC9C46FCB389269497FDA4E3F008E92595_fshared (AsyncOperationHandle_1_tA8880E46029B4940231544D15BD46E6C5AAAFE65 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mAD1782419344B04D36CFECF62A116E94574A3413_inline (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_1_Release_m2A2A6453E03B79682BD9685D7FC2248F3D413612_gshared (AsyncOperationHandle_1_t1C528FE6811277600BF62A159B485F4FFABFA222* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AsyncOperationHandle_1_get_Result_mC2386A2CB653CE837E9AB155929AEF324C801B12_gshared (AsyncOperationHandle_1_t1C528FE6811277600BF62A159B485F4FFABFA222* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOperationHandle_1_get_Status_m7263EBA23A984338AC22197EAFC376FA1FF1624E_gshared (AsyncOperationHandle_1_t1C528FE6811277600BF62A159B485F4FFABFA222* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* AsyncOperationHandle_1_get_OperationException_m5234C52599574E007B75662E9023D4F63A2A7CF3_gshared (AsyncOperationHandle_1_t1C528FE6811277600BF62A159B485F4FFABFA222* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_t1C528FE6811277600BF62A159B485F4FFABFA222 AsyncOperationHandle_1_Acquire_m92F0E015E232C50D90E3900DDE2B7B9805F82710_gshared (AsyncOperationHandle_1_t1C528FE6811277600BF62A159B485F4FFABFA222* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuaternionCompositeComparer_Compare_m48A2A3D93D4585D34F05490E96B4C8581DB7B69F_fshared (QuaternionCompositeComparer_t226CF0226C9A2F5DA3083FF966A2A8328E1B140B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_x, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* Array_Empty_TisBufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793_m0D7F90E8CD9C0D7D1A733617A36635B37970D8C5_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* EnumerableHelpers_ToArray_TisBufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793_m678B85F1B636E69DE42373DE67DBAB95DA0BDC20 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m6BA072E9C2FE6C9614AB80E10F400F0D6F2DD777 (Queue_1_t541F36B96C754EC0884473F496C69455654CE269* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m1C585271003ACB43BE431E92440032A665D2EC2D (Enumerator_t46E99F03F8FD9AA09E082FAC4B9EAA28B317595E* __this, Queue_1_t541F36B96C754EC0884473F496C69455654CE269* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mDE2F65BDCFC28E52E77A765B34CD2A55E5D8202A (Queue_1_t541F36B96C754EC0884473F496C69455654CE269* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisBufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793_m5B672F7D3E238781884D50B658AD06DF1758DB1F (BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* ___0_array, BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* Array_Empty_TisBufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B_mA24712B06D4578AC3F65B5E3D404D871123788A1_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* EnumerableHelpers_ToArray_TisBufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B_mED38FD2BE6BBDD99097FEA513FE4AB458CAA7CF9 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mACF1500C52CD9E9E928C948F14F6346D4A035F15 (Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m2C4512CBD823F31822BC1F50692A3339E7E3C4D3 (Enumerator_tC96CE84B09FB9FC6E4EFEE6D5C06D5EF1B71B9B5* __this, Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mBB9DA4562EF938AA789110CD3008C76E06AE7011 (Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisBufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B_mC8D470CDF178A0AFC22C83EA1DE47399AD4135F6 (BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* ___0_array, BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* Array_Empty_TisBufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0_mF8AC95694454B9962BA620CED398EA67DA55087E_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* EnumerableHelpers_ToArray_TisBufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0_mAB61BC50526A4A3D1ED7E6A193B491E28078C10A (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mB3810752CD73FDDE5EB97A20296D7C88222E8AD5 (Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m10A58E43FA559516B0CE22FE4DF3F3299780C2F5 (Enumerator_t691F16C68346C86A806E537EAA594F815F1A67F5* __this, Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mBB50DA3EC9C11E4ABD93A06507FDE60366055A9B (Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisBufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0_mAF622962C6F9EE7BDA8F17B5A091B83F9FD67493 (BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* ___0_array, BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* Array_Empty_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m244C4902DCD6DA9F9BAAE5D0BD965581BE165229_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* EnumerableHelpers_ToArray_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m823DD3E24D0D38D0BB4C30AB8E1B14329F8EF4BB (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m7820EA4C718F05FC4176627F33CEB537A9AFE40B (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mC24F3945DEBBA0F2CA05A079C248A325676684FD (Enumerator_tF5E6D2CF41C59A70D02DEBEDEAD60CE503DA841F* __this, Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4791F8E42F7D3E9E834E02D5A0B21FAB09ED59CC (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m0F0917751CAF85CF53D3AC43174032A21DFACF5D (ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* ___0_array, ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* Array_Empty_TisValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8_m333097FF36C87F06696A8E782F14066A2841FE00_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* EnumerableHelpers_ToArray_TisValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8_m45A8AFA11A75017CFB6A3C98B8D1BF14D15A7DD7 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9E9616183C1194AAFA6DDD531B97467EC333432F (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8A7ED6A2B52302D616E21E025FBA1620A1BB8CC5 (Enumerator_t125C05E9FF652475E0BCF0E4A90A0DF5E495FD8C* __this, Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m058F6E4F4E6EB759CA127F527926CEED7E30E380 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8_m4C53F9B0652D817DC94A124434E7349F0763D8A9 (ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* ___0_array, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* Array_Empty_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1AD513F77218E59FBB83B12CD05888A1BF6D54B0_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* EnumerableHelpers_ToArray_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1D20801BA00DC3128E7FD23AF767610D335C1D69 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9C99B93C7AB97E316D1E8591BCF01B03FD5B9F1A (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m96AAB9F5DC5F6BBCB377A9459038CB7F0CF0875C (Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18* __this, Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4E22F11E12D35FD450ED05E4C4A7D959DDCC8E58 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m783DEB1BEA7DFED9BEAA2878AE0FFC9E1A083B73 (EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* ___0_array, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* Array_Empty_TisGenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7_m5352BA637AE5D914917F66A4CDB5EEDBBD097ECD_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* EnumerableHelpers_ToArray_TisGenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7_m10EA1DDF473F5C24192E0C0AE40B146C2430C35C (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mAE09F8BB0C164AEC83265D6644227CB3A4E32E5B (Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE6C115B7182FDDC46B1D74A2B21DC19B3BD5659E (Enumerator_tCF6A1348051624B29431EFA1119C303ECE490753* __this, Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mE9F6E77A3DBBFAF787101FCFE932511B5BF375A9 (Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisGenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7_mE263CBEBDB0D565B6BB2462D7358FA40321CD3D6 (GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* ___0_array, GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableHelpers_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFD5911DDBDB2B3C1BCDAEE1DDF9EA8DCD3C5A22 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mC239D559AF84CEE25E8EEADB05B96025C66ED6D5 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE (Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0* __this, Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* EnumerableHelpers_ToArray_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m9FE60EF16FC9F1660D9985A55E49DB74C66C07F6 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9A483395EF3F401BC08314BDE9392BD26EBE444F (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886 (Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B* __this, Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_mCD89004E22CB4FEB73672DD2830E315DDA4DA3BE (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* ___0_array, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* Array_Empty_TisNetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D_m2837B294E32D879AC894BAEEB7B55FFBC12311A5_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* EnumerableHelpers_ToArray_TisNetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D_m91A2A19BE020747C0D19CB30EC86E9D8F47FABCF (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5843905C69BFE30CF0EF46E69C4FC1A5D70D352D (Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m501BFCCC73F522AC3D00E0A5F4D617DE8A584DE1 (Enumerator_t351DC2DCB37605FA3E4D39DD9EB14A8950BF9CEC* __this, Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m8A894C6A415FD22DAE57556081CEDEBDA60C66E5 (Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisNetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D_mF4691D21131840F57409938F3097739C103FACFB (NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* ___0_array, NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* Array_Empty_TisReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414_m0AB5EBBCEEF3D58D2B376C5A98B9DA304DBE9642_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* EnumerableHelpers_ToArray_TisReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414_m27F0356BF4AF40CD8A7D8431ACAF80062433C5A9 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m3467F9A6920A051D04F6292058931130EC22D639 (Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mAA1563AC35863C47BF0DBEC8488C885194583349 (Enumerator_t3C2A019B409CEB54CD6349665DC33F8292D54B5E* __this, Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m3E1E3A8D5B45A051842B75BE822847FE8320A26F (Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414_m8494477DA8C5A804F81E1B7A196A2B8A97B426AF (ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* ___0_array, ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* EnumerableHelpers_ToArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m094437E649CF9CB31141532A0571F9724D7E35EC (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mAC468123C57B71F3D4679BB79E6E8C531C0E1126 (Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8539F806C1EAEF9AD9B733648C3268093710E07B (Enumerator_t2D4422D03B66E15DB324EDDEC9B8B8BE994B2ACE* __this, Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m596CA66B7465BF12B2DB5EAF640278EA7618C511 (Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m858F1C0E1DD59AF384654973FA814AC359896F57 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, float ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* EnumerableHelpers_ToArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m2EC70ED912E1788B30505A8C51AEB040904110C4 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mCA8E0FFC567DD0017C621A6B75027F8565CFA7E6 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m883CA17DC68406094FEFA9AAD8C40161CA35D1F3 (Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891* __this, Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m87C0DAA7B799FEF651F40F96BDB0A437E1D24CEE (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mFC8BDE74B86C42A57D89FDA28EED3DDEF7B67A17 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, uint32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* EnumerableHelpers_ToArray_TisIl2CppSharedGenericObject_m37DEC9E2E9EAC5C9E2673251FF736DDF40F8CA33_gshared (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m1549601D804B1A2FA09822B8FF6018C374086954_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m37472EFA972090AD3A35A3715208772B2F3F6339_gshared (Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1* __this, Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m6EF406DB0A9F8B868374ABDF966B343F281FEE1F_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, Il2CppSharedGenericObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB_fshared (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___0_q, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* Array_Empty_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_mE2BC05CF2CE0B2267A4A0BF14227F75DE3AE1B0C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* EnumerableHelpers_ToArray_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_m2A930FEE8BD350111D951F629623F65C036F9138 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m14974813FC1A5CF64863A43F459B1EA54951EF4B (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8835940C7ADB7336B372B7491513F6EFA5FD4799 (Enumerator_t46A96D1902EB6E630D5DAADD490183C6117140EB* __this, Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mF881C86AA32F6E038826FACA66B04D1017730272 (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_m6E152C1012CDEFCC963470201F2ECEA04F15FA94 (fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ___0_array, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* Array_Empty_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m1F5AF3B0DB852E19A991DCDC24B6830DF8F9D693_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* EnumerableHelpers_ToArray_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m4C2B20AC08050C8CEC18D394991A5A6C43957ECD (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mB5BBCB131795235F1D451276F1EB98241C700237 (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mFF3543EC877CA4A256E7C467518F5F39D3C878EA (Enumerator_t6366B8DEAF63A586D589D8598AE169C872E71AB1* __this, Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m21666DCAD188F1F12D68F04EB99478509BBF179C (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m21547F7DC82A078F000CAEECD6236B0F50711947 (NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* ___0_array, NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m9E1E291F68BC8D68EBCBF0394CF1117A15C9378A (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___0_item, const RuntimeMethod* method) ;

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D Func_1_Invoke_m4AD1EF42FEA65A73A0F97B32AEAA011ACD11834A_inline (Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434* __this, const RuntimeMethod* method) ;
inline bool AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*, const RuntimeMethod*))AsyncOperationHandle_1_IsValid_m51391A3D1B19BA409CAF88AA386A8EEAC5496C76_gshared)(__this, method);
}
inline bool AsyncOperationHandle_1_get_IsDone_m5CE276DB16D5DC467F8DC24D48C1F9673A3B6786 (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*, const RuntimeMethod*))AsyncOperationHandle_1_get_IsDone_mA62617BF5EED4764A6CDE680487591ADE555EFAC_gshared)(__this, method);
}
inline RuntimeObject* AsyncOperationHandle_1_WaitForCompletion_m79B9DA519122674BFB51B968E6E7C94B04D1267B (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*, const RuntimeMethod*))AsyncOperationHandle_1_WaitForCompletion_m799DDFA35954AD4E5A43FAD68252156477058BAC_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_Update_mE18FA475CB6F6B7020A53A51B0FAD323819F7B4C (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, float ___0_unscaledDeltaTime, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) ;
inline DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D AsyncOperationHandle_1_InternalGetDownloadStatus_mB5722FDD78A3C1070EB8D85F52C41FF1D22DAA3B (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_visited, const RuntimeMethod* method)
{
	return ((  DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D (*) (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, const RuntimeMethod*))AsyncOperationHandle_1_InternalGetDownloadStatus_m4EC6D5A222739A1E7F5F63E06A624D77EA9AD2DF_gshared)(__this, ___0_visited, method);
}
inline AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D AsyncOperationHandle_1_op_Implicit_mB435C4396E3D17F8DBF99AAB24431AB5C60E7292 (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 ___0_obj, const RuntimeMethod* method)
{
	return ((  AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D (*) (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90, const RuntimeMethod*))AsyncOperationHandle_1_op_Implicit_m1EEE8EEC9C46FCB389269497FDA4E3F008E92595_fshared)(___0_obj, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mAD1782419344B04D36CFECF62A116E94574A3413_inline (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___0_item, const RuntimeMethod* method) ;
inline void AsyncOperationHandle_1_Release_mF6710B199D5B6D484B6133E8BD599EF5ADD33BD1 (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90* __this, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*, const RuntimeMethod*))AsyncOperationHandle_1_Release_m2A2A6453E03B79682BD9685D7FC2248F3D413612_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline RuntimeObject* AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*, const RuntimeMethod*))AsyncOperationHandle_1_get_Result_mC2386A2CB653CE837E9AB155929AEF324C801B12_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperationHandle_get_PercentComplete_mB5B48174489343D707D9E4A90BAFE24658D135EC (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
inline int32_t AsyncOperationHandle_1_get_Status_m2826D9CA9BE09868CC0A611B33DFE15B03C1F047 (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*, const RuntimeMethod*))AsyncOperationHandle_1_get_Status_m7263EBA23A984338AC22197EAFC376FA1FF1624E_gshared)(__this, method);
}
inline Exception_t* AsyncOperationHandle_1_get_OperationException_m45DB51ADF168EF07BEAFFD24D5A6ECAB7DE916AA (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90* __this, const RuntimeMethod* method)
{
	return ((  Exception_t* (*) (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*, const RuntimeMethod*))AsyncOperationHandle_1_get_OperationException_m5234C52599574E007B75662E9023D4F63A2A7CF3_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProvideHandle__ctor_m747E40C8B08DBF3EB4276D7B0836C0F0D5B59B0A (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___0_rm, RuntimeObject* ___1_op, const RuntimeMethod* method) ;
inline AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 AsyncOperationHandle_1_Acquire_mCDDF68BFF0F5C6450044727445B62722A15BDC0D (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90* __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 (*) (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*, const RuntimeMethod*))AsyncOperationHandle_1_Acquire_m92F0E015E232C50D90E3900DDE2B7B9805F82710_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
inline int32_t QuaternionCompositeComparer_Compare_m48A2A3D93D4585D34F05490E96B4C8581DB7B69F (QuaternionCompositeComparer_t226CF0226C9A2F5DA3083FF966A2A8328E1B140B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_x, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_y, const RuntimeMethod* method)
{
	return ((  int32_t (*) (QuaternionCompositeComparer_t226CF0226C9A2F5DA3083FF966A2A8328E1B140B*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))QuaternionCompositeComparer_Compare_m48A2A3D93D4585D34F05490E96B4C8581DB7B69F_fshared)(__this, ___0_x, ___1_y, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* Array_Empty_TisBufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793_m0D7F90E8CD9C0D7D1A733617A36635B37970D8C5_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* EnumerableHelpers_ToArray_TisBufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793_m678B85F1B636E69DE42373DE67DBAB95DA0BDC20 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m6BA072E9C2FE6C9614AB80E10F400F0D6F2DD777 (Queue_1_t541F36B96C754EC0884473F496C69455654CE269* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void Queue_1_MoveNext_mA58ED5C7FA381806BC2F86957C25DDA0EEEFB6C4 (Queue_1_t541F36B96C754EC0884473F496C69455654CE269* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t541F36B96C754EC0884473F496C69455654CE269*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m1C585271003ACB43BE431E92440032A665D2EC2D (Enumerator_t46E99F03F8FD9AA09E082FAC4B9EAA28B317595E* __this, Queue_1_t541F36B96C754EC0884473F496C69455654CE269* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mDE2F65BDCFC28E52E77A765B34CD2A55E5D8202A (Queue_1_t541F36B96C754EC0884473F496C69455654CE269* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisBufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793_m5B672F7D3E238781884D50B658AD06DF1758DB1F (BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* ___0_array, BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* Array_Empty_TisBufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B_mA24712B06D4578AC3F65B5E3D404D871123788A1_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* EnumerableHelpers_ToArray_TisBufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B_mED38FD2BE6BBDD99097FEA513FE4AB458CAA7CF9 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mACF1500C52CD9E9E928C948F14F6346D4A035F15 (Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void Queue_1_MoveNext_mF3458D36BB62860A5CCFC01BEA5E9141CED83637 (Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m2C4512CBD823F31822BC1F50692A3339E7E3C4D3 (Enumerator_tC96CE84B09FB9FC6E4EFEE6D5C06D5EF1B71B9B5* __this, Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mBB9DA4562EF938AA789110CD3008C76E06AE7011 (Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisBufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B_mC8D470CDF178A0AFC22C83EA1DE47399AD4135F6 (BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* ___0_array, BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* Array_Empty_TisBufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0_mF8AC95694454B9962BA620CED398EA67DA55087E_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* EnumerableHelpers_ToArray_TisBufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0_mAB61BC50526A4A3D1ED7E6A193B491E28078C10A (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mB3810752CD73FDDE5EB97A20296D7C88222E8AD5 (Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void Queue_1_MoveNext_m3698531DD9D83A2B0A6D51AA5E80C7B0C917638C (Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m10A58E43FA559516B0CE22FE4DF3F3299780C2F5 (Enumerator_t691F16C68346C86A806E537EAA594F815F1A67F5* __this, Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mBB50DA3EC9C11E4ABD93A06507FDE60366055A9B (Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisBufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0_mAF622962C6F9EE7BDA8F17B5A091B83F9FD67493 (BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* ___0_array, BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* Array_Empty_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m244C4902DCD6DA9F9BAAE5D0BD965581BE165229_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* EnumerableHelpers_ToArray_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m823DD3E24D0D38D0BB4C30AB8E1B14329F8EF4BB (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m7820EA4C718F05FC4176627F33CEB537A9AFE40B (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void Queue_1_MoveNext_mDE2270884136ABAF283260B235151ACC8EE653FB (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mC24F3945DEBBA0F2CA05A079C248A325676684FD (Enumerator_tF5E6D2CF41C59A70D02DEBEDEAD60CE503DA841F* __this, Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4791F8E42F7D3E9E834E02D5A0B21FAB09ED59CC (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m0F0917751CAF85CF53D3AC43174032A21DFACF5D (ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* ___0_array, ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* Array_Empty_TisValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8_m333097FF36C87F06696A8E782F14066A2841FE00_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* EnumerableHelpers_ToArray_TisValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8_m45A8AFA11A75017CFB6A3C98B8D1BF14D15A7DD7 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9E9616183C1194AAFA6DDD531B97467EC333432F (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void Queue_1_MoveNext_m0174B1375CBCE5607C169FB96E6AB17DB97CB173 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8A7ED6A2B52302D616E21E025FBA1620A1BB8CC5 (Enumerator_t125C05E9FF652475E0BCF0E4A90A0DF5E495FD8C* __this, Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m058F6E4F4E6EB759CA127F527926CEED7E30E380 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8_m4C53F9B0652D817DC94A124434E7349F0763D8A9 (ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* ___0_array, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* Array_Empty_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1AD513F77218E59FBB83B12CD05888A1BF6D54B0_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* EnumerableHelpers_ToArray_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1D20801BA00DC3128E7FD23AF767610D335C1D69 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9C99B93C7AB97E316D1E8591BCF01B03FD5B9F1A (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void Queue_1_MoveNext_m86C24E3D8D2B55FCD5FE49614EEC466771A8471F (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m96AAB9F5DC5F6BBCB377A9459038CB7F0CF0875C (Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18* __this, Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4E22F11E12D35FD450ED05E4C4A7D959DDCC8E58 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m783DEB1BEA7DFED9BEAA2878AE0FFC9E1A083B73 (EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* ___0_array, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* Array_Empty_TisGenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7_m5352BA637AE5D914917F66A4CDB5EEDBBD097ECD_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* EnumerableHelpers_ToArray_TisGenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7_m10EA1DDF473F5C24192E0C0AE40B146C2430C35C (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mAE09F8BB0C164AEC83265D6644227CB3A4E32E5B (Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void Queue_1_MoveNext_m34A797F97B3B75CDE83CEF5A19E6FF6612FA6844 (Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE6C115B7182FDDC46B1D74A2B21DC19B3BD5659E (Enumerator_tCF6A1348051624B29431EFA1119C303ECE490753* __this, Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mE9F6E77A3DBBFAF787101FCFE932511B5BF375A9 (Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisGenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7_mE263CBEBDB0D565B6BB2462D7358FA40321CD3D6 (GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* ___0_array, GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableHelpers_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFD5911DDBDB2B3C1BCDAEE1DDF9EA8DCD3C5A22 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mC239D559AF84CEE25E8EEADB05B96025C66ED6D5 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE (Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0* __this, Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* EnumerableHelpers_ToArray_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m9FE60EF16FC9F1660D9985A55E49DB74C66C07F6 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9A483395EF3F401BC08314BDE9392BD26EBE444F (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390 (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886 (Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B* __this, Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_mCD89004E22CB4FEB73672DD2830E315DDA4DA3BE (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* ___0_array, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* Array_Empty_TisNetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D_m2837B294E32D879AC894BAEEB7B55FFBC12311A5_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* EnumerableHelpers_ToArray_TisNetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D_m91A2A19BE020747C0D19CB30EC86E9D8F47FABCF (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5843905C69BFE30CF0EF46E69C4FC1A5D70D352D (Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void Queue_1_MoveNext_m7CE3985DB980CC314AB4DF8E3A3DDE6ABC1B3A40 (Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1128269E1155A77715448252CF09883B35E2D83C*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m501BFCCC73F522AC3D00E0A5F4D617DE8A584DE1 (Enumerator_t351DC2DCB37605FA3E4D39DD9EB14A8950BF9CEC* __this, Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m8A894C6A415FD22DAE57556081CEDEBDA60C66E5 (Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisNetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D_mF4691D21131840F57409938F3097739C103FACFB (NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* ___0_array, NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* Array_Empty_TisReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414_m0AB5EBBCEEF3D58D2B376C5A98B9DA304DBE9642_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* EnumerableHelpers_ToArray_TisReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414_m27F0356BF4AF40CD8A7D8431ACAF80062433C5A9 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m3467F9A6920A051D04F6292058931130EC22D639 (Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void Queue_1_MoveNext_m4511A831104E6BDA2AAA941F897646E41F1240D6 (Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tD0B32970076D62B677279D96972006677EEE25A7*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mAA1563AC35863C47BF0DBEC8488C885194583349 (Enumerator_t3C2A019B409CEB54CD6349665DC33F8292D54B5E* __this, Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m3E1E3A8D5B45A051842B75BE822847FE8320A26F (Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414_m8494477DA8C5A804F81E1B7A196A2B8A97B426AF (ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* ___0_array, ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* EnumerableHelpers_ToArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m094437E649CF9CB31141532A0571F9724D7E35EC (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mAC468123C57B71F3D4679BB79E6E8C531C0E1126 (Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void Queue_1_MoveNext_m48A7D79BE345D394E6D7BFAC0FD8601C111E1B4A (Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8539F806C1EAEF9AD9B733648C3268093710E07B (Enumerator_t2D4422D03B66E15DB324EDDEC9B8B8BE994B2ACE* __this, Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m596CA66B7465BF12B2DB5EAF640278EA7618C511 (Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m858F1C0E1DD59AF384654973FA814AC359896F57 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, float ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* EnumerableHelpers_ToArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m2EC70ED912E1788B30505A8C51AEB040904110C4 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mCA8E0FFC567DD0017C621A6B75027F8565CFA7E6 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void Queue_1_MoveNext_mE01938A89F813B0CCF58E0D82D23363114A97B85 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m883CA17DC68406094FEFA9AAD8C40161CA35D1F3 (Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891* __this, Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m87C0DAA7B799FEF651F40F96BDB0A437E1D24CEE (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mFC8BDE74B86C42A57D89FDA28EED3DDEF7B67A17 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, uint32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
inline __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_inline (const RuntimeMethod* method)
{
	return ((  __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline)(method);
}
inline __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* EnumerableHelpers_ToArray_TisIl2CppSharedGenericObject_m37DEC9E2E9EAC5C9E2673251FF736DDF40F8CA33 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method)
{
	return ((  __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* (*) (RuntimeObject*, int32_t*, const RuntimeMethod*))EnumerableHelpers_ToArray_TisIl2CppSharedGenericObject_m37DEC9E2E9EAC5C9E2673251FF736DDF40F8CA33_gshared)(___0_source, ___1_length, method);
}
inline void Queue_1_SetCapacity_m1549601D804B1A2FA09822B8FF6018C374086954 (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m1549601D804B1A2FA09822B8FF6018C374086954_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m097052B8552DED4A35D537D3AEB84510090C9E70 (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m37472EFA972090AD3A35A3715208772B2F3F6339 (Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1* __this, Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1*, Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF*, const RuntimeMethod*))Enumerator__ctor_m37472EFA972090AD3A35A3715208772B2F3F6339_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m6EF406DB0A9F8B868374ABDF966B343F281FEE1F (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m6EF406DB0A9F8B868374ABDF966B343F281FEE1F_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33 (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, Il2CppSharedGenericObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, Il2CppSharedGenericObject*, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB_fshared)(__this, ___0_q, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* Array_Empty_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_mE2BC05CF2CE0B2267A4A0BF14227F75DE3AE1B0C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* EnumerableHelpers_ToArray_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_m2A930FEE8BD350111D951F629623F65C036F9138 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m14974813FC1A5CF64863A43F459B1EA54951EF4B (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void Queue_1_MoveNext_m9576D15FA3B418D2B0635A1AEC929FC1FBF8B7DC (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8835940C7ADB7336B372B7491513F6EFA5FD4799 (Enumerator_t46A96D1902EB6E630D5DAADD490183C6117140EB* __this, Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mF881C86AA32F6E038826FACA66B04D1017730272 (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_m6E152C1012CDEFCC963470201F2ECEA04F15FA94 (fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ___0_array, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* Array_Empty_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m1F5AF3B0DB852E19A991DCDC24B6830DF8F9D693_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* EnumerableHelpers_ToArray_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m4C2B20AC08050C8CEC18D394991A5A6C43957ECD (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mB5BBCB131795235F1D451276F1EB98241C700237 (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void Queue_1_MoveNext_m0CCC7BC2ACE4FF674828BC0076174FCDA5E1BCF9 (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mFF3543EC877CA4A256E7C467518F5F39D3C878EA (Enumerator_t6366B8DEAF63A586D589D8598AE169C872E71AB1* __this, Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m21666DCAD188F1F12D68F04EB99478509BBF179C (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m21547F7DC82A078F000CAEECD6236B0F50711947 (NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* ___0_array, NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m80E67A0F9F1FD9EAD0C8EEF7D5396ADF612FA105_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___0_dot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m9E1E291F68BC8D68EBCBF0394CF1117A15C9378A (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___0_item, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProviderOperation_1_UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Key_m9132B01400BADDE7AB512BBAAB6832088DDDCA49_fshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderOperation_1_UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Key_m43B227E8859BA2A5A4CEA9361D4FEC2AC5DAC1DF_fshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),11), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProviderOperation_1_get_ProvideHandleVersion_mBDD8AAB821064F3B489425D0640976BEB5409899_fshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProviderOperation_1_get_Location_mECFD0245303B531C9CDB7D85AFBEF59EB15E88F1_fshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderOperation_1_SetDownloadProgressCallback_mD1DC111957E3374ACE89BBC17193BA415848AAD2_fshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434* ___0_callback, const RuntimeMethod* method) 
{
	{
		Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434* L_0 = ___0_callback;
		il2cpp_codegen_write_field_data<Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4), L_0);
		Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434* L_1 = *(Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434* L_2 = *(Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
		NullCheck(L_2);
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_3;
		L_3 = Func_1_Invoke_m4AD1EF42FEA65A73A0F97B32AEAA011ACD11834A_inline(L_2, NULL);
		il2cpp_codegen_write_field_data<DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),5), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5), L_3);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderOperation_1_SetWaitForCompletionCallback_m423812D46C9DC8C0994E0AEB680139EAC4D01770_fshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_callback, const RuntimeMethod* method) 
{
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_0 = ___0_callback;
		il2cpp_codegen_write_field_data<Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProviderOperation_1_InvokeWaitForCompletion_m1A683F8730407E547EBA3316C7AA0FBEC4344A17_fshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_WaitForCompletion_m79B9DA519122674BFB51B968E6E7C94B04D1267B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_IsDone_m5CE276DB16D5DC467F8DC24D48C1F9673A3B6786_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* G_B8_0 = NULL;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* G_B7_0 = NULL;
	{
		NullCheck((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this);
		bool L_0;
		L_0 = ((  bool (*) (AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)))((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8));
		if (!L_1)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		return (bool)1;
	}

IL_0012:
	{
		bool L_2;
		L_2 = AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		bool L_3;
		L_3 = AsyncOperationHandle_1_get_IsDone_m5CE276DB16D5DC467F8DC24D48C1F9673A3B6786((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), AsyncOperationHandle_1_get_IsDone_m5CE276DB16D5DC467F8DC24D48C1F9673A3B6786_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject* L_4;
		L_4 = AsyncOperationHandle_1_WaitForCompletion_m79B9DA519122674BFB51B968E6E7C94B04D1267B((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), AsyncOperationHandle_1_WaitForCompletion_m79B9DA519122674BFB51B968E6E7C94B04D1267B_RuntimeMethod_var);
	}

IL_0038:
	{
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_5 = *(ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_6 = L_5;
		if (L_6)
		{
			G_B8_0 = L_6;
			goto IL_0044;
		}
		G_B7_0 = L_6;
	}
	{
		goto IL_004e;
	}

IL_0044:
	{
		float L_7;
		L_7 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		NullCheck(G_B8_0);
		ResourceManager_Update_mE18FA475CB6F6B7020A53A51B0FAD323819F7B4C(G_B8_0, L_7, NULL);
	}

IL_004e:
	{
		bool L_8 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12));
		if (L_8)
		{
			goto IL_005c;
		}
	}
	{
		NullCheck((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this);
		((  void (*) (AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)))((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
	}

IL_005c:
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_9 = *(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
		if (L_9)
		{
			goto IL_0066;
		}
	}
	{
		return (bool)0;
	}

IL_0066:
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_10 = *(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
		NullCheck(L_10);
		bool L_11;
		L_11 = Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline(L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D ProviderOperation_1_GetDownloadStatus_mFDB93DBF7D6C6444B88637DF56AA243942995C5F_fshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_visited, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_InternalGetDownloadStatus_mB5722FDD78A3C1070EB8D85F52C41FF1D22DAA3B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D V_0;
	memset((&V_0), 0, sizeof(V_0));
	DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D V_1;
	memset((&V_1), 0, sizeof(V_1));
	DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		bool L_0;
		L_0 = AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D));
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_1 = V_1;
		G_B3_0 = L_1;
		goto IL_0024;
	}

IL_0018:
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_2 = ___0_visited;
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_3;
		L_3 = AsyncOperationHandle_1_InternalGetDownloadStatus_mB5722FDD78A3C1070EB8D85F52C41FF1D22DAA3B((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), L_2, AsyncOperationHandle_1_InternalGetDownloadStatus_mB5722FDD78A3C1070EB8D85F52C41FF1D22DAA3B_RuntimeMethod_var);
		G_B3_0 = L_3;
	}

IL_0024:
	{
		V_0 = G_B3_0;
		Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434* L_4 = *(Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434* L_5 = *(Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
		NullCheck(L_5);
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_6;
		L_6 = Func_1_Invoke_m4AD1EF42FEA65A73A0F97B32AEAA011ACD11834A_inline(L_5, NULL);
		il2cpp_codegen_write_field_data<DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),5), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5), L_6);
	}

IL_003e:
	{
		NullCheck((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this);
		int32_t L_7;
		L_7 = ((  int32_t (*) (AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)))((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_005d;
		}
	}
	{
		int64_t L_8 = (((DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5))))->___TotalBytes;
		(((DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5))))->___DownloadedBytes = L_8;
	}

IL_005d:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D));
		int64_t L_9 = (((DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5))))->___DownloadedBytes;
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_10 = V_0;
		int64_t L_11 = L_10.___DownloadedBytes;
		(&V_1)->___DownloadedBytes = ((int64_t)il2cpp_codegen_add(L_9, L_11));
		int64_t L_12 = (((DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5))))->___TotalBytes;
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_13 = V_0;
		int64_t L_14 = L_13.___TotalBytes;
		(&V_1)->___TotalBytes = ((int64_t)il2cpp_codegen_add(L_12, L_14));
		NullCheck((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this);
		bool L_15;
		L_15 = ((  bool (*) (AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)))((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		(&V_1)->___IsDone = L_15;
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderOperation_1__ctor_m19974AF8E637426AAD4061FD1EEF012469132314_fshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15), (bool)1);
		((  void (*) (AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)))((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderOperation_1_GetDependencies_m44CD61303C9D48A944251D83C2496D002F39562C_fshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* ___0_deps, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAD1782419344B04D36CFECF62A116E94574A3413_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_1 = ___0_deps;
		AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 L_2 = *(AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_3;
		L_3 = AsyncOperationHandle_1_op_Implicit_mB435C4396E3D17F8DBF99AAB24431AB5C60E7292(L_2, NULL);
		NullCheck(L_1);
		List_1_Add_mAD1782419344B04D36CFECF62A116E94574A3413_inline(L_1, L_3, List_1_Add_mAD1782419344B04D36CFECF62A116E94574A3413_RuntimeMethod_var);
	}

IL_001e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderOperation_1_ReleaseDependencies_m52D8CF19801FC51D0A9FE2DBFFC072A9C1373B29_fshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_Release_mF6710B199D5B6D484B6133E8BD599EF5ADD33BD1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		AsyncOperationHandle_1_Release_mF6710B199D5B6D484B6133E8BD599EF5ADD33BD1((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), AsyncOperationHandle_1_Release_mF6710B199D5B6D484B6133E8BD599EF5ADD33BD1_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProviderOperation_1_get_DebugName_m5FF758F052493E4D4252CB1A0E89E411EC8B78B5_fshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05610D25C7DBBDB071AEA3EBE257EB80F7BE35A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 17)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		if (!L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteral05610D25C7DBBDB071AEA3EBE257EB80F7BE35A9;
			goto IL_002f;
		}
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteral05610D25C7DBBDB071AEA3EBE257EB80F7BE35A9;
	}
	{
		RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		NullCheck(L_4);
		String_t* L_5;
		L_5 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_4);
		String_t* L_6;
		L_6 = ((  String_t* (*) (String_t*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))(L_5, (bool)1, NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0034;
	}

IL_002f:
	{
		G_B3_0 = _stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0034:
	{
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(G_B3_2, G_B3_1, G_B3_0, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderOperation_1_GetDependencies_mDB1581BDC6A11F06A0975706B14E90EA5416481B_fshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, RuntimeObject* ___0_dstList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_dstList;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3, ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var, L_0);
		bool L_1;
		L_1 = AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		RuntimeObject* L_2;
		L_2 = AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		return;
	}

IL_0022:
	{
		V_0 = 0;
		goto IL_0049;
	}

IL_0026:
	{
		RuntimeObject* L_3 = ___0_dstList;
		RuntimeObject* L_4;
		L_4 = AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC_RuntimeMethod_var);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_6;
		L_6 = InterfaceFuncInvoker1< AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, int32_t >::Invoke(0, IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var, L_4, L_5);
		V_1 = L_6;
		RuntimeObject* L_7;
		L_7 = AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746((&V_1), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2, ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var, L_3, L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0049:
	{
		int32_t L_9 = V_0;
		RuntimeObject* L_10;
		L_10 = AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC_RuntimeMethod_var);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0026;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ProviderOperation_1_get_RequestedType_m7A3E5D62B21563EF98B7355A41F75F5C4C7D2FC7_fshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 17)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProviderOperation_1_get_DependencyCount_mD3A85E95B0D27E7D1901EC1F9257B5FBE8AD4A4A_fshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), NULL);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}

IL_002b:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderOperation_1_SetProgressCallback_m0C600CFCA23A9BD990638E5F03D591FB64E438D2_fshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___0_callback, const RuntimeMethod* method) 
{
	{
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_0 = ___0_callback;
		il2cpp_codegen_write_field_data<Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 20), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ProviderOperation_1_get_Progress_m3BFE08D3630AEBF7B468031FD8C8050312F39442_fshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tFE6CE62D67D61F940F6BF8AE9D22B703E0E83BC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t62E1C014CE192AAF3D0E63C154CDC53D78D8A17B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	RuntimeObject* V_2 = NULL;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			V_0 = (1.0f);
			V_1 = (0.0f);
			Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_0 = *(Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 20));
			if (!L_0)
			{
				goto IL_0022_1;
			}
		}
		{
			float L_1 = V_1;
			Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_2 = *(Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 20));
			NullCheck(L_2);
			float L_3;
			L_3 = Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_inline(L_2, NULL);
			V_1 = ((float)il2cpp_codegen_add(L_1, L_3));
		}

IL_0022_1:
		{
			bool L_4;
			L_4 = AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), NULL);
			if (!L_4)
			{
				goto IL_004e_1;
			}
		}
		{
			RuntimeObject* L_5;
			L_5 = AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC_RuntimeMethod_var);
			if (!L_5)
			{
				goto IL_004e_1;
			}
		}
		{
			RuntimeObject* L_6;
			L_6 = AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC_RuntimeMethod_var);
			NullCheck(L_6);
			int32_t L_7;
			L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_0060_1;
			}
		}

IL_004e_1:
		{
			float L_8 = V_1;
			V_1 = ((float)il2cpp_codegen_add(L_8, (1.0f)));
			float L_9 = V_0;
			V_0 = ((float)il2cpp_codegen_add(L_9, (1.0f)));
			goto IL_00a0_1;
		}

IL_0060_1:
		{
			RuntimeObject* L_10;
			L_10 = AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC_RuntimeMethod_var);
			NullCheck(L_10);
			RuntimeObject* L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tFE6CE62D67D61F940F6BF8AE9D22B703E0E83BC1_il2cpp_TypeInfo_var, L_10);
			V_2 = L_11;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0096_1:
				{
					{
						RuntimeObject* L_12 = V_2;
						if (!L_12)
						{
							goto IL_009f_1;
						}
					}
					{
						RuntimeObject* L_13 = V_2;
						NullCheck(L_13);
						InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
					}

IL_009f_1:
					{
						return;
					}
				}
			});
			try
			{
				{
					goto IL_008c_2;
				}

IL_0073_2:
				{
					RuntimeObject* L_14 = V_2;
					NullCheck(L_14);
					AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_15;
					L_15 = InterfaceFuncInvoker0< AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D >::Invoke(0, IEnumerator_1_t62E1C014CE192AAF3D0E63C154CDC53D78D8A17B_il2cpp_TypeInfo_var, L_14);
					V_3 = L_15;
					float L_16 = V_1;
					float L_17;
					L_17 = AsyncOperationHandle_get_PercentComplete_mB5B48174489343D707D9E4A90BAFE24658D135EC((&V_3), NULL);
					V_1 = ((float)il2cpp_codegen_add(L_16, L_17));
					float L_18 = V_0;
					V_0 = ((float)il2cpp_codegen_add(L_18, (1.0f)));
				}

IL_008c_2:
				{
					RuntimeObject* L_19 = V_2;
					NullCheck(L_19);
					bool L_20;
					L_20 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
					if (L_20)
					{
						goto IL_0073_2;
					}
				}
				{
					goto IL_00a0_1;
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

IL_00a0_1:
		{
			float L_21 = V_1;
			float L_22 = V_0;
			float L_23;
			L_23 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(((float)(L_21/L_22)), (0.99000001f), NULL);
			V_4 = L_23;
			goto IL_00bb;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b1;
		}
		throw e;
	}

CATCH_00b1:
	{
		RuntimeObject* L_24 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		V_4 = (0.0f);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00bb;
	}

IL_00bb:
	{
		float L_25 = V_4;
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderOperation_1_Execute_m5AB0103E567E4B76200979C1850CD6B8F22B91DE_fshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_OperationException_m45DB51ADF168EF07BEAFFD24D5A6ECAB7DE916AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_Status_m2826D9CA9BE09868CC0A611B33DFE15B03C1F047_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceProvider_tAD356B19CE0730462C3D5B6E7FBAD905342B9247_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50FBAEBA1E034B056BB4A216B2BE8DC46B7EE5F4);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89);
	const Il2CppFullySharedGenericAny L_11 = L_4;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89);
	memset(V_0, 0, SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89);
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0;
		L_0 = AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), NULL);
		if (!L_0)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_1;
		L_1 = AsyncOperationHandle_1_get_Status_m2826D9CA9BE09868CC0A611B33DFE15B03C1F047((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), AsyncOperationHandle_1_get_Status_m2826D9CA9BE09868CC0A611B33DFE15B03C1F047_RuntimeMethod_var);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 23));
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(5, IResourceProvider_tAD356B19CE0730462C3D5B6E7FBAD905342B9247_il2cpp_TypeInfo_var, L_2);
		if (((int32_t)((int32_t)L_3&1)))
		{
			goto IL_0050;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89);
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89);
		Exception_t* L_5;
		L_5 = AsyncOperationHandle_1_get_OperationException_m45DB51ADF168EF07BEAFFD24D5A6ECAB7DE916AA((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), AsyncOperationHandle_1_get_OperationException_m45DB51ADF168EF07BEAFFD24D5A6ECAB7DE916AA_RuntimeMethod_var);
		Exception_t* L_6 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(L_6, _stringLiteral50FBAEBA1E034B056BB4A216B2BE8DC46B7EE5F4, L_5, NULL);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18)) ? L_4: *(void**)L_4), (bool)0, L_6);
		return;
	}

IL_0050:
	{
	}
	try
	{
		RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 23));
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_8 = *(ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 28));
		ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631 L_9;
		memset((&L_9), 0, sizeof(L_9));
		ProvideHandle__ctor_m747E40C8B08DBF3EB4276D7B0836C0F0D5B59B0A((&L_9), L_8, (RuntimeObject*)__this, NULL);
		NullCheck(L_7);
		InterfaceActionInvoker1< ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631 >::Invoke(3, IResourceProvider_tAD356B19CE0730462C3D5B6E7FBAD905342B9247_il2cpp_TypeInfo_var, L_7, L_9);
		goto IL_007e;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006a;
		}
		throw e;
	}

CATCH_006a:
	{
		Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_1 = L_10;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89);
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89);
		Exception_t* L_12 = V_1;
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18)) ? L_11: *(void**)L_11), (bool)0, L_12);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_007e;
	}

IL_007e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderOperation_1_Init_mEFE6E513E1513A37413C78471FC21A68007608DC_fshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___0_rm, RuntimeObject* ___1_provider, RuntimeObject* ___2_location, AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 ___3_depOp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_Acquire_mCDDF68BFF0F5C6450044727445B62722A15BDC0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_initobj((((DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5)))), sizeof(DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D));
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_0 = ___0_rm;
		il2cpp_codegen_write_field_data<ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),12), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 28), L_0);
		AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 L_1 = ___3_depOp;
		il2cpp_codegen_write_field_data<AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),7), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9), L_1);
		bool L_2;
		L_2 = AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 L_3;
		L_3 = AsyncOperationHandle_1_Acquire_mCDDF68BFF0F5C6450044727445B62722A15BDC0D((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), AsyncOperationHandle_1_Acquire_mCDDF68BFF0F5C6450044727445B62722A15BDC0D_RuntimeMethod_var);
	}

IL_0034:
	{
		RuntimeObject* L_4 = ___1_provider;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),6), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 23), L_4);
		RuntimeObject* L_5 = ___2_location;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),8), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_5);
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15), (bool)1);
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),4), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8), (bool)0);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_6 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_6, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29)), NULL);
		((  void (*) (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B*, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30)))(__this, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderOperation_1_Init_m6FB45614D4B23A2205066979498648BAD719AC30_fshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___0_rm, RuntimeObject* ___1_provider, RuntimeObject* ___2_location, AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 ___3_depOp, bool ___4_releaseDependenciesOnFailure, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_Acquire_mCDDF68BFF0F5C6450044727445B62722A15BDC0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_initobj((((DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5)))), sizeof(DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D));
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_0 = ___0_rm;
		il2cpp_codegen_write_field_data<ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),12), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 28), L_0);
		AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 L_1 = ___3_depOp;
		il2cpp_codegen_write_field_data<AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),7), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9), L_1);
		bool L_2;
		L_2 = AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 L_3;
		L_3 = AsyncOperationHandle_1_Acquire_mCDDF68BFF0F5C6450044727445B62722A15BDC0D((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), AsyncOperationHandle_1_Acquire_mCDDF68BFF0F5C6450044727445B62722A15BDC0D_RuntimeMethod_var);
	}

IL_0034:
	{
		RuntimeObject* L_4 = ___1_provider;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),6), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 23), L_4);
		RuntimeObject* L_5 = ___2_location;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),8), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_5);
		bool L_6 = ___4_releaseDependenciesOnFailure;
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15), L_6);
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),4), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8), (bool)0);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_7 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_7, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29)), NULL);
		((  void (*) (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B*, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30)))(__this, L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProviderOperation_1_WaitForCompletionHandler_m12B7892D284BFED6E77B8B6AEAB721321D43F0B9_fshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_WaitForCompletion_m79B9DA519122674BFB51B968E6E7C94B04D1267B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_IsDone_m5CE276DB16D5DC467F8DC24D48C1F9673A3B6786_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this);
		bool L_0;
		L_0 = ((  bool (*) (AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)))((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		bool L_1;
		L_1 = AsyncOperationHandle_1_get_IsDone_m5CE276DB16D5DC467F8DC24D48C1F9673A3B6786((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), AsyncOperationHandle_1_get_IsDone_m5CE276DB16D5DC467F8DC24D48C1F9673A3B6786_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = AsyncOperationHandle_1_WaitForCompletion_m79B9DA519122674BFB51B968E6E7C94B04D1267B((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), AsyncOperationHandle_1_WaitForCompletion_m79B9DA519122674BFB51B968E6E7C94B04D1267B_RuntimeMethod_var);
	}

IL_0023:
	{
		bool L_3 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12));
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		NullCheck((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this);
		((  void (*) (AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)))((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
	}

IL_0031:
	{
		NullCheck((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this);
		bool L_4;
		L_4 = ((  bool (*) (AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)))((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderOperation_1_Destroy_mAD684589B6D012AAEAE81664C37787E0B4369010_fshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_Release_mF6710B199D5B6D484B6133E8BD599EF5ADD33BD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceProvider_tAD356B19CE0730462C3D5B6E7FBAD905342B9247_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89);
	const Il2CppFullySharedGenericAny L_6 = L_3;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89);
	memset(V_0, 0, SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89);
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 21));
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 23));
		RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		NullCheck((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24), (AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this, (Il2CppFullySharedGenericAny*)L_3);
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18), L_3);
		NullCheck(L_1);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(4, IResourceProvider_tAD356B19CE0730462C3D5B6E7FBAD905342B9247_il2cpp_TypeInfo_var, L_1, L_2, L_4);
	}

IL_0024:
	{
		bool L_5;
		L_5 = AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		AsyncOperationHandle_1_Release_mF6710B199D5B6D484B6133E8BD599EF5ADD33BD1((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)))), AsyncOperationHandle_1_Release_mF6710B199D5B6D484B6133E8BD599EF5ADD33BD1_RuntimeMethod_var);
	}

IL_003c:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89);
		NullCheck((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22), (AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18)) ? L_6: *(void**)L_6));
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),8), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), (RuntimeObject*)NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuaternionCompositeComparer_Compare_m48A2A3D93D4585D34F05490E96B4C8581DB7B69F_fshared (QuaternionCompositeComparer_t226CF0226C9A2F5DA3083FF966A2A8328E1B140B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_x, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_y, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		bool L_2;
		L_2 = Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___1_y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		bool L_5;
		L_5 = Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		return 0;
	}

IL_001c:
	{
		return (-1);
	}

IL_001e:
	{
		return 1;
	}
}
IL2CPP_EXTERN_C  int32_t QuaternionCompositeComparer_Compare_m48A2A3D93D4585D34F05490E96B4C8581DB7B69F_AdjustorThunk (RuntimeObject* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_x, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_y, const RuntimeMethod* method)
{
	QuaternionCompositeComparer_t226CF0226C9A2F5DA3083FF966A2A8328E1B140B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<QuaternionCompositeComparer_t226CF0226C9A2F5DA3083FF966A2A8328E1B140B>(__this);
	int32_t _returnValue;
	_returnValue = QuaternionCompositeComparer_Compare_m48A2A3D93D4585D34F05490E96B4C8581DB7B69F(_thisAdjusted, ___0_x, ___1_y, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m4CE6B2DD651C6946EDAAE33AE1843CA2F3736D47 (Queue_1_t541F36B96C754EC0884473F496C69455654CE269* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_0;
		L_0 = Array_Empty_TisBufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793_m0D7F90E8CD9C0D7D1A733617A36635B37970D8C5_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m3D8C2BFB1AACEB39683744775CACAF07EDEAEB3A (Queue_1_t541F36B96C754EC0884473F496C69455654CE269* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_6 = (BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A*)(BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m7B8E2D3191CDD9AE998C792BFF33F697D42066A5 (Queue_1_t541F36B96C754EC0884473F496C69455654CE269* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_4;
		L_4 = EnumerableHelpers_ToArray_TisBufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793_m678B85F1B636E69DE42373DE67DBAB95DA0BDC20(L_2, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_6 = __this->____array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = __this->____size;
		__this->____tail = L_8;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mF72A691D63FA2B1782D0055D10BE51C924505C1D (Queue_1_t541F36B96C754EC0884473F496C69455654CE269* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_11 = __this->____array;
		int32_t L_12 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_11, 0, L_12, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m2ED3C4CC6D09C7E444161FF91B57593D50AC08E0 (Queue_1_t541F36B96C754EC0884473F496C69455654CE269* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mB2947AD1CA50EF7C06942EF074E9EFFCDF305299 (Queue_1_t541F36B96C754EC0884473F496C69455654CE269* __this, BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m6BA072E9C2FE6C9614AB80E10F400F0D6F2DD777(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_0045:
	{
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mA58ED5C7FA381806BC2F86957C25DDA0EEEFB6C4(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t46E99F03F8FD9AA09E082FAC4B9EAA28B317595E Queue_1_GetEnumerator_m31C96288FEEB479DE079B6AFB4BCD96130FD65A0 (Queue_1_t541F36B96C754EC0884473F496C69455654CE269* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t46E99F03F8FD9AA09E082FAC4B9EAA28B317595E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1C585271003ACB43BE431E92440032A665D2EC2D((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1DAB38211BDFB91FABE01E5E11FFBA0FCC30C9DB (Queue_1_t541F36B96C754EC0884473F496C69455654CE269* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t46E99F03F8FD9AA09E082FAC4B9EAA28B317595E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1C585271003ACB43BE431E92440032A665D2EC2D((&L_0), __this, NULL);
		Enumerator_t46E99F03F8FD9AA09E082FAC4B9EAA28B317595E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m971A69F38F970B1CC85C65D48D5138158AF1374B (Queue_1_t541F36B96C754EC0884473F496C69455654CE269* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t46E99F03F8FD9AA09E082FAC4B9EAA28B317595E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1C585271003ACB43BE431E92440032A665D2EC2D((&L_0), __this, NULL);
		Enumerator_t46E99F03F8FD9AA09E082FAC4B9EAA28B317595E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 Queue_1_Dequeue_mD9EE401CE1A69A5FE7B209560624A8811E57BFE9 (Queue_1_t541F36B96C754EC0884473F496C69455654CE269* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* V_1 = NULL;
	BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 V_2;
	memset((&V_2), 0, sizeof(V_2));
	BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mDE2F65BDCFC28E52E77A765B34CD2A55E5D8202A(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_001c:
	{
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793));
		BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mA58ED5C7FA381806BC2F86957C25DDA0EEEFB6C4(__this, L_10, NULL);
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m50BE881DCDAE82E1EB0B3098EED8FE98302B7B37 (Queue_1_t541F36B96C754EC0884473F496C69455654CE269* __this, BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* V_1 = NULL;
	BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793));
		return (bool)0;
	}

IL_001f:
	{
		BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793* L_4 = ___0_result;
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793*)L_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793*)L_4)->___MeasurementParent), (void*)NULL);
	}
	{
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_9 = V_1;
		int32_t L_10 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793));
		BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 L_11 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793)L_11);
	}

IL_0043:
	{
		int32_t* L_12 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mA58ED5C7FA381806BC2F86957C25DDA0EEEFB6C4(__this, L_12, NULL);
		int32_t L_13 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 Queue_1_Peek_m5344CF30CF7AF9CB4DAC5E941E5CC18D9F131782 (Queue_1_t541F36B96C754EC0884473F496C69455654CE269* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mDE2F65BDCFC28E52E77A765B34CD2A55E5D8202A(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_000e:
	{
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m1B13FA322B456B1C58D250255957254416AAB52F (Queue_1_t541F36B96C754EC0884473F496C69455654CE269* __this, BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793));
		return (bool)0;
	}

IL_0011:
	{
		BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793* L_2 = ___0_result;
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793*)L_2)->___MeasurementParent), (void*)NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m28E316D231B20EA2F7B08020CE5F481B6A80389B (Queue_1_t541F36B96C754EC0884473F496C69455654CE269* __this, BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_3 = __this->____array;
		BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisBufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793_m5B672F7D3E238781884D50B658AD06DF1758DB1F(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_8 = __this->____array;
		BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = Array_IndexOf_TisBufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793_m5B672F7D3E238781884D50B658AD06DF1758DB1F(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_15 = __this->____array;
		BufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793 L_16 = ___0_item;
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = Array_IndexOf_TisBufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793_m5B672F7D3E238781884D50B658AD06DF1758DB1F(L_15, L_16, 0, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* Queue_1_ToArray_m3FD3313A9730648DD57200AD5ED9F706042F0AAC (Queue_1_t541F36B96C754EC0884473F496C69455654CE269* __this, const RuntimeMethod* method) 
{
	BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_1;
		L_1 = Array_Empty_TisBufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793_m0D7F90E8CD9C0D7D1A733617A36635B37970D8C5_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_3 = (BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A*)(BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_12 = V_0;
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_16 = __this->____array;
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_17 = V_0;
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m6BA072E9C2FE6C9614AB80E10F400F0D6F2DD777 (Queue_1_t541F36B96C754EC0884473F496C69455654CE269* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* V_0 = NULL;
	Queue_1_t541F36B96C754EC0884473F496C69455654CE269* G_B6_0 = NULL;
	Queue_1_t541F36B96C754EC0884473F496C69455654CE269* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t541F36B96C754EC0884473F496C69455654CE269* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_1 = (BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A*)(BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_11 = V_0;
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_15 = __this->____array;
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_16 = V_0;
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mDE2F65BDCFC28E52E77A765B34CD2A55E5D8202A (Queue_1_t541F36B96C754EC0884473F496C69455654CE269* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mD9ABACF3C6F6B26544CAD3963D870EDBF876AC05 (Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_0;
		L_0 = Array_Empty_TisBufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B_mA24712B06D4578AC3F65B5E3D404D871123788A1_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m52DAB65CE8BBF26D1BA9FCB584243C7427193526 (Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_6 = (BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1*)(BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m12AA14892A14C4F4CF0143B0FF8B434F74187893 (Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_4;
		L_4 = EnumerableHelpers_ToArray_TisBufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B_mED38FD2BE6BBDD99097FEA513FE4AB458CAA7CF9(L_2, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_6 = __this->____array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = __this->____size;
		__this->____tail = L_8;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mD2E481FC9091F668EA8CD0758F6AD1C8FCFB45ED (Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_11 = __this->____array;
		int32_t L_12 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_11, 0, L_12, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m8A54CB58D078AD758C1D608186644FB2394AD20C (Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mF867D705560865507ADC1D1A420BD37A1992333F (Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* __this, BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_mACF1500C52CD9E9E928C948F14F6346D4A035F15(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_0045:
	{
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mF3458D36BB62860A5CCFC01BEA5E9141CED83637(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC96CE84B09FB9FC6E4EFEE6D5C06D5EF1B71B9B5 Queue_1_GetEnumerator_m7C9656E55A8E4D76D45BD2391AC4B80A178BAEB3 (Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC96CE84B09FB9FC6E4EFEE6D5C06D5EF1B71B9B5 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2C4512CBD823F31822BC1F50692A3339E7E3C4D3((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m812064DA2481694F29B502FD13BE8EE431BC1BBF (Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC96CE84B09FB9FC6E4EFEE6D5C06D5EF1B71B9B5 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2C4512CBD823F31822BC1F50692A3339E7E3C4D3((&L_0), __this, NULL);
		Enumerator_tC96CE84B09FB9FC6E4EFEE6D5C06D5EF1B71B9B5 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mD0E78FD155A92C7A77C71521546FFEEF57D618CA (Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC96CE84B09FB9FC6E4EFEE6D5C06D5EF1B71B9B5 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2C4512CBD823F31822BC1F50692A3339E7E3C4D3((&L_0), __this, NULL);
		Enumerator_tC96CE84B09FB9FC6E4EFEE6D5C06D5EF1B71B9B5 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B Queue_1_Dequeue_m513C9B191B09C37647FA50B17D047A58C3AF04AB (Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* V_1 = NULL;
	BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B V_2;
	memset((&V_2), 0, sizeof(V_2));
	BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mBB9DA4562EF938AA789110CD3008C76E06AE7011(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_001c:
	{
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B));
		BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mF3458D36BB62860A5CCFC01BEA5E9141CED83637(__this, L_10, NULL);
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m9DCC06A25CDE8CF64A7B63C97653EB4C02CE60E4 (Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* __this, BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* V_1 = NULL;
	BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B));
		return (bool)0;
	}

IL_001f:
	{
		BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B* L_4 = ___0_result;
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B*)L_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B*)L_4)->___MeasurementParent), (void*)NULL);
	}
	{
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_9 = V_1;
		int32_t L_10 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B));
		BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B L_11 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B)L_11);
	}

IL_0043:
	{
		int32_t* L_12 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mF3458D36BB62860A5CCFC01BEA5E9141CED83637(__this, L_12, NULL);
		int32_t L_13 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B Queue_1_Peek_mEE702B4F3DC800587FD27319E13FC1F7B8D2A587 (Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mBB9DA4562EF938AA789110CD3008C76E06AE7011(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_000e:
	{
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_mEB295F663AB8689107ECC684D86789A4BDEF901C (Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* __this, BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B));
		return (bool)0;
	}

IL_0011:
	{
		BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B* L_2 = ___0_result;
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B*)L_2)->___MeasurementParent), (void*)NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m7C8E045E6565F89CD1446AB482555D658D28859B (Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* __this, BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_3 = __this->____array;
		BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisBufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B_mC8D470CDF178A0AFC22C83EA1DE47399AD4135F6(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_8 = __this->____array;
		BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = Array_IndexOf_TisBufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B_mC8D470CDF178A0AFC22C83EA1DE47399AD4135F6(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_15 = __this->____array;
		BufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B L_16 = ___0_item;
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = Array_IndexOf_TisBufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B_mC8D470CDF178A0AFC22C83EA1DE47399AD4135F6(L_15, L_16, 0, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* Queue_1_ToArray_m233B836C1CC92E057E5AF16625BE50AE6E387496 (Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* __this, const RuntimeMethod* method) 
{
	BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_1;
		L_1 = Array_Empty_TisBufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B_mA24712B06D4578AC3F65B5E3D404D871123788A1_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_3 = (BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1*)(BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_12 = V_0;
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_16 = __this->____array;
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_17 = V_0;
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mACF1500C52CD9E9E928C948F14F6346D4A035F15 (Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* V_0 = NULL;
	Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* G_B6_0 = NULL;
	Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_1 = (BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1*)(BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_11 = V_0;
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_15 = __this->____array;
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_16 = V_0;
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mBB9DA4562EF938AA789110CD3008C76E06AE7011 (Queue_1_tCAA59C2305B471CE3011BE5A56ADCDE9BD874F8D* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m39DCCD70C4F262773F23D716B03D0695841C101A (Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_0;
		L_0 = Array_Empty_TisBufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0_mF8AC95694454B9962BA620CED398EA67DA55087E_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m0235D1924E9998660AE3E490EEDA1B963B16E5AB (Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_6 = (BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C*)(BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6C7604B4F68577E9A0BCAC33A643D26169419AB9 (Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_4;
		L_4 = EnumerableHelpers_ToArray_TisBufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0_mAB61BC50526A4A3D1ED7E6A193B491E28078C10A(L_2, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_6 = __this->____array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = __this->____size;
		__this->____tail = L_8;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m66FF2C9040F62F0C7DEC80C55628CF8DA7FFCBFD (Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_11 = __this->____array;
		int32_t L_12 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_11, 0, L_12, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m7E1C56BD886746D019035F2CBC0E88A8750F1A5E (Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mE299DE2669C9C95AD0F2ECBB7C38D1196296CE1A (Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* __this, BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_mB3810752CD73FDDE5EB97A20296D7C88222E8AD5(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_0045:
	{
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m3698531DD9D83A2B0A6D51AA5E80C7B0C917638C(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t691F16C68346C86A806E537EAA594F815F1A67F5 Queue_1_GetEnumerator_m064B9F94F824FC90312FF6D3046E49BF6F6A2B44 (Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t691F16C68346C86A806E537EAA594F815F1A67F5 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m10A58E43FA559516B0CE22FE4DF3F3299780C2F5((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mF3E4E3BB9AE3BF292DD13C41930971DC2CC4435A (Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t691F16C68346C86A806E537EAA594F815F1A67F5 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m10A58E43FA559516B0CE22FE4DF3F3299780C2F5((&L_0), __this, NULL);
		Enumerator_t691F16C68346C86A806E537EAA594F815F1A67F5 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mA52D0D8C994425573B30A0420A9BA99193FBD615 (Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t691F16C68346C86A806E537EAA594F815F1A67F5 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m10A58E43FA559516B0CE22FE4DF3F3299780C2F5((&L_0), __this, NULL);
		Enumerator_t691F16C68346C86A806E537EAA594F815F1A67F5 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 Queue_1_Dequeue_m244EA1644B5235F06F21A06C3199C89D7003D9E4 (Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* V_1 = NULL;
	BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mBB50DA3EC9C11E4ABD93A06507FDE60366055A9B(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_001c:
	{
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0));
		BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m3698531DD9D83A2B0A6D51AA5E80C7B0C917638C(__this, L_10, NULL);
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m1C67AA93573F98EE4A04C7F9B2C00E4B0C02ACA0 (Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* __this, BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* V_1 = NULL;
	BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0));
		return (bool)0;
	}

IL_001f:
	{
		BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0* L_4 = ___0_result;
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0*)L_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0*)L_4)->___MeasurementParent), (void*)NULL);
	}
	{
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_9 = V_1;
		int32_t L_10 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0));
		BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 L_11 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0)L_11);
	}

IL_0043:
	{
		int32_t* L_12 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m3698531DD9D83A2B0A6D51AA5E80C7B0C917638C(__this, L_12, NULL);
		int32_t L_13 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 Queue_1_Peek_m04AD92188D8B47C8E8FBA6600C50EF3BAD5A6DE5 (Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mBB50DA3EC9C11E4ABD93A06507FDE60366055A9B(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_000e:
	{
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m10A0206808AF8FB3DB9C9E7FE9E8227C497E6FF9 (Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* __this, BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0));
		return (bool)0;
	}

IL_0011:
	{
		BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0* L_2 = ___0_result;
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0*)L_2)->___MeasurementParent), (void*)NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mA16E8EB2D76D874EDA7EAA1DADA89DBE5F557176 (Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* __this, BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_3 = __this->____array;
		BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisBufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0_mAF622962C6F9EE7BDA8F17B5A091B83F9FD67493(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_8 = __this->____array;
		BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = Array_IndexOf_TisBufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0_mAF622962C6F9EE7BDA8F17B5A091B83F9FD67493(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_15 = __this->____array;
		BufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0 L_16 = ___0_item;
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = Array_IndexOf_TisBufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0_mAF622962C6F9EE7BDA8F17B5A091B83F9FD67493(L_15, L_16, 0, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* Queue_1_ToArray_m2FEBC06742DC3090C3833E15BB446C3705A83280 (Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* __this, const RuntimeMethod* method) 
{
	BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_1;
		L_1 = Array_Empty_TisBufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0_mF8AC95694454B9962BA620CED398EA67DA55087E_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_3 = (BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C*)(BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_12 = V_0;
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_16 = __this->____array;
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_17 = V_0;
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mB3810752CD73FDDE5EB97A20296D7C88222E8AD5 (Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* V_0 = NULL;
	Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* G_B6_0 = NULL;
	Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_1 = (BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C*)(BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_11 = V_0;
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_15 = __this->____array;
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_16 = V_0;
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mBB50DA3EC9C11E4ABD93A06507FDE60366055A9B (Queue_1_t9C989E26AD4E3A395E2B27E37834B8AF32D756BC* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m12C88D449E450F4D1C61142CFFD8BEB11CA0801D (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_0;
		L_0 = Array_Empty_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m244C4902DCD6DA9F9BAAE5D0BD965581BE165229_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m984509B3E0B9C3263CFB8453C73F4AD9E3644E29 (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_6 = (ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389*)(ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mF74083B5A2D11AB8F7D526DF7EBE924EDBF0E357 (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_4;
		L_4 = EnumerableHelpers_ToArray_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m823DD3E24D0D38D0BB4C30AB8E1B14329F8EF4BB(L_2, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_6 = __this->____array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = __this->____size;
		__this->____tail = L_8;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m239580CDAFF1478FF7DD592CE58F7BB14CB4320C (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_11 = __this->____array;
		int32_t L_12 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_11, 0, L_12, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m1F4B1E8C5BE1DFE1659459E08D57769C90649592 (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mB3189D4F2FAB49DE8BFC520AC11AFE28648F50EA (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m7820EA4C718F05FC4176627F33CEB537A9AFE40B(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_0045:
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mDE2270884136ABAF283260B235151ACC8EE653FB(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF5E6D2CF41C59A70D02DEBEDEAD60CE503DA841F Queue_1_GetEnumerator_m64DE5101D07CDF2E81B8A63564C004CA4DEF01DC (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tF5E6D2CF41C59A70D02DEBEDEAD60CE503DA841F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC24F3945DEBBA0F2CA05A079C248A325676684FD((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8C189B18531AE6544A67CBB17969221C71ADC138 (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tF5E6D2CF41C59A70D02DEBEDEAD60CE503DA841F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC24F3945DEBBA0F2CA05A079C248A325676684FD((&L_0), __this, NULL);
		Enumerator_tF5E6D2CF41C59A70D02DEBEDEAD60CE503DA841F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mDDCF3BA617A03F977589A3E3794FE0A1FD01D940 (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tF5E6D2CF41C59A70D02DEBEDEAD60CE503DA841F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC24F3945DEBBA0F2CA05A079C248A325676684FD((&L_0), __this, NULL);
		Enumerator_tF5E6D2CF41C59A70D02DEBEDEAD60CE503DA841F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 Queue_1_Dequeue_m2B1A9109F2EB017EEADFE5A0DA25996F48FA851F (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* V_1 = NULL;
	ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4791F8E42F7D3E9E834E02D5A0B21FAB09ED59CC(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_001c:
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14));
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mDE2270884136ABAF283260B235151ACC8EE653FB(__this, L_10, NULL);
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m5187C53BA3A678F3013092222FE819F01489705B (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* V_1 = NULL;
	ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14));
		return (bool)0;
	}

IL_001f:
	{
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14* L_4 = ___0_result;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14*)L_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&((&(((ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14*)L_4)->___Item2))->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14*)L_4)->___Item2))->___m_LocationName), (void*)NULL);
		#endif
	}
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_9 = V_1;
		int32_t L_10 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14));
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 L_11 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14)L_11);
	}

IL_0043:
	{
		int32_t* L_12 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mDE2270884136ABAF283260B235151ACC8EE653FB(__this, L_12, NULL);
		int32_t L_13 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 Queue_1_Peek_m88B7A84ED17DF53B29A47529D05CAFACBB6C1416 (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4791F8E42F7D3E9E834E02D5A0B21FAB09ED59CC(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_000e:
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_mA4C851F1AA0E2004C086A3E5739289FF16CF431B (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14));
		return (bool)0;
	}

IL_0011:
	{
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14* L_2 = ___0_result;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&((&(((ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14*)L_2)->___Item2))->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14*)L_2)->___Item2))->___m_LocationName), (void*)NULL);
		#endif
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mE2E42F3F4D86DF74380403588FB5AF432D236121 (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_3 = __this->____array;
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m0F0917751CAF85CF53D3AC43174032A21DFACF5D(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_8 = __this->____array;
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = Array_IndexOf_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m0F0917751CAF85CF53D3AC43174032A21DFACF5D(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_15 = __this->____array;
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 L_16 = ___0_item;
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = Array_IndexOf_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m0F0917751CAF85CF53D3AC43174032A21DFACF5D(L_15, L_16, 0, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* Queue_1_ToArray_mA774FFB9884C3B8B260DAE21770421D4CEBB9B23 (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method) 
{
	ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_1;
		L_1 = Array_Empty_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m244C4902DCD6DA9F9BAAE5D0BD965581BE165229_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_3 = (ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389*)(ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_12 = V_0;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_16 = __this->____array;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_17 = V_0;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m7820EA4C718F05FC4176627F33CEB537A9AFE40B (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* V_0 = NULL;
	Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* G_B6_0 = NULL;
	Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_1 = (ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389*)(ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_11 = V_0;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_15 = __this->____array;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_16 = V_0;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4791F8E42F7D3E9E834E02D5A0B21FAB09ED59CC (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mB66785D5972BBBE6EB22E282C3D5D4E1131A0A09 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_0;
		L_0 = Array_Empty_TisValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8_m333097FF36C87F06696A8E782F14066A2841FE00_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m8549173980C70BE8390703ED0FBF7803C835E802 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_6 = (ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331*)(ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mF98957A62F9D456CC1C53367CD4C93DE7454AA9D (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_4;
		L_4 = EnumerableHelpers_ToArray_TisValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8_m45A8AFA11A75017CFB6A3C98B8D1BF14D15A7DD7(L_2, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_6 = __this->____array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = __this->____size;
		__this->____tail = L_8;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mAC5D0885BE3A9D6B8CDF27E55BD1E52DCCA78A57 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mF08075E4C5DE7AB9CF1B1E6706C7D884A70D385F (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m4160841F977D4A75E865A957E4F415C2085AD2EA (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m9E9616183C1194AAFA6DDD531B97467EC333432F(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_0045:
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m0174B1375CBCE5607C169FB96E6AB17DB97CB173(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t125C05E9FF652475E0BCF0E4A90A0DF5E495FD8C Queue_1_GetEnumerator_mD84BB8798A2C242B37E4CDF9B88AE53A8D100956 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t125C05E9FF652475E0BCF0E4A90A0DF5E495FD8C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8A7ED6A2B52302D616E21E025FBA1620A1BB8CC5((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9B797638694B2CA21CDD36D4BE4AC6285AB25602 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t125C05E9FF652475E0BCF0E4A90A0DF5E495FD8C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8A7ED6A2B52302D616E21E025FBA1620A1BB8CC5((&L_0), __this, NULL);
		Enumerator_t125C05E9FF652475E0BCF0E4A90A0DF5E495FD8C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mA316196029DAAFDD3EB5D15E023D36D8CB44901F (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t125C05E9FF652475E0BCF0E4A90A0DF5E495FD8C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8A7ED6A2B52302D616E21E025FBA1620A1BB8CC5((&L_0), __this, NULL);
		Enumerator_t125C05E9FF652475E0BCF0E4A90A0DF5E495FD8C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 Queue_1_Dequeue_m15F61A320AE0B8C554F254B3013FECEDDF880E2E (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* V_1 = NULL;
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m058F6E4F4E6EB759CA127F527926CEED7E30E380(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_001c:
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m0174B1375CBCE5607C169FB96E6AB17DB97CB173(__this, L_7, NULL);
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mA61F111358B54A3137D81F78C974E438556B79D4 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* V_1 = NULL;
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8));
		return (bool)0;
	}

IL_001f:
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* L_4 = ___0_result;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8*)L_4 = L_8;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t* L_9 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m0174B1375CBCE5607C169FB96E6AB17DB97CB173(__this, L_9, NULL);
		int32_t L_10 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 Queue_1_Peek_m43F47D835421140C248A9E1EDA4BED1C51E88051 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m058F6E4F4E6EB759CA127F527926CEED7E30E380(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_000e:
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m07BE4F109761367CBC4658D965AF6F2B14DF3F90 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8));
		return (bool)0;
	}

IL_0011:
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* L_2 = ___0_result;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8*)L_2 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m7F4521E7749EB6102F434314CFB63CD2E3136EB2 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_3 = __this->____array;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8_m4C53F9B0652D817DC94A124434E7349F0763D8A9(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_8 = __this->____array;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = Array_IndexOf_TisValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8_m4C53F9B0652D817DC94A124434E7349F0763D8A9(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_15 = __this->____array;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_16 = ___0_item;
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = Array_IndexOf_TisValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8_m4C53F9B0652D817DC94A124434E7349F0763D8A9(L_15, L_16, 0, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* Queue_1_ToArray_m3C17572356B065C664FB62FAF0EE4A8CAF6BFE09 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, const RuntimeMethod* method) 
{
	ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_1;
		L_1 = Array_Empty_TisValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8_m333097FF36C87F06696A8E782F14066A2841FE00_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_3 = (ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331*)(ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_12 = V_0;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_16 = __this->____array;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_17 = V_0;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9E9616183C1194AAFA6DDD531B97467EC333432F (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* V_0 = NULL;
	Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* G_B6_0 = NULL;
	Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_1 = (ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331*)(ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_11 = V_0;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_15 = __this->____array;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_16 = V_0;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m058F6E4F4E6EB759CA127F527926CEED7E30E380 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mC2547198A54AB222EA96E649C3A653C21785EE72 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_0;
		L_0 = Array_Empty_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1AD513F77218E59FBB83B12CD05888A1BF6D54B0_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mE3D16BAC10E3E8310BFD91E86E73A47FC415AF97 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_6 = (EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*)(EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m2F95E93AB0F1B64105FA27F8614AC19B3FC2CCFB (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_4;
		L_4 = EnumerableHelpers_ToArray_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1D20801BA00DC3128E7FD23AF767610D335C1D69(L_2, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_6 = __this->____array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = __this->____size;
		__this->____tail = L_8;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m74A7CE2E9F16893B7218F9F108F0C4F1328058A4 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_11 = __this->____array;
		int32_t L_12 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_11, 0, L_12, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mECF47CAE501BB0443EBE564E6C9EEC9AE8C41969 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mEA83B1259F57F18E4BF86A4CC43BAEC33D2FCA41 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m9C99B93C7AB97E316D1E8591BCF01B03FD5B9F1A(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_0045:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m86C24E3D8D2B55FCD5FE49614EEC466771A8471F(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 Queue_1_GetEnumerator_m4464DDCF024AA5806E45E241C0BC8BF2F71D574F (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m96AAB9F5DC5F6BBCB377A9459038CB7F0CF0875C((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m278165306205AA6C5E604C7DEECAEF450220A964 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m96AAB9F5DC5F6BBCB377A9459038CB7F0CF0875C((&L_0), __this, NULL);
		Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mA381A953C70DED15A56D8D12CB61B2DCC32EB94C (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m96AAB9F5DC5F6BBCB377A9459038CB7F0CF0875C((&L_0), __this, NULL);
		Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 Queue_1_Dequeue_m841B28D2AD7F6CEFF71B159D6B4B9526C4858780 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* V_1 = NULL;
	Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4E22F11E12D35FD450ED05E4C4A7D959DDCC8E58(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_001c:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215));
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m86C24E3D8D2B55FCD5FE49614EEC466771A8471F(__this, L_10, NULL);
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m43B77AA8B2CB606657CEC63A2EEC927AD5C4B81C (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* V_1 = NULL;
	Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215));
		return (bool)0;
	}

IL_001f:
	{
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215* L_4 = ___0_result;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215*)L_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215*)L_4)->____managedEvent), (void*)NULL);
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_9 = V_1;
		int32_t L_10 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215));
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_11 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215)L_11);
	}

IL_0043:
	{
		int32_t* L_12 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m86C24E3D8D2B55FCD5FE49614EEC466771A8471F(__this, L_12, NULL);
		int32_t L_13 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 Queue_1_Peek_mAA48A0CAF08E80D6DA532EECF0EB0DF69E895DA7 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4E22F11E12D35FD450ED05E4C4A7D959DDCC8E58(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_000e:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_mCF4D52D6B62F812F3A2C439D275CEC009E609FD4 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215));
		return (bool)0;
	}

IL_0011:
	{
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215* L_2 = ___0_result;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215*)L_2)->____managedEvent), (void*)NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mAB1CDDA12BB6C3AC86CF1086B6A1AE04FA0A533B (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_3 = __this->____array;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m783DEB1BEA7DFED9BEAA2878AE0FFC9E1A083B73(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_8 = __this->____array;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = Array_IndexOf_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m783DEB1BEA7DFED9BEAA2878AE0FFC9E1A083B73(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_15 = __this->____array;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_16 = ___0_item;
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = Array_IndexOf_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m783DEB1BEA7DFED9BEAA2878AE0FFC9E1A083B73(L_15, L_16, 0, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* Queue_1_ToArray_m41B953E9C03B9D934ED24354C0DD5F1AC440466D (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_1;
		L_1 = Array_Empty_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1AD513F77218E59FBB83B12CD05888A1BF6D54B0_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_3 = (EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*)(EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_12 = V_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_16 = __this->____array;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_17 = V_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9C99B93C7AB97E316D1E8591BCF01B03FD5B9F1A (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* V_0 = NULL;
	Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* G_B6_0 = NULL;
	Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_1 = (EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*)(EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_11 = V_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_15 = __this->____array;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_16 = V_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4E22F11E12D35FD450ED05E4C4A7D959DDCC8E58 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m96A50B699F8AB02C7B150D9FC07BE62D0ED01DB0 (Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_0;
		L_0 = Array_Empty_TisGenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7_m5352BA637AE5D914917F66A4CDB5EEDBBD097ECD_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m0319EF1E7B0E966B82BB7D4F3C772692E4F2B455 (Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_6 = (GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2*)(GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m05B733E200A37DF2254F5FD0ABCAF7479ECC654F (Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_4;
		L_4 = EnumerableHelpers_ToArray_TisGenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7_m10EA1DDF473F5C24192E0C0AE40B146C2430C35C(L_2, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_6 = __this->____array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = __this->____size;
		__this->____tail = L_8;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mC89EDB15016352FFA371AADAA6F2C5B37BED46F2 (Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_11 = __this->____array;
		int32_t L_12 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_11, 0, L_12, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m7F30305C5C4E33CCBFF99D2BC9380D8C75F53D8D (Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mD016E3DDA6F44E6ED50703C0E828051F6B2A7999 (Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* __this, GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_mAE09F8BB0C164AEC83265D6644227CB3A4E32E5B(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_0045:
	{
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m34A797F97B3B75CDE83CEF5A19E6FF6612FA6844(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tCF6A1348051624B29431EFA1119C303ECE490753 Queue_1_GetEnumerator_m8EE5EF5E6A10A6B5AE64766F60E4CD30DC37BF72 (Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tCF6A1348051624B29431EFA1119C303ECE490753 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE6C115B7182FDDC46B1D74A2B21DC19B3BD5659E((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m428825B804971BE548C142AB59153B41DE84497C (Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tCF6A1348051624B29431EFA1119C303ECE490753 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE6C115B7182FDDC46B1D74A2B21DC19B3BD5659E((&L_0), __this, NULL);
		Enumerator_tCF6A1348051624B29431EFA1119C303ECE490753 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m8C3E02DFA13B78F357160D84FBC30B264A414746 (Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tCF6A1348051624B29431EFA1119C303ECE490753 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE6C115B7182FDDC46B1D74A2B21DC19B3BD5659E((&L_0), __this, NULL);
		Enumerator_tCF6A1348051624B29431EFA1119C303ECE490753 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 Queue_1_Dequeue_m5FBDB9F4EE7D59D3A31A93D5098AEB755CA7FE3C (Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* V_1 = NULL;
	GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mE9F6E77A3DBBFAF787101FCFE932511B5BF375A9(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_001c:
	{
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7));
		GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m34A797F97B3B75CDE83CEF5A19E6FF6612FA6844(__this, L_10, NULL);
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m89A576790096B20FF40A1B8DBE602C8560CD2D1C (Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* __this, GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* V_1 = NULL;
	GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7));
		return (bool)0;
	}

IL_001f:
	{
		GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7* L_4 = ___0_result;
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7*)L_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7*)L_4)->___m_Tags), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7*)L_4)->___m_Info), (void*)NULL);
		#endif
	}
	{
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_9 = V_1;
		int32_t L_10 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7));
		GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 L_11 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7)L_11);
	}

IL_0043:
	{
		int32_t* L_12 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m34A797F97B3B75CDE83CEF5A19E6FF6612FA6844(__this, L_12, NULL);
		int32_t L_13 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 Queue_1_Peek_mD79DAC2C46DC1F03A0AC7DB0AC8DB4496D3F7CA3 (Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mE9F6E77A3DBBFAF787101FCFE932511B5BF375A9(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_000e:
	{
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m263E6A1B652A569BD3CAC4CED8E37986A2C53238 (Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* __this, GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7));
		return (bool)0;
	}

IL_0011:
	{
		GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7* L_2 = ___0_result;
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7*)L_2)->___m_Tags), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7*)L_2)->___m_Info), (void*)NULL);
		#endif
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m596DBF1D89D9A4ABBB90A9B1BB8682B2E3EFD525 (Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* __this, GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_3 = __this->____array;
		GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisGenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7_mE263CBEBDB0D565B6BB2462D7358FA40321CD3D6(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_8 = __this->____array;
		GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = Array_IndexOf_TisGenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7_mE263CBEBDB0D565B6BB2462D7358FA40321CD3D6(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_15 = __this->____array;
		GenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7 L_16 = ___0_item;
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = Array_IndexOf_TisGenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7_mE263CBEBDB0D565B6BB2462D7358FA40321CD3D6(L_15, L_16, 0, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* Queue_1_ToArray_mD86F230FA783A7381893E909075A15BD2397A94B (Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* __this, const RuntimeMethod* method) 
{
	GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_1;
		L_1 = Array_Empty_TisGenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7_m5352BA637AE5D914917F66A4CDB5EEDBBD097ECD_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_3 = (GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2*)(GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_12 = V_0;
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_16 = __this->____array;
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_17 = V_0;
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mAE09F8BB0C164AEC83265D6644227CB3A4E32E5B (Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* V_0 = NULL;
	Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* G_B6_0 = NULL;
	Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_1 = (GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2*)(GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_11 = V_0;
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_15 = __this->____array;
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_16 = V_0;
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mE9F6E77A3DBBFAF787101FCFE932511B5BF375A9 (Queue_1_t0BC0A2165247746DB8EAA58664E764B78BAF965D* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mCFBB78D8B30A0F7F62B7B13B48794314CF472D4D (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m076C3301880A7D7DD727CD62410765F552251804 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4;
		L_4 = EnumerableHelpers_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFD5911DDBDB2B3C1BCDAEE1DDF9EA8DCD3C5A22(L_2, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = __this->____size;
		__this->____tail = L_8;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m951B065722F6BAD8756DF930F0E77EFC01865B73 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_mC239D559AF84CEE25E8EEADB05B96025C66ED6D5(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_0045:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		int32_t L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int32_t)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 Queue_1_GetEnumerator_mC56A5519A861A13B2DFF0857D4908B7A495970D5 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m00D02E02E64C0C3A402468A862ED63F52FC4360D (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE((&L_0), __this, NULL);
		Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mB64344DD889D2DA18EA20A979560574BBB7CCE0B (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE((&L_0), __this, NULL);
		Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_001c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961(__this, L_7, NULL);
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mF23B51D36DEFCA09DFF8184B94A4F8BCEDA0D0D7 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		int32_t* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(int32_t));
		return (bool)0;
	}

IL_001f:
	{
		int32_t* L_4 = ___0_result;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(int32_t*)L_4 = L_8;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t* L_9 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961(__this, L_9, NULL);
		int32_t L_10 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Peek_m670D85E9DC1BD3A794F6006EE07A20E4AC33C08C (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m19D64AA56C1A7B16E6F20797C91B7F6F159731E7 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(int32_t));
		return (bool)0;
	}

IL_0011:
	{
		int32_t* L_2 = ___0_result;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(int32_t*)L_2 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m3ABAE00CC43C9B6561CE5F94724ED2FCD962BD64 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____array;
		int32_t L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____array;
		int32_t L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____array;
		int32_t L_16 = ___0_item;
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3(L_15, L_16, 0, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Queue_1_ToArray_mCB86607434F2C40D8E444E595A9748C0E72255BA (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->____array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mC239D559AF84CEE25E8EEADB05B96025C66ED6D5 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* G_B6_0 = NULL;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m3A126C80D91B2EB3C8E8BE072438D3C3640A5A75 (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_0;
		L_0 = Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mA6D219FBF1F11E55D74C0545DBF6AA18C5AF85B3 (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_6 = (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)(JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m388ED0224310D924D62C4353D2ABEF85BF639691 (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_4;
		L_4 = EnumerableHelpers_ToArray_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m9FE60EF16FC9F1660D9985A55E49DB74C66C07F6(L_2, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_6 = __this->____array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = __this->____size;
		__this->____tail = L_8;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m9B8DBB3F3DCFAE1306C2A604E8C4FCB5E80E4E59 (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mEEF9060CB1702EEB6695F115562EFB3DAA29992D (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m7ACC3D9CAAB2E747FE32FCB2928ED5886A5B33B1 (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m9A483395EF3F401BC08314BDE9392BD26EBE444F(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_0045:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B Queue_1_GetEnumerator_m092DE77C76645AFDD839F99DB6DB0C8A9FFD0B05 (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3BAEC4F450BC7747422D37AA9ADE3D522E3B6AA4 (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886((&L_0), __this, NULL);
		Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mB5643D90AE44533169A70ECBF4FB8D9BABC22A78 (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886((&L_0), __this, NULL);
		Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 Queue_1_Dequeue_mAB6FF2BF6F12E3AD12C7524DB9EB640CB5C3750E (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* V_1 = NULL;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_001c:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390(__this, L_7, NULL);
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mAAA90DFEB34EEA43B2591E9A86C92BC35C203BD6 (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* V_1 = NULL;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		return (bool)0;
	}

IL_001f:
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_4 = ___0_result;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08*)L_4 = L_8;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t* L_9 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390(__this, L_9, NULL);
		int32_t L_10 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 Queue_1_Peek_m639CC79FAC9BD961981FAD7C71CBC8FD7F122EDC (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_000e:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m94AB487054E12FD562B8AA2E2A4D4F718BCF4AB6 (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		return (bool)0;
	}

IL_0011:
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_2 = ___0_result;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08*)L_2 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mF17839D3523CFFAF643E06BD857B5FCB26EB9312 (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_3 = __this->____array;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_mCD89004E22CB4FEB73672DD2830E315DDA4DA3BE(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_8 = __this->____array;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = Array_IndexOf_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_mCD89004E22CB4FEB73672DD2830E315DDA4DA3BE(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_15 = __this->____array;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_16 = ___0_item;
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = Array_IndexOf_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_mCD89004E22CB4FEB73672DD2830E315DDA4DA3BE(L_15, L_16, 0, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* Queue_1_ToArray_m37BDB9698F8E57DC78F53E21C3E964A6A0CDA62A (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1;
		L_1 = Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_3 = (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)(JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_12 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_16 = __this->____array;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_17 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9A483395EF3F401BC08314BDE9392BD26EBE444F (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* V_0 = NULL;
	Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* G_B6_0 = NULL;
	Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1 = (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)(JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_11 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_15 = __this->____array;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_16 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m99C615BA0510B781179FDF17464F14BA14606C16 (Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_0;
		L_0 = Array_Empty_TisNetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D_m2837B294E32D879AC894BAEEB7B55FFBC12311A5_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mFB66270B4962DBC0E9647741A212DDC08B062FFF (Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_6 = (NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C*)(NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m55C61B9D69E76DFCBF44F64F6603FB687937CAC4 (Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_4;
		L_4 = EnumerableHelpers_ToArray_TisNetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D_m91A2A19BE020747C0D19CB30EC86E9D8F47FABCF(L_2, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_6 = __this->____array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = __this->____size;
		__this->____tail = L_8;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mDBE3AB1349B1FE99DF1279B385D776D2AED8F381 (Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m45A466BC7E9FFA70BF301B85027D770AF32258D3 (Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mF306D3927F786BED9AC0ADC4B6D32B9E9E5BE778 (Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* __this, NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m5843905C69BFE30CF0EF46E69C4FC1A5D70D352D(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_0045:
	{
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m7CE3985DB980CC314AB4DF8E3A3DDE6ABC1B3A40(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t351DC2DCB37605FA3E4D39DD9EB14A8950BF9CEC Queue_1_GetEnumerator_mA8EABB4C9B43EE8B43D07EA8AB942A2CD90379F3 (Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t351DC2DCB37605FA3E4D39DD9EB14A8950BF9CEC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m501BFCCC73F522AC3D00E0A5F4D617DE8A584DE1((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m33A8B00DB25866C803E07A56308CE9074056B7A1 (Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t351DC2DCB37605FA3E4D39DD9EB14A8950BF9CEC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m501BFCCC73F522AC3D00E0A5F4D617DE8A584DE1((&L_0), __this, NULL);
		Enumerator_t351DC2DCB37605FA3E4D39DD9EB14A8950BF9CEC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m00DD237E390A4956C6B4E8A7E37F230B2FD60167 (Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t351DC2DCB37605FA3E4D39DD9EB14A8950BF9CEC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m501BFCCC73F522AC3D00E0A5F4D617DE8A584DE1((&L_0), __this, NULL);
		Enumerator_t351DC2DCB37605FA3E4D39DD9EB14A8950BF9CEC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D Queue_1_Dequeue_m6B46BEF5A06474802D75D525D21229BCE6F44DD8 (Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* V_1 = NULL;
	NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D V_2;
	memset((&V_2), 0, sizeof(V_2));
	NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m8A894C6A415FD22DAE57556081CEDEBDA60C66E5(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_001c:
	{
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m7CE3985DB980CC314AB4DF8E3A3DDE6ABC1B3A40(__this, L_7, NULL);
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m1C0E92D71D4C781C00A480BE3B2CA03F76371C11 (Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* __this, NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* V_1 = NULL;
	NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D));
		return (bool)0;
	}

IL_001f:
	{
		NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D* L_4 = ___0_result;
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D*)L_4 = L_8;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t* L_9 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m7CE3985DB980CC314AB4DF8E3A3DDE6ABC1B3A40(__this, L_9, NULL);
		int32_t L_10 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D Queue_1_Peek_m0194CCF0EDA97C40128D419CBFACC2E1E7D4A1C3 (Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m8A894C6A415FD22DAE57556081CEDEBDA60C66E5(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_000e:
	{
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_mB862ABA82647C585570734DBB43B70FF4A3D079B (Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* __this, NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D));
		return (bool)0;
	}

IL_0011:
	{
		NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D* L_2 = ___0_result;
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D*)L_2 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mD888441BA62730167E7D7BE81C744A8D09D41402 (Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* __this, NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_3 = __this->____array;
		NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisNetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D_mF4691D21131840F57409938F3097739C103FACFB(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_8 = __this->____array;
		NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = Array_IndexOf_TisNetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D_mF4691D21131840F57409938F3097739C103FACFB(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_15 = __this->____array;
		NetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D L_16 = ___0_item;
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = Array_IndexOf_TisNetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D_mF4691D21131840F57409938F3097739C103FACFB(L_15, L_16, 0, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* Queue_1_ToArray_mEFA8CE32DB95E2795A0570F69A9E75BD31D8BB9A (Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* __this, const RuntimeMethod* method) 
{
	NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_1;
		L_1 = Array_Empty_TisNetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D_m2837B294E32D879AC894BAEEB7B55FFBC12311A5_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_3 = (NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C*)(NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_12 = V_0;
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_16 = __this->____array;
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_17 = V_0;
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5843905C69BFE30CF0EF46E69C4FC1A5D70D352D (Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* V_0 = NULL;
	Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* G_B6_0 = NULL;
	Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_1 = (NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C*)(NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_11 = V_0;
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_15 = __this->____array;
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_16 = V_0;
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m8A894C6A415FD22DAE57556081CEDEBDA60C66E5 (Queue_1_t1128269E1155A77715448252CF09883B35E2D83C* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mE1AFF3E3C820601DEF43A7B14AB2A9F25BC23C93 (Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_0;
		L_0 = Array_Empty_TisReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414_m0AB5EBBCEEF3D58D2B376C5A98B9DA304DBE9642_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m14AA54830ECCA863716D82DBE65BED968A7B0042 (Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_6 = (ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD*)(ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m8CADA3C00B12572400174949D4F271FB93149C5F (Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_4;
		L_4 = EnumerableHelpers_ToArray_TisReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414_m27F0356BF4AF40CD8A7D8431ACAF80062433C5A9(L_2, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_6 = __this->____array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = __this->____size;
		__this->____tail = L_8;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m1F3F38403A7BC77F640BAE9EDE23908E62DF5AC5 (Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m572DC5F181C946D6260596572A6EC32582C4B7DA (Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mD8CBB5BC67B2A236934331543F328326A68F173D (Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* __this, ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m3467F9A6920A051D04F6292058931130EC22D639(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_0045:
	{
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m4511A831104E6BDA2AAA941F897646E41F1240D6(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3C2A019B409CEB54CD6349665DC33F8292D54B5E Queue_1_GetEnumerator_mD97FDCABE51A072CBA92A4C685384B6C7FCBCB83 (Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3C2A019B409CEB54CD6349665DC33F8292D54B5E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mAA1563AC35863C47BF0DBEC8488C885194583349((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m0A98A9237B960312132C56D37A16173405D9E1D4 (Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3C2A019B409CEB54CD6349665DC33F8292D54B5E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mAA1563AC35863C47BF0DBEC8488C885194583349((&L_0), __this, NULL);
		Enumerator_t3C2A019B409CEB54CD6349665DC33F8292D54B5E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mCA36B2ACD17EC33A59AECCAD508234BA7206B233 (Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3C2A019B409CEB54CD6349665DC33F8292D54B5E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mAA1563AC35863C47BF0DBEC8488C885194583349((&L_0), __this, NULL);
		Enumerator_t3C2A019B409CEB54CD6349665DC33F8292D54B5E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 Queue_1_Dequeue_m931411ACDA25E4DCD31031FAA4DCED9417E46591 (Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* V_1 = NULL;
	ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m3E1E3A8D5B45A051842B75BE822847FE8320A26F(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_001c:
	{
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m4511A831104E6BDA2AAA941F897646E41F1240D6(__this, L_7, NULL);
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mC6162EC6AD80C3632B0AC77BB906A420BFA9C9D4 (Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* __this, ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* V_1 = NULL;
	ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414));
		return (bool)0;
	}

IL_001f:
	{
		ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414* L_4 = ___0_result;
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414*)L_4 = L_8;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t* L_9 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m4511A831104E6BDA2AAA941F897646E41F1240D6(__this, L_9, NULL);
		int32_t L_10 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 Queue_1_Peek_m49D4CA1B34422D452511F1A2231416B13A9342E7 (Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m3E1E3A8D5B45A051842B75BE822847FE8320A26F(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_000e:
	{
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m5530E7C1DE5AB85F63FE289D3D23F9BE09921EFE (Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* __this, ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414));
		return (bool)0;
	}

IL_0011:
	{
		ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414* L_2 = ___0_result;
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414*)L_2 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mD86DF5F59FB0EF0538841620D928F6B5F2C931E0 (Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* __this, ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_3 = __this->____array;
		ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414_m8494477DA8C5A804F81E1B7A196A2B8A97B426AF(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_8 = __this->____array;
		ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = Array_IndexOf_TisReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414_m8494477DA8C5A804F81E1B7A196A2B8A97B426AF(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_15 = __this->____array;
		ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 L_16 = ___0_item;
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = Array_IndexOf_TisReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414_m8494477DA8C5A804F81E1B7A196A2B8A97B426AF(L_15, L_16, 0, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* Queue_1_ToArray_m41816019D9784ACF17B974BB1491A346E780F4D1 (Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* __this, const RuntimeMethod* method) 
{
	ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_1;
		L_1 = Array_Empty_TisReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414_m0AB5EBBCEEF3D58D2B376C5A98B9DA304DBE9642_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_3 = (ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD*)(ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_12 = V_0;
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_16 = __this->____array;
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_17 = V_0;
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m3467F9A6920A051D04F6292058931130EC22D639 (Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* V_0 = NULL;
	Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* G_B6_0 = NULL;
	Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_1 = (ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD*)(ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_11 = V_0;
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_15 = __this->____array;
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_16 = V_0;
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m3E1E3A8D5B45A051842B75BE822847FE8320A26F (Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m10C40F7E548C1946659858BFA473B6CBD95FF904 (Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0;
		L_0 = Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mBA54E63FD043CDF50C61B6BAC72D6C1FC596E8FC (Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m8DDFF548FF5C38DAB6BFB6B0B50D853839EA82FA (Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4;
		L_4 = EnumerableHelpers_ToArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m094437E649CF9CB31141532A0571F9724D7E35EC(L_2, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->____array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = __this->____size;
		__this->____tail = L_8;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mA97537FB9EF5D093E8FE7B6F07998561E48A5A0E (Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mF9EAFA569F4A8FD8DB63BC1E9D9B60C0A90749E1 (Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m14504EB7E4AE1EA85E3D4D88BEBA493C1595B459 (Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* __this, float ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_mAC468123C57B71F3D4679BB79E6E8C531C0E1126(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_0045:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		float L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (float)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m48A7D79BE345D394E6D7BFAC0FD8601C111E1B4A(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2D4422D03B66E15DB324EDDEC9B8B8BE994B2ACE Queue_1_GetEnumerator_m142C9D8C0C21B0EDBE627636B32E20D752BE46E1 (Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2D4422D03B66E15DB324EDDEC9B8B8BE994B2ACE L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8539F806C1EAEF9AD9B733648C3268093710E07B((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mE3941F8C05E5DADE3C907D0BB60C52C6B77D212F (Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2D4422D03B66E15DB324EDDEC9B8B8BE994B2ACE L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8539F806C1EAEF9AD9B733648C3268093710E07B((&L_0), __this, NULL);
		Enumerator_t2D4422D03B66E15DB324EDDEC9B8B8BE994B2ACE L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mCDE3E662F5FA67935800C882264657397CDCAD89 (Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2D4422D03B66E15DB324EDDEC9B8B8BE994B2ACE L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8539F806C1EAEF9AD9B733648C3268093710E07B((&L_0), __this, NULL);
		Enumerator_t2D4422D03B66E15DB324EDDEC9B8B8BE994B2ACE L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Queue_1_Dequeue_mBACC5C5C572CEE16EEC3D0BE7BD08D625CF31F70 (Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	float V_2 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m596CA66B7465BF12B2DB5EAF640278EA7618C511(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_001c:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		float L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m48A7D79BE345D394E6D7BFAC0FD8601C111E1B4A(__this, L_7, NULL);
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mF4237BE8804CDB4DCAE607CB8F3630557D549E5B (Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* __this, float* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		float* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(float));
		return (bool)0;
	}

IL_001f:
	{
		float* L_4 = ___0_result;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		float L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(float*)L_4 = L_8;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t* L_9 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m48A7D79BE345D394E6D7BFAC0FD8601C111E1B4A(__this, L_9, NULL);
		int32_t L_10 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Queue_1_Peek_m04CD6A2D19FC02B236E7D0CE17C997387CEB5B61 (Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m596CA66B7465BF12B2DB5EAF640278EA7618C511(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_000e:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m8C8EF06E45C0756CD51109A307162A971ECA074A (Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* __this, float* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		float* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(float));
		return (bool)0;
	}

IL_0011:
	{
		float* L_2 = ___0_result;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		float L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(float*)L_2 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mFBCCF4B1E842F05E7C366439EE40AD3897D3A4E9 (Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* __this, float ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->____array;
		float L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m858F1C0E1DD59AF384654973FA814AC359896F57(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = __this->____array;
		float L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = Array_IndexOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m858F1C0E1DD59AF384654973FA814AC359896F57(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = __this->____array;
		float L_16 = ___0_item;
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = Array_IndexOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m858F1C0E1DD59AF384654973FA814AC359896F57(L_15, L_16, 0, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Queue_1_ToArray_mD279325B381C2D6D8EC4F23EF1D22169EA23F158 (Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* __this, const RuntimeMethod* method) 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1;
		L_1 = Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = __this->____array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mAC468123C57B71F3D4679BB79E6E8C531C0E1126 (Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* G_B6_0 = NULL;
	Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = __this->____array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m596CA66B7465BF12B2DB5EAF640278EA7618C511 (Queue_1_tBB15A96A0BD226BCEDC19339C7F969E4B3A42153* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m55FB0BDDDBD29B76BE8E6E743B21DD26D6E4F4E4 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m8FDD9C089831C7940194DA60CA2E1969FEFF9DB4 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m3DA078D58BF2E40F3254871DE5313FD31671B90C (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4;
		L_4 = EnumerableHelpers_ToArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m2EC70ED912E1788B30505A8C51AEB040904110C4(L_2, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->____array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = __this->____size;
		__this->____tail = L_8;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m782A85157C5B67F4C19D851FF84FF5BCEB69978B (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m1D3DF3EFD4164BD00A592079F5C2EC3A396DE35A (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m51CF9D36A7BD34DFA8CF476CCF7B22E8A4E626C3 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_mCA8E0FFC567DD0017C621A6B75027F8565CFA7E6(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_0045:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		uint32_t L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint32_t)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mE01938A89F813B0CCF58E0D82D23363114A97B85(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891 Queue_1_GetEnumerator_m8B7B7C3BD711ABD06C5D30756D552489D173A7A7 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m883CA17DC68406094FEFA9AAD8C40161CA35D1F3((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m5685E7A12DE80A72117F12A7887758E9C0B68788 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m883CA17DC68406094FEFA9AAD8C40161CA35D1F3((&L_0), __this, NULL);
		Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m0FE44563F84F3DC68BA9D00F81D9F78E76F5C559 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m883CA17DC68406094FEFA9AAD8C40161CA35D1F3((&L_0), __this, NULL);
		Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Queue_1_Dequeue_m8A2F84DC9CFD109881590CBFA0EC18DF2136C556 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t G_B4_0 = 0;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m87C0DAA7B799FEF651F40F96BDB0A437E1D24CEE(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_001c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mE01938A89F813B0CCF58E0D82D23363114A97B85(__this, L_7, NULL);
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m2074E2DF251C9324BB6EF1A3CD2D3F993E803D51 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, uint32_t* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		uint32_t* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(uint32_t));
		return (bool)0;
	}

IL_001f:
	{
		uint32_t* L_4 = ___0_result;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(uint32_t*)L_4 = L_8;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t* L_9 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mE01938A89F813B0CCF58E0D82D23363114A97B85(__this, L_9, NULL);
		int32_t L_10 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Queue_1_Peek_m6F1B03E72E4E3D23CC965CE849A9D09ABFF616D8 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m87C0DAA7B799FEF651F40F96BDB0A437E1D24CEE(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_000e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m021FEAB780F0532926C8B609B8679AFFB6953229 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, uint32_t* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		uint32_t* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(uint32_t));
		return (bool)0;
	}

IL_0011:
	{
		uint32_t* L_2 = ___0_result;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(uint32_t*)L_2 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mD1D4688926A2E0D1CABBF2D24DEE9464BDAB2CDF (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____array;
		uint32_t L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mFC8BDE74B86C42A57D89FDA28EED3DDEF7B67A17(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->____array;
		uint32_t L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = Array_IndexOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mFC8BDE74B86C42A57D89FDA28EED3DDEF7B67A17(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = __this->____array;
		uint32_t L_16 = ___0_item;
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = Array_IndexOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mFC8BDE74B86C42A57D89FDA28EED3DDEF7B67A17(L_15, L_16, 0, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Queue_1_ToArray_m559AF0C0E111A34796930C61F395F697D51E04A0 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = __this->____array;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mCA8E0FFC567DD0017C621A6B75027F8565CFA7E6 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* G_B6_0 = NULL;
	Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = __this->____array;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m87C0DAA7B799FEF651F40F96BDB0A437E1D24CEE (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m1437114CDC49136515E8EDDF0D770364E0F3EA67_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0;
		L_0 = Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m11C42D9546F5F11DF318235A97C3478958DE9555_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m5AD620F3408987D5948E437521441FC19CE1B90F_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4;
		L_4 = EnumerableHelpers_ToArray_TisIl2CppSharedGenericObject_m37DEC9E2E9EAC5C9E2673251FF736DDF40F8CA33(L_2, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = __this->____array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = __this->____size;
		__this->____tail = L_8;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m7399BCFE5F893D371CC3CDF389727B01EE0421D7_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_11 = __this->____array;
		int32_t L_12 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_11, 0, L_12, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m3DBDE5E03C6C52F1CBB9E4D93E590A8CC6D6EAB2_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m16F75E528EE6527E8B9E76AE7D7E455D5476C606_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m1549601D804B1A2FA09822B8FF6018C374086954(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_0045:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		Il2CppSharedGenericObject* L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Il2CppSharedGenericObject*)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m097052B8552DED4A35D537D3AEB84510090C9E70(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1 Queue_1_GetEnumerator_m931CF5C152723DE6DD0786DF3D5606A59C1BB1BF_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m37472EFA972090AD3A35A3715208772B2F3F6339((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2EC91485BA815E5429D3028BF5E4FCB425A30A54_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m37472EFA972090AD3A35A3715208772B2F3F6339((&L_0), __this, NULL);
		Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mFE2846F2C99D73CD09293F03A64D9A14150610D4_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m37472EFA972090AD3A35A3715208772B2F3F6339((&L_0), __this, NULL);
		Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Queue_1_Dequeue_m1ECED0A4B619428F2561AA3D053E73A097A10193_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_1 = NULL;
	Il2CppSharedGenericObject* V_2 = NULL;
	Il2CppSharedGenericObject* G_B4_0 = NULL;
	Il2CppSharedGenericObject* G_B3_0 = NULL;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m6EF406DB0A9F8B868374ABDF966B343F281FEE1F(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_001c:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Il2CppSharedGenericObject* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Il2CppSharedGenericObject*)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m097052B8552DED4A35D537D3AEB84510090C9E70(__this, L_10, NULL);
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m319CD24AE527B5C46266E649B3A5EF07DEC30618_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, Il2CppSharedGenericObject** ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_1 = NULL;
	Il2CppSharedGenericObject* V_2 = NULL;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		Il2CppSharedGenericObject** L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}

IL_001f:
	{
		Il2CppSharedGenericObject** L_4 = ___0_result;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Il2CppSharedGenericObject* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(Il2CppSharedGenericObject**)L_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_4, (void*)L_8);
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_9 = V_1;
		int32_t L_10 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_11 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (Il2CppSharedGenericObject*)L_11);
	}

IL_0043:
	{
		int32_t* L_12 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m097052B8552DED4A35D537D3AEB84510090C9E70(__this, L_12, NULL);
		int32_t L_13 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Queue_1_Peek_m5B2A289CDE4717E92A0BD9DAC12B70F42E833B93_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m6EF406DB0A9F8B868374ABDF966B343F281FEE1F(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_000e:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Il2CppSharedGenericObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_mF81C93E369F7FA8068EDAEDC682B48646FBE72D7_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, Il2CppSharedGenericObject** ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Il2CppSharedGenericObject** L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}

IL_0011:
	{
		Il2CppSharedGenericObject** L_2 = ___0_result;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Il2CppSharedGenericObject* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(Il2CppSharedGenericObject**)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_2, (void*)L_6);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mE3790371A44789AC06DD08E9262C6E17C5B0434F_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____array;
		Il2CppSharedGenericObject* L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_8 = __this->____array;
		Il2CppSharedGenericObject* L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_15 = __this->____array;
		Il2CppSharedGenericObject* L_16 = ___0_item;
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33(L_15, L_16, 0, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Queue_1_ToArray_m371E1FC76DD63BE6BA88DC598EA21757CE693440_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1;
		L_1 = Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = V_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_16 = __this->____array;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_17 = V_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m1549601D804B1A2FA09822B8FF6018C374086954_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* G_B6_0 = NULL;
	Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_11 = V_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_15 = __this->____array;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_16 = V_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m6EF406DB0A9F8B868374ABDF966B343F281FEE1F_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m657BFA58DFD6AB5B1B4B69AA6E963CD569637EAD_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0;
		L_0 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m2A01859D57AB64CDCAECDF68089FD2236759976C_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mA9E2AFA0F31EE75EBB6CB8F76A0088DEA2719DA8_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4;
		L_4 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (RuntimeObject*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_2, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = __this->____size;
		__this->____tail = L_8;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mE6103188ACDEC07F90F2D2986554730D18029750_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m1E7DDED94ADEB25172891CED1F68DFC880B66415_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m8E5ACA13B4BA41CC3230927ACEB3CF68820A8A05_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = il2cpp_intrinsic_interlocked_compare_exchange(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mF3F6BB3C909C58BB9407AA3FFA131CC73E1287AA_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		if (!L_1)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_2 = __this->____head;
		int32_t L_3 = __this->____tail;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0036;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____array;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, L_5, L_6, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->____array;
		int32_t L_8 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____array;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		int32_t L_11 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_10, L_11)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____array;
		int32_t L_13 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_12, 0, L_13, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m8ACB04592D3C4936139A90C1CE9B708BA3F7D47F_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m9159DC6A9BC5528A3444329C408F4101004CF652_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)))(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_0045:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_item : &___0_item), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		NullCheck(L_15);
		il2cpp_codegen_memcpy((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)), L_17, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), (void**)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)), (void*)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_GetEnumerator_m6C532F76552CCD7154B74816F66DA3CE367BD90D_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C L_0 = alloca(SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
	{
		memset(L_0, 0, SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
		Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB((Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*)L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m926D620709AEF33612E061F359920FA5A7F33D2F_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C L_0 = alloca(SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
	{
		memset(L_0, 0, SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
		Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB((Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*)L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mD615C747AA1C683E461CA820560E002427466EB8_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C L_0 = alloca(SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
	{
		memset(L_0, 0, SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
		Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB((Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*)L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Dequeue_m80C152387A53656EC4AEF450BCBA9087DC51EEE3_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	const Il2CppFullySharedGenericAny L_10 = L_6;
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	memset(V_2, 0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	Il2CppFullySharedGenericAny G_B4_0 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	memset(G_B4_0, 0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	memset(G_B3_0, 0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_001c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		bool L_7;
		L_7 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		if (!L_7)
		{
			il2cpp_codegen_memcpy(G_B4_0, L_6, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
			goto IL_003a;
		}
		il2cpp_codegen_memcpy(G_B3_0, L_6, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = V_1;
		int32_t L_9 = V_0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		il2cpp_codegen_memcpy(L_10, V_2, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		NullCheck(L_8);
		il2cpp_codegen_memcpy((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), L_10, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), (void**)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), (void*)L_10);
		il2cpp_codegen_memcpy(G_B4_0, G_B3_0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	}

IL_003a:
	{
		int32_t* L_11 = (int32_t*)(&__this->____head);
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, L_11, NULL);
		int32_t L_12 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, G_B4_0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mF090CA69829E519F9EDC2C3D4E9B271DF8D74125_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny* ___0_result, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	const Il2CppFullySharedGenericAny L_12 = L_8;
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	memset(V_2, 0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		return (bool)0;
	}

IL_001f:
	{
		Il2CppFullySharedGenericAny* L_4 = ___0_result;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_4, L_8, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), (void**)(Il2CppFullySharedGenericAny*)L_4, (void*)L_8);
		bool L_9;
		L_9 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = V_1;
		int32_t L_11 = V_0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		il2cpp_codegen_memcpy(L_12, V_2, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
	}

IL_0043:
	{
		int32_t* L_13 = (int32_t*)(&__this->____head);
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, L_13, NULL);
		int32_t L_14 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		int32_t L_15 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_15, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Peek_mC16DCF76985FF167BAB542F92D9AA03C1E210D8C_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_mA759DB49FBC988FD410603976DE2E9C0C693E500_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny* ___0_result, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		return (bool)0;
	}

IL_0011:
	{
		Il2CppFullySharedGenericAny* L_2 = ___0_result;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_2, L_6, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), (void**)(Il2CppFullySharedGenericAny*)L_2, (void*)L_6);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m18A922A2A41A33641FC69FAB29C41657375E682F_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	const Il2CppFullySharedGenericAny L_9 = L_4;
	const Il2CppFullySharedGenericAny L_16 = L_4;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____array;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_item : &___0_item), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10), NULL, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_4: *(void**)L_4), L_5, L_6);
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____array;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_item : &___0_item), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		int32_t L_10 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10), NULL, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_9: *(void**)L_9), L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = __this->____array;
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_item : &___0_item), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10), NULL, L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_16: *(void**)L_16), 0, L_17);
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Queue_1_ToArray_m6E3371A83B60239A394CB7E49FFB3380C75C5E52_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = __this->____array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5368BB1720798CB76A62CDC47D91036C4B07BBEB_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* G_B6_0 = NULL;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = __this->____array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *(L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_5 = ___0_index;
		int32_t L_6 = V_0;
		*(L_5) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4A409F6A724BB2356563FCEA1FD83322718EE8C9_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mF9F0CCD361DD36335F701637DB0A91CDFCD40E19 (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_0;
		L_0 = Array_Empty_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_mE2BC05CF2CE0B2267A4A0BF14227F75DE3AE1B0C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m33C64AFBF189BD0AA25EBC4608E517BBD625089E (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_6 = (fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F*)(fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mC1ED0D20C34A032667230216DD0611AA498F2D40 (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_4;
		L_4 = EnumerableHelpers_ToArray_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_m2A930FEE8BD350111D951F629623F65C036F9138(L_2, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_6 = __this->____array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = __this->____size;
		__this->____tail = L_8;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mBF6656865D56AE3A991C615258860EE6193BD7A5 (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_11 = __this->____array;
		int32_t L_12 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_11, 0, L_12, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m1083053FCFD0D7DDA7FAA5807BB10B5934D8CB11 (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m18D26287FE9A32E930D02B66939DFB31D5FCF78F (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m14974813FC1A5CF64863A43F459B1EA54951EF4B(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_0045:
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m9576D15FA3B418D2B0635A1AEC929FC1FBF8B7DC(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t46A96D1902EB6E630D5DAADD490183C6117140EB Queue_1_GetEnumerator_m5FE9BD6D1B207580A4F53E7257EEDF930A6030B4 (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t46A96D1902EB6E630D5DAADD490183C6117140EB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8835940C7ADB7336B372B7491513F6EFA5FD4799((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52BB3C5EFF7D8C65593447C335CFF5B68FDAD1C0 (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t46A96D1902EB6E630D5DAADD490183C6117140EB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8835940C7ADB7336B372B7491513F6EFA5FD4799((&L_0), __this, NULL);
		Enumerator_t46A96D1902EB6E630D5DAADD490183C6117140EB L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mC257374375F09D87B96AAE010159BEE1CF73EB82 (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t46A96D1902EB6E630D5DAADD490183C6117140EB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8835940C7ADB7336B372B7491513F6EFA5FD4799((&L_0), __this, NULL);
		Enumerator_t46A96D1902EB6E630D5DAADD490183C6117140EB L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 Queue_1_Dequeue_m54E80CEB7DA8D9BE61571B0F602A47B14C0FC0C2 (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* V_1 = NULL;
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mF881C86AA32F6E038826FACA66B04D1017730272(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_001c:
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8));
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m9576D15FA3B418D2B0635A1AEC929FC1FBF8B7DC(__this, L_10, NULL);
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m9D376B1E840D62FAF124C31B1B17C89104DB4EC1 (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* V_1 = NULL;
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8));
		return (bool)0;
	}

IL_001f:
	{
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* L_4 = ___0_result;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8*)L_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8*)L_4)->___Ancestors), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8*)L_4)->___VersionString), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8*)L_4)->___ModelType), (void*)NULL);
		#endif
	}
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_9 = V_1;
		int32_t L_10 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8));
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_11 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8)L_11);
	}

IL_0043:
	{
		int32_t* L_12 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m9576D15FA3B418D2B0635A1AEC929FC1FBF8B7DC(__this, L_12, NULL);
		int32_t L_13 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 Queue_1_Peek_m7364EED09A3549FBED78B58780C6CBAFF38EE4B0 (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mF881C86AA32F6E038826FACA66B04D1017730272(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_000e:
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m727BA2B334AC67CCFA9BAE00423CEA6C825DF910 (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8));
		return (bool)0;
	}

IL_0011:
	{
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* L_2 = ___0_result;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8*)L_2)->___Ancestors), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8*)L_2)->___VersionString), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8*)L_2)->___ModelType), (void*)NULL);
		#endif
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mCF85F9C91C629E76213DE6FCBC0062B2829072DF (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_3 = __this->____array;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_m6E152C1012CDEFCC963470201F2ECEA04F15FA94(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_8 = __this->____array;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = Array_IndexOf_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_m6E152C1012CDEFCC963470201F2ECEA04F15FA94(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_15 = __this->____array;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_16 = ___0_item;
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = Array_IndexOf_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_m6E152C1012CDEFCC963470201F2ECEA04F15FA94(L_15, L_16, 0, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* Queue_1_ToArray_m40F3F43D416B6C2635C769417D5D08D74CF8876C (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) 
{
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_1;
		L_1 = Array_Empty_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_mE2BC05CF2CE0B2267A4A0BF14227F75DE3AE1B0C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_3 = (fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F*)(fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_12 = V_0;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_16 = __this->____array;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_17 = V_0;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m14974813FC1A5CF64863A43F459B1EA54951EF4B (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* V_0 = NULL;
	Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* G_B6_0 = NULL;
	Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_1 = (fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F*)(fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_11 = V_0;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_15 = __this->____array;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_16 = V_0;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mF881C86AA32F6E038826FACA66B04D1017730272 (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m2DE8F8B9DE1D5BC2E5F36001518419C9E6695559 (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_0;
		L_0 = Array_Empty_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m1F5AF3B0DB852E19A991DCDC24B6830DF8F9D693_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mA974BFA7B44C594587B559A8DA5A101A47C1E37E (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_6 = (NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152*)(NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m091C1A5ADE80DD666E92CE683464E489D2370548 (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_4;
		L_4 = EnumerableHelpers_ToArray_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m4C2B20AC08050C8CEC18D394991A5A6C43957ECD(L_2, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_6 = __this->____array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = __this->____size;
		__this->____tail = L_8;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mC0664AD9450C784FED4111974E4E74294B79E87C (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_11 = __this->____array;
		int32_t L_12 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_11, 0, L_12, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m1DBAC19B5B86CBE90DEE1594FBB58DB11CAC3828 (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m841A6D1049C0BCBDFA331052CB187AE4E7B4B377 (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_mB5BBCB131795235F1D451276F1EB98241C700237(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_0045:
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m0CCC7BC2ACE4FF674828BC0076174FCDA5E1BCF9(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6366B8DEAF63A586D589D8598AE169C872E71AB1 Queue_1_GetEnumerator_m95D147BAFF6915F758CBD479868BF36408C5A2C2 (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6366B8DEAF63A586D589D8598AE169C872E71AB1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFF3543EC877CA4A256E7C467518F5F39D3C878EA((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mC0481E40350CA64BBF841CD9AC9D622882D85C20 (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6366B8DEAF63A586D589D8598AE169C872E71AB1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFF3543EC877CA4A256E7C467518F5F39D3C878EA((&L_0), __this, NULL);
		Enumerator_t6366B8DEAF63A586D589D8598AE169C872E71AB1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m3827E42DA13208D91FB5F3142FBC681794A6BFEC (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6366B8DEAF63A586D589D8598AE169C872E71AB1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFF3543EC877CA4A256E7C467518F5F39D3C878EA((&L_0), __this, NULL);
		Enumerator_t6366B8DEAF63A586D589D8598AE169C872E71AB1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A Queue_1_Dequeue_m07A1625196DFE37573D89D8AB2A077A513B2452F (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* V_1 = NULL;
	NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A V_2;
	memset((&V_2), 0, sizeof(V_2));
	NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m21666DCAD188F1F12D68F04EB99478509BBF179C(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_001c:
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A));
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m0CCC7BC2ACE4FF674828BC0076174FCDA5E1BCF9(__this, L_10, NULL);
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m6C38B3FD7CD6E8421EF898AF53ECBD126117B8D8 (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* V_1 = NULL;
	NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A));
		return (bool)0;
	}

IL_001f:
	{
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A* L_4 = ___0_result;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A*)L_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A*)L_4)->___U3CfocusedNodeU3Ek__BackingField), (void*)NULL);
	}
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_9 = V_1;
		int32_t L_10 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A));
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A L_11 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A)L_11);
	}

IL_0043:
	{
		int32_t* L_12 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m0CCC7BC2ACE4FF674828BC0076174FCDA5E1BCF9(__this, L_12, NULL);
		int32_t L_13 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A Queue_1_Peek_m6E8E8A963FE8048B47E653834509EFBECE746040 (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m21666DCAD188F1F12D68F04EB99478509BBF179C(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_000e:
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m5692C803F40334735CD389321CD072386FF86EB9 (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A));
		return (bool)0;
	}

IL_0011:
	{
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A* L_2 = ___0_result;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A*)L_2)->___U3CfocusedNodeU3Ek__BackingField), (void*)NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mAAE6209993218115D0C5A2573402016967BEA373 (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_3 = __this->____array;
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m21547F7DC82A078F000CAEECD6236B0F50711947(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_8 = __this->____array;
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = Array_IndexOf_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m21547F7DC82A078F000CAEECD6236B0F50711947(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_15 = __this->____array;
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A L_16 = ___0_item;
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = Array_IndexOf_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m21547F7DC82A078F000CAEECD6236B0F50711947(L_15, L_16, 0, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* Queue_1_ToArray_m0D55F3F75F7C3F833E385896B9F9D2C3BAF5B805 (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method) 
{
	NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_1;
		L_1 = Array_Empty_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m1F5AF3B0DB852E19A991DCDC24B6830DF8F9D693_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_3 = (NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152*)(NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_12 = V_0;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_16 = __this->____array;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_17 = V_0;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mB5BBCB131795235F1D451276F1EB98241C700237 (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* V_0 = NULL;
	Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* G_B6_0 = NULL;
	Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_1 = (NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152*)(NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_11 = V_0;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_15 = __this->____array;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_16 = V_0;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m21666DCAD188F1F12D68F04EB99478509BBF179C (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = Quaternion_Dot_m80E67A0F9F1FD9EAD0C8EEF7D5396ADF612FA105_inline((&___0_lhs), (&___1_rhs), NULL);
		bool L_1;
		L_1 = Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D Func_1_Invoke_m4AD1EF42FEA65A73A0F97B32AEAA011ACD11834A_inline (Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434* __this, const RuntimeMethod* method) 
{
	typedef DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mAD1782419344B04D36CFECF62A116E94574A3413_inline (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___0_item, const RuntimeMethod* method) 
{
	AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562* L_4 = V_0;
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
		AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562* L_7 = V_0;
		int32_t L_8 = V_1;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D)L_9);
		return;
	}

IL_0034:
	{
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_10 = ___0_item;
		List_1_AddWithResize_m9E1E291F68BC8D68EBCBF0394CF1117A15C9378A(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* Array_Empty_TisBufferedItem_t7E933A087F82884A8929B9A5BF900D1A7EFBF793_m0D7F90E8CD9C0D7D1A733617A36635B37970D8C5_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		BufferedItemU5BU5D_t7574423255CDD388CE9F78B5723052428145F81A* L_0 = ((EmptyArray_1_t9289360F3663B1BEC27F229FEE8182AC045C931B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* Array_Empty_TisBufferedItem_t54AAA0428AFCB34B48CB6695194AA81BE630A91B_mA24712B06D4578AC3F65B5E3D404D871123788A1_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		BufferedItemU5BU5D_t27FC2F2F30A7966D4832AFE9C9AB9CE96CDC83C1* L_0 = ((EmptyArray_1_t49961B2AD665FD8980AA9E0EF8868CF9738D9F4F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* Array_Empty_TisBufferedItem_t0DE0104B3860F6373FD3F0FD7296C2D2BCA3B6F0_mF8AC95694454B9962BA620CED398EA67DA55087E_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		BufferedItemU5BU5D_t1E5CE67196FE2CFC474F9231D7E589E360B2B05C* L_0 = ((EmptyArray_1_t734A9B12F7D1FAA24DA75420A14E9084FD420625_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* Array_Empty_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m244C4902DCD6DA9F9BAAE5D0BD965581BE165229_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_0 = ((EmptyArray_1_t849D96721854622FBB927351A0174ADAC0B239F9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* Array_Empty_TisValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8_m333097FF36C87F06696A8E782F14066A2841FE00_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_0 = ((EmptyArray_1_t692B58AFAED6F55B45924E251B036A18DA20E251_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* Array_Empty_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1AD513F77218E59FBB83B12CD05888A1BF6D54B0_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_0 = ((EmptyArray_1_t6CAC2B30CBBB3DF2C0516D226F177A7023251E16_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* Array_Empty_TisGenericContext_t0C0AED3A8D9D105C7D627EEB9B803BD3442537A7_m5352BA637AE5D914917F66A4CDB5EEDBBD097ECD_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		GenericContextU5BU5D_t0A3FA8F61D360F21B0AEC538B4CFE21E27F761D2* L_0 = ((EmptyArray_1_t386DAC36B5BCF1BFA38347278C84233B9D2B7A95_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_0 = ((EmptyArray_1_t0D07744D06CBE1D5EFB0F376FCD9DE664680DB24_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* Array_Empty_TisNetworkSceneHandle_tA610B2527B1ACB80F5DD0846BC521C0319C71E6D_m2837B294E32D879AC894BAEEB7B55FFBC12311A5_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		NetworkSceneHandleU5BU5D_t119CB2334D32A73DD096F4BC56531D09B05F639C* L_0 = ((EmptyArray_1_t196EE387A43D25F791B9DE12BA2836EE54C33DBE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* Array_Empty_TisReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414_m0AB5EBBCEEF3D58D2B376C5A98B9DA304DBE9642_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		ReleasedNetworkIdU5BU5D_t52D25C7546481273DC02D6EA1296FB2E1D76F6DD* L_0 = ((EmptyArray_1_tC3101D21B01AAD70B5DC5FEAD1EA8BFE6D84A621_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ((EmptyArray_1_t2984B8F74E4B1E6C047125D296C6C06779CA328D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((EmptyArray_1_t77BFDB090CFC6AE661834F0BD4ED43833F4F079D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ((EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* Array_Empty_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_mE2BC05CF2CE0B2267A4A0BF14227F75DE3AE1B0C_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_0 = ((EmptyArray_1_tD26FE3075DC228BE87FC137E462D9B9D87345E09_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* Array_Empty_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m1F5AF3B0DB852E19A991DCDC24B6830DF8F9D693_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_0 = ((EmptyArray_1_t056A375939E428E7C9460D3E2642DBDD3FD61751_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m80E67A0F9F1FD9EAD0C8EEF7D5396ADF612FA105_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_b, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_0 = ___0_a;
		float L_1 = L_0->___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_2 = ___1_b;
		float L_3 = L_2->___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_4 = ___0_a;
		float L_5 = L_4->___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_6 = ___1_b;
		float L_7 = L_6->___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_8 = ___0_a;
		float L_9 = L_8->___z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_10 = ___1_b;
		float L_11 = L_10->___z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_12 = ___0_a;
		float L_13 = L_12->___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_14 = ___1_b;
		float L_15 = L_14->___w;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___0_dot, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_dot;
		return (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
	}
}
