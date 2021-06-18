#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// System.Collections.Generic.Queue`1<LinkedList/QueueCommand>
struct Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48;
// System.Collections.Generic.Queue`1<TreeBuilder/TreeNode>
struct Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.LineRenderer[]
struct LineRendererU5BU5D_t65EF16DA3FB3E6D083B247824B04BE10D0B46743;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Graph/Vertex[]
struct VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD;
// LinkedList/QueueCommand[]
struct QueueCommandU5BU5D_t7BA0834DC3785185E457F2E214F1D3F261A1959B;
// SortingAlgorithm/ArrayIndex[]
struct ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182;
// TreeBuilder/TreeNode[]
struct TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA;
// System.Boolean[0...,0...]
struct BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4;
// UnityEngine.GameObject[0...,0...]
struct GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9;
// System.Int32[0...,0...]
struct Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17;
// UnityEngine.LineRenderer[0...,0...]
struct LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716;
// Algorithm
struct Algorithm_t85666CE177ABC801C0531E627E4F65BA084B3FD4;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// BellmanFord
struct BellmanFord_tF034A0015CFEFE527D5EA228B46EBBCAF94DDA36;
// BinaryTree
struct BinaryTree_t9FD84FA619479A213650DF2B59CBFF225D80C3CA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// BubbleSort
struct BubbleSort_t00AE6DE65B0614E3D25024FE761DC834FF4AF137;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// ColorGraph
struct ColorGraph_tAB66E4AF557020EE6F5A34C9969A712789E8410D;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// CountingSort
struct CountingSort_t963D5E012F88F698132B7849B2B54965A2B04042;
// Dijkstra
struct Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Graph
struct Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1;
// HeapSort
struct HeapSort_tF3A5CBE7F594426C904275F196AC877E1708E50D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// InsertionSort
struct InsertionSort_t6C0D3ED6F8FF5CAAA6E4CA02673A9AF43EC3B838;
// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967;
// LinkedList
struct LinkedList_t850219D15AE4341ACE77E391A1D59B17C1BF0250;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// MergeSort
struct MergeSort_t81ECEB36AD12DAE023E752167722586F7A96C805;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// NQueens
struct NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Collections.Queue
struct Queue_t66723C58C7422102C36F8570BE048BD0CC489E52;
// QuickSort
struct QuickSort_t42CA7BD01C0903F327C08E8D7E962F0682A2EE10;
// RadixSort
struct RadixSort_t8FE79B30D08B520388288585845B5D6FF1098F34;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SelectionSort
struct SelectionSort_t9FD04DF005AEF090D191014F3118E1CF362A8226;
// SortingAlgorithm
struct SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7;
// SortingAlgorithmWithAuxArray
struct SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF;
// System.String
struct String_t;
// Test
struct Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// TreeBuilder
struct TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// newTest
struct newTest_tEE6FBF90566D39E695646B45EA22384746C9B8AC;
// BellmanFord/BellmanFordVertex
struct BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// ColorGraph/ColorGraphVertex
struct ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67;
// CountingSort/ArrayIndexWithRepetition
struct ArrayIndexWithRepetition_tD46B46909AB1496831848484F2F397F6136382E3;
// Dijkstra/DijkstraVertex
struct DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D;
// Dijkstra/List
struct List_tA99646B75D64090652E535E147AF8DE405D97434;
// Graph/<readQueue>d__17
struct U3CreadQueueU3Ed__17_tE98D5B6097888700C315BAE31B0B699EF4396465;
// Graph/QueueCommand
struct QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8;
// Graph/Vertex
struct Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3;
// HeapSort/<extendCommands>d__2
struct U3CextendCommandsU3Ed__2_tB5CB72DF83F7DE624AB1B77724D0CE5FE3FC3FF9;
// LinkedList/<readQueue>d__8
struct U3CreadQueueU3Ed__8_t2A5B5A6D9CA49898AF9467883EB6F38AA0303EB7;
// LinkedList/LinkedListNode
struct LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118;
// LinkedList/QueueCommand
struct QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C;
// NQueens/<build>d__6
struct U3CbuildU3Ed__6_tCD71554657B65283EDF5B911E3CE57A1421F29F1;
// SortingAlgorithm/<readQueue>d__10
struct U3CreadQueueU3Ed__10_t3029C89FAFF9D6D1E9EFDF2B7604B11567DE71EE;
// SortingAlgorithm/ArrayIndex
struct ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367;
// SortingAlgorithmWithAuxArray/<extendCommands>d__6
struct U3CextendCommandsU3Ed__6_tF390D4906D3F0DB7F02E3F01B58DF422FCC50564;
// SortingAlgorithmWithAuxArray/AuxArrayIndex
struct AuxArrayIndex_tE70B103A9D225ACF3F1D1D30F76CE00FD45C2906;
// TreeBuilder/<readQueue>d__13
struct U3CreadQueueU3Ed__13_t6F0C1ECD9FAFBBD32DA5617BD6250B17D9F58C2A;
// TreeBuilder/QueueCommand
struct QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA;
// TreeBuilder/TreeNode
struct TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57;

IL2CPP_EXTERN_C RuntimeClass* ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayIndexWithRepetition_tD46B46909AB1496831848484F2F397F6136382E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuxArrayIndex_tE70B103A9D225ACF3F1D1D30F76CE00FD45C2906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BellmanFordVertexU5BU5D_t16E4B62F1FCBE8EF770C6AB579D087ED8BB34C3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorGraphVertexU5BU5D_tE38B7F6ABBB4F06D78CE581172CF127FC864F88B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DijkstraVertexU5BU5D_tFC37B5070EA84A56FE3EE861A3DBCEB46F6449F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LineRendererU5BU5D_t65EF16DA3FB3E6D083B247824B04BE10D0B46743_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_tA99646B75D64090652E535E147AF8DE405D97434_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_t66723C58C7422102C36F8570BE048BD0CC489E52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CbuildU3Ed__6_tCD71554657B65283EDF5B911E3CE57A1421F29F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CextendCommandsU3Ed__2_tB5CB72DF83F7DE624AB1B77724D0CE5FE3FC3FF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CextendCommandsU3Ed__6_tF390D4906D3F0DB7F02E3F01B58DF422FCC50564_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CreadQueueU3Ed__10_t3029C89FAFF9D6D1E9EFDF2B7604B11567DE71EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CreadQueueU3Ed__13_t6F0C1ECD9FAFBBD32DA5617BD6250B17D9F58C2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CreadQueueU3Ed__17_tE98D5B6097888700C315BAE31B0B699EF4396465_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CreadQueueU3Ed__8_t2A5B5A6D9CA49898AF9467883EB6F38AA0303EB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____157770F5D7F4BBE34AF324E9A255013A42217705ACB7E0F7AA05E771D4B531B8_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____1A39494CA8A5792132B9E7074016726CBA710970042FF604ED7A45944C8A9533_1_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteralAB94F79AF99EB1F84056002952B39BFDEA97D447;
IL2CPP_EXTERN_C String_t* _stringLiteralDFDBCF2A49BF9DDD9ADCA5B88723861DE76D2DE6;
IL2CPP_EXTERN_C const RuntimeMethod* BellmanFord_extendCommands_mA563DB4772587FC3DC0ACDDABDFE74362009DDC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BellmanFord_extendVertexColors_mE892A878CFBCBEC6F2C3C44CCA02A919B04A8F3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BubbleSort_extendCommands_m1590397E4206093E67CBB87A939FC585EBD71323_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ColorGraph_extendCommands_m0246663A14C08C42A88FD490D8CC47E9457E6BAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dijkstra_extendCommands_m0B8B611D9F1F551BB857E071F3EB2DD139EB9887_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dijkstra_extendVertexColors_m272ED0A09F9E3C249A30CA9F1C1E51FAF406E5D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0876A5D053CEC417CA9264BA08ED1E86E1D03DA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBA5F966551179F5952E00151B19A82AB02D0E01C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB21F69BF7572A716F0D74CA3962F4BAFE060235C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InsertionSort_extendCommands_m3E47C71633D889BF938DE08C2F8FDB8E3C37D1B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mE769A068858C351A22BA1A341DD8F446295CA684_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m86A50AEF137F420A440A69A037CFF01C17D372CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mBC976D1A97736DD12B93A7BDCCF45F2E5416AF1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_GetEnumerator_mC035E965383B7C164930DDCFBB43ACD31F54BB48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Peek_m583BDCD58C0011967FCAE7D16E3AE2F0A3AE2FDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m8E6554BB8D2559E8DE985782B37CE13F42972230_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mE7983B662E1519BC849AD5BB4674F9B1813C950D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m411FBCF7CE9A9507EE8A494554748E6A165B2114_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuickSort_extendCommands_m7BFD1C3DAB447885183C7535BFE2D9DE2F9688E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SelectionSort_extendCommands_m56FD29A38555E649DE48ABC1D65CAB39D287DDDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CbuildU3Ed__6_System_Collections_IEnumerator_Reset_mD033E9215D57D36C5BE319BD94D8CDCDB8D99520_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CextendCommandsU3Ed__2_System_Collections_IEnumerator_Reset_mF79779CDC455D17621B23B6D534F5565F6244CF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CextendCommandsU3Ed__6_System_Collections_IEnumerator_Reset_m65F71821A8F3378870544F747485C3F9A393A9E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CreadQueueU3Ed__10_System_Collections_IEnumerator_Reset_m6C8DD4EB9251682AA0CD0866DBB1522B72E1274C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CreadQueueU3Ed__13_System_Collections_IEnumerator_Reset_m577914D2A44533C9EB11AF4C551C25A99E3411A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CreadQueueU3Ed__17_System_Collections_IEnumerator_Reset_m2EB8636ECF04589BD99DFB947D20C2A610D31541_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CreadQueueU3Ed__8_System_Collections_IEnumerator_Reset_m98BC9E2AE1CDC26BEF138EC588DD0AA3BD91C79B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct LineRendererU5BU5D_t65EF16DA3FB3E6D083B247824B04BE10D0B46743;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct BellmanFordVertexU5BU5D_t16E4B62F1FCBE8EF770C6AB579D087ED8BB34C3A;
struct ColorGraphVertexU5BU5D_tE38B7F6ABBB4F06D78CE581172CF127FC864F88B;
struct DijkstraVertexU5BU5D_tFC37B5070EA84A56FE3EE861A3DBCEB46F6449F3;
struct VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD;
struct ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182;
struct TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA;
struct BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4;
struct GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9;
struct Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17;
struct LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716;

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


// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<LinkedList/QueueCommand>
struct Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	QueueCommandU5BU5D_t7BA0834DC3785185E457F2E214F1D3F261A1959B* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48, ____array_0)); }
	inline QueueCommandU5BU5D_t7BA0834DC3785185E457F2E214F1D3F261A1959B* get__array_0() const { return ____array_0; }
	inline QueueCommandU5BU5D_t7BA0834DC3785185E457F2E214F1D3F261A1959B** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(QueueCommandU5BU5D_t7BA0834DC3785185E457F2E214F1D3F261A1959B* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<TreeBuilder/TreeNode>
struct Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2, ____array_0)); }
	inline TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* get__array_0() const { return ____array_0; }
	inline TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields
{
public:
	// System.Int64 <PrivateImplementationDetails>::157770F5D7F4BBE34AF324E9A255013A42217705ACB7E0F7AA05E771D4B531B8
	int64_t ___157770F5D7F4BBE34AF324E9A255013A42217705ACB7E0F7AA05E771D4B531B8_0;
	// System.Int64 <PrivateImplementationDetails>::1A39494CA8A5792132B9E7074016726CBA710970042FF604ED7A45944C8A9533
	int64_t ___1A39494CA8A5792132B9E7074016726CBA710970042FF604ED7A45944C8A9533_1;

public:
	inline static int32_t get_offset_of_U3157770F5D7F4BBE34AF324E9A255013A42217705ACB7E0F7AA05E771D4B531B8_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___157770F5D7F4BBE34AF324E9A255013A42217705ACB7E0F7AA05E771D4B531B8_0)); }
	inline int64_t get_U3157770F5D7F4BBE34AF324E9A255013A42217705ACB7E0F7AA05E771D4B531B8_0() const { return ___157770F5D7F4BBE34AF324E9A255013A42217705ACB7E0F7AA05E771D4B531B8_0; }
	inline int64_t* get_address_of_U3157770F5D7F4BBE34AF324E9A255013A42217705ACB7E0F7AA05E771D4B531B8_0() { return &___157770F5D7F4BBE34AF324E9A255013A42217705ACB7E0F7AA05E771D4B531B8_0; }
	inline void set_U3157770F5D7F4BBE34AF324E9A255013A42217705ACB7E0F7AA05E771D4B531B8_0(int64_t value)
	{
		___157770F5D7F4BBE34AF324E9A255013A42217705ACB7E0F7AA05E771D4B531B8_0 = value;
	}

	inline static int32_t get_offset_of_U31A39494CA8A5792132B9E7074016726CBA710970042FF604ED7A45944C8A9533_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___1A39494CA8A5792132B9E7074016726CBA710970042FF604ED7A45944C8A9533_1)); }
	inline int64_t get_U31A39494CA8A5792132B9E7074016726CBA710970042FF604ED7A45944C8A9533_1() const { return ___1A39494CA8A5792132B9E7074016726CBA710970042FF604ED7A45944C8A9533_1; }
	inline int64_t* get_address_of_U31A39494CA8A5792132B9E7074016726CBA710970042FF604ED7A45944C8A9533_1() { return &___1A39494CA8A5792132B9E7074016726CBA710970042FF604ED7A45944C8A9533_1; }
	inline void set_U31A39494CA8A5792132B9E7074016726CBA710970042FF604ED7A45944C8A9533_1(int64_t value)
	{
		___1A39494CA8A5792132B9E7074016726CBA710970042FF604ED7A45944C8A9533_1 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____items_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___emptyArray_5;

public:
	inline static int32_t get_offset_of_emptyArray_5() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields, ___emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_emptyArray_5() const { return ___emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_emptyArray_5() { return &___emptyArray_5; }
	inline void set_emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyArray_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Collections.Queue
struct Queue_t66723C58C7422102C36F8570BE048BD0CC489E52  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Queue::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Queue::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Queue::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Queue::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Queue::_growFactor
	int32_t ____growFactor_4;
	// System.Int32 System.Collections.Queue::_version
	int32_t ____version_5;
	// System.Object System.Collections.Queue::_syncRoot
	RuntimeObject * ____syncRoot_6;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__growFactor_4() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____growFactor_4)); }
	inline int32_t get__growFactor_4() const { return ____growFactor_4; }
	inline int32_t* get_address_of__growFactor_4() { return &____growFactor_4; }
	inline void set__growFactor_4(int32_t value)
	{
		____growFactor_4 = value;
	}

	inline static int32_t get_offset_of__version_5() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____version_5)); }
	inline int32_t get__version_5() const { return ____version_5; }
	inline int32_t* get_address_of__version_5() { return &____version_5; }
	inline void set__version_5(int32_t value)
	{
		____version_5 = value;
	}

	inline static int32_t get_offset_of__syncRoot_6() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____syncRoot_6)); }
	inline RuntimeObject * get__syncRoot_6() const { return ____syncRoot_6; }
	inline RuntimeObject ** get_address_of__syncRoot_6() { return &____syncRoot_6; }
	inline void set__syncRoot_6(RuntimeObject * value)
	{
		____syncRoot_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_6), (void*)value);
	}
};


// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_3;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_4;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SeedArray_5;

public:
	inline static int32_t get_offset_of_inext_3() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inext_3)); }
	inline int32_t get_inext_3() const { return ___inext_3; }
	inline int32_t* get_address_of_inext_3() { return &___inext_3; }
	inline void set_inext_3(int32_t value)
	{
		___inext_3 = value;
	}

	inline static int32_t get_offset_of_inextp_4() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inextp_4)); }
	inline int32_t get_inextp_4() const { return ___inextp_4; }
	inline int32_t* get_address_of_inextp_4() { return &___inextp_4; }
	inline void set_inextp_4(int32_t value)
	{
		___inextp_4 = value;
	}

	inline static int32_t get_offset_of_SeedArray_5() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___SeedArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SeedArray_5() const { return ___SeedArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SeedArray_5() { return &___SeedArray_5; }
	inline void set_SeedArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SeedArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_5), (void*)value);
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Dijkstra/List
struct List_tA99646B75D64090652E535E147AF8DE405D97434  : public RuntimeObject
{
public:
	// Dijkstra/DijkstraVertex Dijkstra/List::vertex
	DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * ___vertex_0;
	// Dijkstra/List Dijkstra/List::next
	List_tA99646B75D64090652E535E147AF8DE405D97434 * ___next_1;

public:
	inline static int32_t get_offset_of_vertex_0() { return static_cast<int32_t>(offsetof(List_tA99646B75D64090652E535E147AF8DE405D97434, ___vertex_0)); }
	inline DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * get_vertex_0() const { return ___vertex_0; }
	inline DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D ** get_address_of_vertex_0() { return &___vertex_0; }
	inline void set_vertex_0(DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * value)
	{
		___vertex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertex_0), (void*)value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(List_tA99646B75D64090652E535E147AF8DE405D97434, ___next_1)); }
	inline List_tA99646B75D64090652E535E147AF8DE405D97434 * get_next_1() const { return ___next_1; }
	inline List_tA99646B75D64090652E535E147AF8DE405D97434 ** get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(List_tA99646B75D64090652E535E147AF8DE405D97434 * value)
	{
		___next_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_1), (void*)value);
	}
};


// Graph/<readQueue>d__17
struct U3CreadQueueU3Ed__17_tE98D5B6097888700C315BAE31B0B699EF4396465  : public RuntimeObject
{
public:
	// System.Int32 Graph/<readQueue>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Graph/<readQueue>d__17::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Graph Graph/<readQueue>d__17::<>4__this
	Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * ___U3CU3E4__this_2;
	// System.Collections.IEnumerator Graph/<readQueue>d__17::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CreadQueueU3Ed__17_tE98D5B6097888700C315BAE31B0B699EF4396465, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CreadQueueU3Ed__17_tE98D5B6097888700C315BAE31B0B699EF4396465, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CreadQueueU3Ed__17_tE98D5B6097888700C315BAE31B0B699EF4396465, ___U3CU3E4__this_2)); }
	inline Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CreadQueueU3Ed__17_tE98D5B6097888700C315BAE31B0B699EF4396465, ___U3CU3E7__wrap1_3)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_3), (void*)value);
	}
};


// Graph/QueueCommand
struct QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8  : public RuntimeObject
{
public:
	// System.Int16 Graph/QueueCommand::commandId
	int16_t ___commandId_0;
	// System.Int16 Graph/QueueCommand::additionalInfo
	int16_t ___additionalInfo_1;
	// System.Int32 Graph/QueueCommand::v1
	int32_t ___v1_2;
	// System.Int32 Graph/QueueCommand::v2
	int32_t ___v2_3;

public:
	inline static int32_t get_offset_of_commandId_0() { return static_cast<int32_t>(offsetof(QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8, ___commandId_0)); }
	inline int16_t get_commandId_0() const { return ___commandId_0; }
	inline int16_t* get_address_of_commandId_0() { return &___commandId_0; }
	inline void set_commandId_0(int16_t value)
	{
		___commandId_0 = value;
	}

	inline static int32_t get_offset_of_additionalInfo_1() { return static_cast<int32_t>(offsetof(QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8, ___additionalInfo_1)); }
	inline int16_t get_additionalInfo_1() const { return ___additionalInfo_1; }
	inline int16_t* get_address_of_additionalInfo_1() { return &___additionalInfo_1; }
	inline void set_additionalInfo_1(int16_t value)
	{
		___additionalInfo_1 = value;
	}

	inline static int32_t get_offset_of_v1_2() { return static_cast<int32_t>(offsetof(QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8, ___v1_2)); }
	inline int32_t get_v1_2() const { return ___v1_2; }
	inline int32_t* get_address_of_v1_2() { return &___v1_2; }
	inline void set_v1_2(int32_t value)
	{
		___v1_2 = value;
	}

	inline static int32_t get_offset_of_v2_3() { return static_cast<int32_t>(offsetof(QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8, ___v2_3)); }
	inline int32_t get_v2_3() const { return ___v2_3; }
	inline int32_t* get_address_of_v2_3() { return &___v2_3; }
	inline void set_v2_3(int32_t value)
	{
		___v2_3 = value;
	}
};


// Graph/Vertex
struct Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3  : public RuntimeObject
{
public:
	// System.Int32 Graph/Vertex::value
	int32_t ___value_0;
	// UnityEngine.GameObject Graph/Vertex::o
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___o_1;
	// System.Collections.ArrayList Graph/Vertex::neighbors
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___neighbors_2;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_o_1() { return static_cast<int32_t>(offsetof(Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3, ___o_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_o_1() const { return ___o_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_o_1() { return &___o_1; }
	inline void set_o_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___o_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___o_1), (void*)value);
	}

	inline static int32_t get_offset_of_neighbors_2() { return static_cast<int32_t>(offsetof(Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3, ___neighbors_2)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_neighbors_2() const { return ___neighbors_2; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_neighbors_2() { return &___neighbors_2; }
	inline void set_neighbors_2(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___neighbors_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___neighbors_2), (void*)value);
	}
};


// HeapSort/<extendCommands>d__2
struct U3CextendCommandsU3Ed__2_tB5CB72DF83F7DE624AB1B77724D0CE5FE3FC3FF9  : public RuntimeObject
{
public:
	// System.Int32 HeapSort/<extendCommands>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object HeapSort/<extendCommands>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int16[] HeapSort/<extendCommands>d__2::command
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___command_2;
	// HeapSort HeapSort/<extendCommands>d__2::<>4__this
	HeapSort_tF3A5CBE7F594426C904275F196AC877E1708E50D * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CextendCommandsU3Ed__2_tB5CB72DF83F7DE624AB1B77724D0CE5FE3FC3FF9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CextendCommandsU3Ed__2_tB5CB72DF83F7DE624AB1B77724D0CE5FE3FC3FF9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_command_2() { return static_cast<int32_t>(offsetof(U3CextendCommandsU3Ed__2_tB5CB72DF83F7DE624AB1B77724D0CE5FE3FC3FF9, ___command_2)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_command_2() const { return ___command_2; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_command_2() { return &___command_2; }
	inline void set_command_2(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___command_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___command_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CextendCommandsU3Ed__2_tB5CB72DF83F7DE624AB1B77724D0CE5FE3FC3FF9, ___U3CU3E4__this_3)); }
	inline HeapSort_tF3A5CBE7F594426C904275F196AC877E1708E50D * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline HeapSort_tF3A5CBE7F594426C904275F196AC877E1708E50D ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(HeapSort_tF3A5CBE7F594426C904275F196AC877E1708E50D * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// LinkedList/LinkedListNode
struct LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118  : public RuntimeObject
{
public:
	// System.Int32 LinkedList/LinkedListNode::value
	int32_t ___value_0;
	// UnityEngine.GameObject LinkedList/LinkedListNode::Object
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Object_1;
	// LinkedList/LinkedListNode LinkedList/LinkedListNode::next
	LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * ___next_2;
	// UnityEngine.LineRenderer LinkedList/LinkedListNode::nextEdge
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___nextEdge_3;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_Object_1() { return static_cast<int32_t>(offsetof(LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118, ___Object_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Object_1() const { return ___Object_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Object_1() { return &___Object_1; }
	inline void set_Object_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Object_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Object_1), (void*)value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118, ___next_2)); }
	inline LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * get_next_2() const { return ___next_2; }
	inline LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_2), (void*)value);
	}

	inline static int32_t get_offset_of_nextEdge_3() { return static_cast<int32_t>(offsetof(LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118, ___nextEdge_3)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_nextEdge_3() const { return ___nextEdge_3; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_nextEdge_3() { return &___nextEdge_3; }
	inline void set_nextEdge_3(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___nextEdge_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextEdge_3), (void*)value);
	}
};


// LinkedList/QueueCommand
struct QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C  : public RuntimeObject
{
public:
	// System.Int16 LinkedList/QueueCommand::commandId
	int16_t ___commandId_0;
	// LinkedList/LinkedListNode LinkedList/QueueCommand::node1
	LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * ___node1_1;
	// System.Int16 LinkedList/QueueCommand::additionalInfo
	int16_t ___additionalInfo_2;

public:
	inline static int32_t get_offset_of_commandId_0() { return static_cast<int32_t>(offsetof(QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C, ___commandId_0)); }
	inline int16_t get_commandId_0() const { return ___commandId_0; }
	inline int16_t* get_address_of_commandId_0() { return &___commandId_0; }
	inline void set_commandId_0(int16_t value)
	{
		___commandId_0 = value;
	}

	inline static int32_t get_offset_of_node1_1() { return static_cast<int32_t>(offsetof(QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C, ___node1_1)); }
	inline LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * get_node1_1() const { return ___node1_1; }
	inline LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 ** get_address_of_node1_1() { return &___node1_1; }
	inline void set_node1_1(LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * value)
	{
		___node1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___node1_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalInfo_2() { return static_cast<int32_t>(offsetof(QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C, ___additionalInfo_2)); }
	inline int16_t get_additionalInfo_2() const { return ___additionalInfo_2; }
	inline int16_t* get_address_of_additionalInfo_2() { return &___additionalInfo_2; }
	inline void set_additionalInfo_2(int16_t value)
	{
		___additionalInfo_2 = value;
	}
};


// NQueens/<build>d__6
struct U3CbuildU3Ed__6_tCD71554657B65283EDF5B911E3CE57A1421F29F1  : public RuntimeObject
{
public:
	// System.Int32 NQueens/<build>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object NQueens/<build>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 NQueens/<build>d__6::column
	int32_t ___column_2;
	// System.Int32 NQueens/<build>d__6::size
	int32_t ___size_3;
	// NQueens NQueens/<build>d__6::<>4__this
	NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * ___U3CU3E4__this_4;
	// System.Int32 NQueens/<build>d__6::<i>5__2
	int32_t ___U3CiU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CbuildU3Ed__6_tCD71554657B65283EDF5B911E3CE57A1421F29F1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CbuildU3Ed__6_tCD71554657B65283EDF5B911E3CE57A1421F29F1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_column_2() { return static_cast<int32_t>(offsetof(U3CbuildU3Ed__6_tCD71554657B65283EDF5B911E3CE57A1421F29F1, ___column_2)); }
	inline int32_t get_column_2() const { return ___column_2; }
	inline int32_t* get_address_of_column_2() { return &___column_2; }
	inline void set_column_2(int32_t value)
	{
		___column_2 = value;
	}

	inline static int32_t get_offset_of_size_3() { return static_cast<int32_t>(offsetof(U3CbuildU3Ed__6_tCD71554657B65283EDF5B911E3CE57A1421F29F1, ___size_3)); }
	inline int32_t get_size_3() const { return ___size_3; }
	inline int32_t* get_address_of_size_3() { return &___size_3; }
	inline void set_size_3(int32_t value)
	{
		___size_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CbuildU3Ed__6_tCD71554657B65283EDF5B911E3CE57A1421F29F1, ___U3CU3E4__this_4)); }
	inline NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CbuildU3Ed__6_tCD71554657B65283EDF5B911E3CE57A1421F29F1, ___U3CiU3E5__2_5)); }
	inline int32_t get_U3CiU3E5__2_5() const { return ___U3CiU3E5__2_5; }
	inline int32_t* get_address_of_U3CiU3E5__2_5() { return &___U3CiU3E5__2_5; }
	inline void set_U3CiU3E5__2_5(int32_t value)
	{
		___U3CiU3E5__2_5 = value;
	}
};


// SortingAlgorithm/<readQueue>d__10
struct U3CreadQueueU3Ed__10_t3029C89FAFF9D6D1E9EFDF2B7604B11567DE71EE  : public RuntimeObject
{
public:
	// System.Int32 SortingAlgorithm/<readQueue>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SortingAlgorithm/<readQueue>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// SortingAlgorithm SortingAlgorithm/<readQueue>d__10::<>4__this
	SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * ___U3CU3E4__this_2;
	// System.Int32 SortingAlgorithm/<readQueue>d__10::time
	int32_t ___time_3;
	// System.Collections.IEnumerator SortingAlgorithm/<readQueue>d__10::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_4;
	// System.Int32 SortingAlgorithm/<readQueue>d__10::<i>5__3
	int32_t ___U3CiU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CreadQueueU3Ed__10_t3029C89FAFF9D6D1E9EFDF2B7604B11567DE71EE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CreadQueueU3Ed__10_t3029C89FAFF9D6D1E9EFDF2B7604B11567DE71EE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CreadQueueU3Ed__10_t3029C89FAFF9D6D1E9EFDF2B7604B11567DE71EE, ___U3CU3E4__this_2)); }
	inline SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(U3CreadQueueU3Ed__10_t3029C89FAFF9D6D1E9EFDF2B7604B11567DE71EE, ___time_3)); }
	inline int32_t get_time_3() const { return ___time_3; }
	inline int32_t* get_address_of_time_3() { return &___time_3; }
	inline void set_time_3(int32_t value)
	{
		___time_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3CreadQueueU3Ed__10_t3029C89FAFF9D6D1E9EFDF2B7604B11567DE71EE, ___U3CU3E7__wrap1_4)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CreadQueueU3Ed__10_t3029C89FAFF9D6D1E9EFDF2B7604B11567DE71EE, ___U3CiU3E5__3_5)); }
	inline int32_t get_U3CiU3E5__3_5() const { return ___U3CiU3E5__3_5; }
	inline int32_t* get_address_of_U3CiU3E5__3_5() { return &___U3CiU3E5__3_5; }
	inline void set_U3CiU3E5__3_5(int32_t value)
	{
		___U3CiU3E5__3_5 = value;
	}
};


// SortingAlgorithm/ArrayIndex
struct ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367  : public RuntimeObject
{
public:
	// UnityEngine.GameObject SortingAlgorithm/ArrayIndex::o
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___o_0;
	// System.Int32 SortingAlgorithm/ArrayIndex::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_o_0() { return static_cast<int32_t>(offsetof(ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367, ___o_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_o_0() const { return ___o_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_o_0() { return &___o_0; }
	inline void set_o_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___o_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___o_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};


// SortingAlgorithmWithAuxArray/<extendCommands>d__6
struct U3CextendCommandsU3Ed__6_tF390D4906D3F0DB7F02E3F01B58DF422FCC50564  : public RuntimeObject
{
public:
	// System.Int32 SortingAlgorithmWithAuxArray/<extendCommands>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SortingAlgorithmWithAuxArray/<extendCommands>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int16[] SortingAlgorithmWithAuxArray/<extendCommands>d__6::instr
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___instr_2;
	// SortingAlgorithmWithAuxArray SortingAlgorithmWithAuxArray/<extendCommands>d__6::<>4__this
	SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * ___U3CU3E4__this_3;
	// System.Int32 SortingAlgorithmWithAuxArray/<extendCommands>d__6::time
	int32_t ___time_4;
	// System.Int32 SortingAlgorithmWithAuxArray/<extendCommands>d__6::<i>5__2
	int32_t ___U3CiU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CextendCommandsU3Ed__6_tF390D4906D3F0DB7F02E3F01B58DF422FCC50564, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CextendCommandsU3Ed__6_tF390D4906D3F0DB7F02E3F01B58DF422FCC50564, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_instr_2() { return static_cast<int32_t>(offsetof(U3CextendCommandsU3Ed__6_tF390D4906D3F0DB7F02E3F01B58DF422FCC50564, ___instr_2)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_instr_2() const { return ___instr_2; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_instr_2() { return &___instr_2; }
	inline void set_instr_2(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___instr_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instr_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CextendCommandsU3Ed__6_tF390D4906D3F0DB7F02E3F01B58DF422FCC50564, ___U3CU3E4__this_3)); }
	inline SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(U3CextendCommandsU3Ed__6_tF390D4906D3F0DB7F02E3F01B58DF422FCC50564, ___time_4)); }
	inline int32_t get_time_4() const { return ___time_4; }
	inline int32_t* get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(int32_t value)
	{
		___time_4 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CextendCommandsU3Ed__6_tF390D4906D3F0DB7F02E3F01B58DF422FCC50564, ___U3CiU3E5__2_5)); }
	inline int32_t get_U3CiU3E5__2_5() const { return ___U3CiU3E5__2_5; }
	inline int32_t* get_address_of_U3CiU3E5__2_5() { return &___U3CiU3E5__2_5; }
	inline void set_U3CiU3E5__2_5(int32_t value)
	{
		___U3CiU3E5__2_5 = value;
	}
};


// TreeBuilder/<readQueue>d__13
struct U3CreadQueueU3Ed__13_t6F0C1ECD9FAFBBD32DA5617BD6250B17D9F58C2A  : public RuntimeObject
{
public:
	// System.Int32 TreeBuilder/<readQueue>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TreeBuilder/<readQueue>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TreeBuilder TreeBuilder/<readQueue>d__13::<>4__this
	TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC * ___U3CU3E4__this_2;
	// System.Single TreeBuilder/<readQueue>d__13::time
	float ___time_3;
	// System.Collections.IEnumerator TreeBuilder/<readQueue>d__13::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CreadQueueU3Ed__13_t6F0C1ECD9FAFBBD32DA5617BD6250B17D9F58C2A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CreadQueueU3Ed__13_t6F0C1ECD9FAFBBD32DA5617BD6250B17D9F58C2A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CreadQueueU3Ed__13_t6F0C1ECD9FAFBBD32DA5617BD6250B17D9F58C2A, ___U3CU3E4__this_2)); }
	inline TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(U3CreadQueueU3Ed__13_t6F0C1ECD9FAFBBD32DA5617BD6250B17D9F58C2A, ___time_3)); }
	inline float get_time_3() const { return ___time_3; }
	inline float* get_address_of_time_3() { return &___time_3; }
	inline void set_time_3(float value)
	{
		___time_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3CreadQueueU3Ed__13_t6F0C1ECD9FAFBBD32DA5617BD6250B17D9F58C2A, ___U3CU3E7__wrap1_4)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_4), (void*)value);
	}
};


// TreeBuilder/QueueCommand
struct QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA  : public RuntimeObject
{
public:
	// System.Int16 TreeBuilder/QueueCommand::commandId
	int16_t ___commandId_0;
	// TreeBuilder/TreeNode TreeBuilder/QueueCommand::node1
	TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * ___node1_1;
	// TreeBuilder/TreeNode TreeBuilder/QueueCommand::node2
	TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * ___node2_2;
	// System.Int16 TreeBuilder/QueueCommand::additionalInfo
	int16_t ___additionalInfo_3;

public:
	inline static int32_t get_offset_of_commandId_0() { return static_cast<int32_t>(offsetof(QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA, ___commandId_0)); }
	inline int16_t get_commandId_0() const { return ___commandId_0; }
	inline int16_t* get_address_of_commandId_0() { return &___commandId_0; }
	inline void set_commandId_0(int16_t value)
	{
		___commandId_0 = value;
	}

	inline static int32_t get_offset_of_node1_1() { return static_cast<int32_t>(offsetof(QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA, ___node1_1)); }
	inline TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * get_node1_1() const { return ___node1_1; }
	inline TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 ** get_address_of_node1_1() { return &___node1_1; }
	inline void set_node1_1(TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * value)
	{
		___node1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___node1_1), (void*)value);
	}

	inline static int32_t get_offset_of_node2_2() { return static_cast<int32_t>(offsetof(QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA, ___node2_2)); }
	inline TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * get_node2_2() const { return ___node2_2; }
	inline TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 ** get_address_of_node2_2() { return &___node2_2; }
	inline void set_node2_2(TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * value)
	{
		___node2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___node2_2), (void*)value);
	}

	inline static int32_t get_offset_of_additionalInfo_3() { return static_cast<int32_t>(offsetof(QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA, ___additionalInfo_3)); }
	inline int16_t get_additionalInfo_3() const { return ___additionalInfo_3; }
	inline int16_t* get_address_of_additionalInfo_3() { return &___additionalInfo_3; }
	inline void set_additionalInfo_3(int16_t value)
	{
		___additionalInfo_3 = value;
	}
};


// TreeBuilder/TreeNode
struct TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57  : public RuntimeObject
{
public:
	// UnityEngine.GameObject TreeBuilder/TreeNode::o
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___o_0;
	// TreeBuilder/TreeNode[] TreeBuilder/TreeNode::children
	TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* ___children_1;
	// System.Int32 TreeBuilder/TreeNode::value
	int32_t ___value_2;
	// System.Int32 TreeBuilder/TreeNode::depth
	int32_t ___depth_3;
	// System.Int32[] TreeBuilder/TreeNode::childVolumes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___childVolumes_4;
	// UnityEngine.LineRenderer TreeBuilder/TreeNode::parentEdge
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___parentEdge_5;
	// UnityEngine.LineRenderer[] TreeBuilder/TreeNode::childEdges
	LineRendererU5BU5D_t65EF16DA3FB3E6D083B247824B04BE10D0B46743* ___childEdges_6;

public:
	inline static int32_t get_offset_of_o_0() { return static_cast<int32_t>(offsetof(TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57, ___o_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_o_0() const { return ___o_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_o_0() { return &___o_0; }
	inline void set_o_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___o_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___o_0), (void*)value);
	}

	inline static int32_t get_offset_of_children_1() { return static_cast<int32_t>(offsetof(TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57, ___children_1)); }
	inline TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* get_children_1() const { return ___children_1; }
	inline TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA** get_address_of_children_1() { return &___children_1; }
	inline void set_children_1(TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* value)
	{
		___children_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___children_1), (void*)value);
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57, ___value_2)); }
	inline int32_t get_value_2() const { return ___value_2; }
	inline int32_t* get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(int32_t value)
	{
		___value_2 = value;
	}

	inline static int32_t get_offset_of_depth_3() { return static_cast<int32_t>(offsetof(TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57, ___depth_3)); }
	inline int32_t get_depth_3() const { return ___depth_3; }
	inline int32_t* get_address_of_depth_3() { return &___depth_3; }
	inline void set_depth_3(int32_t value)
	{
		___depth_3 = value;
	}

	inline static int32_t get_offset_of_childVolumes_4() { return static_cast<int32_t>(offsetof(TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57, ___childVolumes_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_childVolumes_4() const { return ___childVolumes_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_childVolumes_4() { return &___childVolumes_4; }
	inline void set_childVolumes_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___childVolumes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childVolumes_4), (void*)value);
	}

	inline static int32_t get_offset_of_parentEdge_5() { return static_cast<int32_t>(offsetof(TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57, ___parentEdge_5)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_parentEdge_5() const { return ___parentEdge_5; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_parentEdge_5() { return &___parentEdge_5; }
	inline void set_parentEdge_5(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___parentEdge_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentEdge_5), (void*)value);
	}

	inline static int32_t get_offset_of_childEdges_6() { return static_cast<int32_t>(offsetof(TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57, ___childEdges_6)); }
	inline LineRendererU5BU5D_t65EF16DA3FB3E6D083B247824B04BE10D0B46743* get_childEdges_6() const { return ___childEdges_6; }
	inline LineRendererU5BU5D_t65EF16DA3FB3E6D083B247824B04BE10D0B46743** get_address_of_childEdges_6() { return &___childEdges_6; }
	inline void set_childEdges_6(LineRendererU5BU5D_t65EF16DA3FB3E6D083B247824B04BE10D0B46743* value)
	{
		___childEdges_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childEdges_6), (void*)value);
	}
};


// System.Collections.Generic.Queue`1/Enumerator<System.Object>
struct Enumerator_t7AA6AE94A0D53334AA15EFC74FE63FF525189B8C 
{
public:
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::_q
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ____q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_index
	int32_t ____index_2;
	// T System.Collections.Generic.Queue`1/Enumerator::_currentElement
	RuntimeObject * ____currentElement_3;

public:
	inline static int32_t get_offset_of__q_0() { return static_cast<int32_t>(offsetof(Enumerator_t7AA6AE94A0D53334AA15EFC74FE63FF525189B8C, ____q_0)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get__q_0() const { return ____q_0; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of__q_0() { return &____q_0; }
	inline void set__q_0(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		____q_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____q_0), (void*)value);
	}

	inline static int32_t get_offset_of__version_1() { return static_cast<int32_t>(offsetof(Enumerator_t7AA6AE94A0D53334AA15EFC74FE63FF525189B8C, ____version_1)); }
	inline int32_t get__version_1() const { return ____version_1; }
	inline int32_t* get_address_of__version_1() { return &____version_1; }
	inline void set__version_1(int32_t value)
	{
		____version_1 = value;
	}

	inline static int32_t get_offset_of__index_2() { return static_cast<int32_t>(offsetof(Enumerator_t7AA6AE94A0D53334AA15EFC74FE63FF525189B8C, ____index_2)); }
	inline int32_t get__index_2() const { return ____index_2; }
	inline int32_t* get_address_of__index_2() { return &____index_2; }
	inline void set__index_2(int32_t value)
	{
		____index_2 = value;
	}

	inline static int32_t get_offset_of__currentElement_3() { return static_cast<int32_t>(offsetof(Enumerator_t7AA6AE94A0D53334AA15EFC74FE63FF525189B8C, ____currentElement_3)); }
	inline RuntimeObject * get__currentElement_3() const { return ____currentElement_3; }
	inline RuntimeObject ** get_address_of__currentElement_3() { return &____currentElement_3; }
	inline void set__currentElement_3(RuntimeObject * value)
	{
		____currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentElement_3), (void*)value);
	}
};


// System.Collections.Generic.Queue`1/Enumerator<LinkedList/QueueCommand>
struct Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB 
{
public:
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::_q
	Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 * ____q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_index
	int32_t ____index_2;
	// T System.Collections.Generic.Queue`1/Enumerator::_currentElement
	QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C * ____currentElement_3;

public:
	inline static int32_t get_offset_of__q_0() { return static_cast<int32_t>(offsetof(Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB, ____q_0)); }
	inline Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 * get__q_0() const { return ____q_0; }
	inline Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 ** get_address_of__q_0() { return &____q_0; }
	inline void set__q_0(Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 * value)
	{
		____q_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____q_0), (void*)value);
	}

	inline static int32_t get_offset_of__version_1() { return static_cast<int32_t>(offsetof(Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB, ____version_1)); }
	inline int32_t get__version_1() const { return ____version_1; }
	inline int32_t* get_address_of__version_1() { return &____version_1; }
	inline void set__version_1(int32_t value)
	{
		____version_1 = value;
	}

	inline static int32_t get_offset_of__index_2() { return static_cast<int32_t>(offsetof(Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB, ____index_2)); }
	inline int32_t get__index_2() const { return ____index_2; }
	inline int32_t* get_address_of__index_2() { return &____index_2; }
	inline void set__index_2(int32_t value)
	{
		____index_2 = value;
	}

	inline static int32_t get_offset_of__currentElement_3() { return static_cast<int32_t>(offsetof(Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB, ____currentElement_3)); }
	inline QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C * get__currentElement_3() const { return ____currentElement_3; }
	inline QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C ** get_address_of__currentElement_3() { return &____currentElement_3; }
	inline void set__currentElement_3(QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C * value)
	{
		____currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentElement_3), (void*)value);
	}
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


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_0;
	// System.Single UnityEngine.Vector3::y
	float ___y_1;
	// System.Single UnityEngine.Vector3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_3;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_12;

public:
	inline static int32_t get_offset_of_zeroVector_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_3() const { return ___zeroVector_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_3() { return &___zeroVector_3; }
	inline void set_zeroVector_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_3 = value;
	}

	inline static int32_t get_offset_of_oneVector_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_4() const { return ___oneVector_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_4() { return &___oneVector_4; }
	inline void set_oneVector_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_4 = value;
	}

	inline static int32_t get_offset_of_upVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_5() const { return ___upVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_5() { return &___upVector_5; }
	inline void set_upVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_5 = value;
	}

	inline static int32_t get_offset_of_downVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_6() const { return ___downVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_6() { return &___downVector_6; }
	inline void set_downVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_6 = value;
	}

	inline static int32_t get_offset_of_leftVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_7() const { return ___leftVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_7() { return &___leftVector_7; }
	inline void set_leftVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_7 = value;
	}

	inline static int32_t get_offset_of_rightVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_8() const { return ___rightVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_8() { return &___rightVector_8; }
	inline void set_rightVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_8 = value;
	}

	inline static int32_t get_offset_of_forwardVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_9() const { return ___forwardVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_9() { return &___forwardVector_9; }
	inline void set_forwardVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_9 = value;
	}

	inline static int32_t get_offset_of_backVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_10() const { return ___backVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_10() { return &___backVector_10; }
	inline void set_backVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_10 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_11() const { return ___positiveInfinityVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_11() { return &___positiveInfinityVector_11; }
	inline void set_positiveInfinityVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_11 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_12() const { return ___negativeInfinityVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_12() { return &___negativeInfinityVector_12; }
	inline void set_negativeInfinityVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_12 = value;
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


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// BellmanFord/BellmanFordVertex
struct BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802  : public Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3
{
public:
	// BellmanFord/BellmanFordVertex BellmanFord/BellmanFordVertex::parent
	BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * ___parent_3;
	// System.Double BellmanFord/BellmanFordVertex::weight
	double ___weight_4;
	// System.Boolean BellmanFord/BellmanFordVertex::visited
	bool ___visited_5;

public:
	inline static int32_t get_offset_of_parent_3() { return static_cast<int32_t>(offsetof(BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802, ___parent_3)); }
	inline BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * get_parent_3() const { return ___parent_3; }
	inline BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 ** get_address_of_parent_3() { return &___parent_3; }
	inline void set_parent_3(BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * value)
	{
		___parent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_3), (void*)value);
	}

	inline static int32_t get_offset_of_weight_4() { return static_cast<int32_t>(offsetof(BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802, ___weight_4)); }
	inline double get_weight_4() const { return ___weight_4; }
	inline double* get_address_of_weight_4() { return &___weight_4; }
	inline void set_weight_4(double value)
	{
		___weight_4 = value;
	}

	inline static int32_t get_offset_of_visited_5() { return static_cast<int32_t>(offsetof(BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802, ___visited_5)); }
	inline bool get_visited_5() const { return ___visited_5; }
	inline bool* get_address_of_visited_5() { return &___visited_5; }
	inline void set_visited_5(bool value)
	{
		___visited_5 = value;
	}
};


// ColorGraph/ColorGraphVertex
struct ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67  : public Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3
{
public:
	// System.Int32 ColorGraph/ColorGraphVertex::colorId
	int32_t ___colorId_3;

public:
	inline static int32_t get_offset_of_colorId_3() { return static_cast<int32_t>(offsetof(ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67, ___colorId_3)); }
	inline int32_t get_colorId_3() const { return ___colorId_3; }
	inline int32_t* get_address_of_colorId_3() { return &___colorId_3; }
	inline void set_colorId_3(int32_t value)
	{
		___colorId_3 = value;
	}
};


// CountingSort/ArrayIndexWithRepetition
struct ArrayIndexWithRepetition_tD46B46909AB1496831848484F2F397F6136382E3  : public ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367
{
public:

public:
};


// Dijkstra/DijkstraVertex
struct DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D  : public Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3
{
public:
	// Dijkstra/DijkstraVertex Dijkstra/DijkstraVertex::parent
	DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * ___parent_3;
	// System.Double Dijkstra/DijkstraVertex::weight
	double ___weight_4;
	// System.Boolean Dijkstra/DijkstraVertex::visited
	bool ___visited_5;

public:
	inline static int32_t get_offset_of_parent_3() { return static_cast<int32_t>(offsetof(DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D, ___parent_3)); }
	inline DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * get_parent_3() const { return ___parent_3; }
	inline DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D ** get_address_of_parent_3() { return &___parent_3; }
	inline void set_parent_3(DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * value)
	{
		___parent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_3), (void*)value);
	}

	inline static int32_t get_offset_of_weight_4() { return static_cast<int32_t>(offsetof(DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D, ___weight_4)); }
	inline double get_weight_4() const { return ___weight_4; }
	inline double* get_address_of_weight_4() { return &___weight_4; }
	inline void set_weight_4(double value)
	{
		___weight_4 = value;
	}

	inline static int32_t get_offset_of_visited_5() { return static_cast<int32_t>(offsetof(DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D, ___visited_5)); }
	inline bool get_visited_5() const { return ___visited_5; }
	inline bool* get_address_of_visited_5() { return &___visited_5; }
	inline void set_visited_5(bool value)
	{
		___visited_5 = value;
	}
};


// SortingAlgorithmWithAuxArray/AuxArrayIndex
struct AuxArrayIndex_tE70B103A9D225ACF3F1D1D30F76CE00FD45C2906  : public ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367
{
public:

public:
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.PrimitiveType
struct PrimitiveType_t0E20B7B2F4ABBD14BAE02F0444EE003C6479E93E 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveType_t0E20B7B2F4ABBD14BAE02F0444EE003C6479E93E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// LinkedList/<readQueue>d__8
struct U3CreadQueueU3Ed__8_t2A5B5A6D9CA49898AF9467883EB6F38AA0303EB7  : public RuntimeObject
{
public:
	// System.Int32 LinkedList/<readQueue>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LinkedList/<readQueue>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// LinkedList LinkedList/<readQueue>d__8::<>4__this
	LinkedList_t850219D15AE4341ACE77E391A1D59B17C1BF0250 * ___U3CU3E4__this_2;
	// System.Collections.Generic.Queue`1/Enumerator<LinkedList/QueueCommand> LinkedList/<readQueue>d__8::<>7__wrap1
	Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB  ___U3CU3E7__wrap1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CreadQueueU3Ed__8_t2A5B5A6D9CA49898AF9467883EB6F38AA0303EB7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CreadQueueU3Ed__8_t2A5B5A6D9CA49898AF9467883EB6F38AA0303EB7, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CreadQueueU3Ed__8_t2A5B5A6D9CA49898AF9467883EB6F38AA0303EB7, ___U3CU3E4__this_2)); }
	inline LinkedList_t850219D15AE4341ACE77E391A1D59B17C1BF0250 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline LinkedList_t850219D15AE4341ACE77E391A1D59B17C1BF0250 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(LinkedList_t850219D15AE4341ACE77E391A1D59B17C1BF0250 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CreadQueueU3Ed__8_t2A5B5A6D9CA49898AF9467883EB6F38AA0303EB7, ___U3CU3E7__wrap1_3)); }
	inline Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB  get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB * get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB  value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->____q_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->____currentElement_3), (void*)NULL);
		#endif
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
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


// Algorithm
struct Algorithm_t85666CE177ABC801C0531E627E4F65BA084B3FD4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// newTest
struct newTest_tEE6FBF90566D39E695646B45EA22384746C9B8AC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Graph
struct Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1  : public Algorithm_t85666CE177ABC801C0531E627E4F65BA084B3FD4
{
public:
	// System.Int32 Graph::n
	int32_t ___n_5;
	// System.Int32 Graph::totalEdges
	int32_t ___totalEdges_6;
	// System.Double Graph::theta
	double ___theta_7;
	// UnityEngine.LineRenderer[0...,0...] Graph::edge
	LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* ___edge_8;
	// System.Int32[0...,0...] Graph::matrix
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___matrix_9;
	// System.Collections.Queue Graph::queue
	Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * ___queue_10;
	// Graph/Vertex[] Graph::vertices
	VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* ___vertices_11;

public:
	inline static int32_t get_offset_of_n_5() { return static_cast<int32_t>(offsetof(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1, ___n_5)); }
	inline int32_t get_n_5() const { return ___n_5; }
	inline int32_t* get_address_of_n_5() { return &___n_5; }
	inline void set_n_5(int32_t value)
	{
		___n_5 = value;
	}

	inline static int32_t get_offset_of_totalEdges_6() { return static_cast<int32_t>(offsetof(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1, ___totalEdges_6)); }
	inline int32_t get_totalEdges_6() const { return ___totalEdges_6; }
	inline int32_t* get_address_of_totalEdges_6() { return &___totalEdges_6; }
	inline void set_totalEdges_6(int32_t value)
	{
		___totalEdges_6 = value;
	}

	inline static int32_t get_offset_of_theta_7() { return static_cast<int32_t>(offsetof(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1, ___theta_7)); }
	inline double get_theta_7() const { return ___theta_7; }
	inline double* get_address_of_theta_7() { return &___theta_7; }
	inline void set_theta_7(double value)
	{
		___theta_7 = value;
	}

	inline static int32_t get_offset_of_edge_8() { return static_cast<int32_t>(offsetof(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1, ___edge_8)); }
	inline LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* get_edge_8() const { return ___edge_8; }
	inline LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716** get_address_of_edge_8() { return &___edge_8; }
	inline void set_edge_8(LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* value)
	{
		___edge_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___edge_8), (void*)value);
	}

	inline static int32_t get_offset_of_matrix_9() { return static_cast<int32_t>(offsetof(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1, ___matrix_9)); }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* get_matrix_9() const { return ___matrix_9; }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17** get_address_of_matrix_9() { return &___matrix_9; }
	inline void set_matrix_9(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* value)
	{
		___matrix_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___matrix_9), (void*)value);
	}

	inline static int32_t get_offset_of_queue_10() { return static_cast<int32_t>(offsetof(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1, ___queue_10)); }
	inline Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * get_queue_10() const { return ___queue_10; }
	inline Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 ** get_address_of_queue_10() { return &___queue_10; }
	inline void set_queue_10(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * value)
	{
		___queue_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queue_10), (void*)value);
	}

	inline static int32_t get_offset_of_vertices_11() { return static_cast<int32_t>(offsetof(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1, ___vertices_11)); }
	inline VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* get_vertices_11() const { return ___vertices_11; }
	inline VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD** get_address_of_vertices_11() { return &___vertices_11; }
	inline void set_vertices_11(VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* value)
	{
		___vertices_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_11), (void*)value);
	}
};

struct Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_StaticFields
{
public:
	// System.Random Graph::r
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___r_4;

public:
	inline static int32_t get_offset_of_r_4() { return static_cast<int32_t>(offsetof(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_StaticFields, ___r_4)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_r_4() const { return ___r_4; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_r_4() { return &___r_4; }
	inline void set_r_4(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___r_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___r_4), (void*)value);
	}
};


// LinkedList
struct LinkedList_t850219D15AE4341ACE77E391A1D59B17C1BF0250  : public Algorithm_t85666CE177ABC801C0531E627E4F65BA084B3FD4
{
public:
	// LinkedList/LinkedListNode LinkedList::head
	LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * ___head_4;
	// System.Collections.Generic.Queue`1<LinkedList/QueueCommand> LinkedList::queue
	Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 * ___queue_5;

public:
	inline static int32_t get_offset_of_head_4() { return static_cast<int32_t>(offsetof(LinkedList_t850219D15AE4341ACE77E391A1D59B17C1BF0250, ___head_4)); }
	inline LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * get_head_4() const { return ___head_4; }
	inline LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 ** get_address_of_head_4() { return &___head_4; }
	inline void set_head_4(LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * value)
	{
		___head_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_4), (void*)value);
	}

	inline static int32_t get_offset_of_queue_5() { return static_cast<int32_t>(offsetof(LinkedList_t850219D15AE4341ACE77E391A1D59B17C1BF0250, ___queue_5)); }
	inline Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 * get_queue_5() const { return ___queue_5; }
	inline Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 ** get_address_of_queue_5() { return &___queue_5; }
	inline void set_queue_5(Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 * value)
	{
		___queue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queue_5), (void*)value);
	}
};


// NQueens
struct NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03  : public Algorithm_t85666CE177ABC801C0531E627E4F65BA084B3FD4
{
public:
	// System.Int32 NQueens::n
	int32_t ___n_4;
	// System.Boolean NQueens::solution
	bool ___solution_5;
	// System.Int32[0...,0...] NQueens::internalBoard
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___internalBoard_6;
	// UnityEngine.GameObject[0...,0...] NQueens::board
	GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* ___board_7;

public:
	inline static int32_t get_offset_of_n_4() { return static_cast<int32_t>(offsetof(NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03, ___n_4)); }
	inline int32_t get_n_4() const { return ___n_4; }
	inline int32_t* get_address_of_n_4() { return &___n_4; }
	inline void set_n_4(int32_t value)
	{
		___n_4 = value;
	}

	inline static int32_t get_offset_of_solution_5() { return static_cast<int32_t>(offsetof(NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03, ___solution_5)); }
	inline bool get_solution_5() const { return ___solution_5; }
	inline bool* get_address_of_solution_5() { return &___solution_5; }
	inline void set_solution_5(bool value)
	{
		___solution_5 = value;
	}

	inline static int32_t get_offset_of_internalBoard_6() { return static_cast<int32_t>(offsetof(NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03, ___internalBoard_6)); }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* get_internalBoard_6() const { return ___internalBoard_6; }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17** get_address_of_internalBoard_6() { return &___internalBoard_6; }
	inline void set_internalBoard_6(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* value)
	{
		___internalBoard_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalBoard_6), (void*)value);
	}

	inline static int32_t get_offset_of_board_7() { return static_cast<int32_t>(offsetof(NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03, ___board_7)); }
	inline GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* get_board_7() const { return ___board_7; }
	inline GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9** get_address_of_board_7() { return &___board_7; }
	inline void set_board_7(GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* value)
	{
		___board_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___board_7), (void*)value);
	}
};


// SortingAlgorithm
struct SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7  : public Algorithm_t85666CE177ABC801C0531E627E4F65BA084B3FD4
{
public:
	// SortingAlgorithm/ArrayIndex[] SortingAlgorithm::array
	ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* ___array_4;
	// System.Int32[] SortingAlgorithm::arr
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___arr_6;
	// System.Collections.Queue SortingAlgorithm::q
	Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * ___q_7;

public:
	inline static int32_t get_offset_of_array_4() { return static_cast<int32_t>(offsetof(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7, ___array_4)); }
	inline ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* get_array_4() const { return ___array_4; }
	inline ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182** get_address_of_array_4() { return &___array_4; }
	inline void set_array_4(ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* value)
	{
		___array_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_4), (void*)value);
	}

	inline static int32_t get_offset_of_arr_6() { return static_cast<int32_t>(offsetof(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7, ___arr_6)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_arr_6() const { return ___arr_6; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_arr_6() { return &___arr_6; }
	inline void set_arr_6(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___arr_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arr_6), (void*)value);
	}

	inline static int32_t get_offset_of_q_7() { return static_cast<int32_t>(offsetof(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7, ___q_7)); }
	inline Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * get_q_7() const { return ___q_7; }
	inline Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 ** get_address_of_q_7() { return &___q_7; }
	inline void set_q_7(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * value)
	{
		___q_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q_7), (void*)value);
	}
};

struct SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields
{
public:
	// System.Int32 SortingAlgorithm::size
	int32_t ___size_5;

public:
	inline static int32_t get_offset_of_size_5() { return static_cast<int32_t>(offsetof(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields, ___size_5)); }
	inline int32_t get_size_5() const { return ___size_5; }
	inline int32_t* get_address_of_size_5() { return &___size_5; }
	inline void set_size_5(int32_t value)
	{
		___size_5 = value;
	}
};


// Test
struct Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5  : public Algorithm_t85666CE177ABC801C0531E627E4F65BA084B3FD4
{
public:
	// UnityEngine.GameObject[] Test::array
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___array_7;
	// UnityEngine.LineRenderer[0...,0...] Test::lineR
	LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* ___lineR_9;
	// System.Boolean[0...,0...] Test::graph
	BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* ___graph_10;

public:
	inline static int32_t get_offset_of_array_7() { return static_cast<int32_t>(offsetof(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5, ___array_7)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_array_7() const { return ___array_7; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_array_7() { return &___array_7; }
	inline void set_array_7(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___array_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_7), (void*)value);
	}

	inline static int32_t get_offset_of_lineR_9() { return static_cast<int32_t>(offsetof(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5, ___lineR_9)); }
	inline LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* get_lineR_9() const { return ___lineR_9; }
	inline LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716** get_address_of_lineR_9() { return &___lineR_9; }
	inline void set_lineR_9(LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* value)
	{
		___lineR_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineR_9), (void*)value);
	}

	inline static int32_t get_offset_of_graph_10() { return static_cast<int32_t>(offsetof(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5, ___graph_10)); }
	inline BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* get_graph_10() const { return ___graph_10; }
	inline BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4** get_address_of_graph_10() { return &___graph_10; }
	inline void set_graph_10(BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* value)
	{
		___graph_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graph_10), (void*)value);
	}
};

struct Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields
{
public:
	// System.Random Test::r
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___r_4;
	// System.Int32 Test::n
	int32_t ___n_5;
	// System.Int32 Test::edges
	int32_t ___edges_6;
	// System.Double Test::degrees
	double ___degrees_8;

public:
	inline static int32_t get_offset_of_r_4() { return static_cast<int32_t>(offsetof(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields, ___r_4)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_r_4() const { return ___r_4; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_r_4() { return &___r_4; }
	inline void set_r_4(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___r_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___r_4), (void*)value);
	}

	inline static int32_t get_offset_of_n_5() { return static_cast<int32_t>(offsetof(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields, ___n_5)); }
	inline int32_t get_n_5() const { return ___n_5; }
	inline int32_t* get_address_of_n_5() { return &___n_5; }
	inline void set_n_5(int32_t value)
	{
		___n_5 = value;
	}

	inline static int32_t get_offset_of_edges_6() { return static_cast<int32_t>(offsetof(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields, ___edges_6)); }
	inline int32_t get_edges_6() const { return ___edges_6; }
	inline int32_t* get_address_of_edges_6() { return &___edges_6; }
	inline void set_edges_6(int32_t value)
	{
		___edges_6 = value;
	}

	inline static int32_t get_offset_of_degrees_8() { return static_cast<int32_t>(offsetof(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields, ___degrees_8)); }
	inline double get_degrees_8() const { return ___degrees_8; }
	inline double* get_address_of_degrees_8() { return &___degrees_8; }
	inline void set_degrees_8(double value)
	{
		___degrees_8 = value;
	}
};


// TreeBuilder
struct TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC  : public Algorithm_t85666CE177ABC801C0531E627E4F65BA084B3FD4
{
public:
	// TreeBuilder/TreeNode TreeBuilder::root
	TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * ___root_4;
	// System.Int32 TreeBuilder::depth
	int32_t ___depth_5;
	// System.Int32 TreeBuilder::size
	int32_t ___size_6;
	// System.Collections.Queue TreeBuilder::q
	Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * ___q_7;
	// System.Random TreeBuilder::r
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___r_8;

public:
	inline static int32_t get_offset_of_root_4() { return static_cast<int32_t>(offsetof(TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC, ___root_4)); }
	inline TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * get_root_4() const { return ___root_4; }
	inline TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 ** get_address_of_root_4() { return &___root_4; }
	inline void set_root_4(TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * value)
	{
		___root_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_4), (void*)value);
	}

	inline static int32_t get_offset_of_depth_5() { return static_cast<int32_t>(offsetof(TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC, ___depth_5)); }
	inline int32_t get_depth_5() const { return ___depth_5; }
	inline int32_t* get_address_of_depth_5() { return &___depth_5; }
	inline void set_depth_5(int32_t value)
	{
		___depth_5 = value;
	}

	inline static int32_t get_offset_of_size_6() { return static_cast<int32_t>(offsetof(TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC, ___size_6)); }
	inline int32_t get_size_6() const { return ___size_6; }
	inline int32_t* get_address_of_size_6() { return &___size_6; }
	inline void set_size_6(int32_t value)
	{
		___size_6 = value;
	}

	inline static int32_t get_offset_of_q_7() { return static_cast<int32_t>(offsetof(TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC, ___q_7)); }
	inline Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * get_q_7() const { return ___q_7; }
	inline Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 ** get_address_of_q_7() { return &___q_7; }
	inline void set_q_7(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * value)
	{
		___q_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q_7), (void*)value);
	}

	inline static int32_t get_offset_of_r_8() { return static_cast<int32_t>(offsetof(TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC, ___r_8)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_r_8() const { return ___r_8; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_r_8() { return &___r_8; }
	inline void set_r_8(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___r_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___r_8), (void*)value);
	}
};


// BellmanFord
struct BellmanFord_tF034A0015CFEFE527D5EA228B46EBBCAF94DDA36  : public Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1
{
public:
	// System.Int32 BellmanFord::main
	int32_t ___main_12;
	// System.Boolean BellmanFord::changesMade
	bool ___changesMade_13;

public:
	inline static int32_t get_offset_of_main_12() { return static_cast<int32_t>(offsetof(BellmanFord_tF034A0015CFEFE527D5EA228B46EBBCAF94DDA36, ___main_12)); }
	inline int32_t get_main_12() const { return ___main_12; }
	inline int32_t* get_address_of_main_12() { return &___main_12; }
	inline void set_main_12(int32_t value)
	{
		___main_12 = value;
	}

	inline static int32_t get_offset_of_changesMade_13() { return static_cast<int32_t>(offsetof(BellmanFord_tF034A0015CFEFE527D5EA228B46EBBCAF94DDA36, ___changesMade_13)); }
	inline bool get_changesMade_13() const { return ___changesMade_13; }
	inline bool* get_address_of_changesMade_13() { return &___changesMade_13; }
	inline void set_changesMade_13(bool value)
	{
		___changesMade_13 = value;
	}
};


// BinaryTree
struct BinaryTree_t9FD84FA619479A213650DF2B59CBFF225D80C3CA  : public TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC
{
public:

public:
};


// BubbleSort
struct BubbleSort_t00AE6DE65B0614E3D25024FE761DC834FF4AF137  : public SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7
{
public:

public:
};


// ColorGraph
struct ColorGraph_tAB66E4AF557020EE6F5A34C9969A712789E8410D  : public Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1
{
public:
	// System.Int32 ColorGraph::maxColorId
	int32_t ___maxColorId_12;

public:
	inline static int32_t get_offset_of_maxColorId_12() { return static_cast<int32_t>(offsetof(ColorGraph_tAB66E4AF557020EE6F5A34C9969A712789E8410D, ___maxColorId_12)); }
	inline int32_t get_maxColorId_12() const { return ___maxColorId_12; }
	inline int32_t* get_address_of_maxColorId_12() { return &___maxColorId_12; }
	inline void set_maxColorId_12(int32_t value)
	{
		___maxColorId_12 = value;
	}
};


// Dijkstra
struct Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817  : public Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1
{
public:
	// System.Int32 Dijkstra::main
	int32_t ___main_12;

public:
	inline static int32_t get_offset_of_main_12() { return static_cast<int32_t>(offsetof(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817, ___main_12)); }
	inline int32_t get_main_12() const { return ___main_12; }
	inline int32_t* get_address_of_main_12() { return &___main_12; }
	inline void set_main_12(int32_t value)
	{
		___main_12 = value;
	}
};

struct Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_StaticFields
{
public:
	// Dijkstra/List Dijkstra::head
	List_tA99646B75D64090652E535E147AF8DE405D97434 * ___head_13;

public:
	inline static int32_t get_offset_of_head_13() { return static_cast<int32_t>(offsetof(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_StaticFields, ___head_13)); }
	inline List_tA99646B75D64090652E535E147AF8DE405D97434 * get_head_13() const { return ___head_13; }
	inline List_tA99646B75D64090652E535E147AF8DE405D97434 ** get_address_of_head_13() { return &___head_13; }
	inline void set_head_13(List_tA99646B75D64090652E535E147AF8DE405D97434 * value)
	{
		___head_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_13), (void*)value);
	}
};


// HeapSort
struct HeapSort_tF3A5CBE7F594426C904275F196AC877E1708E50D  : public SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7
{
public:

public:
};


// InsertionSort
struct InsertionSort_t6C0D3ED6F8FF5CAAA6E4CA02673A9AF43EC3B838  : public SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7
{
public:

public:
};


// QuickSort
struct QuickSort_t42CA7BD01C0903F327C08E8D7E962F0682A2EE10  : public SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7
{
public:

public:
};


// SelectionSort
struct SelectionSort_t9FD04DF005AEF090D191014F3118E1CF362A8226  : public SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7
{
public:

public:
};


// SortingAlgorithmWithAuxArray
struct SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF  : public SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7
{
public:
	// SortingAlgorithm/ArrayIndex[] SortingAlgorithmWithAuxArray::auxArray
	ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* ___auxArray_8;
	// System.Int32[] SortingAlgorithmWithAuxArray::auxArr
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___auxArr_9;
	// System.Int32[] SortingAlgorithmWithAuxArray::countingArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___countingArray_10;

public:
	inline static int32_t get_offset_of_auxArray_8() { return static_cast<int32_t>(offsetof(SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF, ___auxArray_8)); }
	inline ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* get_auxArray_8() const { return ___auxArray_8; }
	inline ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182** get_address_of_auxArray_8() { return &___auxArray_8; }
	inline void set_auxArray_8(ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* value)
	{
		___auxArray_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___auxArray_8), (void*)value);
	}

	inline static int32_t get_offset_of_auxArr_9() { return static_cast<int32_t>(offsetof(SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF, ___auxArr_9)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_auxArr_9() const { return ___auxArr_9; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_auxArr_9() { return &___auxArr_9; }
	inline void set_auxArr_9(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___auxArr_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___auxArr_9), (void*)value);
	}

	inline static int32_t get_offset_of_countingArray_10() { return static_cast<int32_t>(offsetof(SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF, ___countingArray_10)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_countingArray_10() const { return ___countingArray_10; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_countingArray_10() { return &___countingArray_10; }
	inline void set_countingArray_10(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___countingArray_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___countingArray_10), (void*)value);
	}
};


// CountingSort
struct CountingSort_t963D5E012F88F698132B7849B2B54965A2B04042  : public SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF
{
public:
	// System.Int32 CountingSort::maxElements
	int32_t ___maxElements_11;
	// UnityEngine.GameObject[] CountingSort::CountArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___CountArray_12;

public:
	inline static int32_t get_offset_of_maxElements_11() { return static_cast<int32_t>(offsetof(CountingSort_t963D5E012F88F698132B7849B2B54965A2B04042, ___maxElements_11)); }
	inline int32_t get_maxElements_11() const { return ___maxElements_11; }
	inline int32_t* get_address_of_maxElements_11() { return &___maxElements_11; }
	inline void set_maxElements_11(int32_t value)
	{
		___maxElements_11 = value;
	}

	inline static int32_t get_offset_of_CountArray_12() { return static_cast<int32_t>(offsetof(CountingSort_t963D5E012F88F698132B7849B2B54965A2B04042, ___CountArray_12)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_CountArray_12() const { return ___CountArray_12; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_CountArray_12() { return &___CountArray_12; }
	inline void set_CountArray_12(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___CountArray_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CountArray_12), (void*)value);
	}
};


// MergeSort
struct MergeSort_t81ECEB36AD12DAE023E752167722586F7A96C805  : public SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF
{
public:
	// System.Int32 MergeSort::midSplit
	int32_t ___midSplit_11;

public:
	inline static int32_t get_offset_of_midSplit_11() { return static_cast<int32_t>(offsetof(MergeSort_t81ECEB36AD12DAE023E752167722586F7A96C805, ___midSplit_11)); }
	inline int32_t get_midSplit_11() const { return ___midSplit_11; }
	inline int32_t* get_address_of_midSplit_11() { return &___midSplit_11; }
	inline void set_midSplit_11(int32_t value)
	{
		___midSplit_11 = value;
	}
};


// RadixSort
struct RadixSort_t8FE79B30D08B520388288585845B5D6FF1098F34  : public SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF
{
public:
	// System.Int32 RadixSort::baseValue
	int32_t ___baseValue_11;

public:
	inline static int32_t get_offset_of_baseValue_11() { return static_cast<int32_t>(offsetof(RadixSort_t8FE79B30D08B520388288585845B5D6FF1098F34, ___baseValue_11)); }
	inline int32_t get_baseValue_11() const { return ___baseValue_11; }
	inline int32_t* get_address_of_baseValue_11() { return &___baseValue_11; }
	inline void set_baseValue_11(int32_t value)
	{
		___baseValue_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Graph/Vertex[]
struct VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * m_Items[1];

public:
	inline Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.LineRenderer[0...,0...]
struct LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * m_Items[1];

public:
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[0...,0...]
struct Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
	inline int32_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// BellmanFord/BellmanFordVertex[]
struct BellmanFordVertexU5BU5D_t16E4B62F1FCBE8EF770C6AB579D087ED8BB34C3A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * m_Items[1];

public:
	inline BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TreeBuilder/TreeNode[]
struct TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * m_Items[1];

public:
	inline TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.LineRenderer[]
struct LineRendererU5BU5D_t65EF16DA3FB3E6D083B247824B04BE10D0B46743  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * m_Items[1];

public:
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// SortingAlgorithm/ArrayIndex[]
struct ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * m_Items[1];

public:
	inline ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// ColorGraph/ColorGraphVertex[]
struct ColorGraphVertexU5BU5D_tE38B7F6ABBB4F06D78CE581172CF127FC864F88B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 * m_Items[1];

public:
	inline ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Dijkstra/DijkstraVertex[]
struct DijkstraVertexU5BU5D_tFC37B5070EA84A56FE3EE861A3DBCEB46F6449F3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * m_Items[1];

public:
	inline DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[0...,0...]
struct GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[0...,0...]
struct BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
	inline bool GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, bool value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, bool value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Peek_mBD3667C0471C6A09AE4D691DD023A9A82D522A83_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Queue`1/Enumerator<!0> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7AA6AE94A0D53334AA15EFC74FE63FF525189B8C  Queue_1_GetEnumerator_m93F41D0CCCF0AB82FC589F8E2B9AB6670C8D843F_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m7EA5377B341C9268EB0F0885F8CFC2073E53717D_gshared (Enumerator_t7AA6AE94A0D53334AA15EFC74FE63FF525189B8C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m021EA477154DFEF16C293069BAA564C75FE058BA_gshared (Enumerator_t7AA6AE94A0D53334AA15EFC74FE63FF525189B8C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mAC863B8783E18A16FEAE03EF6B53E216A0D8A154_gshared (Enumerator_t7AA6AE94A0D53334AA15EFC74FE63FF525189B8C * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void BellmanFord/BellmanFordVertex::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BellmanFordVertex__ctor_mB115F4DAEA241CA9B8092F55663929476210E2DA (BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Graph::setCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_setCam_m81551A9D69AA206818395C093C2C14DCD0F7FD65 (Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * __this, const RuntimeMethod* method);
// System.Void Graph::buildGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_buildGrid_m3D68A47CF7CCC724395AF5AB2E06BC98B8570A76 (Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * __this, const RuntimeMethod* method);
// System.Void BellmanFord::BellmanFordAlgorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BellmanFord_BellmanFordAlgorithm_m5E19D9198236181AF7F4A214782FE61F2F86A495 (BellmanFord_tF034A0015CFEFE527D5EA228B46EBBCAF94DDA36 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Graph::readQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Graph_readQueue_m6A4DBE5D3D7142ACE001B6DC8D62CB2055E2AC80 (Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void Graph/QueueCommand::.ctor(System.Int16,System.Int32,System.Int32,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueCommand__ctor_m037EA2031412994E23AC3107248A35F70A4F7863 (QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * __this, int16_t ___commandId0, int32_t ___v11, int32_t ___v22, int16_t ___additionalInfo3, const RuntimeMethod* method);
// System.Boolean System.Double::IsPositiveInfinity(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_IsPositiveInfinity_mD5882DEFC8FAA4CCDAE48B26B9CECAB5B7A53C96 (double ___d0, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83 (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, const RuntimeMethod* method);
// System.Void Graph::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph__ctor_m372DF9468A49B59D2A640C41F51C5E4FAA8A3DFA (Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * __this, const RuntimeMethod* method);
// System.Void TreeBuilder/TreeNode::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeNode__ctor_mCABA83289871304795C0000DD27CF32225492C45 (TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * __this, int32_t ___value0, int32_t ___depth1, int32_t ___NoOfChildren2, const RuntimeMethod* method);
// System.Void TreeBuilder/QueueCommand::.ctor(System.Int16,TreeBuilder/TreeNode,TreeBuilder/TreeNode,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueCommand__ctor_m8D9B039659E872A481176B078FF23FD94A31D0F0 (QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * __this, int16_t ___commandId0, TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * ___node11, TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * ___node22, int16_t ___additionalInfo3, const RuntimeMethod* method);
// TreeBuilder/TreeNode BinaryTree::addNode(TreeBuilder/TreeNode,TreeBuilder/TreeNode,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * BinaryTree_addNode_mBA9876DA03EC9245568AD3C5F22645048D825EB5 (BinaryTree_t9FD84FA619479A213650DF2B59CBFF225D80C3CA * __this, TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * ___root0, TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * ___parent1, int32_t ___x2, int32_t ___depth3, const RuntimeMethod* method);
// System.Void TreeBuilder::InOrderSearch(TreeBuilder/TreeNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeBuilder_InOrderSearch_m026E5D1F65012FFD45A9EB9E35527F753A5EE40B (TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC * __this, TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * ___root0, const RuntimeMethod* method);
// System.Collections.IEnumerator TreeBuilder::readQueue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeBuilder_readQueue_m1AEAF373FC3869FCD676EC4883D59DB15731BAEB (TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC * __this, float ___time0, const RuntimeMethod* method);
// System.Void TreeBuilder::setCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeBuilder_setCam_m79DAF428DB8A8802451F976BD11B93EC9BEF5D7F (TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC * __this, const RuntimeMethod* method);
// System.Void TreeBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeBuilder__ctor_m094BE2A69CDAB158653A570129EA124BA7BFE8D3 (TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC * __this, const RuntimeMethod* method);
// System.Void SortingAlgorithm::setCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingAlgorithm_setCam_m21A5B734B44D3D62133D845677FF3E171C078122 (SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * __this, const RuntimeMethod* method);
// System.Void SortingAlgorithm::buildArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingAlgorithm_buildArray_mD9825DA2F8C90EF5E0181977F9CCA18D0E0C6528 (SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * __this, const RuntimeMethod* method);
// System.Boolean SortingAlgorithm::compare(System.Int32,System.Int32,System.Int16,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortingAlgorithm_compare_m06B90D91D9671842FF67CA478138597FFB6E7BBD (SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * __this, int32_t ___x0, int32_t ___y1, int16_t ___code2, int16_t ___arrayCode3, const RuntimeMethod* method);
// System.Void SortingAlgorithm::swap(System.Int32,System.Int32,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingAlgorithm_swap_mE5F00595342C97A0A4BB4A6376557C5D0F20F22B (SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * __this, int32_t ___x0, int32_t ___y1, int16_t ___arrayCode2, const RuntimeMethod* method);
// System.Collections.IEnumerator SortingAlgorithm::readQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortingAlgorithm_readQueue_mCA727941B71A0BA8C54499AC3F7AF3C6CEDC38A0 (SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * __this, int32_t ___time0, const RuntimeMethod* method);
// System.Void SortingAlgorithm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingAlgorithm__ctor_mB3212AEE8B1D0D0DCD737C8232675C2B01063717 (SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * __this, const RuntimeMethod* method);
// System.Void ColorGraph/ColorGraphVertex::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorGraphVertex__ctor_mFE23E2F7A268F4E32BE3CAE1B9198681488C3718 (ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ColorGraph::ColorGraphAlgorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorGraph_ColorGraphAlgorithm_m92556E7B954FEA382A08665004D3E9ED12ED4E71 (ColorGraph_tAB66E4AF557020EE6F5A34C9969A712789E8410D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1 (const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E (const RuntimeMethod* method);
// System.Void CountingSort::buildArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountingSort_buildArray_m008C3BC2E28CE92CEDD32BFF43D90CD1EE1FA6CE (CountingSort_t963D5E012F88F698132B7849B2B54965A2B04042 * __this, const RuntimeMethod* method);
// System.Void SortingAlgorithmWithAuxArray::buildAuxArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingAlgorithmWithAuxArray_buildAuxArray_m7AC5881D29AE865495BA96B9E7D512FE8751D6FD (SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * __this, const RuntimeMethod* method);
// System.Void CountingSort::startSort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountingSort_startSort_mC9912B1D903F62A9A440863059F5D3A9BD533F38 (CountingSort_t963D5E012F88F698132B7849B2B54965A2B04042 * __this, const RuntimeMethod* method);
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05 (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * __this, const RuntimeMethod* method);
// System.Void CountingSort/ArrayIndexWithRepetition::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayIndexWithRepetition__ctor_m2F198B1B2801D72D606CA8DF5A04C3D882E6EA9E (ArrayIndexWithRepetition_tD46B46909AB1496831848484F2F397F6136382E3 * __this, int32_t ___value0, int32_t ___position1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void SortingAlgorithmWithAuxArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingAlgorithmWithAuxArray__ctor_m62FA505A4F1EECCAFA769B4BD3DD1A56A2C24C2B (SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * __this, const RuntimeMethod* method);
// System.Void Dijkstra/DijkstraVertex::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DijkstraVertex__ctor_m0534B1B0C4A6F2A9307C3B5B1B91BA6CE05EDAFF (DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Dijkstra::DijkstraAlgorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dijkstra_DijkstraAlgorithm_mDEBC846FC2BA6FAF5ADC8FE8FD98AD9FBE7156A3 (Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * __this, const RuntimeMethod* method);
// System.Void Dijkstra/List::.ctor(Dijkstra/DijkstraVertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List__ctor_m22DFD766BC62740756C8FAF441C805A1934B3C3F (List_tA99646B75D64090652E535E147AF8DE405D97434 * __this, DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * ___vertex0, const RuntimeMethod* method);
// System.Void Dijkstra/List::insert(Dijkstra/DijkstraVertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_insert_mF79DB84B6A770238AD6A6785844C9BBAA502D481 (List_tA99646B75D64090652E535E147AF8DE405D97434 * __this, DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * GameObject_AddComponent_mD183856CB5A1CCF1576221D7D6CEBC4092E734B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, Type_t * ___componentType0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_startWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_startWidth_mD88B562DD413EE9861FB254963C7EDCB5199C1DF (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_endWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_endWidth_m3DCD4FFCC3944DD6DC0737C8AF8C7EDB5A6CF59A (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_useWorldSpace(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_useWorldSpace_m53AA0FE659EFB041647DB6A29826D20D52CBE148 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___index0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Graph::swap(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_swap_m1C34E3444E3B1D78D0FE137B71E66488EA06F0D4 (Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * __this, int32_t* ___x0, int32_t* ___y1, const RuntimeMethod* method);
// System.Void Graph::buildVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_buildVisual_mAF616310A70D8B6AC25282C91E7885ECCDF69AD6 (Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC (int32_t ___type0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void Graph/Vertex::addNeighbor(Graph/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex_addNeighbor_mA6EB29DDFE0C2CD1010B4EBFED04BA8BC24900DF (Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * __this, Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * ___node0, const RuntimeMethod* method);
// System.Void Graph/<readQueue>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__17__ctor_mD2AD08F4FD2B11433BEFA12F5A603A809CE54D9B (U3CreadQueueU3Ed__17_tE98D5B6097888700C315BAE31B0B699EF4396465 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Void System.Collections.Queue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue__ctor_m9844D111CC69802C62565C05109A2557FD21C127 (Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * __this, const RuntimeMethod* method);
// System.Void Algorithm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Algorithm__ctor_m7350F7A6A79476CF0CB7A8793EE9D3F3C57F60D3 (Algorithm_t85666CE177ABC801C0531E627E4F65BA084B3FD4 * __this, const RuntimeMethod* method);
// System.Void HeapSort::startSort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapSort_startSort_m3CE8354049680375544768CC6505CE9C0E5D2BC5 (HeapSort_tF3A5CBE7F594426C904275F196AC877E1708E50D * __this, const RuntimeMethod* method);
// System.Void HeapSort/<extendCommands>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CextendCommandsU3Ed__2__ctor_m979D5BE56268A055FB6F1FA5F92FEE783C3AFDCF (U3CextendCommandsU3Ed__2_tB5CB72DF83F7DE624AB1B77724D0CE5FE3FC3FF9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void HeapSort::Heapify()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapSort_Heapify_mCA371FCAF37CBFC00DB1465F7D4438F3F4279406 (HeapSort_tF3A5CBE7F594426C904275F196AC877E1708E50D * __this, const RuntimeMethod* method);
// System.Void HeapSort::Percolate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapSort_Percolate_mA211F15CEC2B71CB8EFB80C218C1C2159866F5D2 (HeapSort_tF3A5CBE7F594426C904275F196AC877E1708E50D * __this, int32_t ___bound0, const RuntimeMethod* method);
// System.Void LinkedList/LinkedListNode::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedListNode__ctor_m65A62603A95A10CE6A7A6839150023DD1BAF456F (LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void LinkedList/QueueCommand::.ctor(System.Int16,LinkedList/LinkedListNode,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueCommand__ctor_m218A4C5D7CFF5489CFA4BBE5EC5DC5DB4875B49B (QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C * __this, int16_t ___commandId0, LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * ___node11, int16_t ___additionalInfo2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<LinkedList/QueueCommand>::Enqueue(!0)
inline void Queue_1_Enqueue_m86A50AEF137F420A440A69A037CFF01C17D372CE (Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 * __this, QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 *, QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// System.Void LinkedList::insert(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_insert_m5B981251086616A104E0071EB2BFD46BAF509633 (LinkedList_t850219D15AE4341ACE77E391A1D59B17C1BF0250 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void LinkedList::traverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_traverse_mC2C522D43172F8259DB45E5F0EA0C2D50613D803 (LinkedList_t850219D15AE4341ACE77E391A1D59B17C1BF0250 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator LinkedList::readQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LinkedList_readQueue_mA6CE31792BD3C76257A6A9D0C828F0B04805C606 (LinkedList_t850219D15AE4341ACE77E391A1D59B17C1BF0250 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void LinkedList/<readQueue>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__8__ctor_mF110FA9A46BB4354E2BE772A58141E85B6F837E9 (U3CreadQueueU3Ed__8_t2A5B5A6D9CA49898AF9467883EB6F38AA0303EB7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<LinkedList/QueueCommand>::.ctor()
inline void Queue_1__ctor_m8E6554BB8D2559E8DE985782B37CE13F42972230 (Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// System.Void SortingAlgorithmWithAuxArray::setAuxCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingAlgorithmWithAuxArray_setAuxCam_mDF13CCF3E2D7E91566B3ACFFE1912C7C225FAFFE (SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * __this, const RuntimeMethod* method);
// System.Void MergeSort::mergeSort(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergeSort_mergeSort_m33D0430950EAB76F4BE8630DD3607421EBEFFE24 (MergeSort_t81ECEB36AD12DAE023E752167722586F7A96C805 * __this, int32_t ___low0, int32_t ___high1, const RuntimeMethod* method);
// System.Void MergeSort::merge(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergeSort_merge_m50789329EBD588E0C19D66B78332E6A0D6CFEBBA (MergeSort_t81ECEB36AD12DAE023E752167722586F7A96C805 * __this, int32_t ___low0, int32_t ___middle1, int32_t ___high2, const RuntimeMethod* method);
// System.Void NQueens::setCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NQueens_setCam_mDFC6C0DEDC7B3FE73B37113296469071D64615D9 (NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator NQueens::build(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NQueens_build_m5B54E0D1D1A6BC742DA5FEA8E33446BBF17738F2 (NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * __this, int32_t ___size0, int32_t ___column1, const RuntimeMethod* method);
// System.Void NQueens/<build>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CbuildU3Ed__6__ctor_m1B66A993BACF0B326ABFF0A1F59E51834678AC86 (U3CbuildU3Ed__6_tCD71554657B65283EDF5B911E3CE57A1421F29F1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void QuickSort::quickSort(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickSort_quickSort_mE2C2B32EE9B836A3F00DA5B3C27EEE046410C1DF (QuickSort_t42CA7BD01C0903F327C08E8D7E962F0682A2EE10 * __this, int32_t ___low0, int32_t ___high1, const RuntimeMethod* method);
// System.Int32 QuickSort::partition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuickSort_partition_m9B1CA718B6888950253C6B1D5024746A2267E232 (QuickSort_t42CA7BD01C0903F327C08E8D7E962F0682A2EE10 * __this, int32_t ___low0, int32_t ___high1, const RuntimeMethod* method);
// System.Void RadixSort::startSort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadixSort_startSort_m00531CB835F449B65DA342264A091D8CFBC34BDA (RadixSort_t8FE79B30D08B520388288585845B5D6FF1098F34 * __this, const RuntimeMethod* method);
// System.Void SortingAlgorithm/ArrayIndex::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayIndex__ctor_mE13FF738F414E16572C9EBE9D2BA6801B7351177 (ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void SortingAlgorithm::shuffle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingAlgorithm_shuffle_m7CB4E09F0D5F9191EF6603C2388C9999E23A57B9 (SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * __this, const RuntimeMethod* method);
// System.Void SortingAlgorithm/<readQueue>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__10__ctor_mB45F8047151C702C5072FFF89E8B4FFFFA568363 (U3CreadQueueU3Ed__10_t3029C89FAFF9D6D1E9EFDF2B7604B11567DE71EE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_farClipPlane_m63F1302068433A72A5103281327C68CD8F67AD41 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Void SortingAlgorithmWithAuxArray/AuxArrayIndex::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuxArrayIndex__ctor_mA32F6CD78E5394E7C1A986EBBEF7EE295A5AF952 (AuxArrayIndex_tE70B103A9D225ACF3F1D1D30F76CE00FD45C2906 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void SortingAlgorithmWithAuxArray/<extendCommands>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CextendCommandsU3Ed__6__ctor_m5188A6568BCD3F935614DD598AE5BBF61C1B4ACC (U3CextendCommandsU3Ed__6_tF390D4906D3F0DB7F02E3F01B58DF422FCC50564 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Test::buildGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test_buildGrid_m8051E2EB9F6372299B406CA63E4C03DC89300DD8 (Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_startColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_startColor_m7C75698F11565606CEA049DD3AE0514BADBF6BB7 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_endColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_endColor_mF9F043C0EE5E36AD5B36547A17171ECA6967CDE2 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void Test::swap(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test_swap_mD9EA3B72AC1BC9FBE9D1142C199772B7BD5DA573 (Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5 * __this, int32_t* ___x0, int32_t* ___y1, const RuntimeMethod* method);
// System.Void TreeBuilder::resetPositions(TreeBuilder/TreeNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeBuilder_resetPositions_m94D2731BDFE7166481A38C93D132EFE1DA5C26E9 (TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC * __this, TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * ___root0, const RuntimeMethod* method);
// System.Void TreeBuilder::PreOrderSearch(TreeBuilder/TreeNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeBuilder_PreOrderSearch_mC91CDC4C114347BFF705C761587AF239BE5C1C94 (TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC * __this, TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * ___root0, const RuntimeMethod* method);
// System.Void TreeBuilder::PostOrderSearch(TreeBuilder/TreeNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeBuilder_PostOrderSearch_m650CB61A78F38DA6DD2A68C48F3FBF58951E51AD (TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC * __this, TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * ___root0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<TreeBuilder/TreeNode>::.ctor()
inline void Queue_1__ctor_mE7983B662E1519BC849AD5BB4674F9B1813C950D (Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2 *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<TreeBuilder/TreeNode>::Enqueue(!0)
inline void Queue_1_Enqueue_mBC976D1A97736DD12B93A7BDCCF45F2E5416AF1B (Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2 * __this, TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2 *, TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.Queue`1<TreeBuilder/TreeNode>::Peek()
inline TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * Queue_1_Peek_m583BDCD58C0011967FCAE7D16E3AE2F0A3AE2FDA (Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2 * __this, const RuntimeMethod* method)
{
	return ((  TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * (*) (Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2 *, const RuntimeMethod*))Queue_1_Peek_mBD3667C0471C6A09AE4D691DD023A9A82D522A83_gshared)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<TreeBuilder/TreeNode>::Dequeue()
inline TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * Queue_1_Dequeue_mE769A068858C351A22BA1A341DD8F446295CA684 (Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2 * __this, const RuntimeMethod* method)
{
	return ((  TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * (*) (Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Queue`1<TreeBuilder/TreeNode>::get_Count()
inline int32_t Queue_1_get_Count_m411FBCF7CE9A9507EE8A494554748E6A165B2114_inline (Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// System.Void TreeBuilder/<readQueue>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__13__ctor_mF0013D373DB208DE44D62BB42BE6004FD6722531 (U3CreadQueueU3Ed__13_t6F0C1ECD9FAFBBD32DA5617BD6250B17D9F58C2A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Graph/Vertex::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_m3428AE6EBA9F95E4B5BC17E40A0CEC0051B5D2B0 (Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void SortingAlgorithm/ArrayIndex::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayIndex__ctor_m132D08AAD796EA0F5AC7518E94787C5CDC8DC23A (ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Graph/<readQueue>d__17::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__17_U3CU3Em__Finally1_m03E09FE86EF0FBFD332CCE39932E67A0C89AF525 (U3CreadQueueU3Ed__17_tE98D5B6097888700C315BAE31B0B699EF4396465 * __this, const RuntimeMethod* method);
// System.Void Graph::changeVertexColor(System.Int32,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_changeVertexColor_m9E48A07A9F0089ED18E84ACB8D97CED76CD9F55E (Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * __this, int32_t ___vertex0, int16_t ___colorId1, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void Graph::changeEdgeColor(System.Int32,System.Int32,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_changeEdgeColor_m9AA6C78880D7F96392FB89F4E09CE84DA39F8276 (Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * __this, int32_t ___v10, int32_t ___v21, int16_t ___colorId2, const RuntimeMethod* method);
// System.Void Graph/<readQueue>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__17_System_IDisposable_Dispose_mE9B0572B47A105607115A5D6FFE235CC0A786733 (U3CreadQueueU3Ed__17_tE98D5B6097888700C315BAE31B0B699EF4396465 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * __this, const RuntimeMethod* method);
// System.Double System.Math::Log(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Log_m05D6B4CE873ABBA5D8E39F798BBB67D49ABECE2C (double ___a0, double ___newBase1, const RuntimeMethod* method);
// System.Void LinkedList/<readQueue>d__8::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__8_U3CU3Em__Finally1_mFBEC74C4BFEEA0E4835E1CA290A14E81D1490C04 (U3CreadQueueU3Ed__8_t2A5B5A6D9CA49898AF9467883EB6F38AA0303EB7 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Queue`1/Enumerator<!0> System.Collections.Generic.Queue`1<LinkedList/QueueCommand>::GetEnumerator()
inline Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB  Queue_1_GetEnumerator_mC035E965383B7C164930DDCFBB43ACD31F54BB48 (Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB  (*) (Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 *, const RuntimeMethod*))Queue_1_GetEnumerator_m93F41D0CCCF0AB82FC589F8E2B9AB6670C8D843F_gshared)(__this, method);
}
// !0 System.Collections.Generic.Queue`1/Enumerator<LinkedList/QueueCommand>::get_Current()
inline QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C * Enumerator_get_Current_mB21F69BF7572A716F0D74CA3962F4BAFE060235C (Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB * __this, const RuntimeMethod* method)
{
	return ((  QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C * (*) (Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB *, const RuntimeMethod*))Enumerator_get_Current_m7EA5377B341C9268EB0F0885F8CFC2073E53717D_gshared)(__this, method);
}
// System.Void LinkedList::reposition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_reposition_mCC19617138A3B2A2776EAF4633EDA1C8C36F218C (LinkedList_t850219D15AE4341ACE77E391A1D59B17C1BF0250 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<LinkedList/QueueCommand>::MoveNext()
inline bool Enumerator_MoveNext_mBA5F966551179F5952E00151B19A82AB02D0E01C (Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB *, const RuntimeMethod*))Enumerator_MoveNext_m021EA477154DFEF16C293069BAA564C75FE058BA_gshared)(__this, method);
}
// System.Void LinkedList/<readQueue>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__8_System_IDisposable_Dispose_mE58046724882DA770990ABE8312D0A92C1317B02 (U3CreadQueueU3Ed__8_t2A5B5A6D9CA49898AF9467883EB6F38AA0303EB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1/Enumerator<LinkedList/QueueCommand>::Dispose()
inline void Enumerator_Dispose_m0876A5D053CEC417CA9264BA08ED1E86E1D03DA6 (Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB *, const RuntimeMethod*))Enumerator_Dispose_mAC863B8783E18A16FEAE03EF6B53E216A0D8A154_gshared)(__this, method);
}
// System.Void NQueens::setColor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NQueens_setColor_m2D364849876F1DE2EC26982763ECC6A644413892 (NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * __this, int32_t ___i0, int32_t ___j1, const RuntimeMethod* method);
// System.Void SortingAlgorithm/<readQueue>d__10::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__10_U3CU3Em__Finally1_mCF7942FDC668384CA9129D0931996AD700D5B827 (U3CreadQueueU3Ed__10_t3029C89FAFF9D6D1E9EFDF2B7604B11567DE71EE * __this, const RuntimeMethod* method);
// System.Void SortingAlgorithm::writeToIndex(SortingAlgorithm/ArrayIndex[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingAlgorithm_writeToIndex_m663DDCC614F023DB2FFD245C3AFA4AD21CF803A1 (SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * __this, ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* ___array0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method);
// System.Void SortingAlgorithm::swap(SortingAlgorithm/ArrayIndex&,SortingAlgorithm/ArrayIndex&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingAlgorithm_swap_m73EE80AE9D7A3983C40718631987720458554D5B (SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * __this, ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 ** ___a0, ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 ** ___b1, const RuntimeMethod* method);
// System.Void SortingAlgorithm::colorChange(System.Int32,System.Int32,SortingAlgorithm/ArrayIndex[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingAlgorithm_colorChange_m0A53C0CBC733EAD2DE620B39D64B8373DB118234 (SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * __this, int32_t ___element0, int32_t ___colorCode1, ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* ___array2, const RuntimeMethod* method);
// System.Void SortingAlgorithm/<readQueue>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__10_System_IDisposable_Dispose_mA704EDA9D38CC75348E00EF49E7DD2074AB83420 (U3CreadQueueU3Ed__10_t3029C89FAFF9D6D1E9EFDF2B7604B11567DE71EE * __this, const RuntimeMethod* method);
// System.Void SortingAlgorithm::copyArrayValue(SortingAlgorithm/ArrayIndex[],SortingAlgorithm/ArrayIndex[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingAlgorithm_copyArrayValue_m3F7B189ECF43CC4FE1597734C9364A8BAB10EBF5 (SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * __this, ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* ___primary0, ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* ___secondary1, int32_t ___primaryIndex2, int32_t ___secondaryIndex3, const RuntimeMethod* method);
// System.Void TreeBuilder/<readQueue>d__13::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__13_U3CU3Em__Finally1_m3634BF69C371F9B3ACD943491FEEFB425D2F3B82 (U3CreadQueueU3Ed__13_t6F0C1ECD9FAFBBD32DA5617BD6250B17D9F58C2A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void TreeBuilder/<readQueue>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__13_System_IDisposable_Dispose_m0443FDF92426B01620C271BDB02637ED40429DBB (U3CreadQueueU3Ed__13_t6F0C1ECD9FAFBBD32DA5617BD6250B17D9F58C2A * __this, const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Algorithm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Algorithm__ctor_m7350F7A6A79476CF0CB7A8793EE9D3F3C57F60D3 (Algorithm_t85666CE177ABC801C0531E627E4F65BA084B3FD4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void BellmanFord::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BellmanFord_Start_m0C5ED57D8515045D56F7A60364C918C4C503DECE (BellmanFord_tF034A0015CFEFE527D5EA228B46EBBCAF94DDA36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BellmanFordVertexU5BU5D_t16E4B62F1FCBE8EF770C6AB579D087ED8BB34C3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// n = r.Next(2, 21);
		IL2CPP_RUNTIME_CLASS_INIT(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_StaticFields*)il2cpp_codegen_static_fields_for(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var))->get_r_4();
		int32_t L_1;
		L_1 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_0, 2, ((int32_t)21));
		((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->set_n_5(L_1);
		// totalEdges = r.Next(n-1, n*(n-1)/2);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_2 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_StaticFields*)il2cpp_codegen_static_fields_for(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var))->get_r_4();
		int32_t L_3 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		int32_t L_4 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		int32_t L_5 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		int32_t L_6;
		L_6 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_2, ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1))))/(int32_t)2)));
		((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->set_totalEdges_6(L_6);
		// theta = 2*Math.PI / n;
		int32_t L_7 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->set_theta_7(((double)((double)(6.2831853071795862)/(double)((double)((double)L_7)))));
		// edge = new LineRenderer[n,n];
		int32_t L_8 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		int32_t L_9 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		il2cpp_array_size_t L_11[] = { (il2cpp_array_size_t)L_8, (il2cpp_array_size_t)L_9 };
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_10 = (LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716*)GenArrayNew(LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716_il2cpp_TypeInfo_var, L_11);
		((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->set_edge_8(L_10);
		// matrix = new int[n, n];
		int32_t L_12 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		int32_t L_13 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		il2cpp_array_size_t L_15[] = { (il2cpp_array_size_t)L_12, (il2cpp_array_size_t)L_13 };
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_14 = (Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17*)GenArrayNew(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var, L_15);
		((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->set_matrix_9(L_14);
		// vertices = new BellmanFordVertex[n];
		int32_t L_16 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		BellmanFordVertexU5BU5D_t16E4B62F1FCBE8EF770C6AB579D087ED8BB34C3A* L_17 = (BellmanFordVertexU5BU5D_t16E4B62F1FCBE8EF770C6AB579D087ED8BB34C3A*)(BellmanFordVertexU5BU5D_t16E4B62F1FCBE8EF770C6AB579D087ED8BB34C3A*)SZArrayNew(BellmanFordVertexU5BU5D_t16E4B62F1FCBE8EF770C6AB579D087ED8BB34C3A_il2cpp_TypeInfo_var, (uint32_t)L_16);
		V_0 = (VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD*)L_17;
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_18 = V_0;
		((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->set_vertices_11(L_18);
		// for(int i = 0; i < n; i++){
		V_1 = 0;
		goto IL_00aa;
	}

IL_0098:
	{
		// vertices[i] = new BellmanFordVertex(i);
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_19 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_20 = V_1;
		int32_t L_21 = V_1;
		BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * L_22 = (BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 *)il2cpp_codegen_object_new(BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802_il2cpp_TypeInfo_var);
		BellmanFordVertex__ctor_mB115F4DAEA241CA9B8092F55663929476210E2DA(L_22, L_21, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20), (Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_22);
		// for(int i = 0; i < n; i++){
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_00aa:
	{
		// for(int i = 0; i < n; i++){
		int32_t L_24 = V_1;
		int32_t L_25 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0098;
		}
	}
	{
		// setCam();
		Graph_setCam_m81551A9D69AA206818395C093C2C14DCD0F7FD65(__this, /*hidden argument*/NULL);
		// buildGrid();
		Graph_buildGrid_m3D68A47CF7CCC724395AF5AB2E06BC98B8570A76(__this, /*hidden argument*/NULL);
		// main = r.Next(n);
		IL2CPP_RUNTIME_CLASS_INIT(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_26 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_StaticFields*)il2cpp_codegen_static_fields_for(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var))->get_r_4();
		int32_t L_27 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		int32_t L_28;
		L_28 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32) */, L_26, L_27);
		__this->set_main_12(L_28);
		// BellmanFordAlgorithm();
		BellmanFord_BellmanFordAlgorithm_m5E19D9198236181AF7F4A214782FE61F2F86A495(__this, /*hidden argument*/NULL);
		// StartCoroutine(readQueue());
		RuntimeObject* L_29;
		L_29 = Graph_readQueue_m6A4DBE5D3D7142ACE001B6DC8D62CB2055E2AC80(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_30;
		L_30 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_29, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BellmanFord::BellmanFordAlgorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BellmanFord_BellmanFordAlgorithm_m5E19D9198236181AF7F4A214782FE61F2F86A495 (BellmanFord_tF034A0015CFEFE527D5EA228B46EBBCAF94DDA36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// ((BellmanFordVertex)vertices[main]).weight = 0;
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_0 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_1 = __this->get_main_12();
		int32_t L_2 = L_1;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		((BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 *)CastclassClass((RuntimeObject*)L_3, BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802_il2cpp_TypeInfo_var))->set_weight_4((0.0));
		// queue.Enqueue(new QueueCommand(1, main, -1, 1));
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_4 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_queue_10();
		int32_t L_5 = __this->get_main_12();
		QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_6 = (QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 *)il2cpp_codegen_object_new(QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m037EA2031412994E23AC3107248A35F70A4F7863(L_6, (int16_t)1, L_5, (-1), (int16_t)1, /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_4, L_6);
		// for(i = 0; i < n; i++){
		V_0 = 0;
		goto IL_021e;
	}

IL_0040:
	{
		// changesMade = false;
		__this->set_changesMade_13((bool)0);
		// for(j = 0; j < n; j++){
		V_1 = 0;
		goto IL_0062;
	}

IL_004b:
	{
		// ((BellmanFordVertex)vertices[j]).visited = false;
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_7 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		((BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 *)CastclassClass((RuntimeObject*)L_10, BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802_il2cpp_TypeInfo_var))->set_visited_5((bool)0);
		// for(j = 0; j < n; j++){
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0062:
	{
		// for(j = 0; j < n; j++){
		int32_t L_12 = V_1;
		int32_t L_13 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		// for(j = 0; j < n; j++){
		V_1 = 0;
		goto IL_0206;
	}

IL_0072:
	{
		// if (double.IsPositiveInfinity(((BellmanFordVertex)vertices[j]).weight)){
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_14 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		double L_18 = ((BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 *)CastclassClass((RuntimeObject*)L_17, BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802_il2cpp_TypeInfo_var))->get_weight_4();
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Double_IsPositiveInfinity_mD5882DEFC8FAA4CCDAE48B26B9CECAB5B7A53C96(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0202;
		}
	}
	{
		// ((BellmanFordVertex)vertices[j]).visited = true;
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_20 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_21 = V_1;
		int32_t L_22 = L_21;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		((BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 *)CastclassClass((RuntimeObject*)L_23, BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802_il2cpp_TypeInfo_var))->set_visited_5((bool)1);
		// foreach(BellmanFordVertex neighbor in vertices[j].neighbors){
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_24 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_25 = V_1;
		int32_t L_26 = L_25;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_28 = L_27->get_neighbors_2();
		RuntimeObject* L_29;
		L_29 = VirtFuncInvoker0< RuntimeObject* >::Invoke(30 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_28);
		V_2 = L_29;
	}

IL_00b4:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01e1;
		}

IL_00b9:
		{
			// foreach(BellmanFordVertex neighbor in vertices[j].neighbors){
			RuntimeObject* L_30 = V_2;
			RuntimeObject * L_31;
			L_31 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_30);
			V_3 = ((BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 *)CastclassClass((RuntimeObject*)L_31, BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802_il2cpp_TypeInfo_var));
			// if (neighbor.visited){
			BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * L_32 = V_3;
			bool L_33 = L_32->get_visited_5();
			if (L_33)
			{
				goto IL_01e1;
			}
		}

IL_00d0:
		{
			// queue.Enqueue(new QueueCommand(2, vertices[j].value, neighbor.value, 2));
			Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_34 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_queue_10();
			VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_35 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
			int32_t L_36 = V_1;
			int32_t L_37 = L_36;
			Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_38 = (L_35)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
			int32_t L_39 = L_38->get_value_0();
			BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * L_40 = V_3;
			int32_t L_41 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_40)->get_value_0();
			QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_42 = (QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 *)il2cpp_codegen_object_new(QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8_il2cpp_TypeInfo_var);
			QueueCommand__ctor_m037EA2031412994E23AC3107248A35F70A4F7863(L_42, (int16_t)2, L_39, L_41, (int16_t)2, /*hidden argument*/NULL);
			VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_34, L_42);
			// if (((BellmanFordVertex)vertices[j]).weight + matrix[j, neighbor.value] < neighbor.weight){
			VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_43 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
			int32_t L_44 = V_1;
			int32_t L_45 = L_44;
			Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_46 = (L_43)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
			double L_47 = ((BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 *)CastclassClass((RuntimeObject*)L_46, BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802_il2cpp_TypeInfo_var))->get_weight_4();
			Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_48 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_matrix_9();
			int32_t L_49 = V_1;
			BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * L_50 = V_3;
			int32_t L_51 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_50)->get_value_0();
			int32_t L_52;
			L_52 = (L_48)->GetAtUnchecked(L_49, L_51);
			BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * L_53 = V_3;
			double L_54 = L_53->get_weight_4();
			if ((!(((double)((double)il2cpp_codegen_add((double)L_47, (double)((double)((double)L_52))))) < ((double)L_54))))
			{
				goto IL_01bc;
			}
		}

IL_0126:
		{
			// if(neighbor.parent != null){
			BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * L_55 = V_3;
			BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * L_56 = L_55->get_parent_3();
			if (!L_56)
			{
				goto IL_0151;
			}
		}

IL_012e:
		{
			// queue.Enqueue(new QueueCommand(3, neighbor.parent.value, neighbor.value, 2));
			Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_57 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_queue_10();
			BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * L_58 = V_3;
			BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * L_59 = L_58->get_parent_3();
			int32_t L_60 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_59)->get_value_0();
			BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * L_61 = V_3;
			int32_t L_62 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_61)->get_value_0();
			QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_63 = (QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 *)il2cpp_codegen_object_new(QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8_il2cpp_TypeInfo_var);
			QueueCommand__ctor_m037EA2031412994E23AC3107248A35F70A4F7863(L_63, (int16_t)3, L_60, L_62, (int16_t)2, /*hidden argument*/NULL);
			VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_57, L_63);
		}

IL_0151:
		{
			// changesMade = true;
			__this->set_changesMade_13((bool)1);
			// neighbor.weight = ((BellmanFordVertex)vertices[j]).weight + matrix[j, neighbor.value];
			BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * L_64 = V_3;
			VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_65 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
			int32_t L_66 = V_1;
			int32_t L_67 = L_66;
			Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_68 = (L_65)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_67));
			double L_69 = ((BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 *)CastclassClass((RuntimeObject*)L_68, BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802_il2cpp_TypeInfo_var))->get_weight_4();
			Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_70 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_matrix_9();
			int32_t L_71 = V_1;
			BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * L_72 = V_3;
			int32_t L_73 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_72)->get_value_0();
			int32_t L_74;
			L_74 = (L_70)->GetAtUnchecked(L_71, L_73);
			L_64->set_weight_4(((double)il2cpp_codegen_add((double)L_69, (double)((double)((double)L_74)))));
			// neighbor.parent = (BellmanFordVertex)vertices[j];
			BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * L_75 = V_3;
			VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_76 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
			int32_t L_77 = V_1;
			int32_t L_78 = L_77;
			Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_79 = (L_76)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_78));
			L_75->set_parent_3(((BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 *)CastclassClass((RuntimeObject*)L_79, BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802_il2cpp_TypeInfo_var)));
			// queue.Enqueue(new QueueCommand(3, vertices[j].value, neighbor.value, 1));
			Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_80 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_queue_10();
			VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_81 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
			int32_t L_82 = V_1;
			int32_t L_83 = L_82;
			Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_84 = (L_81)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_83));
			int32_t L_85 = L_84->get_value_0();
			BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * L_86 = V_3;
			int32_t L_87 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_86)->get_value_0();
			QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_88 = (QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 *)il2cpp_codegen_object_new(QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8_il2cpp_TypeInfo_var);
			QueueCommand__ctor_m037EA2031412994E23AC3107248A35F70A4F7863(L_88, (int16_t)3, L_85, L_87, (int16_t)1, /*hidden argument*/NULL);
			VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_80, L_88);
		}

IL_01bc:
		{
			// queue.Enqueue(new QueueCommand(2, vertices[j].value, neighbor.value, 1));
			Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_89 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_queue_10();
			VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_90 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
			int32_t L_91 = V_1;
			int32_t L_92 = L_91;
			Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_93 = (L_90)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_92));
			int32_t L_94 = L_93->get_value_0();
			BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * L_95 = V_3;
			int32_t L_96 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_95)->get_value_0();
			QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_97 = (QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 *)il2cpp_codegen_object_new(QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8_il2cpp_TypeInfo_var);
			QueueCommand__ctor_m037EA2031412994E23AC3107248A35F70A4F7863(L_97, (int16_t)2, L_94, L_96, (int16_t)1, /*hidden argument*/NULL);
			VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_89, L_97);
		}

IL_01e1:
		{
			// foreach(BellmanFordVertex neighbor in vertices[j].neighbors){
			RuntimeObject* L_98 = V_2;
			bool L_99;
			L_99 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_98);
			if (L_99)
			{
				goto IL_00b9;
			}
		}

IL_01ec:
		{
			IL2CPP_LEAVE(0x202, FINALLY_01ee);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01ee;
	}

FINALLY_01ee:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_100 = V_2;
			V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_100, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_101 = V_4;
			if (!L_101)
			{
				goto IL_0201;
			}
		}

IL_01fa:
		{
			RuntimeObject* L_102 = V_4;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_102);
		}

IL_0201:
		{
			IL2CPP_END_FINALLY(494)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(494)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x202, IL_0202)
	}

IL_0202:
	{
		// for(j = 0; j < n; j++){
		int32_t L_103 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1));
	}

IL_0206:
	{
		// for(j = 0; j < n; j++){
		int32_t L_104 = V_1;
		int32_t L_105 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		if ((((int32_t)L_104) < ((int32_t)L_105)))
		{
			goto IL_0072;
		}
	}
	{
		// if(!changesMade){
		bool L_106 = __this->get_changesMade_13();
		if (!L_106)
		{
			goto IL_022a;
		}
	}
	{
		// for(i = 0; i < n; i++){
		int32_t L_107 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)1));
	}

IL_021e:
	{
		// for(i = 0; i < n; i++){
		int32_t L_108 = V_0;
		int32_t L_109 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		if ((((int32_t)L_108) < ((int32_t)L_109)))
		{
			goto IL_0040;
		}
	}

IL_022a:
	{
		// }
		return;
	}
}
// System.Void BellmanFord::extendCommands(Graph/QueueCommand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BellmanFord_extendCommands_mA563DB4772587FC3DC0ACDDABDFE74362009DDC8 (BellmanFord_tF034A0015CFEFE527D5EA228B46EBBCAF94DDA36 * __this, QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * ___command0, const RuntimeMethod* method)
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BellmanFord_extendCommands_mA563DB4772587FC3DC0ACDDABDFE74362009DDC8_RuntimeMethod_var)));
	}
}
// System.Void BellmanFord::extendVertexColors(System.Int32,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BellmanFord_extendVertexColors_mE892A878CFBCBEC6F2C3C44CCA02A919B04A8F3F (BellmanFord_tF034A0015CFEFE527D5EA228B46EBBCAF94DDA36 * __this, int32_t ___vertex0, int16_t ___colorId1, const RuntimeMethod* method)
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BellmanFord_extendVertexColors_mE892A878CFBCBEC6F2C3C44CCA02A919B04A8F3F_RuntimeMethod_var)));
	}
}
// System.Void BellmanFord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BellmanFord__ctor_m83BA6E3FE36BB60701E418FE511A312D42ECE6B9 (BellmanFord_tF034A0015CFEFE527D5EA228B46EBBCAF94DDA36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var);
		Graph__ctor_m372DF9468A49B59D2A640C41F51C5E4FAA8A3DFA(__this, /*hidden argument*/NULL);
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
// System.Void BinaryTree::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryTree_Start_m107E8074CE10898BC95A40850F9D67B89EA1B28D (BinaryTree_t9FD84FA619479A213650DF2B59CBFF225D80C3CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// depth = 0;
		((TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC *)__this)->set_depth_5(0);
		// size = 10;
		((TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC *)__this)->set_size_6(((int32_t)10));
		// root = new TreeNode(r.Next(100),0, 2);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = ((TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC *)__this)->get_r_8();
		int32_t L_1;
		L_1 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32) */, L_0, ((int32_t)100));
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_2 = (TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 *)il2cpp_codegen_object_new(TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57_il2cpp_TypeInfo_var);
		TreeNode__ctor_mCABA83289871304795C0000DD27CF32225492C45(L_2, L_1, 0, 2, /*hidden argument*/NULL);
		((TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC *)__this)->set_root_4(L_2);
		// q.Enqueue(new QueueCommand(0, root, null, 0));
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_3 = ((TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC *)__this)->get_q_7();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_4 = ((TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC *)__this)->get_root_4();
		QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_5 = (QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA *)il2cpp_codegen_object_new(QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m8D9B039659E872A481176B078FF23FD94A31D0F0(L_5, (int16_t)0, L_4, (TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 *)NULL, (int16_t)0, /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_3, L_5);
		// for (int i = 0; i < size; i++){
		V_0 = 0;
		goto IL_007f;
	}

IL_0046:
	{
		// root = addNode(root, null, r.Next(100), 0);
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_6 = ((TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC *)__this)->get_root_4();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_7 = ((TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC *)__this)->get_r_8();
		int32_t L_8;
		L_8 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32) */, L_7, ((int32_t)100));
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_9;
		L_9 = BinaryTree_addNode_mBA9876DA03EC9245568AD3C5F22645048D825EB5(__this, L_6, (TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 *)NULL, L_8, 0, /*hidden argument*/NULL);
		((TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC *)__this)->set_root_4(L_9);
		// q.Enqueue(new QueueCommand(6, null, null, 0));
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_10 = ((TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC *)__this)->get_q_7();
		QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_11 = (QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA *)il2cpp_codegen_object_new(QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m8D9B039659E872A481176B078FF23FD94A31D0F0(L_11, (int16_t)6, (TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 *)NULL, (TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 *)NULL, (int16_t)0, /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_10, L_11);
		// for (int i = 0; i < size; i++){
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_007f:
	{
		// for (int i = 0; i < size; i++){
		int32_t L_13 = V_0;
		int32_t L_14 = ((TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC *)__this)->get_size_6();
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0046;
		}
	}
	{
		// InOrderSearch(root);
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_15 = ((TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC *)__this)->get_root_4();
		TreeBuilder_InOrderSearch_m026E5D1F65012FFD45A9EB9E35527F753A5EE40B(__this, L_15, /*hidden argument*/NULL);
		// StartCoroutine(readQueue(.5f));
		RuntimeObject* L_16;
		L_16 = TreeBuilder_readQueue_m1AEAF373FC3869FCD676EC4883D59DB15731BAEB(__this, (0.5f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_17;
		L_17 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// TreeBuilder/TreeNode BinaryTree::addNode(TreeBuilder/TreeNode,TreeBuilder/TreeNode,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * BinaryTree_addNode_mBA9876DA03EC9245568AD3C5F22645048D825EB5 (BinaryTree_t9FD84FA619479A213650DF2B59CBFF225D80C3CA * __this, TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * ___root0, TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * ___parent1, int32_t ___x2, int32_t ___depth3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * V_0 = NULL;
	{
		// if (root == null){
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_0 = ___root0;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		// if(depth > this.depth){
		int32_t L_1 = ___depth3;
		int32_t L_2 = ((TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC *)__this)->get_depth_5();
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_001b;
		}
	}
	{
		// this.depth = depth;
		int32_t L_3 = ___depth3;
		((TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC *)__this)->set_depth_5(L_3);
		// setCam();
		TreeBuilder_setCam_m79DAF428DB8A8802451F976BD11B93EC9BEF5D7F(__this, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// TreeNode node = new TreeNode(x, depth, 2);
		int32_t L_4 = ___x2;
		int32_t L_5 = ___depth3;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_6 = (TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 *)il2cpp_codegen_object_new(TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57_il2cpp_TypeInfo_var);
		TreeNode__ctor_mCABA83289871304795C0000DD27CF32225492C45(L_6, L_4, L_5, 2, /*hidden argument*/NULL);
		V_0 = L_6;
		// q.Enqueue(new QueueCommand(0, node, null, 0));
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_7 = ((TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC *)__this)->get_q_7();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_8 = V_0;
		QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_9 = (QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA *)il2cpp_codegen_object_new(QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m8D9B039659E872A481176B078FF23FD94A31D0F0(L_9, (int16_t)0, L_8, (TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 *)NULL, (int16_t)0, /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_7, L_9);
		// q.Enqueue(new QueueCommand(3, node, parent, 0));
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_10 = ((TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC *)__this)->get_q_7();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_11 = V_0;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_12 = ___parent1;
		QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_13 = (QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA *)il2cpp_codegen_object_new(QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m8D9B039659E872A481176B078FF23FD94A31D0F0(L_13, (int16_t)3, L_11, L_12, (int16_t)0, /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_10, L_13);
		// return node;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_14 = V_0;
		return L_14;
	}

IL_004f:
	{
		// q.Enqueue(new QueueCommand(1, root, null, 0));
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_15 = ((TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC *)__this)->get_q_7();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_16 = ___root0;
		QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_17 = (QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA *)il2cpp_codegen_object_new(QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m8D9B039659E872A481176B078FF23FD94A31D0F0(L_17, (int16_t)1, L_16, (TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 *)NULL, (int16_t)0, /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_15, L_17);
		// if (x < root.value){
		int32_t L_18 = ___x2;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_19 = ___root0;
		int32_t L_20 = L_19->get_value_2();
		if ((((int32_t)L_18) >= ((int32_t)L_20)))
		{
			goto IL_00b3;
		}
	}
	{
		// q.Enqueue(new QueueCommand(4, root, null, 0));
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_21 = ((TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC *)__this)->get_q_7();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_22 = ___root0;
		QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_23 = (QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA *)il2cpp_codegen_object_new(QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m8D9B039659E872A481176B078FF23FD94A31D0F0(L_23, (int16_t)4, L_22, (TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 *)NULL, (int16_t)0, /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_21, L_23);
		// root.children[0] = addNode(root.children[0], root, x, depth + 1);
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_24 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_25 = L_24->get_children_1();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_26 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_27 = L_26->get_children_1();
		int32_t L_28 = 0;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_29 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_30 = ___root0;
		int32_t L_31 = ___x2;
		int32_t L_32 = ___depth3;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_33;
		L_33 = BinaryTree_addNode_mBA9876DA03EC9245568AD3C5F22645048D825EB5(__this, L_29, L_30, L_31, ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1)), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_25, L_33);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 *)L_33);
		// root.childEdges[0] = root.children[0].parentEdge;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_34 = ___root0;
		LineRendererU5BU5D_t65EF16DA3FB3E6D083B247824B04BE10D0B46743* L_35 = L_34->get_childEdges_6();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_36 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_37 = L_36->get_children_1();
		int32_t L_38 = 0;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_39 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_40 = L_39->get_parentEdge_5();
		ArrayElementTypeCheck (L_35, L_40);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 *)L_40);
		// }
		goto IL_00f8;
	}

IL_00b3:
	{
		// q.Enqueue(new QueueCommand(4, root, null, 1));
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_41 = ((TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC *)__this)->get_q_7();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_42 = ___root0;
		QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_43 = (QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA *)il2cpp_codegen_object_new(QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m8D9B039659E872A481176B078FF23FD94A31D0F0(L_43, (int16_t)4, L_42, (TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 *)NULL, (int16_t)1, /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_41, L_43);
		// root.children[1] = addNode(root.children[1], root, x, depth + 1);
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_44 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_45 = L_44->get_children_1();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_46 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_47 = L_46->get_children_1();
		int32_t L_48 = 1;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_49 = (L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_50 = ___root0;
		int32_t L_51 = ___x2;
		int32_t L_52 = ___depth3;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_53;
		L_53 = BinaryTree_addNode_mBA9876DA03EC9245568AD3C5F22645048D825EB5(__this, L_49, L_50, L_51, ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1)), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_45, L_53);
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 *)L_53);
		// root.childEdges[1] = root.children[1].parentEdge;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_54 = ___root0;
		LineRendererU5BU5D_t65EF16DA3FB3E6D083B247824B04BE10D0B46743* L_55 = L_54->get_childEdges_6();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_56 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_57 = L_56->get_children_1();
		int32_t L_58 = 1;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_59 = (L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_60 = L_59->get_parentEdge_5();
		ArrayElementTypeCheck (L_55, L_60);
		(L_55)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 *)L_60);
	}

IL_00f8:
	{
		// q.Enqueue(new QueueCommand(2, root, null, 0));
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_61 = ((TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC *)__this)->get_q_7();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_62 = ___root0;
		QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_63 = (QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA *)il2cpp_codegen_object_new(QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m8D9B039659E872A481176B078FF23FD94A31D0F0(L_63, (int16_t)2, L_62, (TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 *)NULL, (int16_t)0, /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_61, L_63);
		// return root;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_64 = ___root0;
		return L_64;
	}
}
// System.Void BinaryTree::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryTree_Update_m54FED09D921211452B12A13C8B1F6FE84D0A9B9D (BinaryTree_t9FD84FA619479A213650DF2B59CBFF225D80C3CA * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BinaryTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryTree__ctor_mAB9E13D8C44BE2FE733965D3257C43E98082BEBC (BinaryTree_t9FD84FA619479A213650DF2B59CBFF225D80C3CA * __this, const RuntimeMethod* method)
{
	{
		TreeBuilder__ctor_m094BE2A69CDAB158653A570129EA124BA7BFE8D3(__this, /*hidden argument*/NULL);
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
// System.Void BubbleSort::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BubbleSort_Awake_m2952D8360EF736D6BBEF84E532F066F577D33D6F (BubbleSort_t00AE6DE65B0614E3D25024FE761DC834FF4AF137 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// size = 50;
		((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->set_size_5(((int32_t)50));
		// arr = new int[size];
		int32_t L_0 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_0);
		((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->set_arr_6(L_1);
		// array = new ArrayIndex[size];
		int32_t L_2 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_3 = (ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182*)(ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182*)SZArrayNew(ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182_il2cpp_TypeInfo_var, (uint32_t)L_2);
		((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->set_array_4(L_3);
		// setCam();
		SortingAlgorithm_setCam_m21A5B734B44D3D62133D845677FF3E171C078122(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BubbleSort::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BubbleSort_Start_m8124A30075376D05256C25624FEA6EEA6209DBF6 (BubbleSort_t00AE6DE65B0614E3D25024FE761DC834FF4AF137 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// buildArray();
		SortingAlgorithm_buildArray_mD9825DA2F8C90EF5E0181977F9CCA18D0E0C6528(__this, /*hidden argument*/NULL);
		// for (i = 0; i < size; i++){
		V_0 = 0;
		goto IL_006d;
	}

IL_000a:
	{
		// for(j = 0; j < size - i - 1; j++){
		V_1 = 0;
		goto IL_003f;
	}

IL_000e:
	{
		// if (compare(j, j+1, 4, 0) && arr[j] > arr[j+1]){
		int32_t L_0 = V_1;
		int32_t L_1 = V_1;
		bool L_2;
		L_2 = SortingAlgorithm_compare_m06B90D91D9671842FF67CA478138597FFB6E7BBD(__this, L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), (int16_t)4, (int16_t)0, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_8 = V_1;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		int32_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		if ((((int32_t)L_6) <= ((int32_t)L_10)))
		{
			goto IL_003b;
		}
	}
	{
		// swap(j, j+1, 0);
		int32_t L_11 = V_1;
		int32_t L_12 = V_1;
		SortingAlgorithm_swap_mE5F00595342C97A0A4BB4A6376557C5D0F20F22B(__this, L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)), (int16_t)0, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// for(j = 0; j < size - i - 1; j++){
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_003f:
	{
		// for(j = 0; j < size - i - 1; j++){
		int32_t L_14 = V_1;
		int32_t L_15 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		int32_t L_16 = V_0;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16)), (int32_t)1)))))
		{
			goto IL_000e;
		}
	}
	{
		// q.Enqueue(new short[] {2, (short)(j), 2, 0});
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_17 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_18 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_19 = L_18;
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)2);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_20 = L_19;
		int32_t L_21 = V_1;
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_21)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_22 = L_20;
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)2);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_17, (RuntimeObject *)(RuntimeObject *)L_22);
		// for (i = 0; i < size; i++){
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_006d:
	{
		// for (i = 0; i < size; i++){
		int32_t L_24 = V_0;
		int32_t L_25 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_000a;
		}
	}
	{
		// StartCoroutine(readQueue(1));
		RuntimeObject* L_26;
		L_26 = SortingAlgorithm_readQueue_mCA727941B71A0BA8C54499AC3F7AF3C6CEDC38A0(__this, 1, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_27;
		L_27 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_26, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator BubbleSort::extendCommands(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BubbleSort_extendCommands_m1590397E4206093E67CBB87A939FC585EBD71323 (BubbleSort_t00AE6DE65B0614E3D25024FE761DC834FF4AF137 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___command0, int32_t ___time1, const RuntimeMethod* method)
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BubbleSort_extendCommands_m1590397E4206093E67CBB87A939FC585EBD71323_RuntimeMethod_var)));
	}
}
// System.Void BubbleSort::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BubbleSort__ctor_m358F04D9428E7FE7D87EBD15E5BF1562F281FA76 (BubbleSort_t00AE6DE65B0614E3D25024FE761DC834FF4AF137 * __this, const RuntimeMethod* method)
{
	{
		SortingAlgorithm__ctor_mB3212AEE8B1D0D0DCD737C8232675C2B01063717(__this, /*hidden argument*/NULL);
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
// System.Void ColorGraph::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorGraph_Start_m9B790AB95BFC7B5BB74744CAF967EDC2C0DBA607 (ColorGraph_tAB66E4AF557020EE6F5A34C9969A712789E8410D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorGraphVertexU5BU5D_tE38B7F6ABBB4F06D78CE581172CF127FC864F88B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// n = r.Next(2,11);
		IL2CPP_RUNTIME_CLASS_INIT(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_StaticFields*)il2cpp_codegen_static_fields_for(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var))->get_r_4();
		int32_t L_1;
		L_1 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_0, 2, ((int32_t)11));
		((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->set_n_5(L_1);
		// totalEdges = r.Next(n-1,n*(n-1)/2);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_2 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_StaticFields*)il2cpp_codegen_static_fields_for(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var))->get_r_4();
		int32_t L_3 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		int32_t L_4 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		int32_t L_5 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		int32_t L_6;
		L_6 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_2, ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1))))/(int32_t)2)));
		((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->set_totalEdges_6(L_6);
		// theta = 2*Math.PI / n;
		int32_t L_7 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->set_theta_7(((double)((double)(6.2831853071795862)/(double)((double)((double)L_7)))));
		// edge = new LineRenderer[n,n];
		int32_t L_8 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		int32_t L_9 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		il2cpp_array_size_t L_11[] = { (il2cpp_array_size_t)L_8, (il2cpp_array_size_t)L_9 };
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_10 = (LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716*)GenArrayNew(LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716_il2cpp_TypeInfo_var, L_11);
		((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->set_edge_8(L_10);
		// matrix = new int[n, n];
		int32_t L_12 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		int32_t L_13 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		il2cpp_array_size_t L_15[] = { (il2cpp_array_size_t)L_12, (il2cpp_array_size_t)L_13 };
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_14 = (Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17*)GenArrayNew(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var, L_15);
		((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->set_matrix_9(L_14);
		// vertices = new ColorGraphVertex[n];
		int32_t L_16 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		ColorGraphVertexU5BU5D_tE38B7F6ABBB4F06D78CE581172CF127FC864F88B* L_17 = (ColorGraphVertexU5BU5D_tE38B7F6ABBB4F06D78CE581172CF127FC864F88B*)(ColorGraphVertexU5BU5D_tE38B7F6ABBB4F06D78CE581172CF127FC864F88B*)SZArrayNew(ColorGraphVertexU5BU5D_tE38B7F6ABBB4F06D78CE581172CF127FC864F88B_il2cpp_TypeInfo_var, (uint32_t)L_16);
		V_0 = (VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD*)L_17;
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_18 = V_0;
		((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->set_vertices_11(L_18);
		// for(int i = 0; i < n; i++){
		V_1 = 0;
		goto IL_00aa;
	}

IL_0098:
	{
		// vertices[i] = new ColorGraphVertex(i);
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_19 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_20 = V_1;
		int32_t L_21 = V_1;
		ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 * L_22 = (ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 *)il2cpp_codegen_object_new(ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67_il2cpp_TypeInfo_var);
		ColorGraphVertex__ctor_mFE23E2F7A268F4E32BE3CAE1B9198681488C3718(L_22, L_21, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20), (Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_22);
		// for(int i = 0; i < n; i++){
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_00aa:
	{
		// for(int i = 0; i < n; i++){
		int32_t L_24 = V_1;
		int32_t L_25 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0098;
		}
	}
	{
		// setCam();
		Graph_setCam_m81551A9D69AA206818395C093C2C14DCD0F7FD65(__this, /*hidden argument*/NULL);
		// buildGrid();
		Graph_buildGrid_m3D68A47CF7CCC724395AF5AB2E06BC98B8570A76(__this, /*hidden argument*/NULL);
		// ColorGraphAlgorithm();
		ColorGraph_ColorGraphAlgorithm_m92556E7B954FEA382A08665004D3E9ED12ED4E71(__this, /*hidden argument*/NULL);
		// StartCoroutine(readQueue());
		RuntimeObject* L_26;
		L_26 = Graph_readQueue_m6A4DBE5D3D7142ACE001B6DC8D62CB2055E2AC80(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_27;
		L_27 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_26, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ColorGraph::ColorGraphAlgorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorGraph_ColorGraphAlgorithm_m92556E7B954FEA382A08665004D3E9ED12ED4E71 (ColorGraph_tAB66E4AF557020EE6F5A34C9969A712789E8410D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// for (j = 0; j <= maxColorId; j++){
		V_2 = 0;
		goto IL_0105;
	}

IL_0007:
	{
		// for(i = 0; i < n; i++){
		V_1 = 0;
		goto IL_00f5;
	}

IL_000e:
	{
		// v = (ColorGraphVertex)vertices[i];
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_0 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_1 = V_1;
		int32_t L_2 = L_1;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = ((ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 *)CastclassClass((RuntimeObject*)L_3, ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67_il2cpp_TypeInfo_var));
		// if (v.colorId == j){
		ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 * L_4 = V_0;
		int32_t L_5 = L_4->get_colorId_3();
		int32_t L_6 = V_2;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_00f1;
		}
	}
	{
		// foreach(ColorGraphVertex neighbor in v.neighbors){
		ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 * L_7 = V_0;
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_8 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_7)->get_neighbors_2();
		RuntimeObject* L_9;
		L_9 = VirtFuncInvoker0< RuntimeObject* >::Invoke(30 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_8);
		V_3 = L_9;
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d0;
		}

IL_0039:
		{
			// foreach(ColorGraphVertex neighbor in v.neighbors){
			RuntimeObject* L_10 = V_3;
			RuntimeObject * L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
			V_4 = ((ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 *)CastclassClass((RuntimeObject*)L_11, ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67_il2cpp_TypeInfo_var));
			// queue.Enqueue(new QueueCommand(3, neighbor.value, v.value, 3));
			Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_12 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_queue_10();
			ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 * L_13 = V_4;
			int32_t L_14 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_13)->get_value_0();
			ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 * L_15 = V_0;
			int32_t L_16 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_15)->get_value_0();
			QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_17 = (QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 *)il2cpp_codegen_object_new(QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8_il2cpp_TypeInfo_var);
			QueueCommand__ctor_m037EA2031412994E23AC3107248A35F70A4F7863(L_17, (int16_t)3, L_14, L_16, (int16_t)3, /*hidden argument*/NULL);
			VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_12, L_17);
			// if (neighbor.colorId == v.colorId){
			ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 * L_18 = V_4;
			int32_t L_19 = L_18->get_colorId_3();
			ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 * L_20 = V_0;
			int32_t L_21 = L_20->get_colorId_3();
			if ((!(((uint32_t)L_19) == ((uint32_t)L_21))))
			{
				goto IL_00b1;
			}
		}

IL_0074:
		{
			// neighbor.colorId++;
			ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 * L_22 = V_4;
			ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 * L_23 = L_22;
			int32_t L_24 = L_23->get_colorId_3();
			L_23->set_colorId_3(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
			// maxColorId = neighbor.colorId;
			ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 * L_25 = V_4;
			int32_t L_26 = L_25->get_colorId_3();
			__this->set_maxColorId_12(L_26);
			// queue.Enqueue(new QueueCommand(1, neighbor.value, 0, (short)neighbor.colorId));
			Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_27 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_queue_10();
			ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 * L_28 = V_4;
			int32_t L_29 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_28)->get_value_0();
			ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 * L_30 = V_4;
			int32_t L_31 = L_30->get_colorId_3();
			QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_32 = (QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 *)il2cpp_codegen_object_new(QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8_il2cpp_TypeInfo_var);
			QueueCommand__ctor_m037EA2031412994E23AC3107248A35F70A4F7863(L_32, (int16_t)1, L_29, 0, ((int16_t)((int16_t)L_31)), /*hidden argument*/NULL);
			VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_27, L_32);
		}

IL_00b1:
		{
			// queue.Enqueue(new QueueCommand(3, neighbor.value, v.value, 2));
			Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_33 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_queue_10();
			ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 * L_34 = V_4;
			int32_t L_35 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_34)->get_value_0();
			ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 * L_36 = V_0;
			int32_t L_37 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_36)->get_value_0();
			QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_38 = (QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 *)il2cpp_codegen_object_new(QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8_il2cpp_TypeInfo_var);
			QueueCommand__ctor_m037EA2031412994E23AC3107248A35F70A4F7863(L_38, (int16_t)3, L_35, L_37, (int16_t)2, /*hidden argument*/NULL);
			VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_33, L_38);
		}

IL_00d0:
		{
			// foreach(ColorGraphVertex neighbor in v.neighbors){
			RuntimeObject* L_39 = V_3;
			bool L_40;
			L_40 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_39);
			if (L_40)
			{
				goto IL_0039;
			}
		}

IL_00db:
		{
			IL2CPP_LEAVE(0xF1, FINALLY_00dd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00dd;
	}

FINALLY_00dd:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_41 = V_3;
			V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_41, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_42 = V_5;
			if (!L_42)
			{
				goto IL_00f0;
			}
		}

IL_00e9:
		{
			RuntimeObject* L_43 = V_5;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_43);
		}

IL_00f0:
		{
			IL2CPP_END_FINALLY(221)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(221)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF1, IL_00f1)
	}

IL_00f1:
	{
		// for(i = 0; i < n; i++){
		int32_t L_44 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_00f5:
	{
		// for(i = 0; i < n; i++){
		int32_t L_45 = V_1;
		int32_t L_46 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_000e;
		}
	}
	{
		// for (j = 0; j <= maxColorId; j++){
		int32_t L_47 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_0105:
	{
		// for (j = 0; j <= maxColorId; j++){
		int32_t L_48 = V_2;
		int32_t L_49 = __this->get_maxColorId_12();
		if ((((int32_t)L_48) <= ((int32_t)L_49)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ColorGraph::extendCommands(Graph/QueueCommand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorGraph_extendCommands_m0246663A14C08C42A88FD490D8CC47E9457E6BAD (ColorGraph_tAB66E4AF557020EE6F5A34C9969A712789E8410D * __this, QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * ___command0, const RuntimeMethod* method)
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ColorGraph_extendCommands_m0246663A14C08C42A88FD490D8CC47E9457E6BAD_RuntimeMethod_var)));
	}
}
// System.Void ColorGraph::extendVertexColors(System.Int32,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorGraph_extendVertexColors_mA95DCF1591D2B4C23C97183EB1243FDCCE982239 (ColorGraph_tAB66E4AF557020EE6F5A34C9969A712789E8410D * __this, int32_t ___vertex0, int16_t ___colorId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int16_t L_0 = ___colorId1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)4)))
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0043;
			}
			case 2:
			{
				goto IL_0065;
			}
			case 3:
			{
				goto IL_0096;
			}
			case 4:
			{
				goto IL_00c7;
			}
			case 5:
			{
				goto IL_00e9;
			}
		}
	}
	{
		return;
	}

IL_0021:
	{
		// vertices[vertex].o.GetComponent<Renderer>().material.color = Color.green;
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_1 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_2 = ___vertex0;
		int32_t L_3 = L_2;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_o_1();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_6;
		L_6 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_5, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7;
		L_7 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_6, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		L_8 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_7, L_8, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0043:
	{
		// vertices[vertex].o.GetComponent<Renderer>().material.color = Color.yellow;
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_9 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_10 = ___vertex0;
		int32_t L_11 = L_10;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_12->get_o_1();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_14;
		L_14 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_13, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15;
		L_15 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_14, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16;
		L_16 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_15, L_16, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0065:
	{
		// vertices[vertex].o.GetComponent<Renderer>().material.color = new Color(1,0,1);
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_17 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_18 = ___vertex0;
		int32_t L_19 = L_18;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = L_20->get_o_1();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_22;
		L_22 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_21, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_23;
		L_23 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_22, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_24), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_23, L_24, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0096:
	{
		// vertices[vertex].o.GetComponent<Renderer>().material.color = new Color(0,1,1);
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_25 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_26 = ___vertex0;
		int32_t L_27 = L_26;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = L_28->get_o_1();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_30;
		L_30 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_29, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_31;
		L_31 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_30, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_32), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_31, L_32, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00c7:
	{
		// vertices[vertex].o.GetComponent<Renderer>().material.color = Color.gray;
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_33 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_34 = ___vertex0;
		int32_t L_35 = L_34;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = L_36->get_o_1();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_38;
		L_38 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_37, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_39;
		L_39 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_38, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_40;
		L_40 = Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_39, L_40, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00e9:
	{
		// vertices[vertex].o.GetComponent<Renderer>().material.color = new Color(1,.5f,0);
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_41 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_42 = ___vertex0;
		int32_t L_43 = L_42;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_44 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45 = L_44->get_o_1();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_46;
		L_46 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_45, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_47;
		L_47 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_46, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_48;
		memset((&L_48), 0, sizeof(L_48));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_48), (1.0f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_47, L_48, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ColorGraph::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorGraph__ctor_m38CE03AFFBF2010475F16410DAB1B78439A8D038 (ColorGraph_tAB66E4AF557020EE6F5A34C9969A712789E8410D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var);
		Graph__ctor_m372DF9468A49B59D2A640C41F51C5E4FAA8A3DFA(__this, /*hidden argument*/NULL);
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
// System.Void CountingSort::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountingSort_Awake_m30C55F7BF6A56B37ABF68E4649A782CD8C4A26DF (CountingSort_t963D5E012F88F698132B7849B2B54965A2B04042 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// size = 128;  // 60 20 - 40
		((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->set_size_5(((int32_t)128));
		// arr = new int[size];
		int32_t L_0 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_0);
		((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->set_arr_6(L_1);
		// array = new ArrayIndex[size];
		int32_t L_2 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_3 = (ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182*)(ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182*)SZArrayNew(ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182_il2cpp_TypeInfo_var, (uint32_t)L_2);
		((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->set_array_4(L_3);
		// auxArray = new ArrayIndex[size];
		int32_t L_4 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_5 = (ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182*)(ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182*)SZArrayNew(ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182_il2cpp_TypeInfo_var, (uint32_t)L_4);
		((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->set_auxArray_8(L_5);
		// auxArr = new int[size];
		int32_t L_6 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_6);
		((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->set_auxArr_9(L_7);
		// }
		return;
	}
}
// System.Void CountingSort::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountingSort_Start_mB41CB36F9F4A54C36AFE9DB11B5595CB1B2373FC (CountingSort_t963D5E012F88F698132B7849B2B54965A2B04042 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// maxElements = 20;
		__this->set_maxElements_11(((int32_t)20));
		// countingArray = new int[maxElements];
		int32_t L_0 = __this->get_maxElements_11();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_0);
		((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->set_countingArray_10(L_1);
		// buildArray();
		CountingSort_buildArray_m008C3BC2E28CE92CEDD32BFF43D90CD1EE1FA6CE(__this, /*hidden argument*/NULL);
		// buildAuxArray();
		SortingAlgorithmWithAuxArray_buildAuxArray_m7AC5881D29AE865495BA96B9E7D512FE8751D6FD(__this, /*hidden argument*/NULL);
		// startSort();
		CountingSort_startSort_mC9912B1D903F62A9A440863059F5D3A9BD533F38(__this, /*hidden argument*/NULL);
		// StartCoroutine(readQueue(1));
		RuntimeObject* L_2;
		L_2 = SortingAlgorithm_readQueue_mCA727941B71A0BA8C54499AC3F7AF3C6CEDC38A0(__this, 1, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CountingSort::buildArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountingSort_buildArray_m008C3BC2E28CE92CEDD32BFF43D90CD1EE1FA6CE (CountingSort_t963D5E012F88F698132B7849B2B54965A2B04042 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayIndexWithRepetition_tD46B46909AB1496831848484F2F397F6136382E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Random r = new Random();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// for(i = 0; i < size; i++){
		V_1 = 0;
		goto IL_0034;
	}

IL_000a:
	{
		// value = r.Next(0, maxElements);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_1 = V_0;
		int32_t L_2 = __this->get_maxElements_11();
		int32_t L_3;
		L_3 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_1, 0, L_2);
		V_2 = L_3;
		// array[i] = new ArrayIndexWithRepetition(value, i);
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_4 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_array_4();
		int32_t L_5 = V_1;
		int32_t L_6 = V_2;
		int32_t L_7 = V_1;
		ArrayIndexWithRepetition_tD46B46909AB1496831848484F2F397F6136382E3 * L_8 = (ArrayIndexWithRepetition_tD46B46909AB1496831848484F2F397F6136382E3 *)il2cpp_codegen_object_new(ArrayIndexWithRepetition_tD46B46909AB1496831848484F2F397F6136382E3_il2cpp_TypeInfo_var);
		ArrayIndexWithRepetition__ctor_m2F198B1B2801D72D606CA8DF5A04C3D882E6EA9E(L_8, L_6, L_7, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 *)L_8);
		// arr[i] = value;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10), (int32_t)L_11);
		// for(i = 0; i < size; i++){
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0034:
	{
		// for(i = 0; i < size; i++){
		int32_t L_13 = V_1;
		int32_t L_14 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000a;
		}
	}
	{
		// for (i = 0; i < maxElements; i++){
		V_1 = 0;
		goto IL_004d;
	}

IL_0040:
	{
		// countingArray[i] = 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = ((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->get_countingArray_10();
		int32_t L_16 = V_1;
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16), (int32_t)0);
		// for (i = 0; i < maxElements; i++){
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_004d:
	{
		// for (i = 0; i < maxElements; i++){
		int32_t L_18 = V_1;
		int32_t L_19 = __this->get_maxElements_11();
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0040;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CountingSort::startSort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountingSort_startSort_mC9912B1D903F62A9A440863059F5D3A9BD533F38 (CountingSort_t963D5E012F88F698132B7849B2B54965A2B04042 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____1A39494CA8A5792132B9E7074016726CBA710970042FF604ED7A45944C8A9533_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for(i = 0; i < size; i++){
		V_0 = 0;
		goto IL_0020;
	}

IL_0004:
	{
		// countingArray[arr[i]]++;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->get_countingArray_10();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		int32_t* L_5 = ((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)));
		int32_t L_6 = *((int32_t*)L_5);
		*((int32_t*)L_5) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		// for(i = 0; i < size; i++){
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0020:
	{
		// for(i = 0; i < size; i++){
		int32_t L_8 = V_0;
		int32_t L_9 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// for(i = 1; i < maxElements; i++){
		V_0 = 1;
		goto IL_004a;
	}

IL_002c:
	{
		// countingArray[i] += countingArray[i-1];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = ((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->get_countingArray_10();
		int32_t L_11 = V_0;
		int32_t* L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)));
		int32_t L_13 = *((int32_t*)L_12);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = ((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->get_countingArray_10();
		int32_t L_15 = V_0;
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
		int32_t L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		*((int32_t*)L_12) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_17));
		// for(i = 1; i < maxElements; i++){
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_004a:
	{
		// for(i = 1; i < maxElements; i++){
		int32_t L_19 = V_0;
		int32_t L_20 = __this->get_maxElements_11();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_002c;
		}
	}
	{
		// for(i = 0; i < size; i++){
		V_0 = 0;
		goto IL_00b9;
	}

IL_0057:
	{
		// auxArr[--countingArray[arr[i]]] = arr[i];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = ((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->get_auxArr_9();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_22 = ((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->get_countingArray_10();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_24 = V_0;
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		int32_t* L_27 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)));
		int32_t L_28 = *((int32_t*)L_27);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1));
		int32_t L_29 = V_1;
		*((int32_t*)L_27) = (int32_t)L_29;
		int32_t L_30 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_31 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_32 = V_0;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30), (int32_t)L_34);
		// q.Enqueue(new short[] {0, (short)countingArray[arr[i]], (short)arr[i], 1});
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_35 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_36 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_37 = L_36;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_38 = ((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->get_countingArray_10();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_39 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_40 = V_0;
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		int32_t L_43 = L_42;
		int32_t L_44 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_44)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_45 = L_37;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_46 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_47 = V_0;
		int32_t L_48 = L_47;
		int32_t L_49 = (L_46)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)((int16_t)((int16_t)L_49)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_50 = L_45;
		(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (int16_t)1);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_35, (RuntimeObject *)(RuntimeObject *)L_50);
		// for(i = 0; i < size; i++){
		int32_t L_51 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_00b9:
	{
		// for(i = 0; i < size; i++){
		int32_t L_52 = V_0;
		int32_t L_53 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_0057;
		}
	}
	{
		// q.Enqueue(new short[] {11, 0, 1, 1});
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_54 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_55 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_56 = L_55;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_57 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____1A39494CA8A5792132B9E7074016726CBA710970042FF604ED7A45944C8A9533_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_56, L_57, /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_54, (RuntimeObject *)(RuntimeObject *)L_56);
		// q.Enqueue(new short[] {9, 0,0,0});
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_58 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_59 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_60 = L_59;
		(L_60)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)((int32_t)9));
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_58, (RuntimeObject *)(RuntimeObject *)L_60);
		// q.Enqueue(new short[] {8, 0,0,0});
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_61 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_62 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_63 = L_62;
		(L_63)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)8);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_61, (RuntimeObject *)(RuntimeObject *)L_63);
		// }
		return;
	}
}
// System.Void CountingSort::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountingSort__ctor_mC7730517C5D308A235EE3E56221264474F57EAD4 (CountingSort_t963D5E012F88F698132B7849B2B54965A2B04042 * __this, const RuntimeMethod* method)
{
	{
		SortingAlgorithmWithAuxArray__ctor_m62FA505A4F1EECCAFA769B4BD3DD1A56A2C24C2B(__this, /*hidden argument*/NULL);
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
// System.Void Dijkstra::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dijkstra_Start_m19195C07DA04010937AECDDDD69CC94F62613789 (Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DijkstraVertexU5BU5D_tFC37B5070EA84A56FE3EE861A3DBCEB46F6449F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// n = 7;//r.Next(2, 21);
		((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->set_n_5(7);
		// totalEdges = 13;//r.Next(n-1, n*(n-1)/2);
		((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->set_totalEdges_6(((int32_t)13));
		// theta = 2*Math.PI / n;
		int32_t L_0 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->set_theta_7(((double)((double)(6.2831853071795862)/(double)((double)((double)L_0)))));
		// edge = new LineRenderer[n,n];
		int32_t L_1 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		int32_t L_2 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		il2cpp_array_size_t L_4[] = { (il2cpp_array_size_t)L_1, (il2cpp_array_size_t)L_2 };
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_3 = (LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716*)GenArrayNew(LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716_il2cpp_TypeInfo_var, L_4);
		((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->set_edge_8(L_3);
		// matrix = new int[n, n];
		int32_t L_5 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		int32_t L_6 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		il2cpp_array_size_t L_8[] = { (il2cpp_array_size_t)L_5, (il2cpp_array_size_t)L_6 };
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_7 = (Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17*)GenArrayNew(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var, L_8);
		((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->set_matrix_9(L_7);
		// vertices = new DijkstraVertex[n];
		int32_t L_9 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		DijkstraVertexU5BU5D_tFC37B5070EA84A56FE3EE861A3DBCEB46F6449F3* L_10 = (DijkstraVertexU5BU5D_tFC37B5070EA84A56FE3EE861A3DBCEB46F6449F3*)(DijkstraVertexU5BU5D_tFC37B5070EA84A56FE3EE861A3DBCEB46F6449F3*)SZArrayNew(DijkstraVertexU5BU5D_tFC37B5070EA84A56FE3EE861A3DBCEB46F6449F3_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_0 = (VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD*)L_10;
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_11 = V_0;
		((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->set_vertices_11(L_11);
		// for(int i = 0; i < n; i++){
		V_1 = 0;
		goto IL_007d;
	}

IL_006b:
	{
		// vertices[i] = new DijkstraVertex(i);
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_12 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_13 = V_1;
		int32_t L_14 = V_1;
		DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_15 = (DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D *)il2cpp_codegen_object_new(DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D_il2cpp_TypeInfo_var);
		DijkstraVertex__ctor_m0534B1B0C4A6F2A9307C3B5B1B91BA6CE05EDAFF(L_15, L_14, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_15);
		// for(int i = 0; i < n; i++){
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_007d:
	{
		// for(int i = 0; i < n; i++){
		int32_t L_17 = V_1;
		int32_t L_18 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_006b;
		}
	}
	{
		// setCam();
		Graph_setCam_m81551A9D69AA206818395C093C2C14DCD0F7FD65(__this, /*hidden argument*/NULL);
		// buildGrid();
		Graph_buildGrid_m3D68A47CF7CCC724395AF5AB2E06BC98B8570A76(__this, /*hidden argument*/NULL);
		// main = r.Next(n);
		IL2CPP_RUNTIME_CLASS_INIT(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_19 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_StaticFields*)il2cpp_codegen_static_fields_for(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var))->get_r_4();
		int32_t L_20 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		int32_t L_21;
		L_21 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32) */, L_19, L_20);
		__this->set_main_12(L_21);
		// DijkstraAlgorithm();
		Dijkstra_DijkstraAlgorithm_mDEBC846FC2BA6FAF5ADC8FE8FD98AD9FBE7156A3(__this, /*hidden argument*/NULL);
		// StartCoroutine(readQueue());
		RuntimeObject* L_22;
		L_22 = Graph_readQueue_m6A4DBE5D3D7142ACE001B6DC8D62CB2055E2AC80(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_23;
		L_23 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Dijkstra::DijkstraAlgorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dijkstra_DijkstraAlgorithm_mDEBC846FC2BA6FAF5ADC8FE8FD98AD9FBE7156A3 (Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_tA99646B75D64090652E535E147AF8DE405D97434_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// head = new List((DijkstraVertex)vertices[main]);
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_0 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_1 = __this->get_main_12();
		int32_t L_2 = L_1;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		List_tA99646B75D64090652E535E147AF8DE405D97434 * L_4 = (List_tA99646B75D64090652E535E147AF8DE405D97434 *)il2cpp_codegen_object_new(List_tA99646B75D64090652E535E147AF8DE405D97434_il2cpp_TypeInfo_var);
		List__ctor_m22DFD766BC62740756C8FAF441C805A1934B3C3F(L_4, ((DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D *)CastclassClass((RuntimeObject*)L_3, DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		((Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_StaticFields*)il2cpp_codegen_static_fields_for(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_il2cpp_TypeInfo_var))->set_head_13(L_4);
		// ((DijkstraVertex)vertices[main]).weight = 0;
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_5 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_6 = __this->get_main_12();
		int32_t L_7 = L_6;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		((DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D *)CastclassClass((RuntimeObject*)L_8, DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D_il2cpp_TypeInfo_var))->set_weight_4((0.0));
		// queue.Enqueue(new QueueCommand(1, main, -1, 1));
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_9 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_queue_10();
		int32_t L_10 = __this->get_main_12();
		QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_11 = (QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 *)il2cpp_codegen_object_new(QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m037EA2031412994E23AC3107248A35F70A4F7863(L_11, (int16_t)1, L_10, (-1), (int16_t)1, /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_9, L_11);
		goto IL_0239;
	}

IL_005a:
	{
		// if (head.vertex.visited){
		List_tA99646B75D64090652E535E147AF8DE405D97434 * L_12 = ((Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_StaticFields*)il2cpp_codegen_static_fields_for(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_il2cpp_TypeInfo_var))->get_head_13();
		DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_13 = L_12->get_vertex_0();
		bool L_14 = L_13->get_visited_5();
		if (!L_14)
		{
			goto IL_007f;
		}
	}
	{
		// head = head.next;
		List_tA99646B75D64090652E535E147AF8DE405D97434 * L_15 = ((Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_StaticFields*)il2cpp_codegen_static_fields_for(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_il2cpp_TypeInfo_var))->get_head_13();
		List_tA99646B75D64090652E535E147AF8DE405D97434 * L_16 = L_15->get_next_1();
		((Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_StaticFields*)il2cpp_codegen_static_fields_for(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_il2cpp_TypeInfo_var))->set_head_13(L_16);
		// continue;
		goto IL_0239;
	}

IL_007f:
	{
		// foreach(DijkstraVertex v in head.vertex.neighbors){
		List_tA99646B75D64090652E535E147AF8DE405D97434 * L_17 = ((Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_StaticFields*)il2cpp_codegen_static_fields_for(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_il2cpp_TypeInfo_var))->get_head_13();
		DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_18 = L_17->get_vertex_0();
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_19 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_18)->get_neighbors_2();
		RuntimeObject* L_20;
		L_20 = VirtFuncInvoker0< RuntimeObject* >::Invoke(30 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_19);
		V_0 = L_20;
	}

IL_0094:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01da;
		}

IL_0099:
		{
			// foreach(DijkstraVertex v in head.vertex.neighbors){
			RuntimeObject* L_21 = V_0;
			RuntimeObject * L_22;
			L_22 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_21);
			V_1 = ((DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D *)CastclassClass((RuntimeObject*)L_22, DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D_il2cpp_TypeInfo_var));
			// if(v.visited){
			DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_23 = V_1;
			bool L_24 = L_23->get_visited_5();
			if (L_24)
			{
				goto IL_01da;
			}
		}

IL_00b0:
		{
			// queue.Enqueue(new QueueCommand(2, head.vertex.value, v.value, 2));
			Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_25 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_queue_10();
			List_tA99646B75D64090652E535E147AF8DE405D97434 * L_26 = ((Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_StaticFields*)il2cpp_codegen_static_fields_for(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_il2cpp_TypeInfo_var))->get_head_13();
			DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_27 = L_26->get_vertex_0();
			int32_t L_28 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_27)->get_value_0();
			DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_29 = V_1;
			int32_t L_30 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_29)->get_value_0();
			QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_31 = (QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 *)il2cpp_codegen_object_new(QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8_il2cpp_TypeInfo_var);
			QueueCommand__ctor_m037EA2031412994E23AC3107248A35F70A4F7863(L_31, (int16_t)2, L_28, L_30, (int16_t)2, /*hidden argument*/NULL);
			VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_25, L_31);
			// if(head.vertex.weight + matrix[head.vertex.value, v.value] < v.weight){
			List_tA99646B75D64090652E535E147AF8DE405D97434 * L_32 = ((Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_StaticFields*)il2cpp_codegen_static_fields_for(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_il2cpp_TypeInfo_var))->get_head_13();
			DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_33 = L_32->get_vertex_0();
			double L_34 = L_33->get_weight_4();
			Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_35 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_matrix_9();
			List_tA99646B75D64090652E535E147AF8DE405D97434 * L_36 = ((Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_StaticFields*)il2cpp_codegen_static_fields_for(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_il2cpp_TypeInfo_var))->get_head_13();
			DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_37 = L_36->get_vertex_0();
			int32_t L_38 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_37)->get_value_0();
			DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_39 = V_1;
			int32_t L_40 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_39)->get_value_0();
			int32_t L_41;
			L_41 = (L_35)->GetAtUnchecked(L_38, L_40);
			DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_42 = V_1;
			double L_43 = L_42->get_weight_4();
			if ((!(((double)((double)il2cpp_codegen_add((double)L_34, (double)((double)((double)L_41))))) < ((double)L_43))))
			{
				goto IL_01b3;
			}
		}

IL_0113:
		{
			// if(v.parent != null){
			DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_44 = V_1;
			DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_45 = L_44->get_parent_3();
			if (!L_45)
			{
				goto IL_013e;
			}
		}

IL_011b:
		{
			// queue.Enqueue(new QueueCommand(3, v.value, v.parent.value, 2));
			Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_46 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_queue_10();
			DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_47 = V_1;
			int32_t L_48 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_47)->get_value_0();
			DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_49 = V_1;
			DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_50 = L_49->get_parent_3();
			int32_t L_51 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_50)->get_value_0();
			QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_52 = (QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 *)il2cpp_codegen_object_new(QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8_il2cpp_TypeInfo_var);
			QueueCommand__ctor_m037EA2031412994E23AC3107248A35F70A4F7863(L_52, (int16_t)3, L_48, L_51, (int16_t)2, /*hidden argument*/NULL);
			VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_46, L_52);
		}

IL_013e:
		{
			// v.parent = head.vertex;
			DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_53 = V_1;
			List_tA99646B75D64090652E535E147AF8DE405D97434 * L_54 = ((Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_StaticFields*)il2cpp_codegen_static_fields_for(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_il2cpp_TypeInfo_var))->get_head_13();
			DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_55 = L_54->get_vertex_0();
			L_53->set_parent_3(L_55);
			// v.weight = head.vertex.weight + matrix[head.vertex.value, v.value];
			DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_56 = V_1;
			List_tA99646B75D64090652E535E147AF8DE405D97434 * L_57 = ((Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_StaticFields*)il2cpp_codegen_static_fields_for(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_il2cpp_TypeInfo_var))->get_head_13();
			DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_58 = L_57->get_vertex_0();
			double L_59 = L_58->get_weight_4();
			Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_60 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_matrix_9();
			List_tA99646B75D64090652E535E147AF8DE405D97434 * L_61 = ((Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_StaticFields*)il2cpp_codegen_static_fields_for(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_il2cpp_TypeInfo_var))->get_head_13();
			DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_62 = L_61->get_vertex_0();
			int32_t L_63 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_62)->get_value_0();
			DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_64 = V_1;
			int32_t L_65 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_64)->get_value_0();
			int32_t L_66;
			L_66 = (L_60)->GetAtUnchecked(L_63, L_65);
			L_56->set_weight_4(((double)il2cpp_codegen_add((double)L_59, (double)((double)((double)L_66)))));
			// head.insert(v);
			List_tA99646B75D64090652E535E147AF8DE405D97434 * L_67 = ((Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_StaticFields*)il2cpp_codegen_static_fields_for(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_il2cpp_TypeInfo_var))->get_head_13();
			DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_68 = V_1;
			List_insert_mF79DB84B6A770238AD6A6785844C9BBAA502D481(L_67, L_68, /*hidden argument*/NULL);
			// queue.Enqueue(new QueueCommand(3, v.parent.value, v.value, 1));
			Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_69 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_queue_10();
			DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_70 = V_1;
			DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_71 = L_70->get_parent_3();
			int32_t L_72 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_71)->get_value_0();
			DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_73 = V_1;
			int32_t L_74 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_73)->get_value_0();
			QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_75 = (QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 *)il2cpp_codegen_object_new(QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8_il2cpp_TypeInfo_var);
			QueueCommand__ctor_m037EA2031412994E23AC3107248A35F70A4F7863(L_75, (int16_t)3, L_72, L_74, (int16_t)1, /*hidden argument*/NULL);
			VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_69, L_75);
		}

IL_01b3:
		{
			// queue.Enqueue(new QueueCommand(2, head.vertex.value, v.value, 1));
			Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_76 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_queue_10();
			List_tA99646B75D64090652E535E147AF8DE405D97434 * L_77 = ((Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_StaticFields*)il2cpp_codegen_static_fields_for(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_il2cpp_TypeInfo_var))->get_head_13();
			DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_78 = L_77->get_vertex_0();
			int32_t L_79 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_78)->get_value_0();
			DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_80 = V_1;
			int32_t L_81 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_80)->get_value_0();
			QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_82 = (QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 *)il2cpp_codegen_object_new(QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8_il2cpp_TypeInfo_var);
			QueueCommand__ctor_m037EA2031412994E23AC3107248A35F70A4F7863(L_82, (int16_t)2, L_79, L_81, (int16_t)1, /*hidden argument*/NULL);
			VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_76, L_82);
		}

IL_01da:
		{
			// foreach(DijkstraVertex v in head.vertex.neighbors){
			RuntimeObject* L_83 = V_0;
			bool L_84;
			L_84 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_83);
			if (L_84)
			{
				goto IL_0099;
			}
		}

IL_01e5:
		{
			IL2CPP_LEAVE(0x1F8, FINALLY_01e7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01e7;
	}

FINALLY_01e7:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_85 = V_0;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_85, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_86 = V_2;
			if (!L_86)
			{
				goto IL_01f7;
			}
		}

IL_01f1:
		{
			RuntimeObject* L_87 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_87);
		}

IL_01f7:
		{
			IL2CPP_END_FINALLY(487)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(487)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1F8, IL_01f8)
	}

IL_01f8:
	{
		// head.vertex.visited = true;
		List_tA99646B75D64090652E535E147AF8DE405D97434 * L_88 = ((Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_StaticFields*)il2cpp_codegen_static_fields_for(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_il2cpp_TypeInfo_var))->get_head_13();
		DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_89 = L_88->get_vertex_0();
		L_89->set_visited_5((bool)1);
		// queue.Enqueue(new QueueCommand(1, head.vertex.value, 0, 3));
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_90 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_queue_10();
		List_tA99646B75D64090652E535E147AF8DE405D97434 * L_91 = ((Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_StaticFields*)il2cpp_codegen_static_fields_for(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_il2cpp_TypeInfo_var))->get_head_13();
		DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_92 = L_91->get_vertex_0();
		int32_t L_93 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_92)->get_value_0();
		QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_94 = (QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 *)il2cpp_codegen_object_new(QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m037EA2031412994E23AC3107248A35F70A4F7863(L_94, (int16_t)1, L_93, 0, (int16_t)3, /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_90, L_94);
		// head = head.next;
		List_tA99646B75D64090652E535E147AF8DE405D97434 * L_95 = ((Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_StaticFields*)il2cpp_codegen_static_fields_for(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_il2cpp_TypeInfo_var))->get_head_13();
		List_tA99646B75D64090652E535E147AF8DE405D97434 * L_96 = L_95->get_next_1();
		((Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_StaticFields*)il2cpp_codegen_static_fields_for(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_il2cpp_TypeInfo_var))->set_head_13(L_96);
	}

IL_0239:
	{
		// while(head != null){
		List_tA99646B75D64090652E535E147AF8DE405D97434 * L_97 = ((Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_StaticFields*)il2cpp_codegen_static_fields_for(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_il2cpp_TypeInfo_var))->get_head_13();
		if (L_97)
		{
			goto IL_005a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Dijkstra::rebuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dijkstra_rebuild_m3F6556E34393A585AC73B43441B15179213E0A63 (Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB94F79AF99EB1F84056002952B39BFDEA97D447);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// for(int i = 0; i < n; i++){
		V_0 = 0;
		goto IL_002b;
	}

IL_0004:
	{
		// for(int j = 0; j < n; j++){
		V_1 = 0;
		goto IL_001e;
	}

IL_0008:
	{
		// Destroy(edge[i,j]);
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_0 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_edge_8();
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_3;
		L_3 = (L_0)->GetAtUnchecked(L_1, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
		// for(int j = 0; j < n; j++){
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001e:
	{
		// for(int j = 0; j < n; j++){
		int32_t L_5 = V_1;
		int32_t L_6 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0008;
		}
	}
	{
		// for(int i = 0; i < n; i++){
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_002b:
	{
		// for(int i = 0; i < n; i++){
		int32_t L_8 = V_0;
		int32_t L_9 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < main; i++){
		V_2 = 0;
		goto IL_021a;
	}

IL_003b:
	{
		// int j = ((DijkstraVertex)vertices[i]).parent.value;
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_10 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_11 = V_2;
		int32_t L_12 = L_11;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_14 = ((DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D *)CastclassClass((RuntimeObject*)L_13, DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D_il2cpp_TypeInfo_var))->get_parent_3();
		int32_t L_15 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_14)->get_value_0();
		V_3 = L_15;
		// edge[vertices[i].value, j] = new GameObject("Line").AddComponent(typeof(LineRenderer)) as LineRenderer;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_16 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_edge_8();
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_17 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_18 = V_2;
		int32_t L_19 = L_18;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21 = L_20->get_value_0();
		int32_t L_22 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_23, _stringLiteralAB94F79AF99EB1F84056002952B39BFDEA97D447, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_24 = { reinterpret_cast<intptr_t> (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_25;
		L_25 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_24, /*hidden argument*/NULL);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_26;
		L_26 = GameObject_AddComponent_mD183856CB5A1CCF1576221D7D6CEBC4092E734B8(L_23, L_25, /*hidden argument*/NULL);
		(L_16)->SetAtUnchecked(L_21, L_22, ((LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 *)IsInstSealed((RuntimeObject*)L_26, LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_il2cpp_TypeInfo_var)));
		// edge[vertices[i].value, j].GetComponent<LineRenderer>().GetComponent<Renderer>().material.color = Color.white;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_27 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_edge_8();
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_28 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_29 = V_2;
		int32_t L_30 = L_29;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		int32_t L_32 = L_31->get_value_0();
		int32_t L_33 = V_3;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_34;
		L_34 = (L_27)->GetAtUnchecked(L_32, L_33);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_35;
		L_35 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_34, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_36;
		L_36 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(L_35, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_37;
		L_37 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_36, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_38;
		L_38 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_37, L_38, /*hidden argument*/NULL);
		// edge[vertices[i].value, j].GetComponent<LineRenderer>().startWidth = .1f;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_39 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_edge_8();
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_40 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_41 = V_2;
		int32_t L_42 = L_41;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_43 = (L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42));
		int32_t L_44 = L_43->get_value_0();
		int32_t L_45 = V_3;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_46;
		L_46 = (L_39)->GetAtUnchecked(L_44, L_45);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_47;
		L_47 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_46, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		LineRenderer_set_startWidth_mD88B562DD413EE9861FB254963C7EDCB5199C1DF(L_47, (0.100000001f), /*hidden argument*/NULL);
		// edge[vertices[i].value, j].GetComponent<LineRenderer>().endWidth = .1f;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_48 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_edge_8();
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_49 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_50 = V_2;
		int32_t L_51 = L_50;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_52 = (L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		int32_t L_53 = L_52->get_value_0();
		int32_t L_54 = V_3;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_55;
		L_55 = (L_48)->GetAtUnchecked(L_53, L_54);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_56;
		L_56 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_55, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		LineRenderer_set_endWidth_m3DCD4FFCC3944DD6DC0737C8AF8C7EDB5A6CF59A(L_56, (0.100000001f), /*hidden argument*/NULL);
		// edge[vertices[i].value, j].GetComponent<LineRenderer>().positionCount = 2;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_57 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_edge_8();
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_58 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_59 = V_2;
		int32_t L_60 = L_59;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_61 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		int32_t L_62 = L_61->get_value_0();
		int32_t L_63 = V_3;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_64;
		L_64 = (L_57)->GetAtUnchecked(L_62, L_63);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_65;
		L_65 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_64, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5(L_65, 2, /*hidden argument*/NULL);
		// edge[vertices[i].value, j].GetComponent<LineRenderer>().useWorldSpace = true;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_66 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_edge_8();
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_67 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_68 = V_2;
		int32_t L_69 = L_68;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_70 = (L_67)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_69));
		int32_t L_71 = L_70->get_value_0();
		int32_t L_72 = V_3;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_73;
		L_73 = (L_66)->GetAtUnchecked(L_71, L_72);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_74;
		L_74 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_73, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		LineRenderer_set_useWorldSpace_m53AA0FE659EFB041647DB6A29826D20D52CBE148(L_74, (bool)1, /*hidden argument*/NULL);
		// edge[vertices[i].value, j].SetPosition(0, new Vector3(vertices[i].o.transform.position.x, vertices[i].o.transform.position.y, 0)); //x,y and z position of the starting point of the line
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_75 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_edge_8();
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_76 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_77 = V_2;
		int32_t L_78 = L_77;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_79 = (L_76)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_78));
		int32_t L_80 = L_79->get_value_0();
		int32_t L_81 = V_3;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_82;
		L_82 = (L_75)->GetAtUnchecked(L_80, L_81);
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_83 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_84 = V_2;
		int32_t L_85 = L_84;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_86 = (L_83)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_85));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_87 = L_86->get_o_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_88;
		L_88 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_87, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89;
		L_89 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_88, /*hidden argument*/NULL);
		float L_90 = L_89.get_x_0();
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_91 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_92 = V_2;
		int32_t L_93 = L_92;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_94 = (L_91)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_93));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_95 = L_94->get_o_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_96;
		L_96 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_95, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_97;
		L_97 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_96, /*hidden argument*/NULL);
		float L_98 = L_97.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_99;
		memset((&L_99), 0, sizeof(L_99));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_99), L_90, L_98, (0.0f), /*hidden argument*/NULL);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_82, 0, L_99, /*hidden argument*/NULL);
		// edge[vertices[i].value, j].SetPosition(1, new Vector3(vertices[j].o.transform.position.x, vertices[j].o.transform.position.y, 0)); //x,y and z position of the starting point of the line
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_100 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_edge_8();
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_101 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_102 = V_2;
		int32_t L_103 = L_102;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_104 = (L_101)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_103));
		int32_t L_105 = L_104->get_value_0();
		int32_t L_106 = V_3;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_107;
		L_107 = (L_100)->GetAtUnchecked(L_105, L_106);
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_108 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_109 = V_3;
		int32_t L_110 = L_109;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_111 = (L_108)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_110));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_112 = L_111->get_o_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_113;
		L_113 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_112, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_114;
		L_114 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_113, /*hidden argument*/NULL);
		float L_115 = L_114.get_x_0();
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_116 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_117 = V_3;
		int32_t L_118 = L_117;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_119 = (L_116)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_118));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_120 = L_119->get_o_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_121;
		L_121 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_120, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_122;
		L_122 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_121, /*hidden argument*/NULL);
		float L_123 = L_122.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_124;
		memset((&L_124), 0, sizeof(L_124));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_124), L_115, L_123, (0.0f), /*hidden argument*/NULL);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_107, 1, L_124, /*hidden argument*/NULL);
		// for (int i = 0; i < main; i++){
		int32_t L_125 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_125, (int32_t)1));
	}

IL_021a:
	{
		// for (int i = 0; i < main; i++){
		int32_t L_126 = V_2;
		int32_t L_127 = __this->get_main_12();
		if ((((int32_t)L_126) < ((int32_t)L_127)))
		{
			goto IL_003b;
		}
	}
	{
		// for (int i = main + 1; i < n; i++){
		int32_t L_128 = __this->get_main_12();
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_128, (int32_t)1));
		goto IL_042c;
	}

IL_0235:
	{
		// int j = ((DijkstraVertex)vertices[i]).parent.value;
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_129 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_130 = V_4;
		int32_t L_131 = L_130;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_132 = (L_129)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_131));
		DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_133 = ((DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D *)CastclassClass((RuntimeObject*)L_132, DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D_il2cpp_TypeInfo_var))->get_parent_3();
		int32_t L_134 = ((Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 *)L_133)->get_value_0();
		V_5 = L_134;
		// edge[vertices[i].value, j] = new GameObject("Line").AddComponent(typeof(LineRenderer)) as LineRenderer;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_135 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_edge_8();
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_136 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_137 = V_4;
		int32_t L_138 = L_137;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_139 = (L_136)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_138));
		int32_t L_140 = L_139->get_value_0();
		int32_t L_141 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_142 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_142, _stringLiteralAB94F79AF99EB1F84056002952B39BFDEA97D447, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_143 = { reinterpret_cast<intptr_t> (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_144;
		L_144 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_143, /*hidden argument*/NULL);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_145;
		L_145 = GameObject_AddComponent_mD183856CB5A1CCF1576221D7D6CEBC4092E734B8(L_142, L_144, /*hidden argument*/NULL);
		(L_135)->SetAtUnchecked(L_140, L_141, ((LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 *)IsInstSealed((RuntimeObject*)L_145, LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_il2cpp_TypeInfo_var)));
		// edge[vertices[i].value, j].GetComponent<LineRenderer>().GetComponent<Renderer>().material.color = Color.white;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_146 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_edge_8();
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_147 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_148 = V_4;
		int32_t L_149 = L_148;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_150 = (L_147)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_149));
		int32_t L_151 = L_150->get_value_0();
		int32_t L_152 = V_5;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_153;
		L_153 = (L_146)->GetAtUnchecked(L_151, L_152);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_154;
		L_154 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_153, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_155;
		L_155 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(L_154, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_156;
		L_156 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_155, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_157;
		L_157 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_156, L_157, /*hidden argument*/NULL);
		// edge[vertices[i].value, j].GetComponent<LineRenderer>().startWidth = .1f;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_158 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_edge_8();
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_159 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_160 = V_4;
		int32_t L_161 = L_160;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_162 = (L_159)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_161));
		int32_t L_163 = L_162->get_value_0();
		int32_t L_164 = V_5;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_165;
		L_165 = (L_158)->GetAtUnchecked(L_163, L_164);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_166;
		L_166 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_165, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		LineRenderer_set_startWidth_mD88B562DD413EE9861FB254963C7EDCB5199C1DF(L_166, (0.100000001f), /*hidden argument*/NULL);
		// edge[vertices[i].value, j].GetComponent<LineRenderer>().endWidth = .1f;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_167 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_edge_8();
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_168 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_169 = V_4;
		int32_t L_170 = L_169;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_171 = (L_168)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_170));
		int32_t L_172 = L_171->get_value_0();
		int32_t L_173 = V_5;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_174;
		L_174 = (L_167)->GetAtUnchecked(L_172, L_173);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_175;
		L_175 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_174, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		LineRenderer_set_endWidth_m3DCD4FFCC3944DD6DC0737C8AF8C7EDB5A6CF59A(L_175, (0.100000001f), /*hidden argument*/NULL);
		// edge[vertices[i].value, j].GetComponent<LineRenderer>().positionCount = 2;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_176 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_edge_8();
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_177 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_178 = V_4;
		int32_t L_179 = L_178;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_180 = (L_177)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_179));
		int32_t L_181 = L_180->get_value_0();
		int32_t L_182 = V_5;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_183;
		L_183 = (L_176)->GetAtUnchecked(L_181, L_182);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_184;
		L_184 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_183, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5(L_184, 2, /*hidden argument*/NULL);
		// edge[vertices[i].value, j].GetComponent<LineRenderer>().useWorldSpace = true;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_185 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_edge_8();
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_186 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_187 = V_4;
		int32_t L_188 = L_187;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_189 = (L_186)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_188));
		int32_t L_190 = L_189->get_value_0();
		int32_t L_191 = V_5;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_192;
		L_192 = (L_185)->GetAtUnchecked(L_190, L_191);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_193;
		L_193 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_192, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		LineRenderer_set_useWorldSpace_m53AA0FE659EFB041647DB6A29826D20D52CBE148(L_193, (bool)1, /*hidden argument*/NULL);
		// edge[vertices[i].value, j].SetPosition(0, new Vector3(vertices[i].o.transform.position.x, vertices[i].o.transform.position.y, 0)); //x,y and z position of the starting point of the line
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_194 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_edge_8();
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_195 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_196 = V_4;
		int32_t L_197 = L_196;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_198 = (L_195)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_197));
		int32_t L_199 = L_198->get_value_0();
		int32_t L_200 = V_5;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_201;
		L_201 = (L_194)->GetAtUnchecked(L_199, L_200);
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_202 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_203 = V_4;
		int32_t L_204 = L_203;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_205 = (L_202)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_204));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_206 = L_205->get_o_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_207;
		L_207 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_206, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_208;
		L_208 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_207, /*hidden argument*/NULL);
		float L_209 = L_208.get_x_0();
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_210 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_211 = V_4;
		int32_t L_212 = L_211;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_213 = (L_210)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_212));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_214 = L_213->get_o_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_215;
		L_215 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_214, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_216;
		L_216 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_215, /*hidden argument*/NULL);
		float L_217 = L_216.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_218;
		memset((&L_218), 0, sizeof(L_218));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_218), L_209, L_217, (0.0f), /*hidden argument*/NULL);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_201, 0, L_218, /*hidden argument*/NULL);
		// edge[vertices[i].value, j].SetPosition(1, new Vector3(vertices[j].o.transform.position.x, vertices[j].o.transform.position.y, 0)); //x,y and z position of the starting point of the line
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_219 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_edge_8();
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_220 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_221 = V_4;
		int32_t L_222 = L_221;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_223 = (L_220)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_222));
		int32_t L_224 = L_223->get_value_0();
		int32_t L_225 = V_5;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_226;
		L_226 = (L_219)->GetAtUnchecked(L_224, L_225);
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_227 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_228 = V_5;
		int32_t L_229 = L_228;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_230 = (L_227)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_229));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_231 = L_230->get_o_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_232;
		L_232 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_231, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_233;
		L_233 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_232, /*hidden argument*/NULL);
		float L_234 = L_233.get_x_0();
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_235 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_vertices_11();
		int32_t L_236 = V_5;
		int32_t L_237 = L_236;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_238 = (L_235)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_237));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_239 = L_238->get_o_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_240;
		L_240 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_239, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_241;
		L_241 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_240, /*hidden argument*/NULL);
		float L_242 = L_241.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_243;
		memset((&L_243), 0, sizeof(L_243));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_243), L_234, L_242, (0.0f), /*hidden argument*/NULL);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_226, 1, L_243, /*hidden argument*/NULL);
		// for (int i = main + 1; i < n; i++){
		int32_t L_244 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_244, (int32_t)1));
	}

IL_042c:
	{
		// for (int i = main + 1; i < n; i++){
		int32_t L_245 = V_4;
		int32_t L_246 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 *)__this)->get_n_5();
		if ((((int32_t)L_245) < ((int32_t)L_246)))
		{
			goto IL_0235;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Dijkstra::extendCommands(Graph/QueueCommand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dijkstra_extendCommands_m0B8B611D9F1F551BB857E071F3EB2DD139EB9887 (Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * __this, QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * ___command0, const RuntimeMethod* method)
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Dijkstra_extendCommands_m0B8B611D9F1F551BB857E071F3EB2DD139EB9887_RuntimeMethod_var)));
	}
}
// System.Void Dijkstra::extendVertexColors(System.Int32,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dijkstra_extendVertexColors_m272ED0A09F9E3C249A30CA9F1C1E51FAF406E5D6 (Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * __this, int32_t ___vertex0, int16_t ___colorId1, const RuntimeMethod* method)
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Dijkstra_extendVertexColors_m272ED0A09F9E3C249A30CA9F1C1E51FAF406E5D6_RuntimeMethod_var)));
	}
}
// System.Void Dijkstra::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dijkstra__ctor_m8550E02BEC892CA8564F853F0A2790F93C8F7EC6 (Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var);
		Graph__ctor_m372DF9468A49B59D2A640C41F51C5E4FAA8A3DFA(__this, /*hidden argument*/NULL);
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
// System.Void Graph::setup(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_setup_m0B801632BE961A3E44EC3C730BA2490FFA27DB00 (Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * __this, int32_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.n = n;
		int32_t L_0 = ___n0;
		__this->set_n_5(L_0);
		// totalEdges = r.Next(n-1, n*(n-1)/2);
		IL2CPP_RUNTIME_CLASS_INIT(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_1 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_StaticFields*)il2cpp_codegen_static_fields_for(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var))->get_r_4();
		int32_t L_2 = ___n0;
		int32_t L_3 = ___n0;
		int32_t L_4 = ___n0;
		int32_t L_5;
		L_5 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)), ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1))))/(int32_t)2)));
		__this->set_totalEdges_6(L_5);
		// theta = 2*Math.PI / n;
		int32_t L_6 = ___n0;
		__this->set_theta_7(((double)((double)(6.2831853071795862)/(double)((double)((double)L_6)))));
		// edge = new LineRenderer[n,n];
		int32_t L_7 = ___n0;
		int32_t L_8 = ___n0;
		il2cpp_array_size_t L_10[] = { (il2cpp_array_size_t)L_7, (il2cpp_array_size_t)L_8 };
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_9 = (LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716*)GenArrayNew(LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716_il2cpp_TypeInfo_var, L_10);
		__this->set_edge_8(L_9);
		// matrix = new int[n, n];
		int32_t L_11 = ___n0;
		int32_t L_12 = ___n0;
		il2cpp_array_size_t L_14[] = { (il2cpp_array_size_t)L_11, (il2cpp_array_size_t)L_12 };
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_13 = (Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17*)GenArrayNew(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var, L_14);
		__this->set_matrix_9(L_13);
		// vertices = new Vertex[n];
		int32_t L_15 = ___n0;
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_16 = (VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD*)(VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD*)SZArrayNew(VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD_il2cpp_TypeInfo_var, (uint32_t)L_15);
		__this->set_vertices_11(L_16);
		// setCam();
		Graph_setCam_m81551A9D69AA206818395C093C2C14DCD0F7FD65(__this, /*hidden argument*/NULL);
		// buildGrid();
		Graph_buildGrid_m3D68A47CF7CCC724395AF5AB2E06BC98B8570A76(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Graph::setCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_setCam_m81551A9D69AA206818395C093C2C14DCD0F7FD65 (Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * __this, const RuntimeMethod* method)
{
	{
		// Camera.main.transform.position = new Vector3(0, 0, -20 );
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (0.0f), (-20.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Graph::buildGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_buildGrid_m3D68A47CF7CCC724395AF5AB2E06BC98B8570A76 (Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// int[] array = new int[n];
		int32_t L_0 = __this->get_n_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// for(i = 0; i < n; i++)
		V_2 = 0;
		goto IL_0026;
	}

IL_0010:
	{
		// array[i] = i;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = V_0;
		int32_t L_3 = V_2;
		int32_t L_4 = V_2;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_4);
		// matrix[i,i] = -1; // While we're here, might as well set each vertex self-weight. -1 means self.
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_5 = __this->get_matrix_9();
		int32_t L_6 = V_2;
		int32_t L_7 = V_2;
		(L_5)->SetAtUnchecked(L_6, L_7, (-1));
		// for(i = 0; i < n; i++)
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0026:
	{
		// for(i = 0; i < n; i++)
		int32_t L_9 = V_2;
		int32_t L_10 = __this->get_n_5();
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0010;
		}
	}
	{
		// for (i = 0; i < n; i++)
		V_2 = 0;
		goto IL_005b;
	}

IL_0033:
	{
		// swap(ref array[i], ref array[r.Next(i, n)]);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = V_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_14 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_StaticFields*)il2cpp_codegen_static_fields_for(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var))->get_r_4();
		int32_t L_15 = V_2;
		int32_t L_16 = __this->get_n_5();
		int32_t L_17;
		L_17 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_14, L_15, L_16);
		Graph_swap_m1C34E3444E3B1D78D0FE137B71E66488EA06F0D4(__this, (int32_t*)((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12))), (int32_t*)((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17))), /*hidden argument*/NULL);
		// for (i = 0; i < n; i++)
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005b:
	{
		// for (i = 0; i < n; i++)
		int32_t L_19 = V_2;
		int32_t L_20 = __this->get_n_5();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0033;
		}
	}
	{
		// for (i = 1; i < n; i++)
		V_2 = 1;
		goto IL_00aa;
	}

IL_0068:
	{
		// j = r.Next(i);
		IL2CPP_RUNTIME_CLASS_INIT(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_21 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_StaticFields*)il2cpp_codegen_static_fields_for(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var))->get_r_4();
		int32_t L_22 = V_2;
		int32_t L_23;
		L_23 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32) */, L_21, L_22);
		V_3 = L_23;
		// weight = r.Next(1,50);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_24 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_StaticFields*)il2cpp_codegen_static_fields_for(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var))->get_r_4();
		int32_t L_25;
		L_25 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_24, 1, ((int32_t)50));
		V_1 = L_25;
		// matrix[array[i], array[j]] = weight;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_26 = __this->get_matrix_9();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = V_0;
		int32_t L_28 = V_2;
		int32_t L_29 = L_28;
		int32_t L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_31 = V_0;
		int32_t L_32 = V_3;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = V_1;
		(L_26)->SetAtUnchecked(L_30, L_34, L_35);
		// matrix[array[j], array[i]] = weight;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_36 = __this->get_matrix_9();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_37 = V_0;
		int32_t L_38 = V_3;
		int32_t L_39 = L_38;
		int32_t L_40 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_41 = V_0;
		int32_t L_42 = V_2;
		int32_t L_43 = L_42;
		int32_t L_44 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		int32_t L_45 = V_1;
		(L_36)->SetAtUnchecked(L_40, L_44, L_45);
		// for (i = 1; i < n; i++)
		int32_t L_46 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_00aa:
	{
		// for (i = 1; i < n; i++)
		int32_t L_47 = V_2;
		int32_t L_48 = __this->get_n_5();
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_0068;
		}
	}
	{
		// int remainingEdges = totalEdges - n + 1;
		int32_t L_49 = __this->get_totalEdges_6();
		int32_t L_50 = __this->get_n_5();
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)L_50)), (int32_t)1));
		goto IL_0142;
	}

IL_00c6:
	{
		// i = r.Next(n);
		IL2CPP_RUNTIME_CLASS_INIT(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_51 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_StaticFields*)il2cpp_codegen_static_fields_for(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var))->get_r_4();
		int32_t L_52 = __this->get_n_5();
		int32_t L_53;
		L_53 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32) */, L_51, L_52);
		V_2 = L_53;
		// j = r.Next(n);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_54 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_StaticFields*)il2cpp_codegen_static_fields_for(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var))->get_r_4();
		int32_t L_55 = __this->get_n_5();
		int32_t L_56;
		L_56 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32) */, L_54, L_55);
		V_3 = L_56;
		goto IL_0103;
	}

IL_00ea:
	{
		// i = (i + 1) % n;
		int32_t L_57 = V_2;
		int32_t L_58 = __this->get_n_5();
		V_2 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1))%(int32_t)L_58));
		// if (i == 0)
		int32_t L_59 = V_2;
		if (L_59)
		{
			goto IL_0103;
		}
	}
	{
		// j = (j + 1) % n;
		int32_t L_60 = V_3;
		int32_t L_61 = __this->get_n_5();
		V_3 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1))%(int32_t)L_61));
	}

IL_0103:
	{
		// while (matrix[i,j] != 0)
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_62 = __this->get_matrix_9();
		int32_t L_63 = V_2;
		int32_t L_64 = V_3;
		int32_t L_65;
		L_65 = (L_62)->GetAtUnchecked(L_63, L_64);
		if (L_65)
		{
			goto IL_00ea;
		}
	}
	{
		// weight = r.Next(1,50);
		IL2CPP_RUNTIME_CLASS_INIT(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_66 = ((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_StaticFields*)il2cpp_codegen_static_fields_for(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var))->get_r_4();
		int32_t L_67;
		L_67 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_66, 1, ((int32_t)50));
		V_1 = L_67;
		// matrix[i,j] = weight;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_68 = __this->get_matrix_9();
		int32_t L_69 = V_2;
		int32_t L_70 = V_3;
		int32_t L_71 = V_1;
		(L_68)->SetAtUnchecked(L_69, L_70, L_71);
		// matrix[j,i] = weight;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_72 = __this->get_matrix_9();
		int32_t L_73 = V_3;
		int32_t L_74 = V_2;
		int32_t L_75 = V_1;
		(L_72)->SetAtUnchecked(L_73, L_74, L_75);
		// remainingEdges--;
		int32_t L_76 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_76, (int32_t)1));
	}

IL_0142:
	{
		// while (remainingEdges > 0)
		int32_t L_77 = V_4;
		if ((((int32_t)L_77) > ((int32_t)0)))
		{
			goto IL_00c6;
		}
	}
	{
		// buildVisual();
		Graph_buildVisual_mAF616310A70D8B6AC25282C91E7885ECCDF69AD6(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Graph::swap(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_swap_m1C34E3444E3B1D78D0FE137B71E66488EA06F0D4 (Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * __this, int32_t* ___x0, int32_t* ___y1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int temp = x;
		int32_t* L_0 = ___x0;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = L_1;
		// x = y;
		int32_t* L_2 = ___x0;
		int32_t* L_3 = ___y1;
		int32_t L_4 = *((int32_t*)L_3);
		*((int32_t*)L_2) = (int32_t)L_4;
		// y = temp;
		int32_t* L_5 = ___y1;
		int32_t L_6 = V_0;
		*((int32_t*)L_5) = (int32_t)L_6;
		// }
		return;
	}
}
// System.Void Graph::buildVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_buildVisual_mAF616310A70D8B6AC25282C91E7885ECCDF69AD6 (Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFDBCF2A49BF9DDD9ADCA5B88723861DE76D2DE6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// for (int i = 0; i < n; i++)
		V_0 = 0;
		goto IL_0096;
	}

IL_0007:
	{
		// vertices[i].o = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_0 = __this->get_vertices_11();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC(0, /*hidden argument*/NULL);
		L_3->set_o_1(L_4);
		// vertices[i].o.transform.position = new Vector3(10*(float)Math.Cos(Math.PI/2-(i*theta)), 10*(float)Math.Sin(Math.PI/2-(i*theta)), 0);
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_5 = __this->get_vertices_11();
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = L_8->get_o_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		double L_12 = __this->get_theta_7();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = cos(((double)il2cpp_codegen_subtract((double)(1.5707963267948966), (double)((double)il2cpp_codegen_multiply((double)((double)((double)L_11)), (double)L_12)))));
		int32_t L_14 = V_0;
		double L_15 = __this->get_theta_7();
		double L_16;
		L_16 = sin(((double)il2cpp_codegen_subtract((double)(1.5707963267948966), (double)((double)il2cpp_codegen_multiply((double)((double)((double)L_14)), (double)L_15)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_17), ((float)il2cpp_codegen_multiply((float)(10.0f), (float)((float)((float)L_13)))), ((float)il2cpp_codegen_multiply((float)(10.0f), (float)((float)((float)L_16)))), (0.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_17, /*hidden argument*/NULL);
		// vertices[i].o.name = i.ToString();
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_18 = __this->get_vertices_11();
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = L_21->get_o_1();
		String_t* L_23;
		L_23 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_22, L_23, /*hidden argument*/NULL);
		// for (int i = 0; i < n; i++)
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0096:
	{
		// for (int i = 0; i < n; i++)
		int32_t L_25 = V_0;
		int32_t L_26 = __this->get_n_5();
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0007;
		}
	}
	{
		// for (int i = 0; i < n; i++)
		V_1 = 0;
		goto IL_02dc;
	}

IL_00a9:
	{
		// for (int j = i+1; j < n; j++)
		int32_t L_27 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		goto IL_02cc;
	}

IL_00b2:
	{
		// Debug.Log(i+" "+j);
		String_t* L_28;
		L_28 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_29;
		L_29 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		String_t* L_30;
		L_30 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_28, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_30, /*hidden argument*/NULL);
		// if (matrix[i, j] > 0)
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_31 = __this->get_matrix_9();
		int32_t L_32 = V_1;
		int32_t L_33 = V_2;
		int32_t L_34;
		L_34 = (L_31)->GetAtUnchecked(L_32, L_33);
		if ((((int32_t)L_34) <= ((int32_t)0)))
		{
			goto IL_02c8;
		}
	}
	{
		// edge[i, j] = new GameObject(i.ToString()+" "+j.ToString()+" weight:"+ matrix[i,j].ToString()).AddComponent(typeof(LineRenderer)) as LineRenderer;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_35 = __this->get_edge_8();
		int32_t L_36 = V_1;
		int32_t L_37 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_38 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_39 = L_38;
		String_t* L_40;
		L_40 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_40);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41 = L_39;
		ArrayElementTypeCheck (L_41, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_42 = L_41;
		String_t* L_43;
		L_43 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_42, L_43);
		(L_42)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_43);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_44 = L_42;
		ArrayElementTypeCheck (L_44, _stringLiteralDFDBCF2A49BF9DDD9ADCA5B88723861DE76D2DE6);
		(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralDFDBCF2A49BF9DDD9ADCA5B88723861DE76D2DE6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_45 = L_44;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_46 = __this->get_matrix_9();
		int32_t L_47 = V_1;
		int32_t L_48 = V_2;
		int32_t* L_49;
		L_49 = (L_46)->GetAddressAtUnchecked(L_47, L_48);
		String_t* L_50;
		L_50 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_49, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_45, L_50);
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_50);
		String_t* L_51;
		L_51 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_45, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_52, L_51, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_53 = { reinterpret_cast<intptr_t> (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_54;
		L_54 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_53, /*hidden argument*/NULL);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_55;
		L_55 = GameObject_AddComponent_mD183856CB5A1CCF1576221D7D6CEBC4092E734B8(L_52, L_54, /*hidden argument*/NULL);
		(L_35)->SetAtUnchecked(L_36, L_37, ((LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 *)IsInstSealed((RuntimeObject*)L_55, LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_il2cpp_TypeInfo_var)));
		// edge[i, j].GetComponent<LineRenderer>().GetComponent<Renderer>().material.color = Color.white;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_56 = __this->get_edge_8();
		int32_t L_57 = V_1;
		int32_t L_58 = V_2;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_59;
		L_59 = (L_56)->GetAtUnchecked(L_57, L_58);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_60;
		L_60 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_59, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_61;
		L_61 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(L_60, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_62;
		L_62 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_61, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_63;
		L_63 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_62, L_63, /*hidden argument*/NULL);
		// edge[i, j].GetComponent<LineRenderer>().startWidth = .1f;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_64 = __this->get_edge_8();
		int32_t L_65 = V_1;
		int32_t L_66 = V_2;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_67;
		L_67 = (L_64)->GetAtUnchecked(L_65, L_66);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_68;
		L_68 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_67, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		LineRenderer_set_startWidth_mD88B562DD413EE9861FB254963C7EDCB5199C1DF(L_68, (0.100000001f), /*hidden argument*/NULL);
		// edge[i, j].GetComponent<LineRenderer>().endWidth = .1f;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_69 = __this->get_edge_8();
		int32_t L_70 = V_1;
		int32_t L_71 = V_2;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_72;
		L_72 = (L_69)->GetAtUnchecked(L_70, L_71);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_73;
		L_73 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_72, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		LineRenderer_set_endWidth_m3DCD4FFCC3944DD6DC0737C8AF8C7EDB5A6CF59A(L_73, (0.100000001f), /*hidden argument*/NULL);
		// edge[i, j].GetComponent<LineRenderer>().positionCount = 2;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_74 = __this->get_edge_8();
		int32_t L_75 = V_1;
		int32_t L_76 = V_2;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_77;
		L_77 = (L_74)->GetAtUnchecked(L_75, L_76);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_78;
		L_78 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_77, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5(L_78, 2, /*hidden argument*/NULL);
		// edge[i, j].GetComponent<LineRenderer>().useWorldSpace = true;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_79 = __this->get_edge_8();
		int32_t L_80 = V_1;
		int32_t L_81 = V_2;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_82;
		L_82 = (L_79)->GetAtUnchecked(L_80, L_81);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_83;
		L_83 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_82, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		LineRenderer_set_useWorldSpace_m53AA0FE659EFB041647DB6A29826D20D52CBE148(L_83, (bool)1, /*hidden argument*/NULL);
		// edge[i, j].SetPosition(0, new Vector3(vertices[i].o.transform.position.x, vertices[i].o.transform.position.y, 0)); //x,y and z position of the starting point of the line
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_84 = __this->get_edge_8();
		int32_t L_85 = V_1;
		int32_t L_86 = V_2;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_87;
		L_87 = (L_84)->GetAtUnchecked(L_85, L_86);
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_88 = __this->get_vertices_11();
		int32_t L_89 = V_1;
		int32_t L_90 = L_89;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_91 = (L_88)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_90));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_92 = L_91->get_o_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_93;
		L_93 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_92, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_94;
		L_94 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_93, /*hidden argument*/NULL);
		float L_95 = L_94.get_x_0();
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_96 = __this->get_vertices_11();
		int32_t L_97 = V_1;
		int32_t L_98 = L_97;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_99 = (L_96)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_98));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_100 = L_99->get_o_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_101;
		L_101 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_100, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102;
		L_102 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_101, /*hidden argument*/NULL);
		float L_103 = L_102.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_104;
		memset((&L_104), 0, sizeof(L_104));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_104), L_95, L_103, (0.0f), /*hidden argument*/NULL);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_87, 0, L_104, /*hidden argument*/NULL);
		// edge[i, j].SetPosition(1, new Vector3(vertices[j].o.transform.position.x, vertices[j].o.transform.position.y, 0)); //x,y and z position of the starting point of the line
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_105 = __this->get_edge_8();
		int32_t L_106 = V_1;
		int32_t L_107 = V_2;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_108;
		L_108 = (L_105)->GetAtUnchecked(L_106, L_107);
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_109 = __this->get_vertices_11();
		int32_t L_110 = V_2;
		int32_t L_111 = L_110;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_112 = (L_109)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_111));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_113 = L_112->get_o_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_114;
		L_114 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_113, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_115;
		L_115 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_114, /*hidden argument*/NULL);
		float L_116 = L_115.get_x_0();
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_117 = __this->get_vertices_11();
		int32_t L_118 = V_2;
		int32_t L_119 = L_118;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_120 = (L_117)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_119));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_121 = L_120->get_o_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_122;
		L_122 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_121, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_123;
		L_123 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_122, /*hidden argument*/NULL);
		float L_124 = L_123.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_125;
		memset((&L_125), 0, sizeof(L_125));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_125), L_116, L_124, (0.0f), /*hidden argument*/NULL);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_108, 1, L_125, /*hidden argument*/NULL);
		// edge[j, i] = edge[i,j];
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_126 = __this->get_edge_8();
		int32_t L_127 = V_2;
		int32_t L_128 = V_1;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_129 = __this->get_edge_8();
		int32_t L_130 = V_1;
		int32_t L_131 = V_2;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_132;
		L_132 = (L_129)->GetAtUnchecked(L_130, L_131);
		(L_126)->SetAtUnchecked(L_127, L_128, L_132);
		// vertices[i].addNeighbor(vertices[j]);
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_133 = __this->get_vertices_11();
		int32_t L_134 = V_1;
		int32_t L_135 = L_134;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_136 = (L_133)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_135));
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_137 = __this->get_vertices_11();
		int32_t L_138 = V_2;
		int32_t L_139 = L_138;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_140 = (L_137)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_139));
		Vertex_addNeighbor_mA6EB29DDFE0C2CD1010B4EBFED04BA8BC24900DF(L_136, L_140, /*hidden argument*/NULL);
		// vertices[j].addNeighbor(vertices[i]);
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_141 = __this->get_vertices_11();
		int32_t L_142 = V_2;
		int32_t L_143 = L_142;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_144 = (L_141)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_143));
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_145 = __this->get_vertices_11();
		int32_t L_146 = V_1;
		int32_t L_147 = L_146;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_148 = (L_145)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_147));
		Vertex_addNeighbor_mA6EB29DDFE0C2CD1010B4EBFED04BA8BC24900DF(L_144, L_148, /*hidden argument*/NULL);
	}

IL_02c8:
	{
		// for (int j = i+1; j < n; j++)
		int32_t L_149 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_149, (int32_t)1));
	}

IL_02cc:
	{
		// for (int j = i+1; j < n; j++)
		int32_t L_150 = V_2;
		int32_t L_151 = __this->get_n_5();
		if ((((int32_t)L_150) < ((int32_t)L_151)))
		{
			goto IL_00b2;
		}
	}
	{
		// for (int i = 0; i < n; i++)
		int32_t L_152 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_152, (int32_t)1));
	}

IL_02dc:
	{
		// for (int i = 0; i < n; i++)
		int32_t L_153 = V_1;
		int32_t L_154 = __this->get_n_5();
		if ((((int32_t)L_153) < ((int32_t)L_154)))
		{
			goto IL_00a9;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Graph::readQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Graph_readQueue_m6A4DBE5D3D7142ACE001B6DC8D62CB2055E2AC80 (Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CreadQueueU3Ed__17_tE98D5B6097888700C315BAE31B0B699EF4396465_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CreadQueueU3Ed__17_tE98D5B6097888700C315BAE31B0B699EF4396465 * L_0 = (U3CreadQueueU3Ed__17_tE98D5B6097888700C315BAE31B0B699EF4396465 *)il2cpp_codegen_object_new(U3CreadQueueU3Ed__17_tE98D5B6097888700C315BAE31B0B699EF4396465_il2cpp_TypeInfo_var);
		U3CreadQueueU3Ed__17__ctor_mD2AD08F4FD2B11433BEFA12F5A603A809CE54D9B(L_0, 0, /*hidden argument*/NULL);
		U3CreadQueueU3Ed__17_tE98D5B6097888700C315BAE31B0B699EF4396465 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Graph::changeVertexColor(System.Int32,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_changeVertexColor_m9E48A07A9F0089ED18E84ACB8D97CED76CD9F55E (Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * __this, int32_t ___vertex0, int16_t ___colorId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (colorId > 3){
		int16_t L_0 = ___colorId1;
		if ((((int32_t)L_0) <= ((int32_t)3)))
		{
			goto IL_000c;
		}
	}
	{
		// extendVertexColors(vertex, colorId);
		int32_t L_1 = ___vertex0;
		int16_t L_2 = ___colorId1;
		VirtActionInvoker2< int32_t, int16_t >::Invoke(5 /* System.Void Graph::extendVertexColors(System.Int32,System.Int16) */, __this, L_1, L_2);
	}

IL_000c:
	{
		int16_t L_3 = ___colorId1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_0045;
			}
			case 2:
			{
				goto IL_0067;
			}
			case 3:
			{
				goto IL_0089;
			}
		}
	}
	{
		return;
	}

IL_0023:
	{
		// vertices[vertex].o.GetComponent<Renderer>().material.color = Color.white;
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_4 = __this->get_vertices_11();
		int32_t L_5 = ___vertex0;
		int32_t L_6 = L_5;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7->get_o_1();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_9;
		L_9 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_8, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10;
		L_10 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_9, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		L_11 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_10, L_11, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0045:
	{
		// vertices[vertex].o.GetComponent<Renderer>().material.color = Color.blue;
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_12 = __this->get_vertices_11();
		int32_t L_13 = ___vertex0;
		int32_t L_14 = L_13;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = L_15->get_o_1();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_17;
		L_17 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_16, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18;
		L_18 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_17, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_19;
		L_19 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_18, L_19, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0067:
	{
		// vertices[vertex].o.GetComponent<Renderer>().material.color = Color.red;
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_20 = __this->get_vertices_11();
		int32_t L_21 = ___vertex0;
		int32_t L_22 = L_21;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = L_23->get_o_1();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_24, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26;
		L_26 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_25, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_27;
		L_27 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_26, L_27, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0089:
	{
		// vertices[vertex].o.GetComponent<Renderer>().material.color = Color.black;
		VertexU5BU5D_t17B9789C9A3C33F49D367B8060564B4E12EEEADD* L_28 = __this->get_vertices_11();
		int32_t L_29 = ___vertex0;
		int32_t L_30 = L_29;
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = L_31->get_o_1();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_33;
		L_33 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_32, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_34;
		L_34 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_33, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_35;
		L_35 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_34, L_35, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Graph::changeEdgeColor(System.Int32,System.Int32,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_changeEdgeColor_m9AA6C78880D7F96392FB89F4E09CE84DA39F8276 (Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * __this, int32_t ___v10, int32_t ___v21, int16_t ___colorId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int16_t L_0 = ___colorId2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0015;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_0063;
			}
		}
	}
	{
		return;
	}

IL_0015:
	{
		// edge[v1, v2].GetComponent<LineRenderer>().GetComponent<Renderer>().material.color = Color.black;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_1 = __this->get_edge_8();
		int32_t L_2 = ___v10;
		int32_t L_3 = ___v21;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_4;
		L_4 = (L_1)->GetAtUnchecked(L_2, L_3);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_5;
		L_5 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_4, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_6;
		L_6 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(L_5, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7;
		L_7 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_6, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		L_8 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_7, L_8, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_003c:
	{
		// edge[v1, v2].GetComponent<LineRenderer>().GetComponent<Renderer>().material.color = Color.white;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_9 = __this->get_edge_8();
		int32_t L_10 = ___v10;
		int32_t L_11 = ___v21;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_12;
		L_12 = (L_9)->GetAtUnchecked(L_10, L_11);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_13;
		L_13 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_12, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_14;
		L_14 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(L_13, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15;
		L_15 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_14, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16;
		L_16 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_15, L_16, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0063:
	{
		// edge[v1, v2].GetComponent<LineRenderer>().GetComponent<Renderer>().material.color = Color.red;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_17 = __this->get_edge_8();
		int32_t L_18 = ___v10;
		int32_t L_19 = ___v21;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_20;
		L_20 = (L_17)->GetAtUnchecked(L_18, L_19);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_21;
		L_21 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_20, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_22;
		L_22 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(L_21, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_23;
		L_23 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_22, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24;
		L_24 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_23, L_24, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Graph::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph__ctor_m372DF9468A49B59D2A640C41F51C5E4FAA8A3DFA (Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_t66723C58C7422102C36F8570BE048BD0CC489E52_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Queue queue = new Queue();
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_0 = (Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 *)il2cpp_codegen_object_new(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52_il2cpp_TypeInfo_var);
		Queue__ctor_m9844D111CC69802C62565C05109A2557FD21C127(L_0, /*hidden argument*/NULL);
		__this->set_queue_10(L_0);
		Algorithm__ctor_m7350F7A6A79476CF0CB7A8793EE9D3F3C57F60D3(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Graph::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph__cctor_m7B9A1389EB1DFE92E9DC3EF03FA5EEF213E057EA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public Random r = new Random();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_0, /*hidden argument*/NULL);
		((Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_StaticFields*)il2cpp_codegen_static_fields_for(Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1_il2cpp_TypeInfo_var))->set_r_4(L_0);
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
// System.Void HeapSort::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapSort_Awake_m0638DA3B51A65D063C3808BAA9847A77755689B3 (HeapSort_tF3A5CBE7F594426C904275F196AC877E1708E50D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// size = 63;// 70.2 63.8 -114.5
		((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->set_size_5(((int32_t)63));
		// arr = new int[size];
		int32_t L_0 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_0);
		((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->set_arr_6(L_1);
		// array = new ArrayIndex[size];
		int32_t L_2 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_3 = (ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182*)(ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182*)SZArrayNew(ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182_il2cpp_TypeInfo_var, (uint32_t)L_2);
		((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->set_array_4(L_3);
		// setCam();
		SortingAlgorithm_setCam_m21A5B734B44D3D62133D845677FF3E171C078122(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HeapSort::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapSort_Start_m003CFE705622AB3BA03F2B167A9AF9719F43BF07 (HeapSort_tF3A5CBE7F594426C904275F196AC877E1708E50D * __this, const RuntimeMethod* method)
{
	{
		// buildArray();
		SortingAlgorithm_buildArray_mD9825DA2F8C90EF5E0181977F9CCA18D0E0C6528(__this, /*hidden argument*/NULL);
		// startSort();
		HeapSort_startSort_m3CE8354049680375544768CC6505CE9C0E5D2BC5(__this, /*hidden argument*/NULL);
		// StartCoroutine(readQueue(1));
		RuntimeObject* L_0;
		L_0 = SortingAlgorithm_readQueue_mCA727941B71A0BA8C54499AC3F7AF3C6CEDC38A0(__this, 1, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator HeapSort::extendCommands(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HeapSort_extendCommands_mF386122AB8AC1EC7A7915C49B26868EC70253BE8 (HeapSort_tF3A5CBE7F594426C904275F196AC877E1708E50D * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___command0, int32_t ___time1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CextendCommandsU3Ed__2_tB5CB72DF83F7DE624AB1B77724D0CE5FE3FC3FF9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CextendCommandsU3Ed__2_tB5CB72DF83F7DE624AB1B77724D0CE5FE3FC3FF9 * L_0 = (U3CextendCommandsU3Ed__2_tB5CB72DF83F7DE624AB1B77724D0CE5FE3FC3FF9 *)il2cpp_codegen_object_new(U3CextendCommandsU3Ed__2_tB5CB72DF83F7DE624AB1B77724D0CE5FE3FC3FF9_il2cpp_TypeInfo_var);
		U3CextendCommandsU3Ed__2__ctor_m979D5BE56268A055FB6F1FA5F92FEE783C3AFDCF(L_0, 0, /*hidden argument*/NULL);
		U3CextendCommandsU3Ed__2_tB5CB72DF83F7DE624AB1B77724D0CE5FE3FC3FF9 * L_1 = L_0;
		L_1->set_U3CU3E4__this_3(__this);
		U3CextendCommandsU3Ed__2_tB5CB72DF83F7DE624AB1B77724D0CE5FE3FC3FF9 * L_2 = L_1;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3 = ___command0;
		L_2->set_command_2(L_3);
		return L_2;
	}
}
// System.Void HeapSort::startSort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapSort_startSort_m3CE8354049680375544768CC6505CE9C0E5D2BC5 (HeapSort_tF3A5CBE7F594426C904275F196AC877E1708E50D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Heapify();
		HeapSort_Heapify_mCA371FCAF37CBFC00DB1465F7D4438F3F4279406(__this, /*hidden argument*/NULL);
		// for (i = size - 1; i > 0; i--)
		int32_t L_0 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1));
		goto IL_005d;
	}

IL_0010:
	{
		// swap(0, i, 0);
		int32_t L_1 = V_0;
		SortingAlgorithm_swap_mE5F00595342C97A0A4BB4A6376557C5D0F20F22B(__this, 0, L_1, (int16_t)0, /*hidden argument*/NULL);
		// q.Enqueue(new short[] { 12, 0, (short)i, 0 });
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_2 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = L_3;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)((int32_t)12));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = L_4;
		int32_t L_6 = V_0;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)((int16_t)((int16_t)L_6)));
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_2, (RuntimeObject *)(RuntimeObject *)L_5);
		// q.Enqueue(new short[] { 2, (short)i, 2, 0 });
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_7 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_8 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_9 = L_8;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)2);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_10 = L_9;
		int32_t L_11 = V_0;
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_11)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_12 = L_10;
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)2);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_7, (RuntimeObject *)(RuntimeObject *)L_12);
		// Percolate(i);
		int32_t L_13 = V_0;
		HeapSort_Percolate_mA211F15CEC2B71CB8EFB80C218C1C2159866F5D2(__this, L_13, /*hidden argument*/NULL);
		// for (i = size - 1; i > 0; i--)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
	}

IL_005d:
	{
		// for (i = size - 1; i > 0; i--)
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) > ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// q.Enqueue(new short[] { 2, 0, 2, 0 });
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_16 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_17 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_18 = L_17;
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)2);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_19 = L_18;
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)2);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_16, (RuntimeObject *)(RuntimeObject *)L_19);
		// }
		return;
	}
}
// System.Void HeapSort::Heapify()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapSort_Heapify_mCA371FCAF37CBFC00DB1465F7D4438F3F4279406 (HeapSort_tF3A5CBE7F594426C904275F196AC877E1708E50D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// for (i = 1; i < size; i++)
		V_0 = 1;
		goto IL_0062;
	}

IL_0004:
	{
		// child = i;
		int32_t L_0 = V_0;
		V_2 = L_0;
		// parent = (i - 1) / 2;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1))/(int32_t)2));
		goto IL_003f;
	}

IL_000e:
	{
		// swap(child, parent, 0);
		int32_t L_2 = V_2;
		int32_t L_3 = V_1;
		SortingAlgorithm_swap_mE5F00595342C97A0A4BB4A6376557C5D0F20F22B(__this, L_2, L_3, (int16_t)0, /*hidden argument*/NULL);
		// q.Enqueue(new short[] { 12, (short)child, (short)parent, 0 });
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_4 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_6 = L_5;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)((int32_t)12));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_7 = L_6;
		int32_t L_8 = V_2;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_8)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_9 = L_7;
		int32_t L_10 = V_1;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)((int16_t)((int16_t)L_10)));
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_4, (RuntimeObject *)(RuntimeObject *)L_9);
		// child = parent;
		int32_t L_11 = V_1;
		V_2 = L_11;
		// parent = (child - 1) / 2;
		int32_t L_12 = V_2;
		V_1 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1))/(int32_t)2));
	}

IL_003f:
	{
		// while (compare(parent, child, 12, 0) && arr[child] > arr[parent])
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		bool L_15;
		L_15 = SortingAlgorithm_compare_m06B90D91D9671842FF67CA478138597FFB6E7BBD(__this, L_13, L_14, (int16_t)((int32_t)12), (int16_t)0, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_005e;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_17 = V_2;
		int32_t L_18 = L_17;
		int32_t L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_21 = V_1;
		int32_t L_22 = L_21;
		int32_t L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		if ((((int32_t)L_19) > ((int32_t)L_23)))
		{
			goto IL_000e;
		}
	}

IL_005e:
	{
		// for (i = 1; i < size; i++)
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0062:
	{
		// for (i = 1; i < size; i++)
		int32_t L_25 = V_0;
		int32_t L_26 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void HeapSort::Percolate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapSort_Percolate_mA211F15CEC2B71CB8EFB80C218C1C2159866F5D2 (HeapSort_tF3A5CBE7F594426C904275F196AC877E1708E50D * __this, int32_t ___bound0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int left, right, parent = 0;
		V_2 = 0;
		goto IL_0124;
	}

IL_0007:
	{
		// left = parent * 2 + 1;
		int32_t L_0 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)2)), (int32_t)1));
		// right = parent * 2 + 2;
		int32_t L_1 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2)), (int32_t)2));
		// if (right < bound)
		int32_t L_2 = V_1;
		int32_t L_3 = ___bound0;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_00d6;
		}
	}
	{
		// if (compare(right, left, 12 , 0) && arr[right] > arr[left])
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		bool L_6;
		L_6 = SortingAlgorithm_compare_m06B90D91D9671842FF67CA478138597FFB6E7BBD(__this, L_4, L_5, (int16_t)((int32_t)12), (int16_t)0, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		if ((((int32_t)L_10) <= ((int32_t)L_14)))
		{
			goto IL_0089;
		}
	}
	{
		// if (compare(right, parent, 12, 0) && arr[right] > arr[parent])
		int32_t L_15 = V_1;
		int32_t L_16 = V_2;
		bool L_17;
		L_17 = SortingAlgorithm_compare_m06B90D91D9671842FF67CA478138597FFB6E7BBD(__this, L_15, L_16, (int16_t)((int32_t)12), (int16_t)0, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0088;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_19 = V_1;
		int32_t L_20 = L_19;
		int32_t L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_22 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_23 = V_2;
		int32_t L_24 = L_23;
		int32_t L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		if ((((int32_t)L_21) <= ((int32_t)L_25)))
		{
			goto IL_0088;
		}
	}
	{
		// swap(right, parent, 0);
		int32_t L_26 = V_1;
		int32_t L_27 = V_2;
		SortingAlgorithm_swap_mE5F00595342C97A0A4BB4A6376557C5D0F20F22B(__this, L_26, L_27, (int16_t)0, /*hidden argument*/NULL);
		// q.Enqueue(new short[] { 12, (short)parent, (short)right, 0 });
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_28 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_29 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_30 = L_29;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)((int32_t)12));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_31 = L_30;
		int32_t L_32 = V_2;
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_32)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_33 = L_31;
		int32_t L_34 = V_1;
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)((int16_t)((int16_t)L_34)));
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_28, (RuntimeObject *)(RuntimeObject *)L_33);
		// parent = right;
		int32_t L_35 = V_1;
		V_2 = L_35;
		// }
		goto IL_0124;
	}

IL_0088:
	{
		// else return;
		return;
	}

IL_0089:
	{
		// if (compare(parent, left, 12, 0) && arr[left] > arr[parent])
		int32_t L_36 = V_2;
		int32_t L_37 = V_0;
		bool L_38;
		L_38 = SortingAlgorithm_compare_m06B90D91D9671842FF67CA478138597FFB6E7BBD(__this, L_36, L_37, (int16_t)((int32_t)12), (int16_t)0, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_00d5;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_39 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_40 = V_0;
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_43 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_44 = V_2;
		int32_t L_45 = L_44;
		int32_t L_46 = (L_43)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		if ((((int32_t)L_42) <= ((int32_t)L_46)))
		{
			goto IL_00d5;
		}
	}
	{
		// swap(left, parent, 0);
		int32_t L_47 = V_0;
		int32_t L_48 = V_2;
		SortingAlgorithm_swap_mE5F00595342C97A0A4BB4A6376557C5D0F20F22B(__this, L_47, L_48, (int16_t)0, /*hidden argument*/NULL);
		// q.Enqueue(new short[] { 12, (short)parent, (short)left, 0 });
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_49 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_50 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_51 = L_50;
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)((int32_t)12));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_52 = L_51;
		int32_t L_53 = V_2;
		(L_52)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_53)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_54 = L_52;
		int32_t L_55 = V_0;
		(L_54)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)((int16_t)((int16_t)L_55)));
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_49, (RuntimeObject *)(RuntimeObject *)L_54);
		// parent = left;
		int32_t L_56 = V_0;
		V_2 = L_56;
		// }
		goto IL_0124;
	}

IL_00d5:
	{
		// else return;
		return;
	}

IL_00d6:
	{
		// else if (left < bound)
		int32_t L_57 = V_0;
		int32_t L_58 = ___bound0;
		if ((((int32_t)L_57) >= ((int32_t)L_58)))
		{
			goto IL_0123;
		}
	}
	{
		// if (compare(parent, left, 12, 0) && arr[left] > arr[parent])
		int32_t L_59 = V_2;
		int32_t L_60 = V_0;
		bool L_61;
		L_61 = SortingAlgorithm_compare_m06B90D91D9671842FF67CA478138597FFB6E7BBD(__this, L_59, L_60, (int16_t)((int32_t)12), (int16_t)0, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_0122;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_62 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_63 = V_0;
		int32_t L_64 = L_63;
		int32_t L_65 = (L_62)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_64));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_66 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_67 = V_2;
		int32_t L_68 = L_67;
		int32_t L_69 = (L_66)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_68));
		if ((((int32_t)L_65) <= ((int32_t)L_69)))
		{
			goto IL_0122;
		}
	}
	{
		// swap(left, parent, 0);
		int32_t L_70 = V_0;
		int32_t L_71 = V_2;
		SortingAlgorithm_swap_mE5F00595342C97A0A4BB4A6376557C5D0F20F22B(__this, L_70, L_71, (int16_t)0, /*hidden argument*/NULL);
		// q.Enqueue(new short[] { 12, (short)parent, (short)left, 0 });
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_72 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_73 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_74 = L_73;
		(L_74)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)((int32_t)12));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_75 = L_74;
		int32_t L_76 = V_2;
		(L_75)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_76)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_77 = L_75;
		int32_t L_78 = V_0;
		(L_77)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)((int16_t)((int16_t)L_78)));
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_72, (RuntimeObject *)(RuntimeObject *)L_77);
	}

IL_0122:
	{
		// return;
		return;
	}

IL_0123:
	{
		// return;
		return;
	}

IL_0124:
	{
		// while (parent < bound)
		int32_t L_79 = V_2;
		int32_t L_80 = ___bound0;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void HeapSort::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapSort__ctor_m39DEF579F76932A5E73CBF40CE72C92296570001 (HeapSort_tF3A5CBE7F594426C904275F196AC877E1708E50D * __this, const RuntimeMethod* method)
{
	{
		SortingAlgorithm__ctor_mB3212AEE8B1D0D0DCD737C8232675C2B01063717(__this, /*hidden argument*/NULL);
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
// System.Void InsertionSort::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InsertionSort_Awake_mCFB2E42160941CC582D0AE913EC9FADAFF4945FF (InsertionSort_t6C0D3ED6F8FF5CAAA6E4CA02673A9AF43EC3B838 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// size = 256;  // 70.2 63.8 -114.5
		((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->set_size_5(((int32_t)256));
		// arr = new int[size];
		int32_t L_0 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_0);
		((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->set_arr_6(L_1);
		// array = new ArrayIndex[size];
		int32_t L_2 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_3 = (ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182*)(ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182*)SZArrayNew(ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182_il2cpp_TypeInfo_var, (uint32_t)L_2);
		((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->set_array_4(L_3);
		// setCam();
		SortingAlgorithm_setCam_m21A5B734B44D3D62133D845677FF3E171C078122(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InsertionSort::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InsertionSort_Start_mA0B65BE6962FB373821BA46372FBF2C9866F69CF (InsertionSort_t6C0D3ED6F8FF5CAAA6E4CA02673A9AF43EC3B838 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// buildArray();
		SortingAlgorithm_buildArray_mD9825DA2F8C90EF5E0181977F9CCA18D0E0C6528(__this, /*hidden argument*/NULL);
		// for(int i = 1; i < size; i++)
		V_0 = 1;
		goto IL_0049;
	}

IL_000a:
	{
		// for(int j = i-1; j >= 0; j--)
		int32_t L_0 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1));
		goto IL_0041;
	}

IL_0010:
	{
		// if(compare(j, j+1, 4, 0) && arr[j] > arr[j+1])
		int32_t L_1 = V_1;
		int32_t L_2 = V_1;
		bool L_3;
		L_3 = SortingAlgorithm_compare_m06B90D91D9671842FF67CA478138597FFB6E7BBD(__this, L_1, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)), (int16_t)4, (int16_t)0, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		int32_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_7) <= ((int32_t)L_11)))
		{
			goto IL_0045;
		}
	}
	{
		// swap(j + 1, j, 0);
		int32_t L_12 = V_1;
		int32_t L_13 = V_1;
		SortingAlgorithm_swap_mE5F00595342C97A0A4BB4A6376557C5D0F20F22B(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)), L_13, (int16_t)0, /*hidden argument*/NULL);
		// for(int j = i-1; j >= 0; j--)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
	}

IL_0041:
	{
		// for(int j = i-1; j >= 0; j--)
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}

IL_0045:
	{
		// for(int i = 1; i < size; i++)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0049:
	{
		// for(int i = 1; i < size; i++)
		int32_t L_17 = V_0;
		int32_t L_18 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_000a;
		}
	}
	{
		// q.Enqueue(new short[] { 8, 0, 0, 0 });
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_19 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_20 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_21 = L_20;
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)8);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_19, (RuntimeObject *)(RuntimeObject *)L_21);
		// StartCoroutine(readQueue(1));
		RuntimeObject* L_22;
		L_22 = SortingAlgorithm_readQueue_mCA727941B71A0BA8C54499AC3F7AF3C6CEDC38A0(__this, 1, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_23;
		L_23 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator InsertionSort::extendCommands(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InsertionSort_extendCommands_m3E47C71633D889BF938DE08C2F8FDB8E3C37D1B3 (InsertionSort_t6C0D3ED6F8FF5CAAA6E4CA02673A9AF43EC3B838 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___command0, int32_t ___time1, const RuntimeMethod* method)
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InsertionSort_extendCommands_m3E47C71633D889BF938DE08C2F8FDB8E3C37D1B3_RuntimeMethod_var)));
	}
}
// System.Void InsertionSort::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InsertionSort__ctor_m46805AB453FDFB734D721862421B69D364FE2D7B (InsertionSort_t6C0D3ED6F8FF5CAAA6E4CA02673A9AF43EC3B838 * __this, const RuntimeMethod* method)
{
	{
		SortingAlgorithm__ctor_mB3212AEE8B1D0D0DCD737C8232675C2B01063717(__this, /*hidden argument*/NULL);
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
// System.Void LinkedList::insert(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_insert_m5B981251086616A104E0071EB2BFD46BAF509633 (LinkedList_t850219D15AE4341ACE77E391A1D59B17C1BF0250 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m86A50AEF137F420A440A69A037CFF01C17D372CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * V_0 = NULL;
	LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * V_1 = NULL;
	{
		// if (head == null){
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_0 = __this->get_head_4();
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		// head = new LinkedListNode(value);
		int32_t L_1 = ___value0;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_2 = (LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 *)il2cpp_codegen_object_new(LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118_il2cpp_TypeInfo_var);
		LinkedListNode__ctor_m65A62603A95A10CE6A7A6839150023DD1BAF456F(L_2, L_1, /*hidden argument*/NULL);
		__this->set_head_4(L_2);
		// queue.Enqueue(new QueueCommand(3, head, -1));
		Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 * L_3 = __this->get_queue_5();
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_4 = __this->get_head_4();
		QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C * L_5 = (QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C *)il2cpp_codegen_object_new(QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m218A4C5D7CFF5489CFA4BBE5EC5DC5DB4875B49B(L_5, (int16_t)3, L_4, (int16_t)(-1), /*hidden argument*/NULL);
		Queue_1_Enqueue_m86A50AEF137F420A440A69A037CFF01C17D372CE(L_3, L_5, /*hidden argument*/Queue_1_Enqueue_m86A50AEF137F420A440A69A037CFF01C17D372CE_RuntimeMethod_var);
		// return;
		return;
	}

IL_002d:
	{
		// LinkedListNode newNode = new LinkedListNode(value);
		int32_t L_6 = ___value0;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_7 = (LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 *)il2cpp_codegen_object_new(LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118_il2cpp_TypeInfo_var);
		LinkedListNode__ctor_m65A62603A95A10CE6A7A6839150023DD1BAF456F(L_7, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// LinkedListNode temp = head;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_8 = __this->get_head_4();
		V_1 = L_8;
		// if (head.value > value){
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_9 = __this->get_head_4();
		int32_t L_10 = L_9->get_value_0();
		int32_t L_11 = ___value0;
		if ((((int32_t)L_10) <= ((int32_t)L_11)))
		{
			goto IL_00fd;
		}
	}
	{
		// newNode.next = temp;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_12 = V_0;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_13 = V_1;
		L_12->set_next_2(L_13);
		// head = newNode;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_14 = V_0;
		__this->set_head_4(L_14);
		// queue.Enqueue(new QueueCommand(3, head, -1));
		Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 * L_15 = __this->get_queue_5();
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_16 = __this->get_head_4();
		QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C * L_17 = (QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C *)il2cpp_codegen_object_new(QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m218A4C5D7CFF5489CFA4BBE5EC5DC5DB4875B49B(L_17, (int16_t)3, L_16, (int16_t)(-1), /*hidden argument*/NULL);
		Queue_1_Enqueue_m86A50AEF137F420A440A69A037CFF01C17D372CE(L_15, L_17, /*hidden argument*/Queue_1_Enqueue_m86A50AEF137F420A440A69A037CFF01C17D372CE_RuntimeMethod_var);
		// queue.Enqueue(new QueueCommand(2, null, -1));
		Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 * L_18 = __this->get_queue_5();
		QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C * L_19 = (QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C *)il2cpp_codegen_object_new(QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m218A4C5D7CFF5489CFA4BBE5EC5DC5DB4875B49B(L_19, (int16_t)2, (LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 *)NULL, (int16_t)(-1), /*hidden argument*/NULL);
		Queue_1_Enqueue_m86A50AEF137F420A440A69A037CFF01C17D372CE(L_18, L_19, /*hidden argument*/Queue_1_Enqueue_m86A50AEF137F420A440A69A037CFF01C17D372CE_RuntimeMethod_var);
		// queue.Enqueue(new QueueCommand(0, null, -1));
		Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 * L_20 = __this->get_queue_5();
		QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C * L_21 = (QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C *)il2cpp_codegen_object_new(QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m218A4C5D7CFF5489CFA4BBE5EC5DC5DB4875B49B(L_21, (int16_t)0, (LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 *)NULL, (int16_t)(-1), /*hidden argument*/NULL);
		Queue_1_Enqueue_m86A50AEF137F420A440A69A037CFF01C17D372CE(L_20, L_21, /*hidden argument*/Queue_1_Enqueue_m86A50AEF137F420A440A69A037CFF01C17D372CE_RuntimeMethod_var);
		// return;
		return;
	}

IL_0099:
	{
		// if (temp.next.value < value){
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_22 = V_1;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_23 = L_22->get_next_2();
		int32_t L_24 = L_23->get_value_0();
		int32_t L_25 = ___value0;
		if ((((int32_t)L_24) >= ((int32_t)L_25)))
		{
			goto IL_00b0;
		}
	}
	{
		// temp = temp.next;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_26 = V_1;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_27 = L_26->get_next_2();
		V_1 = L_27;
		// }
		goto IL_00fd;
	}

IL_00b0:
	{
		// newNode.next = temp.next;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_28 = V_0;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_29 = V_1;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_30 = L_29->get_next_2();
		L_28->set_next_2(L_30);
		// temp.next = newNode;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_31 = V_1;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_32 = V_0;
		L_31->set_next_2(L_32);
		// queue.Enqueue(new QueueCommand(3, newNode, -1));
		Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 * L_33 = __this->get_queue_5();
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_34 = V_0;
		QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C * L_35 = (QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C *)il2cpp_codegen_object_new(QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m218A4C5D7CFF5489CFA4BBE5EC5DC5DB4875B49B(L_35, (int16_t)3, L_34, (int16_t)(-1), /*hidden argument*/NULL);
		Queue_1_Enqueue_m86A50AEF137F420A440A69A037CFF01C17D372CE(L_33, L_35, /*hidden argument*/Queue_1_Enqueue_m86A50AEF137F420A440A69A037CFF01C17D372CE_RuntimeMethod_var);
		// queue.Enqueue(new QueueCommand(2, null, -1));
		Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 * L_36 = __this->get_queue_5();
		QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C * L_37 = (QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C *)il2cpp_codegen_object_new(QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m218A4C5D7CFF5489CFA4BBE5EC5DC5DB4875B49B(L_37, (int16_t)2, (LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 *)NULL, (int16_t)(-1), /*hidden argument*/NULL);
		Queue_1_Enqueue_m86A50AEF137F420A440A69A037CFF01C17D372CE(L_36, L_37, /*hidden argument*/Queue_1_Enqueue_m86A50AEF137F420A440A69A037CFF01C17D372CE_RuntimeMethod_var);
		// queue.Enqueue(new QueueCommand(0, null, -1));
		Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 * L_38 = __this->get_queue_5();
		QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C * L_39 = (QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C *)il2cpp_codegen_object_new(QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m218A4C5D7CFF5489CFA4BBE5EC5DC5DB4875B49B(L_39, (int16_t)0, (LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 *)NULL, (int16_t)(-1), /*hidden argument*/NULL);
		Queue_1_Enqueue_m86A50AEF137F420A440A69A037CFF01C17D372CE(L_38, L_39, /*hidden argument*/Queue_1_Enqueue_m86A50AEF137F420A440A69A037CFF01C17D372CE_RuntimeMethod_var);
		// return;
		return;
	}

IL_00fd:
	{
		// while(temp.next != null){
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_40 = V_1;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_41 = L_40->get_next_2();
		if (L_41)
		{
			goto IL_0099;
		}
	}
	{
		// temp.next = newNode;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_42 = V_1;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_43 = V_0;
		L_42->set_next_2(L_43);
		// queue.Enqueue(new QueueCommand(3, newNode, -1));
		Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 * L_44 = __this->get_queue_5();
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_45 = V_0;
		QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C * L_46 = (QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C *)il2cpp_codegen_object_new(QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m218A4C5D7CFF5489CFA4BBE5EC5DC5DB4875B49B(L_46, (int16_t)3, L_45, (int16_t)(-1), /*hidden argument*/NULL);
		Queue_1_Enqueue_m86A50AEF137F420A440A69A037CFF01C17D372CE(L_44, L_46, /*hidden argument*/Queue_1_Enqueue_m86A50AEF137F420A440A69A037CFF01C17D372CE_RuntimeMethod_var);
		// queue.Enqueue(new QueueCommand(2, null, -1));
		Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 * L_47 = __this->get_queue_5();
		QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C * L_48 = (QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C *)il2cpp_codegen_object_new(QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m218A4C5D7CFF5489CFA4BBE5EC5DC5DB4875B49B(L_48, (int16_t)2, (LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 *)NULL, (int16_t)(-1), /*hidden argument*/NULL);
		Queue_1_Enqueue_m86A50AEF137F420A440A69A037CFF01C17D372CE(L_47, L_48, /*hidden argument*/Queue_1_Enqueue_m86A50AEF137F420A440A69A037CFF01C17D372CE_RuntimeMethod_var);
		// queue.Enqueue(new QueueCommand(0, null, -1));
		Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 * L_49 = __this->get_queue_5();
		QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C * L_50 = (QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C *)il2cpp_codegen_object_new(QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m218A4C5D7CFF5489CFA4BBE5EC5DC5DB4875B49B(L_50, (int16_t)0, (LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 *)NULL, (int16_t)(-1), /*hidden argument*/NULL);
		Queue_1_Enqueue_m86A50AEF137F420A440A69A037CFF01C17D372CE(L_49, L_50, /*hidden argument*/Queue_1_Enqueue_m86A50AEF137F420A440A69A037CFF01C17D372CE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void LinkedList::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_Start_mFBC4EC7182D8A2EC16E34E3BC41CBA4B0EF8C7B1 (LinkedList_t850219D15AE4341ACE77E391A1D59B17C1BF0250 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Random r = new Random();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// for(int i = 0; i < 5; i++){
		V_1 = 0;
		goto IL_001d;
	}

IL_000a:
	{
		// insert(r.Next(1, 21));
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_1 = V_0;
		int32_t L_2;
		L_2 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_1, 1, ((int32_t)21));
		LinkedList_insert_m5B981251086616A104E0071EB2BFD46BAF509633(__this, L_2, /*hidden argument*/NULL);
		// for(int i = 0; i < 5; i++){
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_001d:
	{
		// for(int i = 0; i < 5; i++){
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) < ((int32_t)5)))
		{
			goto IL_000a;
		}
	}
	{
		// traverse();
		LinkedList_traverse_mC2C522D43172F8259DB45E5F0EA0C2D50613D803(__this, /*hidden argument*/NULL);
		// StartCoroutine(readQueue());
		RuntimeObject* L_5;
		L_5 = LinkedList_readQueue_mA6CE31792BD3C76257A6A9D0C828F0B04805C606(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_6;
		L_6 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LinkedList::traverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_traverse_mC2C522D43172F8259DB45E5F0EA0C2D50613D803 (LinkedList_t850219D15AE4341ACE77E391A1D59B17C1BF0250 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * V_0 = NULL;
	{
		// LinkedListNode temp = head;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_0 = __this->get_head_4();
		V_0 = L_0;
		goto IL_0020;
	}

IL_0009:
	{
		// Debug.Log(temp.value);
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_1 = V_0;
		int32_t L_2 = L_1->get_value_0();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// temp = temp.next;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_5 = V_0;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_6 = L_5->get_next_2();
		V_0 = L_6;
	}

IL_0020:
	{
		// while(temp != null){
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_7 = V_0;
		if (L_7)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LinkedList::reposition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_reposition_mCC19617138A3B2A2776EAF4633EDA1C8C36F218C (LinkedList_t850219D15AE4341ACE77E391A1D59B17C1BF0250 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * V_0 = NULL;
	LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// LinkedListNode temp1 = head; // traverses the list
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_0 = __this->get_head_4();
		V_0 = L_0;
		// int i = 0;
		V_2 = 0;
		goto IL_0012;
	}

IL_000b:
	{
		// temp1 = temp1.next;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_1 = V_0;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_2 = L_1->get_next_2();
		V_0 = L_2;
	}

IL_0012:
	{
		// while (temp1 != null && temp1.Object == null){
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_4 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_Object_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_000b;
		}
	}

IL_0023:
	{
		// temp1.Object.transform.position = new Vector3(2*i++, 0, 0);
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_7 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7->get_Object_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_11)))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_12, /*hidden argument*/NULL);
		// temp2 = temp1;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_13 = V_0;
		V_1 = L_13;
		// temp1 = temp1.next;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_14 = V_0;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_15 = L_14->get_next_2();
		V_0 = L_15;
		goto IL_0119;
	}

IL_0058:
	{
		// if (temp1.Object != null){
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_16 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = L_16->get_Object_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0112;
		}
	}
	{
		// temp1.Object.transform.position = new Vector3(2*i++, 0, 0);
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_19 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = L_19->get_Object_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		int32_t L_22 = V_2;
		int32_t L_23 = L_22;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_24), ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_23)))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_21, L_24, /*hidden argument*/NULL);
		// temp2.nextEdge.SetPosition(0, new Vector3(temp2.Object.transform.position.x, temp2.Object.transform.position.y, 0));
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_25 = V_1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_26 = L_25->get_nextEdge_3();
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_27 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = L_27->get_Object_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_x_0();
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_32 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = L_32->get_Object_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_33, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_37), L_31, L_36, (0.0f), /*hidden argument*/NULL);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_26, 0, L_37, /*hidden argument*/NULL);
		// temp2.nextEdge.SetPosition(0, new Vector3(temp1.Object.transform.position.x, temp1.Object.transform.position.y, 0)); //x,y and z position of the starting point of the line
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_38 = V_1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_39 = L_38->get_nextEdge_3();
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_40 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = L_40->get_Object_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_41, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_42, /*hidden argument*/NULL);
		float L_44 = L_43.get_x_0();
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_45 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = L_45->get_Object_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_46, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_47, /*hidden argument*/NULL);
		float L_49 = L_48.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_50), L_44, L_49, (0.0f), /*hidden argument*/NULL);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_39, 0, L_50, /*hidden argument*/NULL);
		// temp2 = temp1;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_51 = V_0;
		V_1 = L_51;
	}

IL_0112:
	{
		// temp1 = temp1.next;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_52 = V_0;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_53 = L_52->get_next_2();
		V_0 = L_53;
	}

IL_0119:
	{
		// while(temp1 != null){
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_54 = V_0;
		if (L_54)
		{
			goto IL_0058;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator LinkedList::readQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LinkedList_readQueue_mA6CE31792BD3C76257A6A9D0C828F0B04805C606 (LinkedList_t850219D15AE4341ACE77E391A1D59B17C1BF0250 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CreadQueueU3Ed__8_t2A5B5A6D9CA49898AF9467883EB6F38AA0303EB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CreadQueueU3Ed__8_t2A5B5A6D9CA49898AF9467883EB6F38AA0303EB7 * L_0 = (U3CreadQueueU3Ed__8_t2A5B5A6D9CA49898AF9467883EB6F38AA0303EB7 *)il2cpp_codegen_object_new(U3CreadQueueU3Ed__8_t2A5B5A6D9CA49898AF9467883EB6F38AA0303EB7_il2cpp_TypeInfo_var);
		U3CreadQueueU3Ed__8__ctor_mF110FA9A46BB4354E2BE772A58141E85B6F837E9(L_0, 0, /*hidden argument*/NULL);
		U3CreadQueueU3Ed__8_t2A5B5A6D9CA49898AF9467883EB6F38AA0303EB7 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void LinkedList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList__ctor_m629B97702666CBCEE1B0F07030F9ABF720107C51 (LinkedList_t850219D15AE4341ACE77E391A1D59B17C1BF0250 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m8E6554BB8D2559E8DE985782B37CE13F42972230_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Queue<QueueCommand> queue = new Queue<QueueCommand>();
		Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 * L_0 = (Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 *)il2cpp_codegen_object_new(Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48_il2cpp_TypeInfo_var);
		Queue_1__ctor_m8E6554BB8D2559E8DE985782B37CE13F42972230(L_0, /*hidden argument*/Queue_1__ctor_m8E6554BB8D2559E8DE985782B37CE13F42972230_RuntimeMethod_var);
		__this->set_queue_5(L_0);
		Algorithm__ctor_m7350F7A6A79476CF0CB7A8793EE9D3F3C57F60D3(__this, /*hidden argument*/NULL);
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
// System.Void MergeSort::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergeSort_Awake_m1E4E2A033E9DB21593E220CF0B57ABFF20EC33F8 (MergeSort_t81ECEB36AD12DAE023E752167722586F7A96C805 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// size = 128;
		((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->set_size_5(((int32_t)128));
		// arr = new int[size];
		int32_t L_0 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_0);
		((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->set_arr_6(L_1);
		// auxArr = new int[size];
		int32_t L_2 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_2);
		((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->set_auxArr_9(L_3);
		// array = new ArrayIndex[size];
		int32_t L_4 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_5 = (ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182*)(ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182*)SZArrayNew(ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182_il2cpp_TypeInfo_var, (uint32_t)L_4);
		((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->set_array_4(L_5);
		// auxArray = new ArrayIndex[size];
		int32_t L_6 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_7 = (ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182*)(ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182*)SZArrayNew(ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182_il2cpp_TypeInfo_var, (uint32_t)L_6);
		((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->set_auxArray_8(L_7);
		// setAuxCam();
		SortingAlgorithmWithAuxArray_setAuxCam_mDF13CCF3E2D7E91566B3ACFFE1912C7C225FAFFE(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MergeSort::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergeSort_Start_m6B975CD93BE6EB9225FC92E4C09AE527D09F3E21 (MergeSort_t81ECEB36AD12DAE023E752167722586F7A96C805 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buildArray();
		SortingAlgorithm_buildArray_mD9825DA2F8C90EF5E0181977F9CCA18D0E0C6528(__this, /*hidden argument*/NULL);
		// buildAuxArray();
		SortingAlgorithmWithAuxArray_buildAuxArray_m7AC5881D29AE865495BA96B9E7D512FE8751D6FD(__this, /*hidden argument*/NULL);
		// midSplit = (size - 2)/ 2 + 1;
		int32_t L_0 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		__this->set_midSplit_11(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)2))/(int32_t)2)), (int32_t)1)));
		// mergeSort(0, size - 1);
		int32_t L_1 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		MergeSort_mergeSort_m33D0430950EAB76F4BE8630DD3607421EBEFFE24(__this, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		// q.Enqueue(new short[] {8, 0, 0, 0});
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_2 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = L_3;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)8);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_2, (RuntimeObject *)(RuntimeObject *)L_4);
		// StartCoroutine(readQueue(1));
		RuntimeObject* L_5;
		L_5 = SortingAlgorithm_readQueue_mCA727941B71A0BA8C54499AC3F7AF3C6CEDC38A0(__this, 1, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_6;
		L_6 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MergeSort::merge(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergeSort_merge_m50789329EBD588E0C19D66B78332E6A0D6CFEBBA (MergeSort_t81ECEB36AD12DAE023E752167722586F7A96C805 * __this, int32_t ___low0, int32_t ___middle1, int32_t ___high2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____157770F5D7F4BBE34AF324E9A255013A42217705ACB7E0F7AA05E771D4B531B8_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// int n1 = middle - low + 1;
		int32_t L_0 = ___middle1;
		int32_t L_1 = ___low0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), (int32_t)1));
		// int n2 = high - middle;
		int32_t L_2 = ___high2;
		int32_t L_3 = ___middle1;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		// for (i = 0; i < n1; i++)
		V_0 = 0;
		goto IL_004b;
	}

IL_000f:
	{
		// auxArr[i] = arr[low+i];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->get_auxArr_9();
		int32_t L_5 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_7 = ___low0;
		int32_t L_8 = V_0;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8));
		int32_t L_10 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (int32_t)L_10);
		// q.Enqueue(new short[] {10, (short)i, (short)(low + i), 1});
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_11 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_12 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_13 = L_12;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)((int32_t)10));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_14 = L_13;
		int32_t L_15 = V_0;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_15)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_16 = L_14;
		int32_t L_17 = ___low0;
		int32_t L_18 = V_0;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18)))));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_19 = L_16;
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (int16_t)1);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_11, (RuntimeObject *)(RuntimeObject *)L_19);
		// for (i = 0; i < n1; i++)
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_004b:
	{
		// for (i = 0; i < n1; i++)
		int32_t L_21 = V_0;
		int32_t L_22 = V_3;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_000f;
		}
	}
	{
		// for (j = 0; j < n2; j++)
		V_1 = 0;
		goto IL_00a1;
	}

IL_0053:
	{
		// auxArr[j + midSplit] = arr[middle + 1 + j];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = ((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->get_auxArr_9();
		int32_t L_24 = V_1;
		int32_t L_25 = __this->get_midSplit_11();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_27 = ___middle1;
		int32_t L_28 = V_1;
		int32_t L_29 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)), (int32_t)L_28));
		int32_t L_30 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_25))), (int32_t)L_30);
		// q.Enqueue(new short[] {10, (short)(j+midSplit), (short)(middle+1+j), 1});
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_31 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_32 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_33 = L_32;
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)((int32_t)10));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_34 = L_33;
		int32_t L_35 = V_1;
		int32_t L_36 = __this->get_midSplit_11();
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)L_36)))));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_37 = L_34;
		int32_t L_38 = ___middle1;
		int32_t L_39 = V_1;
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1)), (int32_t)L_39)))));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_40 = L_37;
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (int16_t)1);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_31, (RuntimeObject *)(RuntimeObject *)L_40);
		// for (j = 0; j < n2; j++)
		int32_t L_41 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_00a1:
	{
		// for (j = 0; j < n2; j++)
		int32_t L_42 = V_1;
		int32_t L_43 = V_4;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_0053;
		}
	}
	{
		// i = 0;
		V_0 = 0;
		// j = midSplit;
		int32_t L_44 = __this->get_midSplit_11();
		V_1 = L_44;
		// k = low;
		int32_t L_45 = ___low0;
		V_2 = L_45;
		goto IL_0184;
	}

IL_00b6:
	{
		// if (compare(i, j, 4, 1) && auxArr[i] <= auxArr[j])
		int32_t L_46 = V_0;
		int32_t L_47 = V_1;
		bool L_48;
		L_48 = SortingAlgorithm_compare_m06B90D91D9671842FF67CA478138597FFB6E7BBD(__this, L_46, L_47, (int16_t)4, (int16_t)1, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_012b;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_49 = ((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->get_auxArr_9();
		int32_t L_50 = V_0;
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_53 = ((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->get_auxArr_9();
		int32_t L_54 = V_1;
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		if ((((int32_t)L_52) > ((int32_t)L_56)))
		{
			goto IL_012b;
		}
	}
	{
		// arr[k] = auxArr[i];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_57 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_58 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_59 = ((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->get_auxArr_9();
		int32_t L_60 = V_0;
		int32_t L_61 = L_60;
		int32_t L_62 = (L_59)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61));
		(L_57)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58), (int32_t)L_62);
		// q.Enqueue(new short[] {10, (short)k, (short)i, 0});
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_63 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_64 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_65 = L_64;
		(L_65)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)((int32_t)10));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_66 = L_65;
		int32_t L_67 = V_2;
		(L_66)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_67)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_68 = L_66;
		int32_t L_69 = V_0;
		(L_68)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)((int16_t)((int16_t)L_69)));
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_63, (RuntimeObject *)(RuntimeObject *)L_68);
		// q.Enqueue(new short[] {2, (short)i, 4, 1});
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_70 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_71 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_72 = L_71;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_73 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____157770F5D7F4BBE34AF324E9A255013A42217705ACB7E0F7AA05E771D4B531B8_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_72, L_73, /*hidden argument*/NULL);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_74 = L_72;
		int32_t L_75 = V_0;
		(L_74)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_75)));
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_70, (RuntimeObject *)(RuntimeObject *)L_74);
		// i++;
		int32_t L_76 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
		// }
		goto IL_0180;
	}

IL_012b:
	{
		// arr[k] = auxArr[j];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_77 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_78 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_79 = ((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->get_auxArr_9();
		int32_t L_80 = V_1;
		int32_t L_81 = L_80;
		int32_t L_82 = (L_79)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_81));
		(L_77)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_78), (int32_t)L_82);
		// q.Enqueue(new short[] {10, (short)k, (short)j, 0});
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_83 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_84 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_85 = L_84;
		(L_85)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)((int32_t)10));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_86 = L_85;
		int32_t L_87 = V_2;
		(L_86)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_87)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_88 = L_86;
		int32_t L_89 = V_1;
		(L_88)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)((int16_t)((int16_t)L_89)));
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_83, (RuntimeObject *)(RuntimeObject *)L_88);
		// q.Enqueue(new short[] {2, (short)j, 4, 1});
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_90 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_91 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_92 = L_91;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_93 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____157770F5D7F4BBE34AF324E9A255013A42217705ACB7E0F7AA05E771D4B531B8_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_92, L_93, /*hidden argument*/NULL);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_94 = L_92;
		int32_t L_95 = V_1;
		(L_94)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_95)));
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_90, (RuntimeObject *)(RuntimeObject *)L_94);
		// j++;
		int32_t L_96 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1));
	}

IL_0180:
	{
		// k++;
		int32_t L_97 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_0184:
	{
		// while (i < n1 && j < midSplit + n2)
		int32_t L_98 = V_0;
		int32_t L_99 = V_3;
		if ((((int32_t)L_98) >= ((int32_t)L_99)))
		{
			goto IL_01f2;
		}
	}
	{
		int32_t L_100 = V_1;
		int32_t L_101 = __this->get_midSplit_11();
		int32_t L_102 = V_4;
		if ((((int32_t)L_100) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)L_102)))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_01f2;
	}

IL_0199:
	{
		// arr[k] = auxArr[i];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_103 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_104 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_105 = ((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->get_auxArr_9();
		int32_t L_106 = V_0;
		int32_t L_107 = L_106;
		int32_t L_108 = (L_105)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_107));
		(L_103)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_104), (int32_t)L_108);
		// q.Enqueue(new short[] {10, (short)k, (short)i, 0});
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_109 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_110 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_111 = L_110;
		(L_111)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)((int32_t)10));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_112 = L_111;
		int32_t L_113 = V_2;
		(L_112)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_113)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_114 = L_112;
		int32_t L_115 = V_0;
		(L_114)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)((int16_t)((int16_t)L_115)));
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_109, (RuntimeObject *)(RuntimeObject *)L_114);
		// q.Enqueue(new short[] {2, (short)i, 4, 1});
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_116 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_117 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_118 = L_117;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_119 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____157770F5D7F4BBE34AF324E9A255013A42217705ACB7E0F7AA05E771D4B531B8_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_118, L_119, /*hidden argument*/NULL);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_120 = L_118;
		int32_t L_121 = V_0;
		(L_120)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_121)));
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_116, (RuntimeObject *)(RuntimeObject *)L_120);
		// i++;
		int32_t L_122 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)1));
		// k++;
		int32_t L_123 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_123, (int32_t)1));
	}

IL_01f2:
	{
		// while (i < n1)
		int32_t L_124 = V_0;
		int32_t L_125 = V_3;
		if ((((int32_t)L_124) < ((int32_t)L_125)))
		{
			goto IL_0199;
		}
	}
	{
		goto IL_0251;
	}

IL_01f8:
	{
		// arr[k] = auxArr[j];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_126 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_127 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_128 = ((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->get_auxArr_9();
		int32_t L_129 = V_1;
		int32_t L_130 = L_129;
		int32_t L_131 = (L_128)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_130));
		(L_126)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_127), (int32_t)L_131);
		// q.Enqueue(new short[] {10, (short)k, (short)j, 0});
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_132 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_133 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_134 = L_133;
		(L_134)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)((int32_t)10));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_135 = L_134;
		int32_t L_136 = V_2;
		(L_135)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_136)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_137 = L_135;
		int32_t L_138 = V_1;
		(L_137)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)((int16_t)((int16_t)L_138)));
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_132, (RuntimeObject *)(RuntimeObject *)L_137);
		// q.Enqueue(new short[] {2, (short)j, 4, 1});
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_139 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_140 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_141 = L_140;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_142 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____157770F5D7F4BBE34AF324E9A255013A42217705ACB7E0F7AA05E771D4B531B8_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_141, L_142, /*hidden argument*/NULL);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_143 = L_141;
		int32_t L_144 = V_1;
		(L_143)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_144)));
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_139, (RuntimeObject *)(RuntimeObject *)L_143);
		// j++;
		int32_t L_145 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_145, (int32_t)1));
		// k++;
		int32_t L_146 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_146, (int32_t)1));
	}

IL_0251:
	{
		// while (j < n2+ midSplit)
		int32_t L_147 = V_1;
		int32_t L_148 = V_4;
		int32_t L_149 = __this->get_midSplit_11();
		if ((((int32_t)L_147) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_148, (int32_t)L_149)))))
		{
			goto IL_01f8;
		}
	}
	{
		// q.Enqueue(new short[]{9, 0, 0, 0});
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_150 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_151 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_152 = L_151;
		(L_152)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)((int32_t)9));
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_150, (RuntimeObject *)(RuntimeObject *)L_152);
		// }
		return;
	}
}
// System.Void MergeSort::mergeSort(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergeSort_mergeSort_m33D0430950EAB76F4BE8630DD3607421EBEFFE24 (MergeSort_t81ECEB36AD12DAE023E752167722586F7A96C805 * __this, int32_t ___low0, int32_t ___high1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (low < high)
		int32_t L_0 = ___low0;
		int32_t L_1 = ___high1;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0065;
		}
	}
	{
		// int med = (low + high - 1) / 2;
		int32_t L_2 = ___low0;
		int32_t L_3 = ___high1;
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), (int32_t)1))/(int32_t)2));
		// mergeSort(low, med);
		int32_t L_4 = ___low0;
		int32_t L_5 = V_0;
		MergeSort_mergeSort_m33D0430950EAB76F4BE8630DD3607421EBEFFE24(__this, L_4, L_5, /*hidden argument*/NULL);
		// mergeSort(med + 1, high);
		int32_t L_6 = V_0;
		int32_t L_7 = ___high1;
		MergeSort_mergeSort_m33D0430950EAB76F4BE8630DD3607421EBEFFE24(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)), L_7, /*hidden argument*/NULL);
		// q.Enqueue(new short[] { 6, (short)low, (short)high , 0});
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_8 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_9 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_10 = L_9;
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)6);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_11 = L_10;
		int32_t L_12 = ___low0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_12)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_13 = L_11;
		int32_t L_14 = ___high1;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)((int16_t)((int16_t)L_14)));
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_8, (RuntimeObject *)(RuntimeObject *)L_13);
		// merge(low, med, high);
		int32_t L_15 = ___low0;
		int32_t L_16 = V_0;
		int32_t L_17 = ___high1;
		MergeSort_merge_m50789329EBD588E0C19D66B78332E6A0D6CFEBBA(__this, L_15, L_16, L_17, /*hidden argument*/NULL);
		// q.Enqueue(new short[] { 7, (short)low, (short)high,0 });
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_18 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_19 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_20 = L_19;
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)7);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_21 = L_20;
		int32_t L_22 = ___low0;
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_22)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_23 = L_21;
		int32_t L_24 = ___high1;
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)((int16_t)((int16_t)L_24)));
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_18, (RuntimeObject *)(RuntimeObject *)L_23);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void MergeSort::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergeSort__ctor_m3ADA36F6720B810D743A8279C4D0538D26C3ED7C (MergeSort_t81ECEB36AD12DAE023E752167722586F7A96C805 * __this, const RuntimeMethod* method)
{
	{
		SortingAlgorithmWithAuxArray__ctor_m62FA505A4F1EECCAFA769B4BD3DD1A56A2C24C2B(__this, /*hidden argument*/NULL);
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
// System.Void NQueens::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NQueens_Start_mBA5A77269686DD5E67FE7DFC39EC9363EAA7484B (NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// n = 6;
		__this->set_n_4(6);
		// board = new GameObject[n,n];
		int32_t L_0 = __this->get_n_4();
		int32_t L_1 = __this->get_n_4();
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_2 = (GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9*)GenArrayNew(GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9_il2cpp_TypeInfo_var, L_3);
		__this->set_board_7(L_2);
		// internalBoard = new int[n,n];
		int32_t L_4 = __this->get_n_4();
		int32_t L_5 = __this->get_n_4();
		il2cpp_array_size_t L_7[] = { (il2cpp_array_size_t)L_4, (il2cpp_array_size_t)L_5 };
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_6 = (Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17*)GenArrayNew(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var, L_7);
		__this->set_internalBoard_6(L_6);
		// solution = false;
		__this->set_solution_5((bool)0);
		// for(i = 0; i < n; i++){
		V_0 = 0;
		goto IL_00d1;
	}

IL_0043:
	{
		// for(j = 0; j < n; j++){
		V_1 = 0;
		goto IL_00c1;
	}

IL_0047:
	{
		// board[i,j] = GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_8 = __this->get_board_7();
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC(3, /*hidden argument*/NULL);
		(L_8)->SetAtUnchecked(L_9, L_10, L_11);
		// if ((i + j) % 2 == 1){
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		if ((!(((uint32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13))%(int32_t)2))) == ((uint32_t)1))))
		{
			goto IL_0091;
		}
	}
	{
		// board[i,j].GetComponent<Renderer>().material.color = Color.gray;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_14 = __this->get_board_7();
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = (L_14)->GetAtUnchecked(L_15, L_16);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_18;
		L_18 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_17, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19;
		L_19 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_18, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20;
		L_20 = Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_19, L_20, /*hidden argument*/NULL);
		// internalBoard[i,j] = 0;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_21 = __this->get_internalBoard_6();
		int32_t L_22 = V_0;
		int32_t L_23 = V_1;
		(L_21)->SetAtUnchecked(L_22, L_23, 0);
	}

IL_0091:
	{
		// board[i,j].transform.position = new Vector3(i, n-j, 0);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_24 = __this->get_board_7();
		int32_t L_25 = V_0;
		int32_t L_26 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = (L_24)->GetAtUnchecked(L_25, L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_27, /*hidden argument*/NULL);
		int32_t L_29 = V_0;
		int32_t L_30 = __this->get_n_4();
		int32_t L_31 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_32), ((float)((float)L_29)), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_31)))), (0.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_28, L_32, /*hidden argument*/NULL);
		// for(j = 0; j < n; j++){
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00c1:
	{
		// for(j = 0; j < n; j++){
		int32_t L_34 = V_1;
		int32_t L_35 = __this->get_n_4();
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0047;
		}
	}
	{
		// for(i = 0; i < n; i++){
		int32_t L_36 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00d1:
	{
		// for(i = 0; i < n; i++){
		int32_t L_37 = V_0;
		int32_t L_38 = __this->get_n_4();
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0043;
		}
	}
	{
		// setCam();
		NQueens_setCam_mDFC6C0DEDC7B3FE73B37113296469071D64615D9(__this, /*hidden argument*/NULL);
		// StartCoroutine(build(n, 0));
		int32_t L_39 = __this->get_n_4();
		RuntimeObject* L_40;
		L_40 = NQueens_build_m5B54E0D1D1A6BC742DA5FEA8E33446BBF17738F2(__this, L_39, 0, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_41;
		L_41 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_40, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NQueens::setCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NQueens_setCam_mDFC6C0DEDC7B3FE73B37113296469071D64615D9 (NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * __this, const RuntimeMethod* method)
{
	{
		// Camera.main.transform.position = new Vector3(n/2, n/2, n*-1 - 1);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_n_4();
		int32_t L_3 = __this->get_n_4();
		int32_t L_4 = __this->get_n_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), ((float)((float)((int32_t)((int32_t)L_2/(int32_t)2)))), ((float)((float)((int32_t)((int32_t)L_3/(int32_t)2)))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)(-1))), (int32_t)1)))), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator NQueens::build(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NQueens_build_m5B54E0D1D1A6BC742DA5FEA8E33446BBF17738F2 (NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * __this, int32_t ___size0, int32_t ___column1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CbuildU3Ed__6_tCD71554657B65283EDF5B911E3CE57A1421F29F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CbuildU3Ed__6_tCD71554657B65283EDF5B911E3CE57A1421F29F1 * L_0 = (U3CbuildU3Ed__6_tCD71554657B65283EDF5B911E3CE57A1421F29F1 *)il2cpp_codegen_object_new(U3CbuildU3Ed__6_tCD71554657B65283EDF5B911E3CE57A1421F29F1_il2cpp_TypeInfo_var);
		U3CbuildU3Ed__6__ctor_m1B66A993BACF0B326ABFF0A1F59E51834678AC86(L_0, 0, /*hidden argument*/NULL);
		U3CbuildU3Ed__6_tCD71554657B65283EDF5B911E3CE57A1421F29F1 * L_1 = L_0;
		L_1->set_U3CU3E4__this_4(__this);
		U3CbuildU3Ed__6_tCD71554657B65283EDF5B911E3CE57A1421F29F1 * L_2 = L_1;
		int32_t L_3 = ___size0;
		L_2->set_size_3(L_3);
		U3CbuildU3Ed__6_tCD71554657B65283EDF5B911E3CE57A1421F29F1 * L_4 = L_2;
		int32_t L_5 = ___column1;
		L_4->set_column_2(L_5);
		return L_4;
	}
}
// System.Void NQueens::setColor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NQueens_setColor_m2D364849876F1DE2EC26982763ECC6A644413892 (NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * __this, int32_t ___i0, int32_t ___j1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (internalBoard[i,j] > 0){
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_0 = __this->get_internalBoard_6();
		int32_t L_1 = ___i0;
		int32_t L_2 = ___j1;
		int32_t L_3;
		L_3 = (L_0)->GetAtUnchecked(L_1, L_2);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_006b;
		}
	}
	{
		// if((i + j) % 2 == 1 ){
		int32_t L_4 = ___i0;
		int32_t L_5 = ___j1;
		if ((!(((uint32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5))%(int32_t)2))) == ((uint32_t)1))))
		{
			goto IL_0049;
		}
	}
	{
		// board[i,j].GetComponent<Renderer>().material.color = new Color(.67f,0,0);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_6 = __this->get_board_7();
		int32_t L_7 = ___i0;
		int32_t L_8 = ___j1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = (L_6)->GetAtUnchecked(L_7, L_8);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_10;
		L_10 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_9, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11;
		L_11 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_10, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_12), (0.670000017f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_11, L_12, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0049:
	{
		// board[i,j].GetComponent<Renderer>().material.color = Color.red;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_13 = __this->get_board_7();
		int32_t L_14 = ___i0;
		int32_t L_15 = ___j1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = (L_13)->GetAtUnchecked(L_14, L_15);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_17;
		L_17 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_16, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18;
		L_18 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_17, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_19;
		L_19 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_18, L_19, /*hidden argument*/NULL);
		// }
		return;
	}

IL_006b:
	{
		// if ((i+j) % 2 == 1){
		int32_t L_20 = ___i0;
		int32_t L_21 = ___j1;
		if ((!(((uint32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21))%(int32_t)2))) == ((uint32_t)1))))
		{
			goto IL_0095;
		}
	}
	{
		// board[i,j].GetComponent<Renderer>().material.color = Color.gray;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_22 = __this->get_board_7();
		int32_t L_23 = ___i0;
		int32_t L_24 = ___j1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = (L_22)->GetAtUnchecked(L_23, L_24);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_26;
		L_26 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_25, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27;
		L_27 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_26, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28;
		L_28 = Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_27, L_28, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0095:
	{
		// board[i,j].GetComponent<Renderer>().material.color = Color.white;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_29 = __this->get_board_7();
		int32_t L_30 = ___i0;
		int32_t L_31 = ___j1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = (L_29)->GetAtUnchecked(L_30, L_31);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_33;
		L_33 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_32, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_34;
		L_34 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_33, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_35;
		L_35 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_34, L_35, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NQueens::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NQueens_Update_m49B94497A6B5750FA91BE88DB938B84F9A9B918C (NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void NQueens::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NQueens__ctor_mB451CABA35298F652E0C40E0D487041AB93FAAB1 (NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * __this, const RuntimeMethod* method)
{
	{
		Algorithm__ctor_m7350F7A6A79476CF0CB7A8793EE9D3F3C57F60D3(__this, /*hidden argument*/NULL);
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
// System.Void QuickSort::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickSort_Awake_m7900BD20258C2D2444D7B634D476BA5200F1AAFC (QuickSort_t42CA7BD01C0903F327C08E8D7E962F0682A2EE10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// size = 256;
		((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->set_size_5(((int32_t)256));
		// arr = new int[size];
		int32_t L_0 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_0);
		((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->set_arr_6(L_1);
		// array = new ArrayIndex[size];
		int32_t L_2 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_3 = (ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182*)(ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182*)SZArrayNew(ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182_il2cpp_TypeInfo_var, (uint32_t)L_2);
		((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->set_array_4(L_3);
		// setCam();
		SortingAlgorithm_setCam_m21A5B734B44D3D62133D845677FF3E171C078122(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QuickSort::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickSort_Start_m6FB08329106B8EABB335AF71B7159AEF4BBF617A (QuickSort_t42CA7BD01C0903F327C08E8D7E962F0682A2EE10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buildArray();
		SortingAlgorithm_buildArray_mD9825DA2F8C90EF5E0181977F9CCA18D0E0C6528(__this, /*hidden argument*/NULL);
		// quickSort(0, size - 1);
		int32_t L_0 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		QuickSort_quickSort_mE2C2B32EE9B836A3F00DA5B3C27EEE046410C1DF(__this, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)), /*hidden argument*/NULL);
		// StartCoroutine(readQueue(1));
		RuntimeObject* L_1;
		L_1 = SortingAlgorithm_readQueue_mCA727941B71A0BA8C54499AC3F7AF3C6CEDC38A0(__this, 1, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator QuickSort::extendCommands(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QuickSort_extendCommands_m7BFD1C3DAB447885183C7535BFE2D9DE2F9688E0 (QuickSort_t42CA7BD01C0903F327C08E8D7E962F0682A2EE10 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___command0, int32_t ___time1, const RuntimeMethod* method)
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&QuickSort_extendCommands_m7BFD1C3DAB447885183C7535BFE2D9DE2F9688E0_RuntimeMethod_var)));
	}
}
// System.Void QuickSort::quickSort(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickSort_quickSort_mE2C2B32EE9B836A3F00DA5B3C27EEE046410C1DF (QuickSort_t42CA7BD01C0903F327C08E8D7E962F0682A2EE10 * __this, int32_t ___low0, int32_t ___high1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (low < high)
		int32_t L_0 = ___low0;
		int32_t L_1 = ___high1;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_007e;
		}
	}
	{
		// q.Enqueue(new short[] { 6, (short)low, (short)high, 0 });
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_2 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = L_3;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)6);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = L_4;
		int32_t L_6 = ___low0;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_6)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_7 = L_5;
		int32_t L_8 = ___high1;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)((int16_t)((int16_t)L_8)));
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_2, (RuntimeObject *)(RuntimeObject *)L_7);
		// int split = partition(low, high);
		int32_t L_9 = ___low0;
		int32_t L_10 = ___high1;
		int32_t L_11;
		L_11 = QuickSort_partition_m9B1CA718B6888950253C6B1D5024746A2267E232(__this, L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// q.Enqueue(new short[] { 7, (short)low, (short)high, 0});
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_12 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_13 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_14 = L_13;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)7);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_15 = L_14;
		int32_t L_16 = ___low0;
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_16)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_17 = L_15;
		int32_t L_18 = ___high1;
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)((int16_t)((int16_t)L_18)));
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_12, (RuntimeObject *)(RuntimeObject *)L_17);
		// q.Enqueue(new short[] { 2, (short)split, 2, 0 });
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_19 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_20 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_21 = L_20;
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)2);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_22 = L_21;
		int32_t L_23 = V_0;
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_23)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_24 = L_22;
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)2);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_19, (RuntimeObject *)(RuntimeObject *)L_24);
		// quickSort(low, split - 1);
		int32_t L_25 = ___low0;
		int32_t L_26 = V_0;
		QuickSort_quickSort_mE2C2B32EE9B836A3F00DA5B3C27EEE046410C1DF(__this, L_25, ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1)), /*hidden argument*/NULL);
		// quickSort(split + 1, high);
		int32_t L_27 = V_0;
		int32_t L_28 = ___high1;
		QuickSort_quickSort_mE2C2B32EE9B836A3F00DA5B3C27EEE046410C1DF(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)), L_28, /*hidden argument*/NULL);
		// }
		return;
	}

IL_007e:
	{
		// if( low > -1 && low < size)
		int32_t L_29 = ___low0;
		if ((((int32_t)L_29) <= ((int32_t)(-1))))
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_30 = ___low0;
		int32_t L_31 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		if ((((int32_t)L_30) >= ((int32_t)L_31)))
		{
			goto IL_00a9;
		}
	}
	{
		// q.Enqueue(new short[] { 2, (short)low, 2, 0 });
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_32 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_33 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_34 = L_33;
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)2);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35 = L_34;
		int32_t L_36 = ___low0;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_36)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_37 = L_35;
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)2);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_32, (RuntimeObject *)(RuntimeObject *)L_37);
		// }
		return;
	}

IL_00a9:
	{
		// q.Enqueue(new short[] { 2, (short)high, 2, 0 });
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_38 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_39 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_40 = L_39;
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)2);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_41 = L_40;
		int32_t L_42 = ___high1;
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_42)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_43 = L_41;
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)2);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_38, (RuntimeObject *)(RuntimeObject *)L_43);
		// }
		return;
	}
}
// System.Int32 QuickSort::partition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuickSort_partition_m9B1CA718B6888950253C6B1D5024746A2267E232 (QuickSort_t42CA7BD01C0903F327C08E8D7E962F0682A2EE10 * __this, int32_t ___low0, int32_t ___high1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_2 = NULL;
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * V_3 = NULL;
	{
		// Random r = new Random();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_0, /*hidden argument*/NULL);
		V_3 = L_0;
		// if (low >= high)
		int32_t L_1 = ___low0;
		int32_t L_2 = ___high1;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_000c;
		}
	}
	{
		// return low;
		int32_t L_3 = ___low0;
		return L_3;
	}

IL_000c:
	{
		// m = new int[3];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		V_2 = L_4;
		// m[0] = low;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = V_2;
		int32_t L_6 = ___low0;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)L_6);
		// m[1] = high;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = V_2;
		int32_t L_8 = ___high1;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)L_8);
		// m[2] = r.Next(low+1, high+1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = V_2;
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_10 = V_3;
		int32_t L_11 = ___low0;
		int32_t L_12 = ___high1;
		int32_t L_13;
		L_13 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_10, ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)));
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int32_t)L_13);
		// if(arr[m[0]] > arr[m[1]])
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = V_2;
		int32_t L_16 = 0;
		int32_t L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18 = L_17;
		int32_t L_19 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = V_2;
		int32_t L_22 = 1;
		int32_t L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = L_23;
		int32_t L_25 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		if ((((int32_t)L_19) <= ((int32_t)L_25)))
		{
			goto IL_004e;
		}
	}
	{
		// temp = m[0];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = V_2;
		int32_t L_27 = 0;
		int32_t L_28 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		V_1 = L_28;
		// m[0] = m[1];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_29 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = V_2;
		int32_t L_31 = 1;
		int32_t L_32 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)L_32);
		// m[1] = temp;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_33 = V_2;
		int32_t L_34 = V_1;
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)L_34);
	}

IL_004e:
	{
		// if(arr[m[1]] > arr[m[2]])
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_35 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_36 = V_2;
		int32_t L_37 = 1;
		int32_t L_38 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		int32_t L_39 = L_38;
		int32_t L_40 = (L_35)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_41 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_42 = V_2;
		int32_t L_43 = 2;
		int32_t L_44 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		int32_t L_45 = L_44;
		int32_t L_46 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		if ((((int32_t)L_40) <= ((int32_t)L_46)))
		{
			goto IL_0096;
		}
	}
	{
		// temp = m[1];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_47 = V_2;
		int32_t L_48 = 1;
		int32_t L_49 = (L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		V_1 = L_49;
		// m[1] = m[2];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_50 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_51 = V_2;
		int32_t L_52 = 2;
		int32_t L_53 = (L_51)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)L_53);
		// m[2] = temp;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_54 = V_2;
		int32_t L_55 = V_1;
		(L_54)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int32_t)L_55);
		// if (arr[m[0]] > arr[m[1]])
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_56 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_57 = V_2;
		int32_t L_58 = 0;
		int32_t L_59 = (L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		int32_t L_60 = L_59;
		int32_t L_61 = (L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_62 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_63 = V_2;
		int32_t L_64 = 1;
		int32_t L_65 = (L_63)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_64));
		int32_t L_66 = L_65;
		int32_t L_67 = (L_62)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_66));
		if ((((int32_t)L_61) <= ((int32_t)L_67)))
		{
			goto IL_0096;
		}
	}
	{
		// temp = m[0];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_68 = V_2;
		int32_t L_69 = 0;
		int32_t L_70 = (L_68)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_69));
		V_1 = L_70;
		// m[0] = m[1];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_71 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_72 = V_2;
		int32_t L_73 = 1;
		int32_t L_74 = (L_72)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73));
		(L_71)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)L_74);
		// m[1] = temp;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_75 = V_2;
		int32_t L_76 = V_1;
		(L_75)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)L_76);
	}

IL_0096:
	{
		// swap(low, m[1], 0);
		int32_t L_77 = ___low0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_78 = V_2;
		int32_t L_79 = 1;
		int32_t L_80 = (L_78)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_79));
		SortingAlgorithm_swap_mE5F00595342C97A0A4BB4A6376557C5D0F20F22B(__this, L_77, L_80, (int16_t)0, /*hidden argument*/NULL);
		// i = arr[low];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_81 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_82 = ___low0;
		int32_t L_83 = L_82;
		int32_t L_84 = (L_81)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_83));
		// lowPosition = low;
		int32_t L_85 = ___low0;
		V_0 = L_85;
		// low++;
		int32_t L_86 = ___low0;
		___low0 = ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1));
		goto IL_0110;
	}

IL_00b3:
	{
		// low++;
		int32_t L_87 = ___low0;
		___low0 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1));
	}

IL_00b8:
	{
		// while (low <= high && compare(low, lowPosition, 5, 0) && arr[low] <= arr[lowPosition])
		int32_t L_88 = ___low0;
		int32_t L_89 = ___high1;
		if ((((int32_t)L_88) > ((int32_t)L_89)))
		{
			goto IL_00e1;
		}
	}
	{
		int32_t L_90 = ___low0;
		int32_t L_91 = V_0;
		bool L_92;
		L_92 = SortingAlgorithm_compare_m06B90D91D9671842FF67CA478138597FFB6E7BBD(__this, L_90, L_91, (int16_t)5, (int16_t)0, /*hidden argument*/NULL);
		if (!L_92)
		{
			goto IL_00e1;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_93 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_94 = ___low0;
		int32_t L_95 = L_94;
		int32_t L_96 = (L_93)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_95));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_97 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_98 = V_0;
		int32_t L_99 = L_98;
		int32_t L_100 = (L_97)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_99));
		if ((((int32_t)L_96) <= ((int32_t)L_100)))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_00e1;
	}

IL_00dc:
	{
		// high--;
		int32_t L_101 = ___high1;
		___high1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_101, (int32_t)1));
	}

IL_00e1:
	{
		// while (high >= low && compare(high, lowPosition, 5, 0)  && arr[high] > arr[lowPosition])
		int32_t L_102 = ___high1;
		int32_t L_103 = ___low0;
		if ((((int32_t)L_102) < ((int32_t)L_103)))
		{
			goto IL_0103;
		}
	}
	{
		int32_t L_104 = ___high1;
		int32_t L_105 = V_0;
		bool L_106;
		L_106 = SortingAlgorithm_compare_m06B90D91D9671842FF67CA478138597FFB6E7BBD(__this, L_104, L_105, (int16_t)5, (int16_t)0, /*hidden argument*/NULL);
		if (!L_106)
		{
			goto IL_0103;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_107 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_108 = ___high1;
		int32_t L_109 = L_108;
		int32_t L_110 = (L_107)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_109));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_111 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_112 = V_0;
		int32_t L_113 = L_112;
		int32_t L_114 = (L_111)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_113));
		if ((((int32_t)L_110) > ((int32_t)L_114)))
		{
			goto IL_00dc;
		}
	}

IL_0103:
	{
		// if ( low < high)
		int32_t L_115 = ___low0;
		int32_t L_116 = ___high1;
		if ((((int32_t)L_115) >= ((int32_t)L_116)))
		{
			goto IL_0110;
		}
	}
	{
		// swap(low, high, 0);
		int32_t L_117 = ___low0;
		int32_t L_118 = ___high1;
		SortingAlgorithm_swap_mE5F00595342C97A0A4BB4A6376557C5D0F20F22B(__this, L_117, L_118, (int16_t)0, /*hidden argument*/NULL);
	}

IL_0110:
	{
		// while (low <= high)
		int32_t L_119 = ___low0;
		int32_t L_120 = ___high1;
		if ((((int32_t)L_119) <= ((int32_t)L_120)))
		{
			goto IL_00b8;
		}
	}
	{
		// swap(lowPosition, high,0);
		int32_t L_121 = V_0;
		int32_t L_122 = ___high1;
		SortingAlgorithm_swap_mE5F00595342C97A0A4BB4A6376557C5D0F20F22B(__this, L_121, L_122, (int16_t)0, /*hidden argument*/NULL);
		// return high;
		int32_t L_123 = ___high1;
		return L_123;
	}
}
// System.Void QuickSort::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickSort__ctor_mB7D3F6F99ED2CA42F8E2E2A426B237EE28AF63B0 (QuickSort_t42CA7BD01C0903F327C08E8D7E962F0682A2EE10 * __this, const RuntimeMethod* method)
{
	{
		SortingAlgorithm__ctor_mB3212AEE8B1D0D0DCD737C8232675C2B01063717(__this, /*hidden argument*/NULL);
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
// System.Void RadixSort::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadixSort_Awake_m4B226DBDD420AA4ADEDB683BB82DFC1E9019F41C (RadixSort_t8FE79B30D08B520388288585845B5D6FF1098F34 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// size = 1000;  // 60 20 - 40
		((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->set_size_5(((int32_t)1000));
		// arr = new int[size];
		int32_t L_0 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_0);
		((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->set_arr_6(L_1);
		// array = new ArrayIndex[size];
		int32_t L_2 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_3 = (ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182*)(ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182*)SZArrayNew(ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182_il2cpp_TypeInfo_var, (uint32_t)L_2);
		((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->set_array_4(L_3);
		// auxArray = new ArrayIndex[size];
		int32_t L_4 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_5 = (ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182*)(ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182*)SZArrayNew(ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182_il2cpp_TypeInfo_var, (uint32_t)L_4);
		((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->set_auxArray_8(L_5);
		// auxArr = new int[size];
		int32_t L_6 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_6);
		((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->set_auxArr_9(L_7);
		// }
		return;
	}
}
// System.Void RadixSort::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadixSort_Start_mFB45AE601E6489B7484F68D8F75CE2D78BEAC987 (RadixSort_t8FE79B30D08B520388288585845B5D6FF1098F34 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// baseValue = 4;
		__this->set_baseValue_11(4);
		// countingArray = new int[baseValue];
		int32_t L_0 = __this->get_baseValue_11();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_0);
		((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->set_countingArray_10(L_1);
		// buildArray();
		SortingAlgorithm_buildArray_mD9825DA2F8C90EF5E0181977F9CCA18D0E0C6528(__this, /*hidden argument*/NULL);
		// buildAuxArray();
		SortingAlgorithmWithAuxArray_buildAuxArray_m7AC5881D29AE865495BA96B9E7D512FE8751D6FD(__this, /*hidden argument*/NULL);
		// startSort();
		RadixSort_startSort_m00531CB835F449B65DA342264A091D8CFBC34BDA(__this, /*hidden argument*/NULL);
		// StartCoroutine(readQueue(1));
		RuntimeObject* L_2;
		L_2 = SortingAlgorithm_readQueue_mCA727941B71A0BA8C54499AC3F7AF3C6CEDC38A0(__this, 1, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RadixSort::startSort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadixSort_startSort_m00531CB835F449B65DA342264A091D8CFBC34BDA (RadixSort_t8FE79B30D08B520388288585845B5D6FF1098F34 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____1A39494CA8A5792132B9E7074016726CBA710970042FF604ED7A45944C8A9533_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// for(i = 1; size / i > 0; i *= baseValue){
		V_0 = 1;
		goto IL_015c;
	}

IL_0007:
	{
		// for(j = 0; j < baseValue; j++)
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// countingArray[j] = 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->get_countingArray_10();
		int32_t L_1 = V_1;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (int32_t)0);
		// for(j = 0; j < baseValue; j++)
		int32_t L_2 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0018:
	{
		// for(j = 0; j < baseValue; j++)
		int32_t L_3 = V_1;
		int32_t L_4 = __this->get_baseValue_11();
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_000b;
		}
	}
	{
		// for(j = 0; j < size; j++){
		V_1 = 0;
		goto IL_004a;
	}

IL_0025:
	{
		// countingArray[arr[j] / i % baseValue]++;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = ((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->get_countingArray_10();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = V_0;
		int32_t L_11 = __this->get_baseValue_11();
		int32_t* L_12 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)((int32_t)((int32_t)L_9/(int32_t)L_10))%(int32_t)L_11)))));
		int32_t L_13 = *((int32_t*)L_12);
		*((int32_t*)L_12) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		// for(j = 0; j < size; j++){
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_004a:
	{
		// for(j = 0; j < size; j++){
		int32_t L_15 = V_1;
		int32_t L_16 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0025;
		}
	}
	{
		// for(j = 1; j < countingArray.Length; j++){
		V_1 = 1;
		goto IL_0074;
	}

IL_0056:
	{
		// countingArray[j] += countingArray[j-1];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = ((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->get_countingArray_10();
		int32_t L_18 = V_1;
		int32_t* L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)));
		int32_t L_20 = *((int32_t*)L_19);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = ((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->get_countingArray_10();
		int32_t L_22 = V_1;
		int32_t L_23 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1));
		int32_t L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		*((int32_t*)L_19) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_24));
		// for(j = 1; j < countingArray.Length; j++){
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0074:
	{
		// for(j = 1; j < countingArray.Length; j++){
		int32_t L_26 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = ((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->get_countingArray_10();
		if ((((int32_t)L_26) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))))
		{
			goto IL_0056;
		}
	}
	{
		// for(j = size - 1; j >= 0; j--){
		int32_t L_28 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1));
		goto IL_00fd;
	}

IL_0089:
	{
		// auxArr[--countingArray[arr[j] / i % baseValue]] = arr[j];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_29 = ((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->get_auxArr_9();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = ((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->get_countingArray_10();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_31 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_32 = V_1;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = V_0;
		int32_t L_36 = __this->get_baseValue_11();
		int32_t* L_37 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)((int32_t)((int32_t)L_34/(int32_t)L_35))%(int32_t)L_36)))));
		int32_t L_38 = *((int32_t*)L_37);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)1));
		int32_t L_39 = V_2;
		*((int32_t*)L_37) = (int32_t)L_39;
		int32_t L_40 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_41 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_42 = V_1;
		int32_t L_43 = L_42;
		int32_t L_44 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40), (int32_t)L_44);
		// q.Enqueue(new short[] {0, (short)countingArray[arr[j] / i % baseValue], (short)arr[j], 1});
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_45 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_46 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_47 = L_46;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_48 = ((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->get_countingArray_10();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_49 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_50 = V_1;
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		int32_t L_53 = V_0;
		int32_t L_54 = __this->get_baseValue_11();
		int32_t L_55 = ((int32_t)((int32_t)((int32_t)((int32_t)L_52/(int32_t)L_53))%(int32_t)L_54));
		int32_t L_56 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_56)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_57 = L_47;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_58 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_59 = V_1;
		int32_t L_60 = L_59;
		int32_t L_61 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		(L_57)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)((int16_t)((int16_t)L_61)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_62 = L_57;
		(L_62)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (int16_t)1);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_45, (RuntimeObject *)(RuntimeObject *)L_62);
		// for(j = size - 1; j >= 0; j--){
		int32_t L_63 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_63, (int32_t)1));
	}

IL_00fd:
	{
		// for(j = size - 1; j >= 0; j--){
		int32_t L_64 = V_1;
		if ((((int32_t)L_64) >= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		// for (j = 0; j < size; j++){
		V_1 = 0;
		goto IL_0119;
	}

IL_0105:
	{
		// arr[j] = auxArr[j];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_65 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_66 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_67 = ((SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF *)__this)->get_auxArr_9();
		int32_t L_68 = V_1;
		int32_t L_69 = L_68;
		int32_t L_70 = (L_67)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_69));
		(L_65)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_66), (int32_t)L_70);
		// for (j = 0; j < size; j++){
		int32_t L_71 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1));
	}

IL_0119:
	{
		// for (j = 0; j < size; j++){
		int32_t L_72 = V_1;
		int32_t L_73 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_0105;
		}
	}
	{
		// q.Enqueue(new short[] {11, 0, 1, 1});
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_74 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_75 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_76 = L_75;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_77 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____1A39494CA8A5792132B9E7074016726CBA710970042FF604ED7A45944C8A9533_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_76, L_77, /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_74, (RuntimeObject *)(RuntimeObject *)L_76);
		// q.Enqueue(new short[] {9, 0,0,0});
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_78 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_79 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_80 = L_79;
		(L_80)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)((int32_t)9));
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_78, (RuntimeObject *)(RuntimeObject *)L_80);
		// for(i = 1; size / i > 0; i *= baseValue){
		int32_t L_81 = V_0;
		int32_t L_82 = __this->get_baseValue_11();
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_81, (int32_t)L_82));
	}

IL_015c:
	{
		// for(i = 1; size / i > 0; i *= baseValue){
		int32_t L_83 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		int32_t L_84 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_83/(int32_t)L_84))) > ((int32_t)0)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RadixSort::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadixSort__ctor_m9B15EBCB9CDCE541D87061993C0D8DF78ACE635A (RadixSort_t8FE79B30D08B520388288585845B5D6FF1098F34 * __this, const RuntimeMethod* method)
{
	{
		SortingAlgorithmWithAuxArray__ctor_m62FA505A4F1EECCAFA769B4BD3DD1A56A2C24C2B(__this, /*hidden argument*/NULL);
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
// System.Void SelectionSort::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionSort_Awake_mAF2446CD0CC399D0EA7066EF7556A380A58BEB5F (SelectionSort_t9FD04DF005AEF090D191014F3118E1CF362A8226 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// size = 256;  // 70.2 63.8 -114.5
		((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->set_size_5(((int32_t)256));
		// arr = new int[size];
		int32_t L_0 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_0);
		((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->set_arr_6(L_1);
		// array = new ArrayIndex[size];
		int32_t L_2 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_3 = (ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182*)(ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182*)SZArrayNew(ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182_il2cpp_TypeInfo_var, (uint32_t)L_2);
		((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->set_array_4(L_3);
		// setCam();
		SortingAlgorithm_setCam_m21A5B734B44D3D62133D845677FF3E171C078122(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SelectionSort::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionSort_Start_mD82BA72975E046C165B7EECD8253A22493F290AE (SelectionSort_t9FD04DF005AEF090D191014F3118E1CF362A8226 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// buildArray();
		SortingAlgorithm_buildArray_mD9825DA2F8C90EF5E0181977F9CCA18D0E0C6528(__this, /*hidden argument*/NULL);
		// for(int i = 0; i < size-1; i++)
		V_1 = 0;
		goto IL_0069;
	}

IL_000a:
	{
		// smallest = i;
		int32_t L_0 = V_1;
		V_0 = L_0;
		// for(int j = i+1; j < size; j++)
		int32_t L_1 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		goto IL_0036;
	}

IL_0012:
	{
		// if(compare(j, smallest, 4, 0) && arr[j] < arr[smallest])
		int32_t L_2 = V_2;
		int32_t L_3 = V_0;
		bool L_4;
		L_4 = SortingAlgorithm_compare_m06B90D91D9671842FF67CA478138597FFB6E7BBD(__this, L_2, L_3, (int16_t)4, (int16_t)0, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_arr_6();
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		if ((((int32_t)L_8) >= ((int32_t)L_12)))
		{
			goto IL_0032;
		}
	}
	{
		// smallest = j;
		int32_t L_13 = V_2;
		V_0 = L_13;
	}

IL_0032:
	{
		// for(int j = i+1; j < size; j++)
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0036:
	{
		// for(int j = i+1; j < size; j++)
		int32_t L_15 = V_2;
		int32_t L_16 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0012;
		}
	}
	{
		// swap(smallest, i, 0);
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		SortingAlgorithm_swap_mE5F00595342C97A0A4BB4A6376557C5D0F20F22B(__this, L_17, L_18, (int16_t)0, /*hidden argument*/NULL);
		// q.Enqueue(new short[] { 2, (short)i, 2, 0 });
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_19 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_20 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_21 = L_20;
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)2);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_22 = L_21;
		int32_t L_23 = V_1;
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_23)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_24 = L_22;
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)2);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_19, (RuntimeObject *)(RuntimeObject *)L_24);
		// for(int i = 0; i < size-1; i++)
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0069:
	{
		// for(int i = 0; i < size-1; i++)
		int32_t L_26 = V_1;
		int32_t L_27 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		if ((((int32_t)L_26) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)1)))))
		{
			goto IL_000a;
		}
	}
	{
		// q.Enqueue(new short[] { 2, (short)(size-1), 2, 0 });
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_28 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)__this)->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_29 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_30 = L_29;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)2);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_31 = L_30;
		int32_t L_32 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1)))));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_33 = L_31;
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)2);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_28, (RuntimeObject *)(RuntimeObject *)L_33);
		// StartCoroutine(readQueue(1));
		RuntimeObject* L_34;
		L_34 = SortingAlgorithm_readQueue_mCA727941B71A0BA8C54499AC3F7AF3C6CEDC38A0(__this, 1, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_35;
		L_35 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_34, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SelectionSort::extendCommands(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SelectionSort_extendCommands_m56FD29A38555E649DE48ABC1D65CAB39D287DDDB (SelectionSort_t9FD04DF005AEF090D191014F3118E1CF362A8226 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___command0, int32_t ___time1, const RuntimeMethod* method)
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SelectionSort_extendCommands_m56FD29A38555E649DE48ABC1D65CAB39D287DDDB_RuntimeMethod_var)));
	}
}
// System.Void SelectionSort::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionSort__ctor_m8D01925814A27DF15E16E8CD41BA6196067F75B0 (SelectionSort_t9FD04DF005AEF090D191014F3118E1CF362A8226 * __this, const RuntimeMethod* method)
{
	{
		SortingAlgorithm__ctor_mB3212AEE8B1D0D0DCD737C8232675C2B01063717(__this, /*hidden argument*/NULL);
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
// System.Void SortingAlgorithm::buildArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingAlgorithm_buildArray_mD9825DA2F8C90EF5E0181977F9CCA18D0E0C6528 (SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for(int i = 0; i < size; i++){
		V_0 = 0;
		goto IL_001f;
	}

IL_0004:
	{
		// array[i] = new ArrayIndex(i);
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_0 = __this->get_array_4();
		int32_t L_1 = V_0;
		int32_t L_2 = V_0;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_3 = (ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 *)il2cpp_codegen_object_new(ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367_il2cpp_TypeInfo_var);
		ArrayIndex__ctor_mE13FF738F414E16572C9EBE9D2BA6801B7351177(L_3, L_2, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 *)L_3);
		// arr[i] = i;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = __this->get_arr_6();
		int32_t L_5 = V_0;
		int32_t L_6 = V_0;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (int32_t)L_6);
		// for(int i = 0; i < size; i++){
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_001f:
	{
		// for(int i = 0; i < size; i++){
		int32_t L_8 = V_0;
		int32_t L_9 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// shuffle();
		SortingAlgorithm_shuffle_m7CB4E09F0D5F9191EF6603C2388C9999E23A57B9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SortingAlgorithm::shuffle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingAlgorithm_shuffle_m7CB4E09F0D5F9191EF6603C2388C9999E23A57B9 (SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * V_1 = NULL;
	{
		// Random r = new Random();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_0, /*hidden argument*/NULL);
		V_1 = L_0;
		// for (i = 0; i < size; i++){
		V_0 = 0;
		goto IL_0022;
	}

IL_000a:
	{
		// swap(i, r.Next(i, size), 0);
		int32_t L_1 = V_0;
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_2 = V_1;
		int32_t L_3 = V_0;
		int32_t L_4 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		int32_t L_5;
		L_5 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_2, L_3, L_4);
		SortingAlgorithm_swap_mE5F00595342C97A0A4BB4A6376557C5D0F20F22B(__this, L_1, L_5, (int16_t)0, /*hidden argument*/NULL);
		// for (i = 0; i < size; i++){
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0022:
	{
		// for (i = 0; i < size; i++){
		int32_t L_7 = V_0;
		int32_t L_8 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SortingAlgorithm::swap(SortingAlgorithm/ArrayIndex&,SortingAlgorithm/ArrayIndex&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingAlgorithm_swap_m73EE80AE9D7A3983C40718631987720458554D5B (SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * __this, ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 ** ___a0, ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 ** ___b1, const RuntimeMethod* method)
{
	ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// ArrayIndex temp = a;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 ** L_0 = ___a0;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_1 = *((ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 **)L_0);
		V_0 = L_1;
		// a = b;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 ** L_2 = ___a0;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 ** L_3 = ___b1;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_4 = *((ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 **)L_3);
		*((RuntimeObject **)L_2) = (RuntimeObject *)L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)L_4);
		// b = temp;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 ** L_5 = ___b1;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_6 = V_0;
		*((RuntimeObject **)L_5) = (RuntimeObject *)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_5, (void*)(RuntimeObject *)L_6);
		// position = a.o.transform.position;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 ** L_7 = ___a0;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_8 = *((ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 **)L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = L_8->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// a.o.transform.position = new Vector3(b.o.transform.position.x, a.o.transform.position.y, 0);
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 ** L_12 = ___a0;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_13 = *((ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 **)L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = L_13->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 ** L_16 = ___b1;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_17 = *((ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 **)L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = L_17->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_x_0();
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 ** L_22 = ___a0;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_23 = *((ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 **)L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = L_23->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		float L_27 = L_26.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_28), L_21, L_27, (0.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_15, L_28, /*hidden argument*/NULL);
		// b.o.transform.position = new Vector3(position.x, b.o.transform.position.y, 0);
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 ** L_29 = ___b1;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_30 = *((ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 **)L_29);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = L_30->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_1;
		float L_34 = L_33.get_x_0();
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 ** L_35 = ___b1;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_36 = *((ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 **)L_35);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = L_36->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_37, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_38, /*hidden argument*/NULL);
		float L_40 = L_39.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_41), L_34, L_40, (0.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_32, L_41, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SortingAlgorithm::swap(System.Int32,System.Int32,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingAlgorithm_swap_mE5F00595342C97A0A4BB4A6376557C5D0F20F22B (SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * __this, int32_t ___x0, int32_t ___y1, int16_t ___arrayCode2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// q.Enqueue(new short[] {1, (short)x, (short)y, arrayCode});
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_0 = __this->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_2 = L_1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)1);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3 = L_2;
		int32_t L_4 = ___x0;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_4)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = L_3;
		int32_t L_6 = ___y1;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)((int16_t)((int16_t)L_6)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_7 = L_5;
		int16_t L_8 = ___arrayCode2;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (int16_t)L_8);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_0, (RuntimeObject *)(RuntimeObject *)L_7);
		// int temp = arr[x];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = __this->get_arr_6();
		int32_t L_10 = ___x0;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = L_12;
		// arr[x] = arr[y];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = __this->get_arr_6();
		int32_t L_14 = ___x0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = __this->get_arr_6();
		int32_t L_16 = ___y1;
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (int32_t)L_18);
		// arr[y] = temp;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = __this->get_arr_6();
		int32_t L_20 = ___y1;
		int32_t L_21 = V_0;
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20), (int32_t)L_21);
		// }
		return;
	}
}
// System.Collections.IEnumerator SortingAlgorithm::readQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortingAlgorithm_readQueue_mCA727941B71A0BA8C54499AC3F7AF3C6CEDC38A0 (SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * __this, int32_t ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CreadQueueU3Ed__10_t3029C89FAFF9D6D1E9EFDF2B7604B11567DE71EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CreadQueueU3Ed__10_t3029C89FAFF9D6D1E9EFDF2B7604B11567DE71EE * L_0 = (U3CreadQueueU3Ed__10_t3029C89FAFF9D6D1E9EFDF2B7604B11567DE71EE *)il2cpp_codegen_object_new(U3CreadQueueU3Ed__10_t3029C89FAFF9D6D1E9EFDF2B7604B11567DE71EE_il2cpp_TypeInfo_var);
		U3CreadQueueU3Ed__10__ctor_mB45F8047151C702C5072FFF89E8B4FFFFA568363(L_0, 0, /*hidden argument*/NULL);
		U3CreadQueueU3Ed__10_t3029C89FAFF9D6D1E9EFDF2B7604B11567DE71EE * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		U3CreadQueueU3Ed__10_t3029C89FAFF9D6D1E9EFDF2B7604B11567DE71EE * L_2 = L_1;
		int32_t L_3 = ___time0;
		L_2->set_time_3(L_3);
		return L_2;
	}
}
// System.Void SortingAlgorithm::writeToIndex(SortingAlgorithm/ArrayIndex[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingAlgorithm_writeToIndex_m663DDCC614F023DB2FFD245C3AFA4AD21CF803A1 (SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * __this, ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* ___array0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method)
{
	{
		// array[index].value = value;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = L_1;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = ___value2;
		L_3->set_value_1(L_4);
		// array[index].o.transform.position = new Vector3(array[index].o.transform.position.x, (value+1)*.5f, 0);
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_5 = ___array0;
		int32_t L_6 = ___index1;
		int32_t L_7 = L_6;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = L_8->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = L_14->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_x_0();
		int32_t L_19 = ___value2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_20), L_18, ((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)))), (float)(0.5f))), (0.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_20, /*hidden argument*/NULL);
		// array[index].o.transform.localScale = new Vector3(1, value + 1, 1);
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_21 = ___array0;
		int32_t L_22 = ___index1;
		int32_t L_23 = L_22;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = L_24->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		int32_t L_27 = ___value2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_28), (1.0f), ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)))), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_26, L_28, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SortingAlgorithm::copyArrayValue(SortingAlgorithm/ArrayIndex[],SortingAlgorithm/ArrayIndex[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingAlgorithm_copyArrayValue_m3F7B189ECF43CC4FE1597734C9364A8BAB10EBF5 (SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * __this, ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* ___primary0, ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* ___secondary1, int32_t ___primaryIndex2, int32_t ___secondaryIndex3, const RuntimeMethod* method)
{
	{
		// primary[primaryIndex].value = secondary[secondaryIndex].value;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_0 = ___primary0;
		int32_t L_1 = ___primaryIndex2;
		int32_t L_2 = L_1;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_4 = ___secondary1;
		int32_t L_5 = ___secondaryIndex3;
		int32_t L_6 = L_5;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = L_7->get_value_1();
		L_3->set_value_1(L_8);
		// primary[primaryIndex].o.transform.position = new Vector3(primary[primaryIndex].o.transform.position.x, (primary[primaryIndex].value +1)*.5f, 0);
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_9 = ___primary0;
		int32_t L_10 = ___primaryIndex2;
		int32_t L_11 = L_10;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_12->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_15 = ___primary0;
		int32_t L_16 = ___primaryIndex2;
		int32_t L_17 = L_16;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = L_18->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_x_0();
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_23 = ___primary0;
		int32_t L_24 = ___primaryIndex2;
		int32_t L_25 = L_24;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		int32_t L_27 = L_26->get_value_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_28), L_22, ((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)))), (float)(0.5f))), (0.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_14, L_28, /*hidden argument*/NULL);
		// primary[primaryIndex].o.transform.localScale = new Vector3(1, primary[primaryIndex].value +1, 1);
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_29 = ___primary0;
		int32_t L_30 = ___primaryIndex2;
		int32_t L_31 = L_30;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = L_32->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_33, /*hidden argument*/NULL);
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_35 = ___primary0;
		int32_t L_36 = ___primaryIndex2;
		int32_t L_37 = L_36;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_38 = (L_35)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		int32_t L_39 = L_38->get_value_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_40), (1.0f), ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1)))), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_34, L_40, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SortingAlgorithm::colorChange(System.Int32,System.Int32,SortingAlgorithm/ArrayIndex[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingAlgorithm_colorChange_m0A53C0CBC733EAD2DE620B39D64B8373DB118234 (SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * __this, int32_t ___element0, int32_t ___colorCode1, ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* ___array2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___colorCode1;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0038;
			}
			case 2:
			{
				goto IL_0055;
			}
			case 3:
			{
				goto IL_0072;
			}
			case 4:
			{
				goto IL_008f;
			}
		}
	}
	{
		return;
	}

IL_001b:
	{
		// array[element].o.GetComponent<Renderer>().material.color = Color.white;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_1 = ___array2;
		int32_t L_2 = ___element0;
		int32_t L_3 = L_2;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_o_0();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_6;
		L_6 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_5, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7;
		L_7 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_6, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		L_8 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_7, L_8, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0038:
	{
		// array[element].o.GetComponent<Renderer>().material.color = Color.red;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_9 = ___array2;
		int32_t L_10 = ___element0;
		int32_t L_11 = L_10;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_12->get_o_0();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_14;
		L_14 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_13, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15;
		L_15 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_14, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16;
		L_16 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_15, L_16, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0055:
	{
		// array[element].o.GetComponent<Renderer>().material.color = Color.green;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_17 = ___array2;
		int32_t L_18 = ___element0;
		int32_t L_19 = L_18;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = L_20->get_o_0();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_22;
		L_22 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_21, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_23;
		L_23 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_22, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24;
		L_24 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_23, L_24, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0072:
	{
		// array[element].o.GetComponent<Renderer>().material.color = Color.blue;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_25 = ___array2;
		int32_t L_26 = ___element0;
		int32_t L_27 = L_26;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = L_28->get_o_0();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_30;
		L_30 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_29, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_31;
		L_31 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_30, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_32;
		L_32 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_31, L_32, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_008f:
	{
		// array[element].o.GetComponent<Renderer>().material.color = Color.black;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_33 = ___array2;
		int32_t L_34 = ___element0;
		int32_t L_35 = L_34;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = L_36->get_o_0();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_38;
		L_38 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_37, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_39;
		L_39 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_38, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_40;
		L_40 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_39, L_40, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean SortingAlgorithm::compare(System.Int32,System.Int32,System.Int16,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortingAlgorithm_compare_m06B90D91D9671842FF67CA478138597FFB6E7BBD (SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * __this, int32_t ___x0, int32_t ___y1, int16_t ___code2, int16_t ___arrayCode3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// q.Enqueue(new short[] {3, (short)x, (short)y, arrayCode});
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_0 = __this->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_2 = L_1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)3);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3 = L_2;
		int32_t L_4 = ___x0;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_4)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = L_3;
		int32_t L_6 = ___y1;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)((int16_t)((int16_t)L_6)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_7 = L_5;
		int16_t L_8 = ___arrayCode3;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (int16_t)L_8);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_0, (RuntimeObject *)(RuntimeObject *)L_7);
		// q.Enqueue(new short[] {code, (short)x, (short)y, arrayCode});
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_9 = __this->get_q_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_10 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_11 = L_10;
		int16_t L_12 = ___code2;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)L_12);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_13 = L_11;
		int32_t L_14 = ___x0;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int16_t)((int16_t)((int16_t)L_14)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_15 = L_13;
		int32_t L_16 = ___y1;
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int16_t)((int16_t)((int16_t)L_16)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_17 = L_15;
		int16_t L_18 = ___arrayCode3;
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (int16_t)L_18);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_9, (RuntimeObject *)(RuntimeObject *)L_17);
		// return true;
		return (bool)1;
	}
}
// System.Void SortingAlgorithm::setCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingAlgorithm_setCam_m21A5B734B44D3D62133D845677FF3E171C078122 (SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float z = (float)((-1 * size) / (2 * Math.Tan(Math.PI / 6)));
		int32_t L_0 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = tan((0.52359877559829882));
		V_0 = ((float)((float)((double)((double)((double)((double)((int32_t)il2cpp_codegen_multiply((int32_t)(-1), (int32_t)L_0))))/(double)((double)il2cpp_codegen_multiply((double)(2.0), (double)L_1))))));
		// Camera.main.transform.position = new Vector3(size/2 + 1, size/2 + 1, (float)(z*1.1) );
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		int32_t L_4 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		int32_t L_5 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		float L_6 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_4/(int32_t)2)), (int32_t)1)))), ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_5/(int32_t)2)), (int32_t)1)))), ((float)((float)((double)il2cpp_codegen_multiply((double)((double)((double)L_6)), (double)(1.1000000000000001))))), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_7, /*hidden argument*/NULL);
		// Camera.main.farClipPlane = (float)(-1.1*z + 200);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8;
		L_8 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		float L_9 = V_0;
		Camera_set_farClipPlane_m63F1302068433A72A5103281327C68CD8F67AD41(L_8, ((float)((float)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)(-1.1000000000000001), (double)((double)((double)L_9)))), (double)(200.0))))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SortingAlgorithm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingAlgorithm__ctor_mB3212AEE8B1D0D0DCD737C8232675C2B01063717 (SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_t66723C58C7422102C36F8570BE048BD0CC489E52_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Queue q = new Queue();
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_0 = (Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 *)il2cpp_codegen_object_new(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52_il2cpp_TypeInfo_var);
		Queue__ctor_m9844D111CC69802C62565C05109A2557FD21C127(L_0, /*hidden argument*/NULL);
		__this->set_q_7(L_0);
		Algorithm__ctor_m7350F7A6A79476CF0CB7A8793EE9D3F3C57F60D3(__this, /*hidden argument*/NULL);
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
// System.Void SortingAlgorithmWithAuxArray::buildAuxArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingAlgorithmWithAuxArray_buildAuxArray_m7AC5881D29AE865495BA96B9E7D512FE8751D6FD (SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuxArrayIndex_tE70B103A9D225ACF3F1D1D30F76CE00FD45C2906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < size; i++){
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		// auxArray[i] = new AuxArrayIndex(i);
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_0 = __this->get_auxArray_8();
		int32_t L_1 = V_0;
		int32_t L_2 = V_0;
		AuxArrayIndex_tE70B103A9D225ACF3F1D1D30F76CE00FD45C2906 * L_3 = (AuxArrayIndex_tE70B103A9D225ACF3F1D1D30F76CE00FD45C2906 *)il2cpp_codegen_object_new(AuxArrayIndex_tE70B103A9D225ACF3F1D1D30F76CE00FD45C2906_il2cpp_TypeInfo_var);
		AuxArrayIndex__ctor_mA32F6CD78E5394E7C1A986EBBEF7EE295A5AF952(L_3, L_2, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 *)L_3);
		// for (int i = 0; i < size; i++){
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0016:
	{
		// for (int i = 0; i < size; i++){
		int32_t L_5 = V_0;
		int32_t L_6 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SortingAlgorithmWithAuxArray::setAuxCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingAlgorithmWithAuxArray_setAuxCam_mDF13CCF3E2D7E91566B3ACFFE1912C7C225FAFFE (SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float z = (float)((-1 * size) / (2 * Math.Tan(Math.PI / 6))); // sets
		int32_t L_0 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = tan((0.52359877559829882));
		V_0 = ((float)((float)((double)((double)((double)((double)((int32_t)il2cpp_codegen_multiply((int32_t)(-1), (int32_t)L_0))))/(double)((double)il2cpp_codegen_multiply((double)(2.0), (double)L_1))))));
		// Camera.main.transform.position = new Vector3(0, size / 2 , (float)(z * 1.01));
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		int32_t L_4 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		float L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), (0.0f), ((float)((float)((int32_t)((int32_t)L_4/(int32_t)2)))), ((float)((float)((double)il2cpp_codegen_multiply((double)((double)((double)L_5)), (double)(1.01))))), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_6, /*hidden argument*/NULL);
		// Camera.main.farClipPlane = (float)(-1.1 * z);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7;
		L_7 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		float L_8 = V_0;
		Camera_set_farClipPlane_m63F1302068433A72A5103281327C68CD8F67AD41(L_7, ((float)((float)((double)il2cpp_codegen_multiply((double)(-1.1000000000000001), (double)((double)((double)L_8)))))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SortingAlgorithmWithAuxArray::extendCommands(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortingAlgorithmWithAuxArray_extendCommands_m8924AA130D4CD07EAF414A24EF9CA315DE9921CB (SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___instr0, int32_t ___time1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CextendCommandsU3Ed__6_tF390D4906D3F0DB7F02E3F01B58DF422FCC50564_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CextendCommandsU3Ed__6_tF390D4906D3F0DB7F02E3F01B58DF422FCC50564 * L_0 = (U3CextendCommandsU3Ed__6_tF390D4906D3F0DB7F02E3F01B58DF422FCC50564 *)il2cpp_codegen_object_new(U3CextendCommandsU3Ed__6_tF390D4906D3F0DB7F02E3F01B58DF422FCC50564_il2cpp_TypeInfo_var);
		U3CextendCommandsU3Ed__6__ctor_m5188A6568BCD3F935614DD598AE5BBF61C1B4ACC(L_0, 0, /*hidden argument*/NULL);
		U3CextendCommandsU3Ed__6_tF390D4906D3F0DB7F02E3F01B58DF422FCC50564 * L_1 = L_0;
		L_1->set_U3CU3E4__this_3(__this);
		U3CextendCommandsU3Ed__6_tF390D4906D3F0DB7F02E3F01B58DF422FCC50564 * L_2 = L_1;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3 = ___instr0;
		L_2->set_instr_2(L_3);
		U3CextendCommandsU3Ed__6_tF390D4906D3F0DB7F02E3F01B58DF422FCC50564 * L_4 = L_2;
		int32_t L_5 = ___time1;
		L_4->set_time_4(L_5);
		return L_4;
	}
}
// System.Void SortingAlgorithmWithAuxArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingAlgorithmWithAuxArray__ctor_m62FA505A4F1EECCAFA769B4BD3DD1A56A2C24C2B (SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * __this, const RuntimeMethod* method)
{
	{
		SortingAlgorithm__ctor_mB3212AEE8B1D0D0DCD737C8232675C2B01063717(__this, /*hidden argument*/NULL);
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
// System.Void Test::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test_Start_m4D6FA0B24EBFD6471F4596A93EC95EC1EB5355D8 (Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB94F79AF99EB1F84056002952B39BFDEA97D447);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// buildGrid();
		Test_buildGrid_m8051E2EB9F6372299B406CA63E4C03DC89300DD8(__this, /*hidden argument*/NULL);
		// for (int i = 0; i < n; i++)
		V_0 = 0;
		goto IL_0088;
	}

IL_000a:
	{
		// array[i] = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_array_7();
		int32_t L_1 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC(0, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_0, L_2);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_2);
		// array[i].transform.position = new Vector3(10*(float)Math.Cos(Math.PI/2-(i*degrees)), 10*(float)Math.Sin(Math.PI/2-(i*degrees)), 0);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get_array_7();
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var);
		double L_9 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_degrees_8();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = cos(((double)il2cpp_codegen_subtract((double)(1.5707963267948966), (double)((double)il2cpp_codegen_multiply((double)((double)((double)L_8)), (double)L_9)))));
		int32_t L_11 = V_0;
		double L_12 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_degrees_8();
		double L_13;
		L_13 = sin(((double)il2cpp_codegen_subtract((double)(1.5707963267948966), (double)((double)il2cpp_codegen_multiply((double)((double)((double)L_11)), (double)L_12)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_14), ((float)il2cpp_codegen_multiply((float)(10.0f), (float)((float)((float)L_10)))), ((float)il2cpp_codegen_multiply((float)(10.0f), (float)((float)((float)L_13)))), (0.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_14, /*hidden argument*/NULL);
		// array[i].name = i.ToString();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = __this->get_array_7();
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		String_t* L_19;
		L_19 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_18, L_19, /*hidden argument*/NULL);
		// for (int i = 0; i < n; i++)
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0088:
	{
		// for (int i = 0; i < n; i++)
		int32_t L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var);
		int32_t L_22 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_n_5();
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_000a;
		}
	}
	{
		// for (int i = 0; i < n; i++)
		V_1 = 0;
		goto IL_0229;
	}

IL_009a:
	{
		// for (int j = i+1; j < n; j++)
		int32_t L_23 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		goto IL_021a;
	}

IL_00a3:
	{
		// if (graph[i, j])
		BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* L_24 = __this->get_graph_10();
		int32_t L_25 = V_1;
		int32_t L_26 = V_2;
		bool L_27;
		L_27 = (L_24)->GetAtUnchecked(L_25, L_26);
		if (!L_27)
		{
			goto IL_0216;
		}
	}
	{
		// lineR[i, j] = new GameObject("Line").AddComponent(typeof(LineRenderer)) as LineRenderer;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_28 = __this->get_lineR_9();
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_31, _stringLiteralAB94F79AF99EB1F84056002952B39BFDEA97D447, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_32 = { reinterpret_cast<intptr_t> (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_33;
		L_33 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_32, /*hidden argument*/NULL);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_34;
		L_34 = GameObject_AddComponent_mD183856CB5A1CCF1576221D7D6CEBC4092E734B8(L_31, L_33, /*hidden argument*/NULL);
		(L_28)->SetAtUnchecked(L_29, L_30, ((LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 *)IsInstSealed((RuntimeObject*)L_34, LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_il2cpp_TypeInfo_var)));
		// lineR[i, j].GetComponent<LineRenderer>().startColor = Color.black;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_35 = __this->get_lineR_9();
		int32_t L_36 = V_1;
		int32_t L_37 = V_2;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_38;
		L_38 = (L_35)->GetAtUnchecked(L_36, L_37);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_39;
		L_39 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_38, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_40;
		L_40 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		LineRenderer_set_startColor_m7C75698F11565606CEA049DD3AE0514BADBF6BB7(L_39, L_40, /*hidden argument*/NULL);
		// lineR[i, j].GetComponent<LineRenderer>().endColor = Color.black;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_41 = __this->get_lineR_9();
		int32_t L_42 = V_1;
		int32_t L_43 = V_2;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_44;
		L_44 = (L_41)->GetAtUnchecked(L_42, L_43);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_45;
		L_45 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_44, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_46;
		L_46 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		LineRenderer_set_endColor_mF9F043C0EE5E36AD5B36547A17171ECA6967CDE2(L_45, L_46, /*hidden argument*/NULL);
		// lineR[i, j].GetComponent<LineRenderer>().startWidth = .05f;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_47 = __this->get_lineR_9();
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_50;
		L_50 = (L_47)->GetAtUnchecked(L_48, L_49);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_51;
		L_51 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_50, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		LineRenderer_set_startWidth_mD88B562DD413EE9861FB254963C7EDCB5199C1DF(L_51, (0.0500000007f), /*hidden argument*/NULL);
		// lineR[i, j].GetComponent<LineRenderer>().endWidth = .05f;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_52 = __this->get_lineR_9();
		int32_t L_53 = V_1;
		int32_t L_54 = V_2;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_55;
		L_55 = (L_52)->GetAtUnchecked(L_53, L_54);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_56;
		L_56 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_55, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		LineRenderer_set_endWidth_m3DCD4FFCC3944DD6DC0737C8AF8C7EDB5A6CF59A(L_56, (0.0500000007f), /*hidden argument*/NULL);
		// lineR[i, j].GetComponent<LineRenderer>().positionCount = 2;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_57 = __this->get_lineR_9();
		int32_t L_58 = V_1;
		int32_t L_59 = V_2;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_60;
		L_60 = (L_57)->GetAtUnchecked(L_58, L_59);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_61;
		L_61 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_60, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5(L_61, 2, /*hidden argument*/NULL);
		// lineR[i, j].GetComponent<LineRenderer>().useWorldSpace = true;
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_62 = __this->get_lineR_9();
		int32_t L_63 = V_1;
		int32_t L_64 = V_2;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_65;
		L_65 = (L_62)->GetAtUnchecked(L_63, L_64);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_66;
		L_66 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_65, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		LineRenderer_set_useWorldSpace_m53AA0FE659EFB041647DB6A29826D20D52CBE148(L_66, (bool)1, /*hidden argument*/NULL);
		// lineR[i, j].SetPosition(0, new Vector3(array[i].transform.position.x, array[i].transform.position.y, 0)); //x,y and z position of the starting point of the line
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_67 = __this->get_lineR_9();
		int32_t L_68 = V_1;
		int32_t L_69 = V_2;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_70;
		L_70 = (L_67)->GetAtUnchecked(L_68, L_69);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_71 = __this->get_array_7();
		int32_t L_72 = V_1;
		int32_t L_73 = L_72;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_74 = (L_71)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_75;
		L_75 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_74, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76;
		L_76 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_75, /*hidden argument*/NULL);
		float L_77 = L_76.get_x_0();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_78 = __this->get_array_7();
		int32_t L_79 = V_1;
		int32_t L_80 = L_79;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_81 = (L_78)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_80));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_82;
		L_82 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_81, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83;
		L_83 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_82, /*hidden argument*/NULL);
		float L_84 = L_83.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_85;
		memset((&L_85), 0, sizeof(L_85));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_85), L_77, L_84, (0.0f), /*hidden argument*/NULL);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_70, 0, L_85, /*hidden argument*/NULL);
		// lineR[i, j].SetPosition(1, new Vector3(array[j].transform.position.x, array[j].transform.position.y, 0)); //x,y and z position of the starting point of the line
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_86 = __this->get_lineR_9();
		int32_t L_87 = V_1;
		int32_t L_88 = V_2;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_89;
		L_89 = (L_86)->GetAtUnchecked(L_87, L_88);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_90 = __this->get_array_7();
		int32_t L_91 = V_2;
		int32_t L_92 = L_91;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_93 = (L_90)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_92));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_94;
		L_94 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_93, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95;
		L_95 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_94, /*hidden argument*/NULL);
		float L_96 = L_95.get_x_0();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_97 = __this->get_array_7();
		int32_t L_98 = V_2;
		int32_t L_99 = L_98;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_100 = (L_97)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_99));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_101;
		L_101 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_100, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102;
		L_102 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_101, /*hidden argument*/NULL);
		float L_103 = L_102.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_104;
		memset((&L_104), 0, sizeof(L_104));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_104), L_96, L_103, (0.0f), /*hidden argument*/NULL);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_89, 1, L_104, /*hidden argument*/NULL);
	}

IL_0216:
	{
		// for (int j = i+1; j < n; j++)
		int32_t L_105 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)1));
	}

IL_021a:
	{
		// for (int j = i+1; j < n; j++)
		int32_t L_106 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var);
		int32_t L_107 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_n_5();
		if ((((int32_t)L_106) < ((int32_t)L_107)))
		{
			goto IL_00a3;
		}
	}
	{
		// for (int i = 0; i < n; i++)
		int32_t L_108 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)1));
	}

IL_0229:
	{
		// for (int i = 0; i < n; i++)
		int32_t L_109 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var);
		int32_t L_110 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_n_5();
		if ((((int32_t)L_109) < ((int32_t)L_110)))
		{
			goto IL_009a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Test::buildGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test_buildGrid_m8051E2EB9F6372299B406CA63E4C03DC89300DD8 (Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// int[] array = new int[n];
		IL2CPP_RUNTIME_CLASS_INIT(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_n_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// for(i = 0; i < n; i++)
		V_1 = 0;
		goto IL_0025;
	}

IL_000f:
	{
		// array[i] = i;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = V_1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_4);
		// graph[i, i] = true;
		BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* L_5 = __this->get_graph_10();
		int32_t L_6 = V_1;
		int32_t L_7 = V_1;
		(L_5)->SetAtUnchecked(L_6, L_7, (bool)1);
		// for(i = 0; i < n; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0025:
	{
		// for(i = 0; i < n; i++)
		int32_t L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var);
		int32_t L_10 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_n_5();
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000f;
		}
	}
	{
		// for (i = 0; i < n; i++)
		V_1 = 0;
		goto IL_0058;
	}

IL_0031:
	{
		// swap(ref array[i], ref array[r.Next(i, n)]);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = V_0;
		int32_t L_12 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_14 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_r_4();
		int32_t L_15 = V_1;
		int32_t L_16 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_n_5();
		int32_t L_17;
		L_17 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_14, L_15, L_16);
		Test_swap_mD9EA3B72AC1BC9FBE9D1142C199772B7BD5DA573(__this, (int32_t*)((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12))), (int32_t*)((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17))), /*hidden argument*/NULL);
		// for (i = 0; i < n; i++)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0058:
	{
		// for (i = 0; i < n; i++)
		int32_t L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var);
		int32_t L_20 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_n_5();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0031;
		}
	}
	{
		// for (i = 1; i < n; i++)
		V_1 = 1;
		goto IL_0098;
	}

IL_0064:
	{
		// j = r.Next(i);
		IL2CPP_RUNTIME_CLASS_INIT(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_21 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_r_4();
		int32_t L_22 = V_1;
		int32_t L_23;
		L_23 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32) */, L_21, L_22);
		V_2 = L_23;
		// graph[array[i], array[j]] = true;
		BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* L_24 = __this->get_graph_10();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_25 = V_0;
		int32_t L_26 = V_1;
		int32_t L_27 = L_26;
		int32_t L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_29 = V_0;
		int32_t L_30 = V_2;
		int32_t L_31 = L_30;
		int32_t L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		(L_24)->SetAtUnchecked(L_28, L_32, (bool)1);
		// graph[array[j], array[i]] = true;
		BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* L_33 = __this->get_graph_10();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_34 = V_0;
		int32_t L_35 = V_2;
		int32_t L_36 = L_35;
		int32_t L_37 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_38 = V_0;
		int32_t L_39 = V_1;
		int32_t L_40 = L_39;
		int32_t L_41 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		(L_33)->SetAtUnchecked(L_37, L_41, (bool)1);
		// for (i = 1; i < n; i++)
		int32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_0098:
	{
		// for (i = 1; i < n; i++)
		int32_t L_43 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var);
		int32_t L_44 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_n_5();
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_0064;
		}
	}
	{
		// int remainingEdges = edges - n + 1;
		IL2CPP_RUNTIME_CLASS_INIT(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var);
		int32_t L_45 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_edges_6();
		int32_t L_46 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_n_5();
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)L_46)), (int32_t)1));
		goto IL_014e;
	}

IL_00b3:
	{
		// i = r.Next(n);
		IL2CPP_RUNTIME_CLASS_INIT(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_47 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_r_4();
		int32_t L_48 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_n_5();
		int32_t L_49;
		L_49 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32) */, L_47, L_48);
		V_1 = L_49;
		// j = r.Next(n);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_50 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_r_4();
		int32_t L_51 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_n_5();
		int32_t L_52;
		L_52 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32) */, L_50, L_51);
		V_2 = L_52;
		goto IL_00e5;
	}

IL_00d5:
	{
		// j = r.Next(n);
		IL2CPP_RUNTIME_CLASS_INIT(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_53 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_r_4();
		int32_t L_54 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_n_5();
		int32_t L_55;
		L_55 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32) */, L_53, L_54);
		V_2 = L_55;
	}

IL_00e5:
	{
		// while (i == j)
		int32_t L_56 = V_1;
		int32_t L_57 = V_2;
		if ((((int32_t)L_56) == ((int32_t)L_57)))
		{
			goto IL_00d5;
		}
	}
	{
		goto IL_0102;
	}

IL_00eb:
	{
		// i = (i + 1) % n;
		int32_t L_58 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var);
		int32_t L_59 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_n_5();
		V_1 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1))%(int32_t)L_59));
		// if (i == 0)
		int32_t L_60 = V_1;
		if (L_60)
		{
			goto IL_0102;
		}
	}
	{
		// j = (j + 1) % n;
		int32_t L_61 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var);
		int32_t L_62 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_n_5();
		V_2 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1))%(int32_t)L_62));
	}

IL_0102:
	{
		// while (graph[i,j])
		BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* L_63 = __this->get_graph_10();
		int32_t L_64 = V_1;
		int32_t L_65 = V_2;
		bool L_66;
		L_66 = (L_63)->GetAtUnchecked(L_64, L_65);
		if (L_66)
		{
			goto IL_00eb;
		}
	}
	{
		// Debug.Log(i + " " + j);
		String_t* L_67;
		L_67 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_68;
		L_68 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		String_t* L_69;
		L_69 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_67, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_68, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_69, /*hidden argument*/NULL);
		// graph[i,j] = true;
		BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* L_70 = __this->get_graph_10();
		int32_t L_71 = V_1;
		int32_t L_72 = V_2;
		(L_70)->SetAtUnchecked(L_71, L_72, (bool)1);
		// graph[j,i] = true;
		BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* L_73 = __this->get_graph_10();
		int32_t L_74 = V_2;
		int32_t L_75 = V_1;
		(L_73)->SetAtUnchecked(L_74, L_75, (bool)1);
		// remainingEdges--;
		int32_t L_76 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_76, (int32_t)1));
	}

IL_014e:
	{
		// while (remainingEdges > 0)
		int32_t L_77 = V_3;
		if ((((int32_t)L_77) > ((int32_t)0)))
		{
			goto IL_00b3;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Test::swap(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test_swap_mD9EA3B72AC1BC9FBE9D1142C199772B7BD5DA573 (Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5 * __this, int32_t* ___x0, int32_t* ___y1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int temp = x;
		int32_t* L_0 = ___x0;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = L_1;
		// x = y;
		int32_t* L_2 = ___x0;
		int32_t* L_3 = ___y1;
		int32_t L_4 = *((int32_t*)L_3);
		*((int32_t*)L_2) = (int32_t)L_4;
		// y = temp;
		int32_t* L_5 = ___y1;
		int32_t L_6 = V_0;
		*((int32_t*)L_5) = (int32_t)L_6;
		// }
		return;
	}
}
// System.Void Test::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test__ctor_m1C2B5E11A339FD79C0C458FB86723E5F2B74545C (Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private GameObject[] array = new GameObject[n];
		IL2CPP_RUNTIME_CLASS_INIT(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_n_5();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_array_7(L_1);
		// LineRenderer[,] lineR = new LineRenderer[n,n];
		int32_t L_2 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_n_5();
		int32_t L_3 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_n_5();
		il2cpp_array_size_t L_5[] = { (il2cpp_array_size_t)L_2, (il2cpp_array_size_t)L_3 };
		LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716* L_4 = (LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716*)GenArrayNew(LineRendererU5BU2CU5D_t90CA56BD2A8003A30C0038F76CD4CE9A0CE44716_il2cpp_TypeInfo_var, L_5);
		__this->set_lineR_9(L_4);
		// bool[,] graph = new bool[n, n];
		int32_t L_6 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_n_5();
		int32_t L_7 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_n_5();
		il2cpp_array_size_t L_9[] = { (il2cpp_array_size_t)L_6, (il2cpp_array_size_t)L_7 };
		BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* L_8 = (BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4*)GenArrayNew(BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4_il2cpp_TypeInfo_var, L_9);
		__this->set_graph_10(L_8);
		Algorithm__ctor_m7350F7A6A79476CF0CB7A8793EE9D3F3C57F60D3(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Test::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test__cctor_m7BE30F210A30A8FF56E6F59B2A6F73BF333D46DE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Random r = new Random();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_0, /*hidden argument*/NULL);
		((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->set_r_4(L_0);
		// static int n = r.Next(2, 21);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_1 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_r_4();
		int32_t L_2;
		L_2 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_1, 2, ((int32_t)21));
		((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->set_n_5(L_2);
		// static int edges = r.Next(n-1, n*(n-1)/2);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_3 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_r_4();
		int32_t L_4 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_n_5();
		int32_t L_5 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_n_5();
		int32_t L_6 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_n_5();
		int32_t L_7;
		L_7 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_3, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)), ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1))))/(int32_t)2)));
		((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->set_edges_6(L_7);
		// static double degrees = 2*Math.PI / n;
		int32_t L_8 = ((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->get_n_5();
		((Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_StaticFields*)il2cpp_codegen_static_fields_for(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_il2cpp_TypeInfo_var))->set_degrees_8(((double)((double)(6.2831853071795862)/(double)((double)((double)L_8)))));
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
// System.Void TreeBuilder::setCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeBuilder_setCam_m79DAF428DB8A8802451F976BD11B93EC9BEF5D7F (TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float z = -2*(depth+1);
		int32_t L_0 = __this->get_depth_5();
		V_0 = ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)-2), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1))))));
		// Camera.main.transform.position = new Vector3(0, 5, (float)(z) );
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		float L_3 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (0.0f), (5.0f), ((float)((float)L_3)), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_4, /*hidden argument*/NULL);
		// Camera.main.farClipPlane = (float)(-1.1*z + 200);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5;
		L_5 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		float L_6 = V_0;
		Camera_set_farClipPlane_m63F1302068433A72A5103281327C68CD8F67AD41(L_5, ((float)((float)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)(-1.1000000000000001), (double)((double)((double)L_6)))), (double)(200.0))))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TreeBuilder::resetPositions(TreeBuilder/TreeNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeBuilder_resetPositions_m94D2731BDFE7166481A38C93D132EFE1DA5C26E9 (TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC * __this, TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(root.children[0] != null && root.children[0].o != null){
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_0 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_1 = L_0->get_children_1();
		int32_t L_2 = 0;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0138;
		}
	}
	{
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_4 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_5 = L_4->get_children_1();
		int32_t L_6 = 0;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7->get_o_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0138;
		}
	}
	{
		// root.children[0].o.transform.position = new Vector3(root.o.transform.position.x - root.children[0].childVolumes[1] - 1, root.children[0].o.transform.position.y, 0);
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_10 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_11 = L_10->get_children_1();
		int32_t L_12 = 0;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = L_13->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_16 = ___root0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = L_16->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_x_0();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_21 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_22 = L_21->get_children_1();
		int32_t L_23 = 0;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_24 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_25 = L_24->get_childVolumes_4();
		int32_t L_26 = 1;
		int32_t L_27 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_28 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_29 = L_28->get_children_1();
		int32_t L_30 = 0;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_31 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = L_31->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_32, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_33, /*hidden argument*/NULL);
		float L_35 = L_34.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_36), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_20, (float)((float)((float)L_27)))), (float)(1.0f))), L_35, (0.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_15, L_36, /*hidden argument*/NULL);
		// root.children[0].parentEdge.SetPosition(0, new Vector3(root.o.transform.position.x, root.o.transform.position.y, 0)); //x,y and z position of the starting point of the line
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_37 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_38 = L_37->get_children_1();
		int32_t L_39 = 0;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_40 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_41 = L_40->get_parentEdge_5();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_42 = ___root0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = L_42->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_43, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_44, /*hidden argument*/NULL);
		float L_46 = L_45.get_x_0();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_47 = ___root0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48 = L_47->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_48, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_49, /*hidden argument*/NULL);
		float L_51 = L_50.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_52), L_46, L_51, (0.0f), /*hidden argument*/NULL);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_41, 0, L_52, /*hidden argument*/NULL);
		// root.children[0].parentEdge.SetPosition(1, new Vector3(root.children[0].o.transform.position.x, root.children[0].o.transform.position.y, 0)); //x,y and z position of the starting point of the line
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_53 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_54 = L_53->get_children_1();
		int32_t L_55 = 0;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_56 = (L_54)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_57 = L_56->get_parentEdge_5();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_58 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_59 = L_58->get_children_1();
		int32_t L_60 = 0;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_61 = (L_59)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62 = L_61->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63;
		L_63 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_62, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		L_64 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_63, /*hidden argument*/NULL);
		float L_65 = L_64.get_x_0();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_66 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_67 = L_66->get_children_1();
		int32_t L_68 = 0;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_69 = (L_67)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_68));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70 = L_69->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_71;
		L_71 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_70, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
		L_72 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_71, /*hidden argument*/NULL);
		float L_73 = L_72.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74;
		memset((&L_74), 0, sizeof(L_74));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_74), L_65, L_73, (0.0f), /*hidden argument*/NULL);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_57, 1, L_74, /*hidden argument*/NULL);
		// resetPositions(root.children[0]);
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_75 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_76 = L_75->get_children_1();
		int32_t L_77 = 0;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_78 = (L_76)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_77));
		TreeBuilder_resetPositions_m94D2731BDFE7166481A38C93D132EFE1DA5C26E9(__this, L_78, /*hidden argument*/NULL);
	}

IL_0138:
	{
		// if (root.children[1] != null && root.children[1].o != null){
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_79 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_80 = L_79->get_children_1();
		int32_t L_81 = 1;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_82 = (L_80)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_81));
		if (!L_82)
		{
			goto IL_0270;
		}
	}
	{
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_83 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_84 = L_83->get_children_1();
		int32_t L_85 = 1;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_86 = (L_84)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_85));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_87 = L_86->get_o_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_88;
		L_88 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_87, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_88)
		{
			goto IL_0270;
		}
	}
	{
		// root.children[1].o.transform.position = new Vector3(root.o.transform.position.x + root.children[1].childVolumes[0] + 1, root.children[1].o.transform.position.y, 0);
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_89 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_90 = L_89->get_children_1();
		int32_t L_91 = 1;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_92 = (L_90)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_91));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_93 = L_92->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_94;
		L_94 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_93, /*hidden argument*/NULL);
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_95 = ___root0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_96 = L_95->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_97;
		L_97 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_96, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_98;
		L_98 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_97, /*hidden argument*/NULL);
		float L_99 = L_98.get_x_0();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_100 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_101 = L_100->get_children_1();
		int32_t L_102 = 1;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_103 = (L_101)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_102));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_104 = L_103->get_childVolumes_4();
		int32_t L_105 = 0;
		int32_t L_106 = (L_104)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_105));
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_107 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_108 = L_107->get_children_1();
		int32_t L_109 = 1;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_110 = (L_108)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_109));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_111 = L_110->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_112;
		L_112 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_111, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_113;
		L_113 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_112, /*hidden argument*/NULL);
		float L_114 = L_113.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_115;
		memset((&L_115), 0, sizeof(L_115));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_115), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_99, (float)((float)((float)L_106)))), (float)(1.0f))), L_114, (0.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_94, L_115, /*hidden argument*/NULL);
		// root.children[1].parentEdge.SetPosition(0, new Vector3(root.o.transform.position.x, root.o.transform.position.y, 0)); //x,y and z position of the starting point of the line
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_116 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_117 = L_116->get_children_1();
		int32_t L_118 = 1;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_119 = (L_117)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_118));
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_120 = L_119->get_parentEdge_5();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_121 = ___root0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_122 = L_121->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_123;
		L_123 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_122, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_124;
		L_124 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_123, /*hidden argument*/NULL);
		float L_125 = L_124.get_x_0();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_126 = ___root0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_127 = L_126->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_128;
		L_128 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_127, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_129;
		L_129 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_128, /*hidden argument*/NULL);
		float L_130 = L_129.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_131;
		memset((&L_131), 0, sizeof(L_131));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_131), L_125, L_130, (0.0f), /*hidden argument*/NULL);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_120, 0, L_131, /*hidden argument*/NULL);
		// root.children[1].parentEdge.SetPosition(1, new Vector3(root.children[1].o.transform.position.x, root.children[1].o.transform.position.y, 0)); //x,y and z position of the starting point of the line
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_132 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_133 = L_132->get_children_1();
		int32_t L_134 = 1;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_135 = (L_133)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_134));
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_136 = L_135->get_parentEdge_5();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_137 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_138 = L_137->get_children_1();
		int32_t L_139 = 1;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_140 = (L_138)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_139));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_141 = L_140->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_142;
		L_142 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_141, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_143;
		L_143 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_142, /*hidden argument*/NULL);
		float L_144 = L_143.get_x_0();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_145 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_146 = L_145->get_children_1();
		int32_t L_147 = 1;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_148 = (L_146)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_147));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_149 = L_148->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_150;
		L_150 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_149, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_151;
		L_151 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_150, /*hidden argument*/NULL);
		float L_152 = L_151.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_153;
		memset((&L_153), 0, sizeof(L_153));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_153), L_144, L_152, (0.0f), /*hidden argument*/NULL);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_136, 1, L_153, /*hidden argument*/NULL);
		// resetPositions(root.children[1]);
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_154 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_155 = L_154->get_children_1();
		int32_t L_156 = 1;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_157 = (L_155)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_156));
		TreeBuilder_resetPositions_m94D2731BDFE7166481A38C93D132EFE1DA5C26E9(__this, L_157, /*hidden argument*/NULL);
	}

IL_0270:
	{
		// }
		return;
	}
}
// System.Void TreeBuilder::InOrderSearch(TreeBuilder/TreeNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeBuilder_InOrderSearch_m026E5D1F65012FFD45A9EB9E35527F753A5EE40B (TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC * __this, TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(root.children[0] != null){
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_0 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_1 = L_0->get_children_1();
		int32_t L_2 = 0;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// InOrderSearch(root.children[0]);
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_4 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_5 = L_4->get_children_1();
		int32_t L_6 = 0;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		TreeBuilder_InOrderSearch_m026E5D1F65012FFD45A9EB9E35527F753A5EE40B(__this, L_7, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// q.Enqueue(new QueueCommand(1, root, null, -1));
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_8 = __this->get_q_7();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_9 = ___root0;
		QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_10 = (QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA *)il2cpp_codegen_object_new(QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m8D9B039659E872A481176B078FF23FD94A31D0F0(L_10, (int16_t)1, L_9, (TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 *)NULL, (int16_t)(-1), /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_8, L_10);
		// if(root.children[1] != null){
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_11 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_12 = L_11->get_children_1();
		int32_t L_13 = 1;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		if (!L_14)
		{
			goto IL_0044;
		}
	}
	{
		// InOrderSearch(root.children[1]);
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_15 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_16 = L_15->get_children_1();
		int32_t L_17 = 1;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_18 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		TreeBuilder_InOrderSearch_m026E5D1F65012FFD45A9EB9E35527F753A5EE40B(__this, L_18, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void TreeBuilder::PreOrderSearch(TreeBuilder/TreeNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeBuilder_PreOrderSearch_mC91CDC4C114347BFF705C761587AF239BE5C1C94 (TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC * __this, TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// q.Enqueue(new QueueCommand(1, root, null, -1));
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_0 = __this->get_q_7();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_1 = ___root0;
		QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_2 = (QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA *)il2cpp_codegen_object_new(QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m8D9B039659E872A481176B078FF23FD94A31D0F0(L_2, (int16_t)1, L_1, (TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 *)NULL, (int16_t)(-1), /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_0, L_2);
		// if(root.children[0] != null){
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_3 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_4 = L_3->get_children_1();
		int32_t L_5 = 0;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		// PreOrderSearch(root.children[0]);
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_7 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_8 = L_7->get_children_1();
		int32_t L_9 = 0;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		TreeBuilder_PreOrderSearch_mC91CDC4C114347BFF705C761587AF239BE5C1C94(__this, L_10, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// if(root.children[1] != null){
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_11 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_12 = L_11->get_children_1();
		int32_t L_13 = 1;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		if (!L_14)
		{
			goto IL_0044;
		}
	}
	{
		// PreOrderSearch(root.children[1]);
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_15 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_16 = L_15->get_children_1();
		int32_t L_17 = 1;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_18 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		TreeBuilder_PreOrderSearch_mC91CDC4C114347BFF705C761587AF239BE5C1C94(__this, L_18, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void TreeBuilder::PostOrderSearch(TreeBuilder/TreeNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeBuilder_PostOrderSearch_m650CB61A78F38DA6DD2A68C48F3FBF58951E51AD (TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC * __this, TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(root.children[0] != null){
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_0 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_1 = L_0->get_children_1();
		int32_t L_2 = 0;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// PostOrderSearch(root.children[0]);
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_4 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_5 = L_4->get_children_1();
		int32_t L_6 = 0;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		TreeBuilder_PostOrderSearch_m650CB61A78F38DA6DD2A68C48F3FBF58951E51AD(__this, L_7, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// if(root.children[1] != null){
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_8 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_9 = L_8->get_children_1();
		int32_t L_10 = 1;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		if (!L_11)
		{
			goto IL_0030;
		}
	}
	{
		// PostOrderSearch(root.children[1]);
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_12 = ___root0;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_13 = L_12->get_children_1();
		int32_t L_14 = 1;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_15 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		TreeBuilder_PostOrderSearch_m650CB61A78F38DA6DD2A68C48F3FBF58951E51AD(__this, L_15, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// q.Enqueue(new QueueCommand(1, root, null, -1));
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_16 = __this->get_q_7();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_17 = ___root0;
		QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_18 = (QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA *)il2cpp_codegen_object_new(QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m8D9B039659E872A481176B078FF23FD94A31D0F0(L_18, (int16_t)1, L_17, (TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 *)NULL, (int16_t)(-1), /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_16, L_18);
		// }
		return;
	}
}
// System.Void TreeBuilder::BreadthFirstSearch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeBuilder_BreadthFirstSearch_m9B4AC046C28EEEC83488A800208980B79E95D8BB (TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mE769A068858C351A22BA1A341DD8F446295CA684_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mBC976D1A97736DD12B93A7BDCCF45F2E5416AF1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_m583BDCD58C0011967FCAE7D16E3AE2F0A3AE2FDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mE7983B662E1519BC849AD5BB4674F9B1813C950D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m411FBCF7CE9A9507EE8A494554748E6A165B2114_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2 * V_0 = NULL;
	int32_t V_1 = 0;
	TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * V_2 = NULL;
	{
		// Queue<TreeNode> queue = new Queue<TreeNode>();
		Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2 * L_0 = (Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2 *)il2cpp_codegen_object_new(Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2_il2cpp_TypeInfo_var);
		Queue_1__ctor_mE7983B662E1519BC849AD5BB4674F9B1813C950D(L_0, /*hidden argument*/Queue_1__ctor_mE7983B662E1519BC849AD5BB4674F9B1813C950D_RuntimeMethod_var);
		V_0 = L_0;
		// queue.Enqueue(root);
		Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2 * L_1 = V_0;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_2 = __this->get_root_4();
		Queue_1_Enqueue_mBC976D1A97736DD12B93A7BDCCF45F2E5416AF1B(L_1, L_2, /*hidden argument*/Queue_1_Enqueue_mBC976D1A97736DD12B93A7BDCCF45F2E5416AF1B_RuntimeMethod_var);
		// q.Enqueue(new QueueCommand(1, root, null, -1));
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_3 = __this->get_q_7();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_4 = __this->get_root_4();
		QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_5 = (QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA *)il2cpp_codegen_object_new(QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m8D9B039659E872A481176B078FF23FD94A31D0F0(L_5, (int16_t)1, L_4, (TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 *)NULL, (int16_t)(-1), /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_3, L_5);
		goto IL_0093;
	}

IL_002d:
	{
		// TreeNode peek = queue.Peek();
		Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2 * L_6 = V_0;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_7;
		L_7 = Queue_1_Peek_m583BDCD58C0011967FCAE7D16E3AE2F0A3AE2FDA(L_6, /*hidden argument*/Queue_1_Peek_m583BDCD58C0011967FCAE7D16E3AE2F0A3AE2FDA_RuntimeMethod_var);
		V_2 = L_7;
		// for(i = 0; i < peek.children.Length;i++){
		V_1 = 0;
		goto IL_006f;
	}

IL_0038:
	{
		// if (peek.children[i] != null){
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_8 = V_2;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_9 = L_8->get_children_1();
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		// q.Enqueue(new QueueCommand(1, peek.children[i], null,-1));
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_13 = __this->get_q_7();
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_14 = V_2;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_15 = L_14->get_children_1();
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_19 = (QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA *)il2cpp_codegen_object_new(QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m8D9B039659E872A481176B078FF23FD94A31D0F0(L_19, (int16_t)1, L_18, (TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 *)NULL, (int16_t)(-1), /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_13, L_19);
		// queue.Enqueue(peek.children[i]);
		Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2 * L_20 = V_0;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_21 = V_2;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_22 = L_21->get_children_1();
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		Queue_1_Enqueue_mBC976D1A97736DD12B93A7BDCCF45F2E5416AF1B(L_20, L_25, /*hidden argument*/Queue_1_Enqueue_mBC976D1A97736DD12B93A7BDCCF45F2E5416AF1B_RuntimeMethod_var);
	}

IL_006b:
	{
		// for(i = 0; i < peek.children.Length;i++){
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_006f:
	{
		// for(i = 0; i < peek.children.Length;i++){
		int32_t L_27 = V_1;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_28 = V_2;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_29 = L_28->get_children_1();
		if ((((int32_t)L_27) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		// q.Enqueue(new QueueCommand(2, queue.Dequeue(), null,-1));
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_30 = __this->get_q_7();
		Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2 * L_31 = V_0;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_32;
		L_32 = Queue_1_Dequeue_mE769A068858C351A22BA1A341DD8F446295CA684(L_31, /*hidden argument*/Queue_1_Dequeue_mE769A068858C351A22BA1A341DD8F446295CA684_RuntimeMethod_var);
		QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_33 = (QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA *)il2cpp_codegen_object_new(QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA_il2cpp_TypeInfo_var);
		QueueCommand__ctor_m8D9B039659E872A481176B078FF23FD94A31D0F0(L_33, (int16_t)2, L_32, (TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 *)NULL, (int16_t)(-1), /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject * >::Invoke(11 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_30, L_33);
	}

IL_0093:
	{
		// while(queue.Count > 0){
		Queue_1_t9789A254EA3C6B0D63F4A07689249638D00F4FE2 * L_34 = V_0;
		int32_t L_35;
		L_35 = Queue_1_get_Count_m411FBCF7CE9A9507EE8A494554748E6A165B2114_inline(L_34, /*hidden argument*/Queue_1_get_Count_m411FBCF7CE9A9507EE8A494554748E6A165B2114_RuntimeMethod_var);
		if ((((int32_t)L_35) > ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator TreeBuilder::readQueue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeBuilder_readQueue_m1AEAF373FC3869FCD676EC4883D59DB15731BAEB (TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC * __this, float ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CreadQueueU3Ed__13_t6F0C1ECD9FAFBBD32DA5617BD6250B17D9F58C2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CreadQueueU3Ed__13_t6F0C1ECD9FAFBBD32DA5617BD6250B17D9F58C2A * L_0 = (U3CreadQueueU3Ed__13_t6F0C1ECD9FAFBBD32DA5617BD6250B17D9F58C2A *)il2cpp_codegen_object_new(U3CreadQueueU3Ed__13_t6F0C1ECD9FAFBBD32DA5617BD6250B17D9F58C2A_il2cpp_TypeInfo_var);
		U3CreadQueueU3Ed__13__ctor_mF0013D373DB208DE44D62BB42BE6004FD6722531(L_0, 0, /*hidden argument*/NULL);
		U3CreadQueueU3Ed__13_t6F0C1ECD9FAFBBD32DA5617BD6250B17D9F58C2A * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		U3CreadQueueU3Ed__13_t6F0C1ECD9FAFBBD32DA5617BD6250B17D9F58C2A * L_2 = L_1;
		float L_3 = ___time0;
		L_2->set_time_3(L_3);
		return L_2;
	}
}
// System.Void TreeBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeBuilder__ctor_m094BE2A69CDAB158653A570129EA124BA7BFE8D3 (TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_t66723C58C7422102C36F8570BE048BD0CC489E52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Queue q = new Queue();
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_0 = (Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 *)il2cpp_codegen_object_new(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52_il2cpp_TypeInfo_var);
		Queue__ctor_m9844D111CC69802C62565C05109A2557FD21C127(L_0, /*hidden argument*/NULL);
		__this->set_q_7(L_0);
		// protected Random r = new Random();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_1 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_1, /*hidden argument*/NULL);
		__this->set_r_8(L_1);
		Algorithm__ctor_m7350F7A6A79476CF0CB7A8793EE9D3F3C57F60D3(__this, /*hidden argument*/NULL);
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
// System.Void newTest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void newTest_Start_m34B3BCCA2E67BE5C4969D5D49B9CBA65772063D2 (newTest_tEE6FBF90566D39E695646B45EA22384746C9B8AC * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void newTest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void newTest_Update_m4333AC6EB28E648AB3F03B8341518C48A001979A (newTest_tEE6FBF90566D39E695646B45EA22384746C9B8AC * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void newTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void newTest__ctor_m64E401730497280A8CC3225CB6A6B0D608AEC97C (newTest_tEE6FBF90566D39E695646B45EA22384746C9B8AC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void BellmanFord/BellmanFordVertex::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BellmanFordVertex__ctor_mB115F4DAEA241CA9B8092F55663929476210E2DA (BellmanFordVertex_t1BC89ABC4D58865AC6C075E9D72FBC54EEDC2802 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public BellmanFordVertex(int value) : base(value){
		int32_t L_0 = ___value0;
		Vertex__ctor_m3428AE6EBA9F95E4B5BC17E40A0CEC0051B5D2B0(__this, L_0, /*hidden argument*/NULL);
		// weight = double.PositiveInfinity;
		__this->set_weight_4((std::numeric_limits<double>::infinity()));
		// }
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
// System.Void ColorGraph/ColorGraphVertex::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorGraphVertex__ctor_mFE23E2F7A268F4E32BE3CAE1B9198681488C3718 (ColorGraphVertex_t3712EF76D877B427BED45A6232363CFC73610D67 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ColorGraphVertex(int value) : base(value){
		int32_t L_0 = ___value0;
		Vertex__ctor_m3428AE6EBA9F95E4B5BC17E40A0CEC0051B5D2B0(__this, L_0, /*hidden argument*/NULL);
		// colorId = 0;
		__this->set_colorId_3(0);
		// }
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
// System.Void CountingSort/ArrayIndexWithRepetition::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayIndexWithRepetition__ctor_m2F198B1B2801D72D606CA8DF5A04C3D882E6EA9E (ArrayIndexWithRepetition_tD46B46909AB1496831848484F2F397F6136382E3 * __this, int32_t ___value0, int32_t ___position1, const RuntimeMethod* method)
{
	{
		// public ArrayIndexWithRepetition(int value, int position) : base(){
		ArrayIndex__ctor_m132D08AAD796EA0F5AC7518E94787C5CDC8DC23A(__this, /*hidden argument*/NULL);
		// this.value = value;
		int32_t L_0 = ___value0;
		((ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 *)__this)->set_value_1(L_0);
		// o = GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC(3, /*hidden argument*/NULL);
		((ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 *)__this)->set_o_0(L_1);
		// o.transform.position = new Vector3(position, (value+1)*.5f, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ((ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 *)__this)->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___position1;
		int32_t L_5 = ___value0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((float)((float)L_4)), ((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)))), (float)(0.5f))), (0.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_6, /*hidden argument*/NULL);
		// o.transform.localScale = new Vector3(1, value + 1, 1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = ((ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 *)__this)->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		int32_t L_9 = ___value0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), (1.0f), ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)))), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_8, L_10, /*hidden argument*/NULL);
		// }
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
// System.Void Dijkstra/DijkstraVertex::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DijkstraVertex__ctor_m0534B1B0C4A6F2A9307C3B5B1B91BA6CE05EDAFF (DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public DijkstraVertex(int value) : base(value){
		int32_t L_0 = ___value0;
		Vertex__ctor_m3428AE6EBA9F95E4B5BC17E40A0CEC0051B5D2B0(__this, L_0, /*hidden argument*/NULL);
		// weight = double.PositiveInfinity;
		__this->set_weight_4((std::numeric_limits<double>::infinity()));
		// }
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
// System.Void Dijkstra/List::.ctor(Dijkstra/DijkstraVertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List__ctor_m22DFD766BC62740756C8FAF441C805A1934B3C3F (List_tA99646B75D64090652E535E147AF8DE405D97434 * __this, DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * ___vertex0, const RuntimeMethod* method)
{
	{
		// public List(DijkstraVertex vertex){
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.vertex = vertex;
		DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_0 = ___vertex0;
		__this->set_vertex_0(L_0);
		// next = null;
		__this->set_next_1((List_tA99646B75D64090652E535E147AF8DE405D97434 *)NULL);
		// }
		return;
	}
}
// System.Void Dijkstra/List::insert(Dijkstra/DijkstraVertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_insert_mF79DB84B6A770238AD6A6785844C9BBAA502D481 (List_tA99646B75D64090652E535E147AF8DE405D97434 * __this, DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_tA99646B75D64090652E535E147AF8DE405D97434_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_tA99646B75D64090652E535E147AF8DE405D97434 * V_0 = NULL;
	List_tA99646B75D64090652E535E147AF8DE405D97434 * V_1 = NULL;
	{
		// temp1 = head;
		List_tA99646B75D64090652E535E147AF8DE405D97434 * L_0 = ((Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_StaticFields*)il2cpp_codegen_static_fields_for(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817_il2cpp_TypeInfo_var))->get_head_13();
		V_0 = L_0;
		goto IL_000f;
	}

IL_0008:
	{
		// temp1 = temp1.next;
		List_tA99646B75D64090652E535E147AF8DE405D97434 * L_1 = V_0;
		List_tA99646B75D64090652E535E147AF8DE405D97434 * L_2 = L_1->get_next_1();
		V_0 = L_2;
	}

IL_000f:
	{
		// while (temp1.next != null && temp1.next.vertex.weight < v.weight){
		List_tA99646B75D64090652E535E147AF8DE405D97434 * L_3 = V_0;
		List_tA99646B75D64090652E535E147AF8DE405D97434 * L_4 = L_3->get_next_1();
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		List_tA99646B75D64090652E535E147AF8DE405D97434 * L_5 = V_0;
		List_tA99646B75D64090652E535E147AF8DE405D97434 * L_6 = L_5->get_next_1();
		DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_7 = L_6->get_vertex_0();
		double L_8 = L_7->get_weight_4();
		DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_9 = ___v0;
		double L_10 = L_9->get_weight_4();
		if ((((double)L_8) < ((double)L_10)))
		{
			goto IL_0008;
		}
	}

IL_002f:
	{
		// temp2 = temp1.next;
		List_tA99646B75D64090652E535E147AF8DE405D97434 * L_11 = V_0;
		List_tA99646B75D64090652E535E147AF8DE405D97434 * L_12 = L_11->get_next_1();
		V_1 = L_12;
		// temp1.next = new List(v);
		List_tA99646B75D64090652E535E147AF8DE405D97434 * L_13 = V_0;
		DijkstraVertex_tA0A9F02B14100A6622B39CA468442F19C1120D8D * L_14 = ___v0;
		List_tA99646B75D64090652E535E147AF8DE405D97434 * L_15 = (List_tA99646B75D64090652E535E147AF8DE405D97434 *)il2cpp_codegen_object_new(List_tA99646B75D64090652E535E147AF8DE405D97434_il2cpp_TypeInfo_var);
		List__ctor_m22DFD766BC62740756C8FAF441C805A1934B3C3F(L_15, L_14, /*hidden argument*/NULL);
		L_13->set_next_1(L_15);
		// temp1.next.next = temp2;
		List_tA99646B75D64090652E535E147AF8DE405D97434 * L_16 = V_0;
		List_tA99646B75D64090652E535E147AF8DE405D97434 * L_17 = L_16->get_next_1();
		List_tA99646B75D64090652E535E147AF8DE405D97434 * L_18 = V_1;
		L_17->set_next_1(L_18);
		// }
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
// System.Void Graph/<readQueue>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__17__ctor_mD2AD08F4FD2B11433BEFA12F5A603A809CE54D9B (U3CreadQueueU3Ed__17_tE98D5B6097888700C315BAE31B0B699EF4396465 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Graph/<readQueue>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__17_System_IDisposable_Dispose_mE9B0572B47A105607115A5D6FFE235CC0A786733 (U3CreadQueueU3Ed__17_tE98D5B6097888700C315BAE31B0B699EF4396465 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1))) <= ((uint32_t)1))))
		{
			goto IL_001c;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1C, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		U3CreadQueueU3Ed__17_U3CU3Em__Finally1_m03E09FE86EF0FBFD332CCE39932E67A0C89AF525(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(21)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1C, IL_001c)
	}

IL_001c:
	{
		return;
	}
}
// System.Boolean Graph/<readQueue>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CreadQueueU3Ed__17_MoveNext_m9696EFB74A69087AE17461EFBB78098A68AE58F2 (U3CreadQueueU3Ed__17_tE98D5B6097888700C315BAE31B0B699EF4396465 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * V_2 = NULL;
	QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * V_3 = NULL;
	int16_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0027;
				}
				case 1:
				{
					goto IL_00bf;
				}
				case 2:
				{
					goto IL_0108;
				}
			}
		}

IL_0020:
		{
			V_0 = (bool)0;
			goto IL_0152;
		}

IL_0027:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach(QueueCommand q in queue){
			Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * L_3 = V_2;
			Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_4 = L_3->get_queue_10();
			RuntimeObject* L_5;
			L_5 = VirtFuncInvoker0< RuntimeObject* >::Invoke(12 /* System.Collections.IEnumerator System.Collections.Queue::GetEnumerator() */, L_4);
			__this->set_U3CU3E7__wrap1_3(L_5);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_012a;
		}

IL_004c:
		{
			// foreach(QueueCommand q in queue){
			RuntimeObject* L_6 = __this->get_U3CU3E7__wrap1_3();
			RuntimeObject * L_7;
			L_7 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_6);
			V_3 = ((QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 *)CastclassClass((RuntimeObject*)L_7, QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8_il2cpp_TypeInfo_var));
			// if(q.commandId > 3){
			QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_8 = V_3;
			int16_t L_9 = L_8->get_commandId_0();
			if ((((int32_t)L_9) <= ((int32_t)3)))
			{
				goto IL_006d;
			}
		}

IL_0066:
		{
			// extendCommands(q);
			Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * L_10 = V_2;
			QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_11 = V_3;
			VirtActionInvoker1< QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * >::Invoke(4 /* System.Void Graph::extendCommands(Graph/QueueCommand) */, L_10, L_11);
		}

IL_006d:
		{
			// switch(q.commandId){
			QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_12 = V_3;
			int16_t L_13 = L_12->get_commandId_0();
			V_4 = L_13;
			int16_t L_14 = V_4;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)))
			{
				case 0:
				{
					goto IL_008f;
				}
				case 1:
				{
					goto IL_00c9;
				}
				case 2:
				{
					goto IL_0112;
				}
			}
		}

IL_008a:
		{
			goto IL_012a;
		}

IL_008f:
		{
			// changeVertexColor(q.v1, q.additionalInfo);
			Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * L_15 = V_2;
			QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_16 = V_3;
			int32_t L_17 = L_16->get_v1_2();
			QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_18 = V_3;
			int16_t L_19 = L_18->get_additionalInfo_1();
			Graph_changeVertexColor_m9E48A07A9F0089ED18E84ACB8D97CED76CD9F55E(L_15, L_17, L_19, /*hidden argument*/NULL);
			// yield return new WaitForSeconds(1);
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_20 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_20, (1.0f), /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_20);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0152;
		}

IL_00bf:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// break;
			goto IL_012a;
		}

IL_00c9:
		{
			// changeVertexColor(q.v1, q.additionalInfo);
			Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * L_21 = V_2;
			QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_22 = V_3;
			int32_t L_23 = L_22->get_v1_2();
			QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_24 = V_3;
			int16_t L_25 = L_24->get_additionalInfo_1();
			Graph_changeVertexColor_m9E48A07A9F0089ED18E84ACB8D97CED76CD9F55E(L_21, L_23, L_25, /*hidden argument*/NULL);
			// changeVertexColor(q.v2, q.additionalInfo);
			Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * L_26 = V_2;
			QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_27 = V_3;
			int32_t L_28 = L_27->get_v2_3();
			QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_29 = V_3;
			int16_t L_30 = L_29->get_additionalInfo_1();
			Graph_changeVertexColor_m9E48A07A9F0089ED18E84ACB8D97CED76CD9F55E(L_26, L_28, L_30, /*hidden argument*/NULL);
			// yield return new WaitForSeconds(1);
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_31 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_31, (1.0f), /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_31);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_0152;
		}

IL_0108:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// break;
			goto IL_012a;
		}

IL_0112:
		{
			// changeEdgeColor(q.v1, q.v2, q.additionalInfo);
			Graph_tA21CC768C2B78536E792E6AEC17BA96FC0161AC1 * L_32 = V_2;
			QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_33 = V_3;
			int32_t L_34 = L_33->get_v1_2();
			QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_35 = V_3;
			int32_t L_36 = L_35->get_v2_3();
			QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * L_37 = V_3;
			int16_t L_38 = L_37->get_additionalInfo_1();
			Graph_changeEdgeColor_m9AA6C78880D7F96392FB89F4E09CE84DA39F8276(L_32, L_34, L_36, L_38, /*hidden argument*/NULL);
		}

IL_012a:
		{
			// foreach(QueueCommand q in queue){
			RuntimeObject* L_39 = __this->get_U3CU3E7__wrap1_3();
			bool L_40;
			L_40 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_39);
			if (L_40)
			{
				goto IL_004c;
			}
		}

IL_013a:
		{
			U3CreadQueueU3Ed__17_U3CU3Em__Finally1_m03E09FE86EF0FBFD332CCE39932E67A0C89AF525(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_3((RuntimeObject*)NULL);
			// }
			V_0 = (bool)0;
			goto IL_0152;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_014b;
	}

FAULT_014b:
	{ // begin fault (depth: 1)
		U3CreadQueueU3Ed__17_System_IDisposable_Dispose_mE9B0572B47A105607115A5D6FFE235CC0A786733(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(331)
	} // end fault
	IL2CPP_CLEANUP(331)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0152:
	{
		bool L_41 = V_0;
		return L_41;
	}
}
// System.Void Graph/<readQueue>d__17::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__17_U3CU3Em__Finally1_m03E09FE86EF0FBFD332CCE39932E67A0C89AF525 (U3CreadQueueU3Ed__17_tE98D5B6097888700C315BAE31B0B699EF4396465 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_3();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_2);
	}

IL_001c:
	{
		return;
	}
}
// System.Object Graph/<readQueue>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CreadQueueU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2291648AFE30372FED46735870EDB2CDA0D6341D (U3CreadQueueU3Ed__17_tE98D5B6097888700C315BAE31B0B699EF4396465 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Graph/<readQueue>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__17_System_Collections_IEnumerator_Reset_m2EB8636ECF04589BD99DFB947D20C2A610D31541 (U3CreadQueueU3Ed__17_tE98D5B6097888700C315BAE31B0B699EF4396465 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CreadQueueU3Ed__17_System_Collections_IEnumerator_Reset_m2EB8636ECF04589BD99DFB947D20C2A610D31541_RuntimeMethod_var)));
	}
}
// System.Object Graph/<readQueue>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CreadQueueU3Ed__17_System_Collections_IEnumerator_get_Current_mBEAE1F75ADA592EB33502B03A472C5F4A0383309 (U3CreadQueueU3Ed__17_tE98D5B6097888700C315BAE31B0B699EF4396465 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Graph/QueueCommand::.ctor(System.Int16,System.Int32,System.Int32,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueCommand__ctor_m037EA2031412994E23AC3107248A35F70A4F7863 (QueueCommand_t57D665B60E8821FAACD4C0C90F92D5131B5ED0E8 * __this, int16_t ___commandId0, int32_t ___v11, int32_t ___v22, int16_t ___additionalInfo3, const RuntimeMethod* method)
{
	{
		// public QueueCommand(short commandId, int v1, int v2, short additionalInfo){
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.commandId = commandId;
		int16_t L_0 = ___commandId0;
		__this->set_commandId_0(L_0);
		// this.v1 = v1;
		int32_t L_1 = ___v11;
		__this->set_v1_2(L_1);
		// this.v2 = v2;
		int32_t L_2 = ___v22;
		__this->set_v2_3(L_2);
		// this.additionalInfo = additionalInfo;
		int16_t L_3 = ___additionalInfo3;
		__this->set_additionalInfo_1(L_3);
		// }
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
// System.Void Graph/Vertex::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_m3428AE6EBA9F95E4B5BC17E40A0CEC0051B5D2B0 (Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vertex(int value){
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.value = value;
		int32_t L_0 = ___value0;
		__this->set_value_0(L_0);
		// neighbors = new ArrayList();
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_1 = (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 *)il2cpp_codegen_object_new(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B(L_1, /*hidden argument*/NULL);
		__this->set_neighbors_2(L_1);
		// }
		return;
	}
}
// System.Void Graph/Vertex::addNeighbor(Graph/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex_addNeighbor_mA6EB29DDFE0C2CD1010B4EBFED04BA8BC24900DF (Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * __this, Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * ___node0, const RuntimeMethod* method)
{
	{
		// neighbors.Add(node);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = __this->get_neighbors_2();
		Vertex_tA47AD909E8519304DA5AB8B61BC0B4860353DEF3 * L_1 = ___node0;
		int32_t L_2;
		L_2 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		// }
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
// System.Void HeapSort/<extendCommands>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CextendCommandsU3Ed__2__ctor_m979D5BE56268A055FB6F1FA5F92FEE783C3AFDCF (U3CextendCommandsU3Ed__2_tB5CB72DF83F7DE624AB1B77724D0CE5FE3FC3FF9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void HeapSort/<extendCommands>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CextendCommandsU3Ed__2_System_IDisposable_Dispose_mDAEA84AA2AC6F81740CD77286064DA11F2D16BBA (U3CextendCommandsU3Ed__2_tB5CB72DF83F7DE624AB1B77724D0CE5FE3FC3FF9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean HeapSort/<extendCommands>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CextendCommandsU3Ed__2_MoveNext_m7FC8EA9BDC17A3D6F398567DC293B1766665BDA1 (U3CextendCommandsU3Ed__2_tB5CB72DF83F7DE624AB1B77724D0CE5FE3FC3FF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HeapSort_tF3A5CBE7F594426C904275F196AC877E1708E50D * V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		HeapSort_tF3A5CBE7F594426C904275F196AC877E1708E50D * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0135;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// switch(command[0])
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = __this->get_command_2();
		int32_t L_5 = 0;
		int16_t L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_011c;
		}
	}
	{
		// float frac = (float)(Math.Ceiling(Math.Log(command[1] + 1.1, 2)) / (Math.Log(size, 2) + 1));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_7 = __this->get_command_2();
		int32_t L_8 = 1;
		int16_t L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = Math_Log_m05D6B4CE873ABBA5D8E39F798BBB67D49ABECE2C(((double)il2cpp_codegen_add((double)((double)((double)L_9)), (double)(1.1000000000000001))), (2.0), /*hidden argument*/NULL);
		double L_11;
		L_11 = ceil(L_10);
		int32_t L_12 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		double L_13;
		L_13 = Math_Log_m05D6B4CE873ABBA5D8E39F798BBB67D49ABECE2C(((double)((double)L_12)), (2.0), /*hidden argument*/NULL);
		V_2 = ((float)((float)((double)((double)L_11/(double)((double)il2cpp_codegen_add((double)L_13, (double)(1.0)))))));
		// array[command[1]].o.GetComponent<Renderer>().material.color = new Color(frac, frac, 1.0f);
		HeapSort_tF3A5CBE7F594426C904275F196AC877E1708E50D * L_14 = V_1;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_15 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)L_14)->get_array_4();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_16 = __this->get_command_2();
		int32_t L_17 = 1;
		int16_t L_18 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		int16_t L_19 = L_18;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_20 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = L_20->get_o_0();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_22;
		L_22 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_21, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_23;
		L_23 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_22, /*hidden argument*/NULL);
		float L_24 = V_2;
		float L_25 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_26), L_24, L_25, (1.0f), /*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_23, L_26, /*hidden argument*/NULL);
		// frac = (float)(Math.Ceiling(Math.Log(command[2] + 1.1, 2)) / (Math.Log(size, 2) + 1));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_27 = __this->get_command_2();
		int32_t L_28 = 2;
		int16_t L_29 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		double L_30;
		L_30 = Math_Log_m05D6B4CE873ABBA5D8E39F798BBB67D49ABECE2C(((double)il2cpp_codegen_add((double)((double)((double)L_29)), (double)(1.1000000000000001))), (2.0), /*hidden argument*/NULL);
		double L_31;
		L_31 = ceil(L_30);
		int32_t L_32 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		double L_33;
		L_33 = Math_Log_m05D6B4CE873ABBA5D8E39F798BBB67D49ABECE2C(((double)((double)L_32)), (2.0), /*hidden argument*/NULL);
		V_2 = ((float)((float)((double)((double)L_31/(double)((double)il2cpp_codegen_add((double)L_33, (double)(1.0)))))));
		// array[command[2]].o.GetComponent<Renderer>().material.color = new Color(frac, frac, 1.0f);
		HeapSort_tF3A5CBE7F594426C904275F196AC877E1708E50D * L_34 = V_1;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_35 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)L_34)->get_array_4();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_36 = __this->get_command_2();
		int32_t L_37 = 2;
		int16_t L_38 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		int16_t L_39 = L_38;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_40 = (L_35)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = L_40->get_o_0();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_42;
		L_42 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_41, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_43;
		L_43 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_42, /*hidden argument*/NULL);
		float L_44 = V_2;
		float L_45 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_46;
		memset((&L_46), 0, sizeof(L_46));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_46), L_44, L_45, (1.0f), /*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_43, L_46, /*hidden argument*/NULL);
	}

IL_011c:
	{
		// yield return new WaitForSeconds(0);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_47 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_47, (0.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_47);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0135:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object HeapSort/<extendCommands>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CextendCommandsU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCA4BC89EC7E6A9B8D23E78342CBA0AD8032AC1CD (U3CextendCommandsU3Ed__2_tB5CB72DF83F7DE624AB1B77724D0CE5FE3FC3FF9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void HeapSort/<extendCommands>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CextendCommandsU3Ed__2_System_Collections_IEnumerator_Reset_mF79779CDC455D17621B23B6D534F5565F6244CF7 (U3CextendCommandsU3Ed__2_tB5CB72DF83F7DE624AB1B77724D0CE5FE3FC3FF9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CextendCommandsU3Ed__2_System_Collections_IEnumerator_Reset_mF79779CDC455D17621B23B6D534F5565F6244CF7_RuntimeMethod_var)));
	}
}
// System.Object HeapSort/<extendCommands>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CextendCommandsU3Ed__2_System_Collections_IEnumerator_get_Current_m9FDABBED14E6F08673586B23838DB3E4F25ABB79 (U3CextendCommandsU3Ed__2_tB5CB72DF83F7DE624AB1B77724D0CE5FE3FC3FF9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void LinkedList/<readQueue>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__8__ctor_mF110FA9A46BB4354E2BE772A58141E85B6F837E9 (U3CreadQueueU3Ed__8_t2A5B5A6D9CA49898AF9467883EB6F38AA0303EB7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void LinkedList/<readQueue>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__8_System_IDisposable_Dispose_mE58046724882DA770990ABE8312D0A92C1317B02 (U3CreadQueueU3Ed__8_t2A5B5A6D9CA49898AF9467883EB6F38AA0303EB7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CreadQueueU3Ed__8_U3CU3Em__Finally1_mFBEC74C4BFEEA0E4835E1CA290A14E81D1490C04(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean LinkedList/<readQueue>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CreadQueueU3Ed__8_MoveNext_m0DAEA30D4C8B927F8529365EED1E62C4D2667D5E (U3CreadQueueU3Ed__8_t2A5B5A6D9CA49898AF9467883EB6F38AA0303EB7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBA5F966551179F5952E00151B19A82AB02D0E01C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB21F69BF7572A716F0D74CA3962F4BAFE060235C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_GetEnumerator_mC035E965383B7C164930DDCFBB43ACD31F54BB48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	LinkedList_t850219D15AE4341ACE77E391A1D59B17C1BF0250 * V_2 = NULL;
	QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C * V_3 = NULL;
	int16_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			LinkedList_t850219D15AE4341ACE77E391A1D59B17C1BF0250 * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001c;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0086;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_00d3;
		}

IL_001c:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach(QueueCommand q in queue){
			LinkedList_t850219D15AE4341ACE77E391A1D59B17C1BF0250 * L_4 = V_2;
			Queue_1_t432AA04A0E323FB4CEF80D71BD51608E0E365C48 * L_5 = L_4->get_queue_5();
			Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB  L_6;
			L_6 = Queue_1_GetEnumerator_mC035E965383B7C164930DDCFBB43ACD31F54BB48(L_5, /*hidden argument*/Queue_1_GetEnumerator_mC035E965383B7C164930DDCFBB43ACD31F54BB48_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_3(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_00a9;
		}

IL_003e:
		{
			// foreach(QueueCommand q in queue){
			Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB * L_7 = __this->get_address_of_U3CU3E7__wrap1_3();
			QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C * L_8;
			L_8 = Enumerator_get_Current_mB21F69BF7572A716F0D74CA3962F4BAFE060235C((Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB *)L_7, /*hidden argument*/Enumerator_get_Current_mB21F69BF7572A716F0D74CA3962F4BAFE060235C_RuntimeMethod_var);
			V_3 = L_8;
			// switch(q.commandId){
			QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C * L_9 = V_3;
			int16_t L_10 = L_9->get_commandId_0();
			V_4 = L_10;
			int16_t L_11 = V_4;
			switch (L_11)
			{
				case 0:
				{
					goto IL_006b;
				}
				case 1:
				{
					goto IL_00a9;
				}
				case 2:
				{
					goto IL_0090;
				}
				case 3:
				{
					goto IL_0098;
				}
			}
		}

IL_0069:
		{
			goto IL_00a9;
		}

IL_006b:
		{
			// yield return new WaitForSeconds(1);
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_12 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_12, (1.0f), /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_12);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00d3;
		}

IL_0086:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// break;
			goto IL_00a9;
		}

IL_0090:
		{
			// reposition();
			LinkedList_t850219D15AE4341ACE77E391A1D59B17C1BF0250 * L_13 = V_2;
			LinkedList_reposition_mCC19617138A3B2A2776EAF4633EDA1C8C36F218C(L_13, /*hidden argument*/NULL);
			// break;
			goto IL_00a9;
		}

IL_0098:
		{
			// q.node1.Object = GameObject.CreatePrimitive(PrimitiveType.Cube);
			QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C * L_14 = V_3;
			LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_15 = L_14->get_node1_1();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
			L_16 = GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC(3, /*hidden argument*/NULL);
			L_15->set_Object_1(L_16);
		}

IL_00a9:
		{
			// foreach(QueueCommand q in queue){
			Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB * L_17 = __this->get_address_of_U3CU3E7__wrap1_3();
			bool L_18;
			L_18 = Enumerator_MoveNext_mBA5F966551179F5952E00151B19A82AB02D0E01C((Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB *)L_17, /*hidden argument*/Enumerator_MoveNext_mBA5F966551179F5952E00151B19A82AB02D0E01C_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_003e;
			}
		}

IL_00b6:
		{
			U3CreadQueueU3Ed__8_U3CU3Em__Finally1_mFBEC74C4BFEEA0E4835E1CA290A14E81D1490C04(__this, /*hidden argument*/NULL);
			Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB * L_19 = __this->get_address_of_U3CU3E7__wrap1_3();
			il2cpp_codegen_initobj(L_19, sizeof(Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB ));
			// }
			V_0 = (bool)0;
			goto IL_00d3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00cc;
	}

FAULT_00cc:
	{ // begin fault (depth: 1)
		U3CreadQueueU3Ed__8_System_IDisposable_Dispose_mE58046724882DA770990ABE8312D0A92C1317B02(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(204)
	} // end fault
	IL2CPP_CLEANUP(204)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d3:
	{
		bool L_20 = V_0;
		return L_20;
	}
}
// System.Void LinkedList/<readQueue>d__8::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__8_U3CU3Em__Finally1_mFBEC74C4BFEEA0E4835E1CA290A14E81D1490C04 (U3CreadQueueU3Ed__8_t2A5B5A6D9CA49898AF9467883EB6F38AA0303EB7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0876A5D053CEC417CA9264BA08ED1E86E1D03DA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB * L_0 = __this->get_address_of_U3CU3E7__wrap1_3();
		Enumerator_Dispose_m0876A5D053CEC417CA9264BA08ED1E86E1D03DA6((Enumerator_t5370A766892D0AF45EC3FCDE5745977319D15CAB *)L_0, /*hidden argument*/Enumerator_Dispose_m0876A5D053CEC417CA9264BA08ED1E86E1D03DA6_RuntimeMethod_var);
		return;
	}
}
// System.Object LinkedList/<readQueue>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CreadQueueU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m212B3B183BF5E09757A806B9F2AD0CCF86FE7507 (U3CreadQueueU3Ed__8_t2A5B5A6D9CA49898AF9467883EB6F38AA0303EB7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void LinkedList/<readQueue>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__8_System_Collections_IEnumerator_Reset_m98BC9E2AE1CDC26BEF138EC588DD0AA3BD91C79B (U3CreadQueueU3Ed__8_t2A5B5A6D9CA49898AF9467883EB6F38AA0303EB7 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CreadQueueU3Ed__8_System_Collections_IEnumerator_Reset_m98BC9E2AE1CDC26BEF138EC588DD0AA3BD91C79B_RuntimeMethod_var)));
	}
}
// System.Object LinkedList/<readQueue>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CreadQueueU3Ed__8_System_Collections_IEnumerator_get_Current_m3EBF4C6073D0656966EA34A21A14E980560E4DD6 (U3CreadQueueU3Ed__8_t2A5B5A6D9CA49898AF9467883EB6F38AA0303EB7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void LinkedList/LinkedListNode::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedListNode__ctor_m65A62603A95A10CE6A7A6839150023DD1BAF456F (LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB94F79AF99EB1F84056002952B39BFDEA97D447);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public LinkedListNode(int value){
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.value = value;
		int32_t L_0 = ___value0;
		__this->set_value_0(L_0);
		// nextEdge = new GameObject("Line").AddComponent(typeof(LineRenderer)) as LineRenderer;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_1, _stringLiteralAB94F79AF99EB1F84056002952B39BFDEA97D447, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_4;
		L_4 = GameObject_AddComponent_mD183856CB5A1CCF1576221D7D6CEBC4092E734B8(L_1, L_3, /*hidden argument*/NULL);
		__this->set_nextEdge_3(((LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 *)IsInstSealed((RuntimeObject*)L_4, LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_il2cpp_TypeInfo_var)));
		// nextEdge.GetComponent<LineRenderer>().startWidth = .05f;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_5 = __this->get_nextEdge_3();
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_6;
		L_6 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_5, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		LineRenderer_set_startWidth_mD88B562DD413EE9861FB254963C7EDCB5199C1DF(L_6, (0.0500000007f), /*hidden argument*/NULL);
		// nextEdge.GetComponent<LineRenderer>().endWidth = .05f;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_7 = __this->get_nextEdge_3();
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_8;
		L_8 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_7, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		LineRenderer_set_endWidth_m3DCD4FFCC3944DD6DC0737C8AF8C7EDB5A6CF59A(L_8, (0.0500000007f), /*hidden argument*/NULL);
		// nextEdge.GetComponent<LineRenderer>().positionCount = 2;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_9 = __this->get_nextEdge_3();
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_10;
		L_10 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_9, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5(L_10, 2, /*hidden argument*/NULL);
		// nextEdge.GetComponent<LineRenderer>().useWorldSpace = true;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_11 = __this->get_nextEdge_3();
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_12;
		L_12 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_11, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		LineRenderer_set_useWorldSpace_m53AA0FE659EFB041647DB6A29826D20D52CBE148(L_12, (bool)1, /*hidden argument*/NULL);
		// }
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
// System.Void LinkedList/QueueCommand::.ctor(System.Int16,LinkedList/LinkedListNode,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueCommand__ctor_m218A4C5D7CFF5489CFA4BBE5EC5DC5DB4875B49B (QueueCommand_t0FBAF2010753642D2F61B7C29C306912A176777C * __this, int16_t ___commandId0, LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * ___node11, int16_t ___additionalInfo2, const RuntimeMethod* method)
{
	{
		// public QueueCommand(short commandId,LinkedListNode node1, short additionalInfo){
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.commandId = commandId;
		int16_t L_0 = ___commandId0;
		__this->set_commandId_0(L_0);
		// this.node1 = node1;
		LinkedListNode_tF13DDBE3A77311A334AB443BD2EFF0DD21006118 * L_1 = ___node11;
		__this->set_node1_1(L_1);
		// this.additionalInfo = additionalInfo;
		int16_t L_2 = ___additionalInfo2;
		__this->set_additionalInfo_2(L_2);
		// }
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
// System.Void NQueens/<build>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CbuildU3Ed__6__ctor_m1B66A993BACF0B326ABFF0A1F59E51834678AC86 (U3CbuildU3Ed__6_tCD71554657B65283EDF5B911E3CE57A1421F29F1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void NQueens/<build>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CbuildU3Ed__6_System_IDisposable_Dispose_m5987C12BF7D01E8BF19C8ADB04EDC7784BD2E71F (U3CbuildU3Ed__6_tCD71554657B65283EDF5B911E3CE57A1421F29F1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean NQueens/<build>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CbuildU3Ed__6_MoveNext_mE17A734866B8EF56B257E4E8E19B8C9718340C67 (U3CbuildU3Ed__6_tCD71554657B65283EDF5B911E3CE57A1421F29F1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_1 = __this->get_U3CU3E4__this_4();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_00b4;
			}
			case 3:
			{
				goto IL_04a1;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(.01f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (0.00999999978f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0046:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (column == size) {
		int32_t L_4 = __this->get_column_2();
		int32_t L_5 = __this->get_size_3();
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0064;
		}
	}
	{
		// solution = true;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_6 = V_1;
		L_6->set_solution_5((bool)1);
		// yield break;
		return (bool)0;
	}

IL_0064:
	{
		// for (i = 0; i < n; i++){
		__this->set_U3CiU3E5__2_5(0);
		goto IL_0838;
	}

IL_0070:
	{
		// board[i, column].GetComponent<Renderer>().material.color = Color.blue;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_7 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_8 = L_7->get_board_7();
		int32_t L_9 = __this->get_U3CiU3E5__2_5();
		int32_t L_10 = __this->get_column_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = (L_8)->GetAtUnchecked(L_9, L_10);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_12;
		L_12 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_11, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13;
		L_13 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_12, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14;
		L_14 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_13, L_14, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_15 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_15, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_15);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00b4:
	{
		__this->set_U3CU3E1__state_0((-1));
		// setColor(i, column);
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_16 = V_1;
		int32_t L_17 = __this->get_U3CiU3E5__2_5();
		int32_t L_18 = __this->get_column_2();
		NQueens_setColor_m2D364849876F1DE2EC26982763ECC6A644413892(L_16, L_17, L_18, /*hidden argument*/NULL);
		// if(internalBoard[i, column] == 0){
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_19 = V_1;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_20 = L_19->get_internalBoard_6();
		int32_t L_21 = __this->get_U3CiU3E5__2_5();
		int32_t L_22 = __this->get_column_2();
		int32_t L_23;
		L_23 = (L_20)->GetAtUnchecked(L_21, L_22);
		if (L_23)
		{
			goto IL_0826;
		}
	}
	{
		// for (j = 0; j < size; j++){
		V_2 = 0;
		goto IL_01f6;
	}

IL_00f0:
	{
		// internalBoard[i, j]++;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_24 = V_1;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_25 = L_24->get_internalBoard_6();
		int32_t L_26 = __this->get_U3CiU3E5__2_5();
		int32_t L_27 = V_2;
		int32_t* L_28;
		L_28 = (L_25)->GetAddressAtUnchecked(L_26, L_27);
		int32_t* L_29 = L_28;
		int32_t L_30 = *((int32_t*)L_29);
		*((int32_t*)L_29) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		// internalBoard[j, column]++;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_31 = V_1;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_32 = L_31->get_internalBoard_6();
		int32_t L_33 = V_2;
		int32_t L_34 = __this->get_column_2();
		int32_t* L_35;
		L_35 = (L_32)->GetAddressAtUnchecked(L_33, L_34);
		int32_t* L_36 = L_35;
		int32_t L_37 = *((int32_t*)L_36);
		*((int32_t*)L_36) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
		// if ((i + j) % 2 == 1){
		int32_t L_38 = __this->get_U3CiU3E5__2_5();
		int32_t L_39 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)L_39))%(int32_t)2))) == ((uint32_t)1))))
		{
			goto IL_0162;
		}
	}
	{
		// board[i,j].GetComponent<Renderer>().material.color = new Color(.67f,0,0);
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_40 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_41 = L_40->get_board_7();
		int32_t L_42 = __this->get_U3CiU3E5__2_5();
		int32_t L_43 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44;
		L_44 = (L_41)->GetAtUnchecked(L_42, L_43);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_45;
		L_45 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_44, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_46;
		L_46 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_45, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_47;
		memset((&L_47), 0, sizeof(L_47));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_47), (0.670000017f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_46, L_47, /*hidden argument*/NULL);
		// }
		goto IL_0188;
	}

IL_0162:
	{
		// board[i,j].GetComponent<Renderer>().material.color = Color.red;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_48 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_49 = L_48->get_board_7();
		int32_t L_50 = __this->get_U3CiU3E5__2_5();
		int32_t L_51 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52;
		L_52 = (L_49)->GetAtUnchecked(L_50, L_51);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_53;
		L_53 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_52, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_54;
		L_54 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_53, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_55;
		L_55 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_54, L_55, /*hidden argument*/NULL);
	}

IL_0188:
	{
		// if((j + column) % 2 == 1 ){
		int32_t L_56 = V_2;
		int32_t L_57 = __this->get_column_2();
		if ((!(((uint32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)L_57))%(int32_t)2))) == ((uint32_t)1))))
		{
			goto IL_01cc;
		}
	}
	{
		// board[j,column].GetComponent<Renderer>().material.color = new Color(.67f,0,0);
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_58 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_59 = L_58->get_board_7();
		int32_t L_60 = V_2;
		int32_t L_61 = __this->get_column_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62;
		L_62 = (L_59)->GetAtUnchecked(L_60, L_61);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_63;
		L_63 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_62, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_64;
		L_64 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_63, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_65;
		memset((&L_65), 0, sizeof(L_65));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_65), (0.670000017f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_64, L_65, /*hidden argument*/NULL);
		// }
		goto IL_01f2;
	}

IL_01cc:
	{
		// board[j,column].GetComponent<Renderer>().material.color = Color.red;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_66 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_67 = L_66->get_board_7();
		int32_t L_68 = V_2;
		int32_t L_69 = __this->get_column_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70;
		L_70 = (L_67)->GetAtUnchecked(L_68, L_69);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_71;
		L_71 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_70, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_72;
		L_72 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_71, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_73;
		L_73 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_72, L_73, /*hidden argument*/NULL);
	}

IL_01f2:
	{
		// for (j = 0; j < size; j++){
		int32_t L_74 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
	}

IL_01f6:
	{
		// for (j = 0; j < size; j++){
		int32_t L_75 = V_2;
		int32_t L_76 = __this->get_size_3();
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_00f0;
		}
	}
	{
		// for (j = i, k = column;j >= 0 && k>= 0 ;j--,k--){
		int32_t L_77 = __this->get_U3CiU3E5__2_5();
		V_2 = L_77;
		// for (j = i, k = column;j >= 0 && k>= 0 ;j--,k--){
		int32_t L_78 = __this->get_column_2();
		V_3 = L_78;
		goto IL_0287;
	}

IL_0212:
	{
		// internalBoard[j,k]++;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_79 = V_1;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_80 = L_79->get_internalBoard_6();
		int32_t L_81 = V_2;
		int32_t L_82 = V_3;
		int32_t* L_83;
		L_83 = (L_80)->GetAddressAtUnchecked(L_81, L_82);
		int32_t* L_84 = L_83;
		int32_t L_85 = *((int32_t*)L_84);
		*((int32_t*)L_84) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
		// if((j + k) % 2 == 1 ){
		int32_t L_86 = V_2;
		int32_t L_87 = V_3;
		if ((!(((uint32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)L_87))%(int32_t)2))) == ((uint32_t)1))))
		{
			goto IL_025e;
		}
	}
	{
		// board[j,k].GetComponent<Renderer>().material.color = new Color(.67f,0,0);
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_88 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_89 = L_88->get_board_7();
		int32_t L_90 = V_2;
		int32_t L_91 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_92;
		L_92 = (L_89)->GetAtUnchecked(L_90, L_91);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_93;
		L_93 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_92, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_94;
		L_94 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_93, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_95;
		memset((&L_95), 0, sizeof(L_95));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_95), (0.670000017f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_94, L_95, /*hidden argument*/NULL);
		// }
		goto IL_027f;
	}

IL_025e:
	{
		// board[j,k].GetComponent<Renderer>().material.color = Color.red;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_96 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_97 = L_96->get_board_7();
		int32_t L_98 = V_2;
		int32_t L_99 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_100;
		L_100 = (L_97)->GetAtUnchecked(L_98, L_99);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_101;
		L_101 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_100, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_102;
		L_102 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_101, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_103;
		L_103 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_102, L_103, /*hidden argument*/NULL);
	}

IL_027f:
	{
		// for (j = i, k = column;j >= 0 && k>= 0 ;j--,k--){
		int32_t L_104 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_104, (int32_t)1));
		// for (j = i, k = column;j >= 0 && k>= 0 ;j--,k--){
		int32_t L_105 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_105, (int32_t)1));
	}

IL_0287:
	{
		// for (j = i, k = column;j >= 0 && k>= 0 ;j--,k--){
		int32_t L_106 = V_2;
		if ((((int32_t)L_106) < ((int32_t)0)))
		{
			goto IL_028f;
		}
	}
	{
		int32_t L_107 = V_3;
		if ((((int32_t)L_107) >= ((int32_t)0)))
		{
			goto IL_0212;
		}
	}

IL_028f:
	{
		// for (j = i, k = column; j >= 0 && k < size; j--, k++) {
		int32_t L_108 = __this->get_U3CiU3E5__2_5();
		V_2 = L_108;
		// for (j = i, k = column; j >= 0 && k < size; j--, k++) {
		int32_t L_109 = __this->get_column_2();
		V_3 = L_109;
		goto IL_0314;
	}

IL_029f:
	{
		// internalBoard[j,k]++;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_110 = V_1;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_111 = L_110->get_internalBoard_6();
		int32_t L_112 = V_2;
		int32_t L_113 = V_3;
		int32_t* L_114;
		L_114 = (L_111)->GetAddressAtUnchecked(L_112, L_113);
		int32_t* L_115 = L_114;
		int32_t L_116 = *((int32_t*)L_115);
		*((int32_t*)L_115) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
		// if((j + k) % 2 == 1 ){
		int32_t L_117 = V_2;
		int32_t L_118 = V_3;
		if ((!(((uint32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)L_118))%(int32_t)2))) == ((uint32_t)1))))
		{
			goto IL_02eb;
		}
	}
	{
		// board[j,k].GetComponent<Renderer>().material.color = new Color(.67f,0,0);
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_119 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_120 = L_119->get_board_7();
		int32_t L_121 = V_2;
		int32_t L_122 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_123;
		L_123 = (L_120)->GetAtUnchecked(L_121, L_122);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_124;
		L_124 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_123, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_125;
		L_125 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_124, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_126;
		memset((&L_126), 0, sizeof(L_126));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_126), (0.670000017f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_125, L_126, /*hidden argument*/NULL);
		// }
		goto IL_030c;
	}

IL_02eb:
	{
		// board[j,k].GetComponent<Renderer>().material.color = Color.red;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_127 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_128 = L_127->get_board_7();
		int32_t L_129 = V_2;
		int32_t L_130 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_131;
		L_131 = (L_128)->GetAtUnchecked(L_129, L_130);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_132;
		L_132 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_131, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_133;
		L_133 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_132, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_134;
		L_134 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_133, L_134, /*hidden argument*/NULL);
	}

IL_030c:
	{
		// for (j = i, k = column; j >= 0 && k < size; j--, k++) {
		int32_t L_135 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_135, (int32_t)1));
		// for (j = i, k = column; j >= 0 && k < size; j--, k++) {
		int32_t L_136 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_136, (int32_t)1));
	}

IL_0314:
	{
		// for (j = i, k = column; j >= 0 && k < size; j--, k++) {
		int32_t L_137 = V_2;
		if ((((int32_t)L_137) < ((int32_t)0)))
		{
			goto IL_0324;
		}
	}
	{
		int32_t L_138 = V_3;
		int32_t L_139 = __this->get_size_3();
		if ((((int32_t)L_138) < ((int32_t)L_139)))
		{
			goto IL_029f;
		}
	}

IL_0324:
	{
		// for (j = i, k = column; j < size && k >= 0; j++, k--) {
		int32_t L_140 = __this->get_U3CiU3E5__2_5();
		V_2 = L_140;
		// for (j = i, k = column; j < size && k >= 0; j++, k--) {
		int32_t L_141 = __this->get_column_2();
		V_3 = L_141;
		goto IL_03a9;
	}

IL_0334:
	{
		// internalBoard[j,k]++;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_142 = V_1;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_143 = L_142->get_internalBoard_6();
		int32_t L_144 = V_2;
		int32_t L_145 = V_3;
		int32_t* L_146;
		L_146 = (L_143)->GetAddressAtUnchecked(L_144, L_145);
		int32_t* L_147 = L_146;
		int32_t L_148 = *((int32_t*)L_147);
		*((int32_t*)L_147) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_148, (int32_t)1));
		// if((j + k) % 2 == 1 ){
		int32_t L_149 = V_2;
		int32_t L_150 = V_3;
		if ((!(((uint32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_149, (int32_t)L_150))%(int32_t)2))) == ((uint32_t)1))))
		{
			goto IL_0380;
		}
	}
	{
		// board[j,k].GetComponent<Renderer>().material.color = new Color(.67f,0,0);
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_151 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_152 = L_151->get_board_7();
		int32_t L_153 = V_2;
		int32_t L_154 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_155;
		L_155 = (L_152)->GetAtUnchecked(L_153, L_154);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_156;
		L_156 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_155, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_157;
		L_157 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_156, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_158;
		memset((&L_158), 0, sizeof(L_158));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_158), (0.670000017f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_157, L_158, /*hidden argument*/NULL);
		// }
		goto IL_03a1;
	}

IL_0380:
	{
		// board[j,k].GetComponent<Renderer>().material.color = Color.red;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_159 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_160 = L_159->get_board_7();
		int32_t L_161 = V_2;
		int32_t L_162 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_163;
		L_163 = (L_160)->GetAtUnchecked(L_161, L_162);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_164;
		L_164 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_163, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_165;
		L_165 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_164, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_166;
		L_166 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_165, L_166, /*hidden argument*/NULL);
	}

IL_03a1:
	{
		// for (j = i, k = column; j < size && k >= 0; j++, k--) {
		int32_t L_167 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_167, (int32_t)1));
		// for (j = i, k = column; j < size && k >= 0; j++, k--) {
		int32_t L_168 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_168, (int32_t)1));
	}

IL_03a9:
	{
		// for (j = i, k = column; j < size && k >= 0; j++, k--) {
		int32_t L_169 = V_2;
		int32_t L_170 = __this->get_size_3();
		if ((((int32_t)L_169) >= ((int32_t)L_170)))
		{
			goto IL_03b9;
		}
	}
	{
		int32_t L_171 = V_3;
		if ((((int32_t)L_171) >= ((int32_t)0)))
		{
			goto IL_0334;
		}
	}

IL_03b9:
	{
		// for (j = i, k = column; j < size && k < size; j++, k++) {
		int32_t L_172 = __this->get_U3CiU3E5__2_5();
		V_2 = L_172;
		// for (j = i, k = column; j < size && k < size; j++, k++) {
		int32_t L_173 = __this->get_column_2();
		V_3 = L_173;
		goto IL_043e;
	}

IL_03c9:
	{
		// internalBoard[j,k]++;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_174 = V_1;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_175 = L_174->get_internalBoard_6();
		int32_t L_176 = V_2;
		int32_t L_177 = V_3;
		int32_t* L_178;
		L_178 = (L_175)->GetAddressAtUnchecked(L_176, L_177);
		int32_t* L_179 = L_178;
		int32_t L_180 = *((int32_t*)L_179);
		*((int32_t*)L_179) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_180, (int32_t)1));
		// if((j + k) % 2 == 1 ){
		int32_t L_181 = V_2;
		int32_t L_182 = V_3;
		if ((!(((uint32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_181, (int32_t)L_182))%(int32_t)2))) == ((uint32_t)1))))
		{
			goto IL_0415;
		}
	}
	{
		// board[j,k].GetComponent<Renderer>().material.color = new Color(.67f,0,0);
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_183 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_184 = L_183->get_board_7();
		int32_t L_185 = V_2;
		int32_t L_186 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_187;
		L_187 = (L_184)->GetAtUnchecked(L_185, L_186);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_188;
		L_188 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_187, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_189;
		L_189 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_188, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_190;
		memset((&L_190), 0, sizeof(L_190));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_190), (0.670000017f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_189, L_190, /*hidden argument*/NULL);
		// }
		goto IL_0436;
	}

IL_0415:
	{
		// board[j,k].GetComponent<Renderer>().material.color = Color.red;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_191 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_192 = L_191->get_board_7();
		int32_t L_193 = V_2;
		int32_t L_194 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_195;
		L_195 = (L_192)->GetAtUnchecked(L_193, L_194);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_196;
		L_196 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_195, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_197;
		L_197 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_196, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_198;
		L_198 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_197, L_198, /*hidden argument*/NULL);
	}

IL_0436:
	{
		// for (j = i, k = column; j < size && k < size; j++, k++) {
		int32_t L_199 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_199, (int32_t)1));
		// for (j = i, k = column; j < size && k < size; j++, k++) {
		int32_t L_200 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_200, (int32_t)1));
	}

IL_043e:
	{
		// for (j = i, k = column; j < size && k < size; j++, k++) {
		int32_t L_201 = V_2;
		int32_t L_202 = __this->get_size_3();
		if ((((int32_t)L_201) >= ((int32_t)L_202)))
		{
			goto IL_0453;
		}
	}
	{
		int32_t L_203 = V_3;
		int32_t L_204 = __this->get_size_3();
		if ((((int32_t)L_203) < ((int32_t)L_204)))
		{
			goto IL_03c9;
		}
	}

IL_0453:
	{
		// board[i,column].GetComponent<Renderer>().material.color = Color.green;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_205 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_206 = L_205->get_board_7();
		int32_t L_207 = __this->get_U3CiU3E5__2_5();
		int32_t L_208 = __this->get_column_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_209;
		L_209 = (L_206)->GetAtUnchecked(L_207, L_208);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_210;
		L_210 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_209, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_211;
		L_211 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_210, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_212;
		L_212 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_211, L_212, /*hidden argument*/NULL);
		// yield return build(size, column +1 );
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_213 = V_1;
		int32_t L_214 = __this->get_size_3();
		int32_t L_215 = __this->get_column_2();
		RuntimeObject* L_216;
		L_216 = NQueens_build_m5B54E0D1D1A6BC742DA5FEA8E33446BBF17738F2(L_213, L_214, ((int32_t)il2cpp_codegen_add((int32_t)L_215, (int32_t)1)), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_216);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_04a1:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (solution)
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_217 = V_1;
		bool L_218 = L_217->get_solution_5();
		if (!L_218)
		{
			goto IL_04b2;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_04b2:
	{
		// for (j = 0; j < size; j++){
		V_2 = 0;
		goto IL_05c9;
	}

IL_04b9:
	{
		// internalBoard[i, j]--;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_219 = V_1;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_220 = L_219->get_internalBoard_6();
		int32_t L_221 = __this->get_U3CiU3E5__2_5();
		int32_t L_222 = V_2;
		int32_t* L_223;
		L_223 = (L_220)->GetAddressAtUnchecked(L_221, L_222);
		int32_t* L_224 = L_223;
		int32_t L_225 = *((int32_t*)L_224);
		*((int32_t*)L_224) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_225, (int32_t)1));
		// if (internalBoard[i,j] == 0){
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_226 = V_1;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_227 = L_226->get_internalBoard_6();
		int32_t L_228 = __this->get_U3CiU3E5__2_5();
		int32_t L_229 = V_2;
		int32_t L_230;
		L_230 = (L_227)->GetAtUnchecked(L_228, L_229);
		if (L_230)
		{
			goto IL_053f;
		}
	}
	{
		// if ((i + j) % 2 == 1){
		int32_t L_231 = __this->get_U3CiU3E5__2_5();
		int32_t L_232 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_231, (int32_t)L_232))%(int32_t)2))) == ((uint32_t)1))))
		{
			goto IL_0519;
		}
	}
	{
		// board[i,j].GetComponent<Renderer>().material.color = Color.gray;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_233 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_234 = L_233->get_board_7();
		int32_t L_235 = __this->get_U3CiU3E5__2_5();
		int32_t L_236 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_237;
		L_237 = (L_234)->GetAtUnchecked(L_235, L_236);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_238;
		L_238 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_237, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_239;
		L_239 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_238, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_240;
		L_240 = Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_239, L_240, /*hidden argument*/NULL);
		// }
		goto IL_053f;
	}

IL_0519:
	{
		// board[i,j].GetComponent<Renderer>().material.color = Color.white;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_241 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_242 = L_241->get_board_7();
		int32_t L_243 = __this->get_U3CiU3E5__2_5();
		int32_t L_244 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_245;
		L_245 = (L_242)->GetAtUnchecked(L_243, L_244);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_246;
		L_246 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_245, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_247;
		L_247 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_246, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_248;
		L_248 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_247, L_248, /*hidden argument*/NULL);
	}

IL_053f:
	{
		// internalBoard[j, column]--;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_249 = V_1;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_250 = L_249->get_internalBoard_6();
		int32_t L_251 = V_2;
		int32_t L_252 = __this->get_column_2();
		int32_t* L_253;
		L_253 = (L_250)->GetAddressAtUnchecked(L_251, L_252);
		int32_t* L_254 = L_253;
		int32_t L_255 = *((int32_t*)L_254);
		*((int32_t*)L_254) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_255, (int32_t)1));
		// if (internalBoard[j,column] == 0){
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_256 = V_1;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_257 = L_256->get_internalBoard_6();
		int32_t L_258 = V_2;
		int32_t L_259 = __this->get_column_2();
		int32_t L_260;
		L_260 = (L_257)->GetAtUnchecked(L_258, L_259);
		if (L_260)
		{
			goto IL_05c5;
		}
	}
	{
		// if ((column + j) % 2 == 1){
		int32_t L_261 = __this->get_column_2();
		int32_t L_262 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_261, (int32_t)L_262))%(int32_t)2))) == ((uint32_t)1))))
		{
			goto IL_059f;
		}
	}
	{
		// board[j,column].GetComponent<Renderer>().material.color = Color.gray;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_263 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_264 = L_263->get_board_7();
		int32_t L_265 = V_2;
		int32_t L_266 = __this->get_column_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_267;
		L_267 = (L_264)->GetAtUnchecked(L_265, L_266);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_268;
		L_268 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_267, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_269;
		L_269 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_268, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_270;
		L_270 = Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_269, L_270, /*hidden argument*/NULL);
		// }
		goto IL_05c5;
	}

IL_059f:
	{
		// board[j,column].GetComponent<Renderer>().material.color = Color.white;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_271 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_272 = L_271->get_board_7();
		int32_t L_273 = V_2;
		int32_t L_274 = __this->get_column_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_275;
		L_275 = (L_272)->GetAtUnchecked(L_273, L_274);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_276;
		L_276 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_275, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_277;
		L_277 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_276, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_278;
		L_278 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_277, L_278, /*hidden argument*/NULL);
	}

IL_05c5:
	{
		// for (j = 0; j < size; j++){
		int32_t L_279 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_279, (int32_t)1));
	}

IL_05c9:
	{
		// for (j = 0; j < size; j++){
		int32_t L_280 = V_2;
		int32_t L_281 = __this->get_size_3();
		if ((((int32_t)L_280) < ((int32_t)L_281)))
		{
			goto IL_04b9;
		}
	}
	{
		// for (j = i, k = column;j >= 0 && k>= 0 ;j--,k--){
		int32_t L_282 = __this->get_U3CiU3E5__2_5();
		V_2 = L_282;
		// for (j = i, k = column;j >= 0 && k>= 0 ;j--,k--){
		int32_t L_283 = __this->get_column_2();
		V_3 = L_283;
		goto IL_065a;
	}

IL_05e5:
	{
		// internalBoard[j,k]--;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_284 = V_1;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_285 = L_284->get_internalBoard_6();
		int32_t L_286 = V_2;
		int32_t L_287 = V_3;
		int32_t* L_288;
		L_288 = (L_285)->GetAddressAtUnchecked(L_286, L_287);
		int32_t* L_289 = L_288;
		int32_t L_290 = *((int32_t*)L_289);
		*((int32_t*)L_289) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_290, (int32_t)1));
		// if (internalBoard[j,k] == 0){
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_291 = V_1;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_292 = L_291->get_internalBoard_6();
		int32_t L_293 = V_2;
		int32_t L_294 = V_3;
		int32_t L_295;
		L_295 = (L_292)->GetAtUnchecked(L_293, L_294);
		if (L_295)
		{
			goto IL_0652;
		}
	}
	{
		// if ((k + j) % 2 == 1){
		int32_t L_296 = V_3;
		int32_t L_297 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_296, (int32_t)L_297))%(int32_t)2))) == ((uint32_t)1))))
		{
			goto IL_0631;
		}
	}
	{
		// board[j,k].GetComponent<Renderer>().material.color = Color.gray;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_298 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_299 = L_298->get_board_7();
		int32_t L_300 = V_2;
		int32_t L_301 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_302;
		L_302 = (L_299)->GetAtUnchecked(L_300, L_301);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_303;
		L_303 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_302, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_304;
		L_304 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_303, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_305;
		L_305 = Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_304, L_305, /*hidden argument*/NULL);
		// }
		goto IL_0652;
	}

IL_0631:
	{
		// board[j,k].GetComponent<Renderer>().material.color = Color.white;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_306 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_307 = L_306->get_board_7();
		int32_t L_308 = V_2;
		int32_t L_309 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_310;
		L_310 = (L_307)->GetAtUnchecked(L_308, L_309);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_311;
		L_311 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_310, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_312;
		L_312 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_311, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_313;
		L_313 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_312, L_313, /*hidden argument*/NULL);
	}

IL_0652:
	{
		// for (j = i, k = column;j >= 0 && k>= 0 ;j--,k--){
		int32_t L_314 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_314, (int32_t)1));
		// for (j = i, k = column;j >= 0 && k>= 0 ;j--,k--){
		int32_t L_315 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_315, (int32_t)1));
	}

IL_065a:
	{
		// for (j = i, k = column;j >= 0 && k>= 0 ;j--,k--){
		int32_t L_316 = V_2;
		if ((((int32_t)L_316) < ((int32_t)0)))
		{
			goto IL_0662;
		}
	}
	{
		int32_t L_317 = V_3;
		if ((((int32_t)L_317) >= ((int32_t)0)))
		{
			goto IL_05e5;
		}
	}

IL_0662:
	{
		// for (j = i, k = column; j >= 0 && k < size; j--, k++) {
		int32_t L_318 = __this->get_U3CiU3E5__2_5();
		V_2 = L_318;
		// for (j = i, k = column; j >= 0 && k < size; j--, k++) {
		int32_t L_319 = __this->get_column_2();
		V_3 = L_319;
		goto IL_06e7;
	}

IL_0672:
	{
		// internalBoard[j,k]--;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_320 = V_1;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_321 = L_320->get_internalBoard_6();
		int32_t L_322 = V_2;
		int32_t L_323 = V_3;
		int32_t* L_324;
		L_324 = (L_321)->GetAddressAtUnchecked(L_322, L_323);
		int32_t* L_325 = L_324;
		int32_t L_326 = *((int32_t*)L_325);
		*((int32_t*)L_325) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_326, (int32_t)1));
		// if (internalBoard[j,k] == 0){
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_327 = V_1;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_328 = L_327->get_internalBoard_6();
		int32_t L_329 = V_2;
		int32_t L_330 = V_3;
		int32_t L_331;
		L_331 = (L_328)->GetAtUnchecked(L_329, L_330);
		if (L_331)
		{
			goto IL_06df;
		}
	}
	{
		// if ((k + j) % 2 == 1){
		int32_t L_332 = V_3;
		int32_t L_333 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_332, (int32_t)L_333))%(int32_t)2))) == ((uint32_t)1))))
		{
			goto IL_06be;
		}
	}
	{
		// board[j,k].GetComponent<Renderer>().material.color = Color.gray;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_334 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_335 = L_334->get_board_7();
		int32_t L_336 = V_2;
		int32_t L_337 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_338;
		L_338 = (L_335)->GetAtUnchecked(L_336, L_337);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_339;
		L_339 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_338, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_340;
		L_340 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_339, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_341;
		L_341 = Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_340, L_341, /*hidden argument*/NULL);
		// }
		goto IL_06df;
	}

IL_06be:
	{
		// board[j,k].GetComponent<Renderer>().material.color = Color.white;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_342 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_343 = L_342->get_board_7();
		int32_t L_344 = V_2;
		int32_t L_345 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_346;
		L_346 = (L_343)->GetAtUnchecked(L_344, L_345);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_347;
		L_347 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_346, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_348;
		L_348 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_347, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_349;
		L_349 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_348, L_349, /*hidden argument*/NULL);
	}

IL_06df:
	{
		// for (j = i, k = column; j >= 0 && k < size; j--, k++) {
		int32_t L_350 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_350, (int32_t)1));
		// for (j = i, k = column; j >= 0 && k < size; j--, k++) {
		int32_t L_351 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_351, (int32_t)1));
	}

IL_06e7:
	{
		// for (j = i, k = column; j >= 0 && k < size; j--, k++) {
		int32_t L_352 = V_2;
		if ((((int32_t)L_352) < ((int32_t)0)))
		{
			goto IL_06f7;
		}
	}
	{
		int32_t L_353 = V_3;
		int32_t L_354 = __this->get_size_3();
		if ((((int32_t)L_353) < ((int32_t)L_354)))
		{
			goto IL_0672;
		}
	}

IL_06f7:
	{
		// for (j = i, k = column; j < size && k >= 0; j++, k--) {
		int32_t L_355 = __this->get_U3CiU3E5__2_5();
		V_2 = L_355;
		// for (j = i, k = column; j < size && k >= 0; j++, k--) {
		int32_t L_356 = __this->get_column_2();
		V_3 = L_356;
		goto IL_077c;
	}

IL_0707:
	{
		// internalBoard[j,k]--;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_357 = V_1;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_358 = L_357->get_internalBoard_6();
		int32_t L_359 = V_2;
		int32_t L_360 = V_3;
		int32_t* L_361;
		L_361 = (L_358)->GetAddressAtUnchecked(L_359, L_360);
		int32_t* L_362 = L_361;
		int32_t L_363 = *((int32_t*)L_362);
		*((int32_t*)L_362) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_363, (int32_t)1));
		// if (internalBoard[j,k] == 0){
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_364 = V_1;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_365 = L_364->get_internalBoard_6();
		int32_t L_366 = V_2;
		int32_t L_367 = V_3;
		int32_t L_368;
		L_368 = (L_365)->GetAtUnchecked(L_366, L_367);
		if (L_368)
		{
			goto IL_0774;
		}
	}
	{
		// if ((k + j) % 2 == 1){
		int32_t L_369 = V_3;
		int32_t L_370 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_369, (int32_t)L_370))%(int32_t)2))) == ((uint32_t)1))))
		{
			goto IL_0753;
		}
	}
	{
		// board[j,k].GetComponent<Renderer>().material.color = Color.gray;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_371 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_372 = L_371->get_board_7();
		int32_t L_373 = V_2;
		int32_t L_374 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_375;
		L_375 = (L_372)->GetAtUnchecked(L_373, L_374);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_376;
		L_376 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_375, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_377;
		L_377 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_376, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_378;
		L_378 = Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_377, L_378, /*hidden argument*/NULL);
		// }
		goto IL_0774;
	}

IL_0753:
	{
		// board[j,k].GetComponent<Renderer>().material.color = Color.white;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_379 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_380 = L_379->get_board_7();
		int32_t L_381 = V_2;
		int32_t L_382 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_383;
		L_383 = (L_380)->GetAtUnchecked(L_381, L_382);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_384;
		L_384 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_383, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_385;
		L_385 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_384, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_386;
		L_386 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_385, L_386, /*hidden argument*/NULL);
	}

IL_0774:
	{
		// for (j = i, k = column; j < size && k >= 0; j++, k--) {
		int32_t L_387 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_387, (int32_t)1));
		// for (j = i, k = column; j < size && k >= 0; j++, k--) {
		int32_t L_388 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_388, (int32_t)1));
	}

IL_077c:
	{
		// for (j = i, k = column; j < size && k >= 0; j++, k--) {
		int32_t L_389 = V_2;
		int32_t L_390 = __this->get_size_3();
		if ((((int32_t)L_389) >= ((int32_t)L_390)))
		{
			goto IL_078c;
		}
	}
	{
		int32_t L_391 = V_3;
		if ((((int32_t)L_391) >= ((int32_t)0)))
		{
			goto IL_0707;
		}
	}

IL_078c:
	{
		// for (j = i, k = column; j < size && k < size; j++, k++) {
		int32_t L_392 = __this->get_U3CiU3E5__2_5();
		V_2 = L_392;
		// for (j = i, k = column; j < size && k < size; j++, k++) {
		int32_t L_393 = __this->get_column_2();
		V_3 = L_393;
		goto IL_0811;
	}

IL_079c:
	{
		// internalBoard[j,k]--;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_394 = V_1;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_395 = L_394->get_internalBoard_6();
		int32_t L_396 = V_2;
		int32_t L_397 = V_3;
		int32_t* L_398;
		L_398 = (L_395)->GetAddressAtUnchecked(L_396, L_397);
		int32_t* L_399 = L_398;
		int32_t L_400 = *((int32_t*)L_399);
		*((int32_t*)L_399) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_400, (int32_t)1));
		// if (internalBoard[j,k] == 0){
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_401 = V_1;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_402 = L_401->get_internalBoard_6();
		int32_t L_403 = V_2;
		int32_t L_404 = V_3;
		int32_t L_405;
		L_405 = (L_402)->GetAtUnchecked(L_403, L_404);
		if (L_405)
		{
			goto IL_0809;
		}
	}
	{
		// if ((k + j) % 2 == 1){
		int32_t L_406 = V_3;
		int32_t L_407 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_406, (int32_t)L_407))%(int32_t)2))) == ((uint32_t)1))))
		{
			goto IL_07e8;
		}
	}
	{
		// board[j,k].GetComponent<Renderer>().material.color = Color.gray;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_408 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_409 = L_408->get_board_7();
		int32_t L_410 = V_2;
		int32_t L_411 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_412;
		L_412 = (L_409)->GetAtUnchecked(L_410, L_411);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_413;
		L_413 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_412, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_414;
		L_414 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_413, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_415;
		L_415 = Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_414, L_415, /*hidden argument*/NULL);
		// }
		goto IL_0809;
	}

IL_07e8:
	{
		// board[j,k].GetComponent<Renderer>().material.color = Color.white;
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_416 = V_1;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_417 = L_416->get_board_7();
		int32_t L_418 = V_2;
		int32_t L_419 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_420;
		L_420 = (L_417)->GetAtUnchecked(L_418, L_419);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_421;
		L_421 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_420, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_422;
		L_422 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_421, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_423;
		L_423 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_422, L_423, /*hidden argument*/NULL);
	}

IL_0809:
	{
		// for (j = i, k = column; j < size && k < size; j++, k++) {
		int32_t L_424 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_424, (int32_t)1));
		// for (j = i, k = column; j < size && k < size; j++, k++) {
		int32_t L_425 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_425, (int32_t)1));
	}

IL_0811:
	{
		// for (j = i, k = column; j < size && k < size; j++, k++) {
		int32_t L_426 = V_2;
		int32_t L_427 = __this->get_size_3();
		if ((((int32_t)L_426) >= ((int32_t)L_427)))
		{
			goto IL_0826;
		}
	}
	{
		int32_t L_428 = V_3;
		int32_t L_429 = __this->get_size_3();
		if ((((int32_t)L_428) < ((int32_t)L_429)))
		{
			goto IL_079c;
		}
	}

IL_0826:
	{
		// for (i = 0; i < n; i++){
		int32_t L_430 = __this->get_U3CiU3E5__2_5();
		V_4 = L_430;
		int32_t L_431 = V_4;
		__this->set_U3CiU3E5__2_5(((int32_t)il2cpp_codegen_add((int32_t)L_431, (int32_t)1)));
	}

IL_0838:
	{
		// for (i = 0; i < n; i++){
		int32_t L_432 = __this->get_U3CiU3E5__2_5();
		NQueens_t1AE543441EE63FB99194B6AB54EB795EB612BA03 * L_433 = V_1;
		int32_t L_434 = L_433->get_n_4();
		if ((((int32_t)L_432) < ((int32_t)L_434)))
		{
			goto IL_0070;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object NQueens/<build>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CbuildU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m486150AE5B55AEE8523BAFEEBE46F34701D8BA16 (U3CbuildU3Ed__6_tCD71554657B65283EDF5B911E3CE57A1421F29F1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void NQueens/<build>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CbuildU3Ed__6_System_Collections_IEnumerator_Reset_mD033E9215D57D36C5BE319BD94D8CDCDB8D99520 (U3CbuildU3Ed__6_tCD71554657B65283EDF5B911E3CE57A1421F29F1 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CbuildU3Ed__6_System_Collections_IEnumerator_Reset_mD033E9215D57D36C5BE319BD94D8CDCDB8D99520_RuntimeMethod_var)));
	}
}
// System.Object NQueens/<build>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CbuildU3Ed__6_System_Collections_IEnumerator_get_Current_mBB6265DE84640E3459E588D72F593B34A0A45B6F (U3CbuildU3Ed__6_tCD71554657B65283EDF5B911E3CE57A1421F29F1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void SortingAlgorithm/<readQueue>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__10__ctor_mB45F8047151C702C5072FFF89E8B4FFFFA568363 (U3CreadQueueU3Ed__10_t3029C89FAFF9D6D1E9EFDF2B7604B11567DE71EE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SortingAlgorithm/<readQueue>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__10_System_IDisposable_Dispose_mA704EDA9D38CC75348E00EF49E7DD2074AB83420 (U3CreadQueueU3Ed__10_t3029C89FAFF9D6D1E9EFDF2B7604B11567DE71EE * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1))) <= ((uint32_t)5))))
		{
			goto IL_001c;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1C, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		U3CreadQueueU3Ed__10_U3CU3Em__Finally1_mCF7942FDC668384CA9129D0931996AD700D5B827(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(21)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1C, IL_001c)
	}

IL_001c:
	{
		return;
	}
}
// System.Boolean SortingAlgorithm/<readQueue>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CreadQueueU3Ed__10_MoveNext_m586E978495C4C672569468B990A1D864C92B55B1 (U3CreadQueueU3Ed__10_t3029C89FAFF9D6D1E9EFDF2B7604B11567DE71EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * V_2 = NULL;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_3 = NULL;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 8> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0037;
				}
				case 1:
				{
					goto IL_0094;
				}
				case 2:
				{
					goto IL_010e;
				}
				case 3:
				{
					goto IL_0163;
				}
				case 4:
				{
					goto IL_01cd;
				}
				case 5:
				{
					goto IL_02b3;
				}
				case 6:
				{
					goto IL_02fa;
				}
			}
		}

IL_0030:
		{
			V_0 = (bool)0;
			goto IL_032a;
		}

IL_0037:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (short[] instr in q)
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_3 = V_2;
			Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_4 = L_3->get_q_7();
			RuntimeObject* L_5;
			L_5 = VirtFuncInvoker0< RuntimeObject* >::Invoke(12 /* System.Collections.IEnumerator System.Collections.Queue::GetEnumerator() */, L_4);
			__this->set_U3CU3E7__wrap1_4(L_5);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0302;
		}

IL_005c:
		{
			// foreach (short[] instr in q)
			RuntimeObject* L_6 = __this->get_U3CU3E7__wrap1_4();
			RuntimeObject * L_7;
			L_7 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_6);
			V_3 = ((Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)Castclass((RuntimeObject*)L_7, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var));
			// if (instr[3] == 1){
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_8 = V_3;
			int32_t L_9 = 3;
			int16_t L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
			if ((!(((uint32_t)L_10) == ((uint32_t)1))))
			{
				goto IL_00a1;
			}
		}

IL_0073:
		{
			// yield return extendCommands(instr, time);
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_11 = V_2;
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_12 = V_3;
			int32_t L_13 = __this->get_time_3();
			RuntimeObject* L_14;
			L_14 = VirtFuncInvoker2< RuntimeObject*, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, int32_t >::Invoke(4 /* System.Collections.IEnumerator SortingAlgorithm::extendCommands(System.Int16[],System.Int32) */, L_11, L_12, L_13);
			__this->set_U3CU3E2__current_1(L_14);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_032a;
		}

IL_0094:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// }
			goto IL_0302;
		}

IL_00a1:
		{
			// switch (instr[0])
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_15 = V_3;
			int32_t L_16 = 0;
			int16_t L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
			V_4 = L_17;
			int16_t L_18 = V_4;
			switch (L_18)
			{
				case 0:
				{
					goto IL_00d6;
				}
				case 1:
				{
					goto IL_011b;
				}
				case 2:
				{
					goto IL_0170;
				}
				case 3:
				{
					goto IL_0187;
				}
				case 4:
				{
					goto IL_01da;
				}
				case 5:
				{
					goto IL_01ff;
				}
				case 6:
				{
					goto IL_0224;
				}
				case 7:
				{
					goto IL_024c;
				}
				case 8:
				{
					goto IL_0274;
				}
			}
		}

IL_00d1:
		{
			goto IL_02dc;
		}

IL_00d6:
		{
			// writeToIndex(array, instr[1], instr[2]);
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_19 = V_2;
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_20 = V_2;
			ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_21 = L_20->get_array_4();
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_22 = V_3;
			int32_t L_23 = 1;
			int16_t L_24 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_25 = V_3;
			int32_t L_26 = 2;
			int16_t L_27 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
			SortingAlgorithm_writeToIndex_m663DDCC614F023DB2FFD245C3AFA4AD21CF803A1(L_19, L_21, L_24, L_27, /*hidden argument*/NULL);
			// yield return new WaitForSeconds(.01f*time);
			int32_t L_28 = __this->get_time_3();
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_29 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_29, ((float)il2cpp_codegen_multiply((float)(0.00999999978f), (float)((float)((float)L_28)))), /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_29);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_032a;
		}

IL_010e:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// break;
			goto IL_0302;
		}

IL_011b:
		{
			// swap(ref array[(int)instr[1]], ref array[(int)instr[2]]);
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_30 = V_2;
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_31 = V_2;
			ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_32 = L_31->get_array_4();
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_33 = V_3;
			int32_t L_34 = 1;
			int16_t L_35 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_36 = V_2;
			ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_37 = L_36->get_array_4();
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_38 = V_3;
			int32_t L_39 = 2;
			int16_t L_40 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
			SortingAlgorithm_swap_m73EE80AE9D7A3983C40718631987720458554D5B(L_30, (ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 **)((L_32)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35))), (ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 **)((L_37)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_40))), /*hidden argument*/NULL);
			// yield return new WaitForSeconds(.01f*time);
			int32_t L_41 = __this->get_time_3();
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_42 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_42, ((float)il2cpp_codegen_multiply((float)(0.00999999978f), (float)((float)((float)L_41)))), /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_42);
			__this->set_U3CU3E1__state_0(3);
			V_0 = (bool)1;
			goto IL_032a;
		}

IL_0163:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// break;
			goto IL_0302;
		}

IL_0170:
		{
			// colorChange(instr[1], instr[2], array);
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_43 = V_2;
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_44 = V_3;
			int32_t L_45 = 1;
			int16_t L_46 = (L_44)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_47 = V_3;
			int32_t L_48 = 2;
			int16_t L_49 = (L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_50 = V_2;
			ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_51 = L_50->get_array_4();
			SortingAlgorithm_colorChange_m0A53C0CBC733EAD2DE620B39D64B8373DB118234(L_43, L_46, L_49, L_51, /*hidden argument*/NULL);
			// break;
			goto IL_0302;
		}

IL_0187:
		{
			// colorChange(instr[1], 1, array);
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_52 = V_2;
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_53 = V_3;
			int32_t L_54 = 1;
			int16_t L_55 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_56 = V_2;
			ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_57 = L_56->get_array_4();
			SortingAlgorithm_colorChange_m0A53C0CBC733EAD2DE620B39D64B8373DB118234(L_52, L_55, 1, L_57, /*hidden argument*/NULL);
			// colorChange(instr[2], 1, array);
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_58 = V_2;
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_59 = V_3;
			int32_t L_60 = 2;
			int16_t L_61 = (L_59)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_62 = V_2;
			ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_63 = L_62->get_array_4();
			SortingAlgorithm_colorChange_m0A53C0CBC733EAD2DE620B39D64B8373DB118234(L_58, L_61, 1, L_63, /*hidden argument*/NULL);
			// yield return new WaitForSeconds(.01f*time);
			int32_t L_64 = __this->get_time_3();
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_65 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_65, ((float)il2cpp_codegen_multiply((float)(0.00999999978f), (float)((float)((float)L_64)))), /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_65);
			__this->set_U3CU3E1__state_0(4);
			V_0 = (bool)1;
			goto IL_032a;
		}

IL_01cd:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// break;
			goto IL_0302;
		}

IL_01da:
		{
			// colorChange(instr[1], 0, array);
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_66 = V_2;
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_67 = V_3;
			int32_t L_68 = 1;
			int16_t L_69 = (L_67)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_68));
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_70 = V_2;
			ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_71 = L_70->get_array_4();
			SortingAlgorithm_colorChange_m0A53C0CBC733EAD2DE620B39D64B8373DB118234(L_66, L_69, 0, L_71, /*hidden argument*/NULL);
			// colorChange(instr[2], 0, array);
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_72 = V_2;
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_73 = V_3;
			int32_t L_74 = 2;
			int16_t L_75 = (L_73)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_74));
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_76 = V_2;
			ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_77 = L_76->get_array_4();
			SortingAlgorithm_colorChange_m0A53C0CBC733EAD2DE620B39D64B8373DB118234(L_72, L_75, 0, L_77, /*hidden argument*/NULL);
			// break;
			goto IL_0302;
		}

IL_01ff:
		{
			// colorChange(instr[1], 3, array);
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_78 = V_2;
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_79 = V_3;
			int32_t L_80 = 1;
			int16_t L_81 = (L_79)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_80));
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_82 = V_2;
			ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_83 = L_82->get_array_4();
			SortingAlgorithm_colorChange_m0A53C0CBC733EAD2DE620B39D64B8373DB118234(L_78, L_81, 3, L_83, /*hidden argument*/NULL);
			// colorChange(instr[2], 3, array);
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_84 = V_2;
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_85 = V_3;
			int32_t L_86 = 2;
			int16_t L_87 = (L_85)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_86));
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_88 = V_2;
			ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_89 = L_88->get_array_4();
			SortingAlgorithm_colorChange_m0A53C0CBC733EAD2DE620B39D64B8373DB118234(L_84, L_87, 3, L_89, /*hidden argument*/NULL);
			// break;
			goto IL_0302;
		}

IL_0224:
		{
			// for(int i = instr[1]; i <= instr[2]; i++)
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_90 = V_3;
			int32_t L_91 = 1;
			int16_t L_92 = (L_90)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_91));
			V_5 = L_92;
			goto IL_0240;
		}

IL_022b:
		{
			// colorChange(i, 3, array);
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_93 = V_2;
			int32_t L_94 = V_5;
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_95 = V_2;
			ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_96 = L_95->get_array_4();
			SortingAlgorithm_colorChange_m0A53C0CBC733EAD2DE620B39D64B8373DB118234(L_93, L_94, 3, L_96, /*hidden argument*/NULL);
			// for(int i = instr[1]; i <= instr[2]; i++)
			int32_t L_97 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
		}

IL_0240:
		{
			// for(int i = instr[1]; i <= instr[2]; i++)
			int32_t L_98 = V_5;
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_99 = V_3;
			int32_t L_100 = 2;
			int16_t L_101 = (L_99)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_100));
			if ((((int32_t)L_98) <= ((int32_t)L_101)))
			{
				goto IL_022b;
			}
		}

IL_0247:
		{
			// break;
			goto IL_0302;
		}

IL_024c:
		{
			// for (int i = instr[1]; i <= instr[2]; i++)
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_102 = V_3;
			int32_t L_103 = 1;
			int16_t L_104 = (L_102)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_103));
			V_6 = L_104;
			goto IL_0268;
		}

IL_0253:
		{
			// colorChange(i, 0, array);
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_105 = V_2;
			int32_t L_106 = V_6;
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_107 = V_2;
			ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_108 = L_107->get_array_4();
			SortingAlgorithm_colorChange_m0A53C0CBC733EAD2DE620B39D64B8373DB118234(L_105, L_106, 0, L_108, /*hidden argument*/NULL);
			// for (int i = instr[1]; i <= instr[2]; i++)
			int32_t L_109 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)1));
		}

IL_0268:
		{
			// for (int i = instr[1]; i <= instr[2]; i++)
			int32_t L_110 = V_6;
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_111 = V_3;
			int32_t L_112 = 2;
			int16_t L_113 = (L_111)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_112));
			if ((((int32_t)L_110) <= ((int32_t)L_113)))
			{
				goto IL_0253;
			}
		}

IL_026f:
		{
			// break;
			goto IL_0302;
		}

IL_0274:
		{
			// for (int i = 0; i < size; i++){
			__this->set_U3CiU3E5__3_5(0);
			goto IL_02cd;
		}

IL_027d:
		{
			// colorChange(i, 2, array);
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_114 = V_2;
			int32_t L_115 = __this->get_U3CiU3E5__3_5();
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_116 = V_2;
			ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_117 = L_116->get_array_4();
			SortingAlgorithm_colorChange_m0A53C0CBC733EAD2DE620B39D64B8373DB118234(L_114, L_115, 2, L_117, /*hidden argument*/NULL);
			// yield return new WaitForSeconds(.01f*time);
			int32_t L_118 = __this->get_time_3();
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_119 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_119, ((float)il2cpp_codegen_multiply((float)(0.00999999978f), (float)((float)((float)L_118)))), /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_119);
			__this->set_U3CU3E1__state_0(5);
			V_0 = (bool)1;
			goto IL_032a;
		}

IL_02b3:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// for (int i = 0; i < size; i++){
			int32_t L_120 = __this->get_U3CiU3E5__3_5();
			V_7 = L_120;
			int32_t L_121 = V_7;
			__this->set_U3CiU3E5__3_5(((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)1)));
		}

IL_02cd:
		{
			// for (int i = 0; i < size; i++){
			int32_t L_122 = __this->get_U3CiU3E5__3_5();
			int32_t L_123 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
			if ((((int32_t)L_122) < ((int32_t)L_123)))
			{
				goto IL_027d;
			}
		}

IL_02da:
		{
			// break;
			goto IL_0302;
		}

IL_02dc:
		{
			// yield return extendCommands(instr, time);
			SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 * L_124 = V_2;
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_125 = V_3;
			int32_t L_126 = __this->get_time_3();
			RuntimeObject* L_127;
			L_127 = VirtFuncInvoker2< RuntimeObject*, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, int32_t >::Invoke(4 /* System.Collections.IEnumerator SortingAlgorithm::extendCommands(System.Int16[],System.Int32) */, L_124, L_125, L_126);
			__this->set_U3CU3E2__current_1(L_127);
			__this->set_U3CU3E1__state_0(6);
			V_0 = (bool)1;
			goto IL_032a;
		}

IL_02fa:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0302:
		{
			// foreach (short[] instr in q)
			RuntimeObject* L_128 = __this->get_U3CU3E7__wrap1_4();
			bool L_129;
			L_129 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_128);
			if (L_129)
			{
				goto IL_005c;
			}
		}

IL_0312:
		{
			U3CreadQueueU3Ed__10_U3CU3Em__Finally1_mCF7942FDC668384CA9129D0931996AD700D5B827(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_4((RuntimeObject*)NULL);
			// }
			V_0 = (bool)0;
			goto IL_032a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0323;
	}

FAULT_0323:
	{ // begin fault (depth: 1)
		U3CreadQueueU3Ed__10_System_IDisposable_Dispose_mA704EDA9D38CC75348E00EF49E7DD2074AB83420(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(803)
	} // end fault
	IL2CPP_CLEANUP(803)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_032a:
	{
		bool L_130 = V_0;
		return L_130;
	}
}
// System.Void SortingAlgorithm/<readQueue>d__10::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__10_U3CU3Em__Finally1_mCF7942FDC668384CA9129D0931996AD700D5B827 (U3CreadQueueU3Ed__10_t3029C89FAFF9D6D1E9EFDF2B7604B11567DE71EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_4();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_2);
	}

IL_001c:
	{
		return;
	}
}
// System.Object SortingAlgorithm/<readQueue>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CreadQueueU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m95D08D0BE80173CF120BA1F38BF11FDC89D1252D (U3CreadQueueU3Ed__10_t3029C89FAFF9D6D1E9EFDF2B7604B11567DE71EE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SortingAlgorithm/<readQueue>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__10_System_Collections_IEnumerator_Reset_m6C8DD4EB9251682AA0CD0866DBB1522B72E1274C (U3CreadQueueU3Ed__10_t3029C89FAFF9D6D1E9EFDF2B7604B11567DE71EE * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CreadQueueU3Ed__10_System_Collections_IEnumerator_Reset_m6C8DD4EB9251682AA0CD0866DBB1522B72E1274C_RuntimeMethod_var)));
	}
}
// System.Object SortingAlgorithm/<readQueue>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CreadQueueU3Ed__10_System_Collections_IEnumerator_get_Current_m338A0489314775F6A45D7E4514001A17C61A7512 (U3CreadQueueU3Ed__10_t3029C89FAFF9D6D1E9EFDF2B7604B11567DE71EE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void SortingAlgorithm/ArrayIndex::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayIndex__ctor_mE13FF738F414E16572C9EBE9D2BA6801B7351177 (ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ArrayIndex(int value){
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.value = value;
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		// o = GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC(3, /*hidden argument*/NULL);
		__this->set_o_0(L_1);
		// o.transform.position = new Vector3(value, (value+1)*.5f, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___value0;
		int32_t L_5 = ___value0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((float)((float)L_4)), ((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)))), (float)(0.5f))), (0.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_6, /*hidden argument*/NULL);
		// o.transform.localScale = new Vector3(1, value + 1, 1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		int32_t L_9 = ___value0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), (1.0f), ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)))), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_8, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SortingAlgorithm/ArrayIndex::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayIndex__ctor_m132D08AAD796EA0F5AC7518E94787C5CDC8DC23A (ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * __this, const RuntimeMethod* method)
{
	{
		// public ArrayIndex(){
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
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
// System.Void SortingAlgorithmWithAuxArray/<extendCommands>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CextendCommandsU3Ed__6__ctor_m5188A6568BCD3F935614DD598AE5BBF61C1B4ACC (U3CextendCommandsU3Ed__6_tF390D4906D3F0DB7F02E3F01B58DF422FCC50564 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SortingAlgorithmWithAuxArray/<extendCommands>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CextendCommandsU3Ed__6_System_IDisposable_Dispose_m277920686C70E943BA749FC3973DD4684C30B78A (U3CextendCommandsU3Ed__6_tF390D4906D3F0DB7F02E3F01B58DF422FCC50564 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SortingAlgorithmWithAuxArray/<extendCommands>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CextendCommandsU3Ed__6_MoveNext_m27F0458E4EF179FB52091306FE92ED9CFD7FBC31 (U3CextendCommandsU3Ed__6_tF390D4906D3F0DB7F02E3F01B58DF422FCC50564 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * V_1 = NULL;
	int16_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_00b6;
			}
			case 2:
			{
				goto IL_012e;
			}
			case 3:
			{
				goto IL_026a;
			}
			case 4:
			{
				goto IL_02ce;
			}
			case 5:
			{
				goto IL_0344;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// switch(instr[0]){
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3 = __this->get_instr_2();
		int32_t L_4 = 0;
		int16_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		int16_t L_6 = V_2;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0079;
			}
			case 1:
			{
				goto IL_036a;
			}
			case 2:
			{
				goto IL_00c2;
			}
			case 3:
			{
				goto IL_00e3;
			}
			case 4:
			{
				goto IL_013a;
			}
			case 5:
			{
				goto IL_0169;
			}
			case 6:
			{
				goto IL_036a;
			}
			case 7:
			{
				goto IL_036a;
			}
			case 8:
			{
				goto IL_036a;
			}
			case 9:
			{
				goto IL_0198;
			}
			case 10:
			{
				goto IL_01f9;
			}
			case 11:
			{
				goto IL_0276;
			}
		}
	}
	{
		goto IL_036a;
	}

IL_0079:
	{
		// writeToIndex(auxArray, instr[1], instr[2]);
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_7 = V_1;
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_8 = V_1;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_9 = L_8->get_auxArray_8();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_10 = __this->get_instr_2();
		int32_t L_11 = 1;
		int16_t L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_13 = __this->get_instr_2();
		int32_t L_14 = 2;
		int16_t L_15 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		SortingAlgorithm_writeToIndex_m663DDCC614F023DB2FFD245C3AFA4AD21CF803A1(L_7, L_9, L_12, L_15, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(.01f*time);
		int32_t L_16 = __this->get_time_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_17 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_17, ((float)il2cpp_codegen_multiply((float)(0.00999999978f), (float)((float)((float)L_16)))), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_17);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00b6:
	{
		__this->set_U3CU3E1__state_0((-1));
		// break;
		goto IL_036a;
	}

IL_00c2:
	{
		// colorChange(instr[1], instr[2], auxArray);
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_18 = V_1;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_19 = __this->get_instr_2();
		int32_t L_20 = 1;
		int16_t L_21 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_22 = __this->get_instr_2();
		int32_t L_23 = 2;
		int16_t L_24 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_25 = V_1;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_26 = L_25->get_auxArray_8();
		SortingAlgorithm_colorChange_m0A53C0CBC733EAD2DE620B39D64B8373DB118234(L_18, L_21, L_24, L_26, /*hidden argument*/NULL);
		// break;
		goto IL_036a;
	}

IL_00e3:
	{
		// colorChange(instr[1], 1, auxArray);
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_27 = V_1;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_28 = __this->get_instr_2();
		int32_t L_29 = 1;
		int16_t L_30 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_31 = V_1;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_32 = L_31->get_auxArray_8();
		SortingAlgorithm_colorChange_m0A53C0CBC733EAD2DE620B39D64B8373DB118234(L_27, L_30, 1, L_32, /*hidden argument*/NULL);
		// colorChange(instr[2], 1, auxArray);
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_33 = V_1;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_34 = __this->get_instr_2();
		int32_t L_35 = 2;
		int16_t L_36 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_37 = V_1;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_38 = L_37->get_auxArray_8();
		SortingAlgorithm_colorChange_m0A53C0CBC733EAD2DE620B39D64B8373DB118234(L_33, L_36, 1, L_38, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(.01f*time);
		int32_t L_39 = __this->get_time_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_40 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_40, ((float)il2cpp_codegen_multiply((float)(0.00999999978f), (float)((float)((float)L_39)))), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_40);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_012e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// break;
		goto IL_036a;
	}

IL_013a:
	{
		// colorChange(instr[1], 0, auxArray);
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_41 = V_1;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_42 = __this->get_instr_2();
		int32_t L_43 = 1;
		int16_t L_44 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_45 = V_1;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_46 = L_45->get_auxArray_8();
		SortingAlgorithm_colorChange_m0A53C0CBC733EAD2DE620B39D64B8373DB118234(L_41, L_44, 0, L_46, /*hidden argument*/NULL);
		// colorChange(instr[2], 0, auxArray);
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_47 = V_1;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_48 = __this->get_instr_2();
		int32_t L_49 = 2;
		int16_t L_50 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_51 = V_1;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_52 = L_51->get_auxArray_8();
		SortingAlgorithm_colorChange_m0A53C0CBC733EAD2DE620B39D64B8373DB118234(L_47, L_50, 0, L_52, /*hidden argument*/NULL);
		// break;
		goto IL_036a;
	}

IL_0169:
	{
		// colorChange(instr[1], 3, auxArray);
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_53 = V_1;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_54 = __this->get_instr_2();
		int32_t L_55 = 1;
		int16_t L_56 = (L_54)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_57 = V_1;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_58 = L_57->get_auxArray_8();
		SortingAlgorithm_colorChange_m0A53C0CBC733EAD2DE620B39D64B8373DB118234(L_53, L_56, 3, L_58, /*hidden argument*/NULL);
		// colorChange(instr[2], 3, auxArray);
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_59 = V_1;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_60 = __this->get_instr_2();
		int32_t L_61 = 2;
		int16_t L_62 = (L_60)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61));
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_63 = V_1;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_64 = L_63->get_auxArray_8();
		SortingAlgorithm_colorChange_m0A53C0CBC733EAD2DE620B39D64B8373DB118234(L_59, L_62, 3, L_64, /*hidden argument*/NULL);
		// break;
		goto IL_036a;
	}

IL_0198:
	{
		// for (int i = 0; i < size; i++){
		V_3 = 0;
		goto IL_01ec;
	}

IL_019c:
	{
		// auxArray[i].o.transform.localScale = new Vector3(0, 0, 0);
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_65 = V_1;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_66 = L_65->get_auxArray_8();
		int32_t L_67 = V_3;
		int32_t L_68 = L_67;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_69 = (L_66)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_68));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70 = L_69->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_71;
		L_71 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_70, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
		memset((&L_72), 0, sizeof(L_72));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_72), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_71, L_72, /*hidden argument*/NULL);
		// auxArray[i].o.GetComponent<Renderer>().material.color = Color.white;
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_73 = V_1;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_74 = L_73->get_auxArray_8();
		int32_t L_75 = V_3;
		int32_t L_76 = L_75;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_77 = (L_74)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_76));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_78 = L_77->get_o_0();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_79;
		L_79 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_78, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_80;
		L_80 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_79, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_81;
		L_81 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_80, L_81, /*hidden argument*/NULL);
		// for (int i = 0; i < size; i++){
		int32_t L_82 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1));
	}

IL_01ec:
	{
		// for (int i = 0; i < size; i++){
		int32_t L_83 = V_3;
		int32_t L_84 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		if ((((int32_t)L_83) < ((int32_t)L_84)))
		{
			goto IL_019c;
		}
	}
	{
		// break;
		goto IL_036a;
	}

IL_01f9:
	{
		// if (instr[3] == 0){
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_85 = __this->get_instr_2();
		int32_t L_86 = 3;
		int16_t L_87 = (L_85)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_86));
		if (L_87)
		{
			goto IL_0227;
		}
	}
	{
		// copyArrayValue(array, auxArray, instr[1], instr[2]);
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_88 = V_1;
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_89 = V_1;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_90 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)L_89)->get_array_4();
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_91 = V_1;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_92 = L_91->get_auxArray_8();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_93 = __this->get_instr_2();
		int32_t L_94 = 1;
		int16_t L_95 = (L_93)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_94));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_96 = __this->get_instr_2();
		int32_t L_97 = 2;
		int16_t L_98 = (L_96)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_97));
		SortingAlgorithm_copyArrayValue_m3F7B189ECF43CC4FE1597734C9364A8BAB10EBF5(L_88, L_90, L_92, L_95, L_98, /*hidden argument*/NULL);
		// }
		goto IL_0249;
	}

IL_0227:
	{
		// copyArrayValue(auxArray, array, instr[1], instr[2]);
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_99 = V_1;
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_100 = V_1;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_101 = L_100->get_auxArray_8();
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_102 = V_1;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_103 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)L_102)->get_array_4();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_104 = __this->get_instr_2();
		int32_t L_105 = 1;
		int16_t L_106 = (L_104)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_105));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_107 = __this->get_instr_2();
		int32_t L_108 = 2;
		int16_t L_109 = (L_107)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_108));
		SortingAlgorithm_copyArrayValue_m3F7B189ECF43CC4FE1597734C9364A8BAB10EBF5(L_99, L_101, L_103, L_106, L_109, /*hidden argument*/NULL);
	}

IL_0249:
	{
		// yield return new WaitForSeconds(.01f*time);
		int32_t L_110 = __this->get_time_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_111 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_111, ((float)il2cpp_codegen_multiply((float)(0.00999999978f), (float)((float)((float)L_110)))), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_111);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_026a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// break;
		goto IL_036a;
	}

IL_0276:
	{
		// if (instr[1] == 0){
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_112 = __this->get_instr_2();
		int32_t L_113 = 1;
		int16_t L_114 = (L_112)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_113));
		if (L_114)
		{
			goto IL_02f6;
		}
	}
	{
		// for (int i = 0; i < size; i++){
		__this->set_U3CiU3E5__2_5(0);
		goto IL_02e7;
	}

IL_0289:
	{
		// writeToIndex(array,i, auxArray[i].value);
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_115 = V_1;
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_116 = V_1;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_117 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)L_116)->get_array_4();
		int32_t L_118 = __this->get_U3CiU3E5__2_5();
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_119 = V_1;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_120 = L_119->get_auxArray_8();
		int32_t L_121 = __this->get_U3CiU3E5__2_5();
		int32_t L_122 = L_121;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_123 = (L_120)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_122));
		int32_t L_124 = L_123->get_value_1();
		SortingAlgorithm_writeToIndex_m663DDCC614F023DB2FFD245C3AFA4AD21CF803A1(L_115, L_117, L_118, L_124, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(.01f*time);
		int32_t L_125 = __this->get_time_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_126 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_126, ((float)il2cpp_codegen_multiply((float)(0.00999999978f), (float)((float)((float)L_125)))), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_126);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_02ce:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < size; i++){
		int32_t L_127 = __this->get_U3CiU3E5__2_5();
		V_4 = L_127;
		int32_t L_128 = V_4;
		__this->set_U3CiU3E5__2_5(((int32_t)il2cpp_codegen_add((int32_t)L_128, (int32_t)1)));
	}

IL_02e7:
	{
		// for (int i = 0; i < size; i++){
		int32_t L_129 = __this->get_U3CiU3E5__2_5();
		int32_t L_130 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		if ((((int32_t)L_129) < ((int32_t)L_130)))
		{
			goto IL_0289;
		}
	}
	{
		// }
		goto IL_036a;
	}

IL_02f6:
	{
		// for (int i = 0; i < size; i++){
		__this->set_U3CiU3E5__2_5(0);
		goto IL_035d;
	}

IL_02ff:
	{
		// writeToIndex(auxArray,i, array[i].value);
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_131 = V_1;
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_132 = V_1;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_133 = L_132->get_auxArray_8();
		int32_t L_134 = __this->get_U3CiU3E5__2_5();
		SortingAlgorithmWithAuxArray_t3E5C44CFD8B134320E8237753392570BA58BCEAF * L_135 = V_1;
		ArrayIndexU5BU5D_t74D806DFCE6BAB49D5E1E1295F1CA072443EF182* L_136 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7 *)L_135)->get_array_4();
		int32_t L_137 = __this->get_U3CiU3E5__2_5();
		int32_t L_138 = L_137;
		ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 * L_139 = (L_136)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_138));
		int32_t L_140 = L_139->get_value_1();
		SortingAlgorithm_writeToIndex_m663DDCC614F023DB2FFD245C3AFA4AD21CF803A1(L_131, L_133, L_134, L_140, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(.01f*time);
		int32_t L_141 = __this->get_time_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_142 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_142, ((float)il2cpp_codegen_multiply((float)(0.00999999978f), (float)((float)((float)L_141)))), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_142);
		__this->set_U3CU3E1__state_0(5);
		return (bool)1;
	}

IL_0344:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < size; i++){
		int32_t L_143 = __this->get_U3CiU3E5__2_5();
		V_4 = L_143;
		int32_t L_144 = V_4;
		__this->set_U3CiU3E5__2_5(((int32_t)il2cpp_codegen_add((int32_t)L_144, (int32_t)1)));
	}

IL_035d:
	{
		// for (int i = 0; i < size; i++){
		int32_t L_145 = __this->get_U3CiU3E5__2_5();
		int32_t L_146 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		if ((((int32_t)L_145) < ((int32_t)L_146)))
		{
			goto IL_02ff;
		}
	}

IL_036a:
	{
		// }
		return (bool)0;
	}
}
// System.Object SortingAlgorithmWithAuxArray/<extendCommands>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CextendCommandsU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m70DEF264053FE53DFF168877A3F7304AB68B19AE (U3CextendCommandsU3Ed__6_tF390D4906D3F0DB7F02E3F01B58DF422FCC50564 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SortingAlgorithmWithAuxArray/<extendCommands>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CextendCommandsU3Ed__6_System_Collections_IEnumerator_Reset_m65F71821A8F3378870544F747485C3F9A393A9E5 (U3CextendCommandsU3Ed__6_tF390D4906D3F0DB7F02E3F01B58DF422FCC50564 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CextendCommandsU3Ed__6_System_Collections_IEnumerator_Reset_m65F71821A8F3378870544F747485C3F9A393A9E5_RuntimeMethod_var)));
	}
}
// System.Object SortingAlgorithmWithAuxArray/<extendCommands>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CextendCommandsU3Ed__6_System_Collections_IEnumerator_get_Current_m9D52EAF4D3A78BD3D38164346EB5DA1A10AFDB76 (U3CextendCommandsU3Ed__6_tF390D4906D3F0DB7F02E3F01B58DF422FCC50564 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void SortingAlgorithmWithAuxArray/AuxArrayIndex::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuxArrayIndex__ctor_mA32F6CD78E5394E7C1A986EBBEF7EE295A5AF952 (AuxArrayIndex_tE70B103A9D225ACF3F1D1D30F76CE00FD45C2906 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AuxArrayIndex(int value) : base(){
		ArrayIndex__ctor_m132D08AAD796EA0F5AC7518E94787C5CDC8DC23A(__this, /*hidden argument*/NULL);
		// o = GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC(3, /*hidden argument*/NULL);
		((ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 *)__this)->set_o_0(L_0);
		// o.transform.position = new Vector3(size*-1 + value - 1, 0, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ((ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 *)__this)->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		int32_t L_3 = ((SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_StaticFields*)il2cpp_codegen_static_fields_for(SortingAlgorithm_t3BCB077CD9F4EA4B96ADD05F5BD816FC6E21AEA7_il2cpp_TypeInfo_var))->get_size_5();
		int32_t L_4 = ___value0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)(-1))), (int32_t)L_4)), (int32_t)1)))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_5, /*hidden argument*/NULL);
		// o.transform.localScale = new Vector3(0, 0, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = ((ArrayIndex_t7D897481EECC546AF055AAE150C9AFFF52979367 *)__this)->get_o_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_7, L_8, /*hidden argument*/NULL);
		// }
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
// System.Void TreeBuilder/<readQueue>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__13__ctor_mF0013D373DB208DE44D62BB42BE6004FD6722531 (U3CreadQueueU3Ed__13_t6F0C1ECD9FAFBBD32DA5617BD6250B17D9F58C2A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TreeBuilder/<readQueue>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__13_System_IDisposable_Dispose_m0443FDF92426B01620C271BDB02637ED40429DBB (U3CreadQueueU3Ed__13_t6F0C1ECD9FAFBBD32DA5617BD6250B17D9F58C2A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1))) <= ((uint32_t)2))))
		{
			goto IL_001c;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1C, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		U3CreadQueueU3Ed__13_U3CU3Em__Finally1_m3634BF69C371F9B3ACD943491FEEFB425D2F3B82(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(21)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1C, IL_001c)
	}

IL_001c:
	{
		return;
	}
}
// System.Boolean TreeBuilder/<readQueue>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CreadQueueU3Ed__13_MoveNext_mB98DCECD4031094EBAB8A74E2A1FCF441967E56B (U3CreadQueueU3Ed__13_t6F0C1ECD9FAFBBD32DA5617BD6250B17D9F58C2A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB94F79AF99EB1F84056002952B39BFDEA97D447);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC * V_2 = NULL;
	QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * V_3 = NULL;
	int16_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_002b;
				}
				case 1:
				{
					goto IL_011d;
				}
				case 2:
				{
					goto IL_0236;
				}
				case 3:
				{
					goto IL_0291;
				}
			}
		}

IL_0024:
		{
			V_0 = (bool)0;
			goto IL_02c1;
		}

IL_002b:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (QueueCommand instr in q)
			TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC * L_3 = V_2;
			Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_4 = L_3->get_q_7();
			RuntimeObject* L_5;
			L_5 = VirtFuncInvoker0< RuntimeObject* >::Invoke(12 /* System.Collections.IEnumerator System.Collections.Queue::GetEnumerator() */, L_4);
			__this->set_U3CU3E7__wrap1_4(L_5);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0299;
		}

IL_0050:
		{
			// foreach (QueueCommand instr in q)
			RuntimeObject* L_6 = __this->get_U3CU3E7__wrap1_4();
			RuntimeObject * L_7;
			L_7 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_6);
			V_3 = ((QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA *)CastclassClass((RuntimeObject*)L_7, QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA_il2cpp_TypeInfo_var));
			// switch (instr.commandId)
			QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_8 = V_3;
			int16_t L_9 = L_8->get_commandId_0();
			V_4 = L_9;
			int16_t L_10 = V_4;
			switch (L_10)
			{
				case 0:
				{
					goto IL_0099;
				}
				case 1:
				{
					goto IL_00df;
				}
				case 2:
				{
					goto IL_012a;
				}
				case 3:
				{
					goto IL_014e;
				}
				case 4:
				{
					goto IL_0240;
				}
				case 5:
				{
					goto IL_025d;
				}
				case 6:
				{
					goto IL_0275;
				}
				case 7:
				{
					goto IL_0299;
				}
				case 8:
				{
					goto IL_0299;
				}
			}
		}

IL_0094:
		{
			goto IL_0299;
		}

IL_0099:
		{
			// instr.node1.o = GameObject.CreatePrimitive(PrimitiveType.Sphere);
			QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_11 = V_3;
			TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_12 = L_11->get_node1_1();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
			L_13 = GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC(0, /*hidden argument*/NULL);
			L_12->set_o_0(L_13);
			// instr.node1.o.transform.position = new Vector3(0, 10-2*instr.node1.depth);
			QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_14 = V_3;
			TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_15 = L_14->get_node1_1();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = L_15->get_o_0();
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
			L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
			QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_18 = V_3;
			TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_19 = L_18->get_node1_1();
			int32_t L_20 = L_19->get_depth_3();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
			memset((&L_21), 0, sizeof(L_21));
			Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_21), (0.0f), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)10), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_20)))))), /*hidden argument*/NULL);
			Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_17, L_21, /*hidden argument*/NULL);
			// break;
			goto IL_0299;
		}

IL_00df:
		{
			// instr.node1.o.GetComponent<Renderer>().material.color = Color.red;
			QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_22 = V_3;
			TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_23 = L_22->get_node1_1();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = L_23->get_o_0();
			Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
			L_25 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_24, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26;
			L_26 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_25, /*hidden argument*/NULL);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_27;
			L_27 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
			Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_26, L_27, /*hidden argument*/NULL);
			// yield return new WaitForSeconds(time);
			float L_28 = __this->get_time_3();
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_29 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_29, L_28, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_29);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_02c1;
		}

IL_011d:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// break;
			goto IL_0299;
		}

IL_012a:
		{
			// instr.node1.o.GetComponent<Renderer>().material.color = Color.white;
			QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_30 = V_3;
			TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_31 = L_30->get_node1_1();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = L_31->get_o_0();
			Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_33;
			L_33 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_32, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_34;
			L_34 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_33, /*hidden argument*/NULL);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_35;
			L_35 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
			Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_34, L_35, /*hidden argument*/NULL);
			// break;
			goto IL_0299;
		}

IL_014e:
		{
			// instr.node1.parentEdge = new GameObject("Line").AddComponent(typeof(LineRenderer)) as LineRenderer;
			QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_36 = V_3;
			TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_37 = L_36->get_node1_1();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
			GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_38, _stringLiteralAB94F79AF99EB1F84056002952B39BFDEA97D447, /*hidden argument*/NULL);
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_39 = { reinterpret_cast<intptr_t> (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_40;
			L_40 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_39, /*hidden argument*/NULL);
			Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_41;
			L_41 = GameObject_AddComponent_mD183856CB5A1CCF1576221D7D6CEBC4092E734B8(L_38, L_40, /*hidden argument*/NULL);
			L_37->set_parentEdge_5(((LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 *)IsInstSealed((RuntimeObject*)L_41, LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_il2cpp_TypeInfo_var)));
			// instr.node1.parentEdge.GetComponent<LineRenderer>().startColor = Color.black;
			QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_42 = V_3;
			TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_43 = L_42->get_node1_1();
			LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_44 = L_43->get_parentEdge_5();
			LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_45;
			L_45 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_44, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_46;
			L_46 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
			LineRenderer_set_startColor_m7C75698F11565606CEA049DD3AE0514BADBF6BB7(L_45, L_46, /*hidden argument*/NULL);
			// instr.node1.parentEdge.GetComponent<LineRenderer>().endColor = Color.black;
			QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_47 = V_3;
			TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_48 = L_47->get_node1_1();
			LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_49 = L_48->get_parentEdge_5();
			LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_50;
			L_50 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_49, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_51;
			L_51 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
			LineRenderer_set_endColor_mF9F043C0EE5E36AD5B36547A17171ECA6967CDE2(L_50, L_51, /*hidden argument*/NULL);
			// instr.node1.parentEdge.GetComponent<LineRenderer>().startWidth = .05f;
			QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_52 = V_3;
			TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_53 = L_52->get_node1_1();
			LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_54 = L_53->get_parentEdge_5();
			LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_55;
			L_55 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_54, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
			LineRenderer_set_startWidth_mD88B562DD413EE9861FB254963C7EDCB5199C1DF(L_55, (0.0500000007f), /*hidden argument*/NULL);
			// instr.node1.parentEdge.GetComponent<LineRenderer>().endWidth = .05f;
			QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_56 = V_3;
			TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_57 = L_56->get_node1_1();
			LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_58 = L_57->get_parentEdge_5();
			LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_59;
			L_59 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_58, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
			LineRenderer_set_endWidth_m3DCD4FFCC3944DD6DC0737C8AF8C7EDB5A6CF59A(L_59, (0.0500000007f), /*hidden argument*/NULL);
			// instr.node1.parentEdge.GetComponent<LineRenderer>().positionCount = 2;
			QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_60 = V_3;
			TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_61 = L_60->get_node1_1();
			LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_62 = L_61->get_parentEdge_5();
			LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_63;
			L_63 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_62, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
			LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5(L_63, 2, /*hidden argument*/NULL);
			// instr.node1.parentEdge.GetComponent<LineRenderer>().useWorldSpace = true;
			QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_64 = V_3;
			TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_65 = L_64->get_node1_1();
			LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_66 = L_65->get_parentEdge_5();
			LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_67;
			L_67 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_66, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
			LineRenderer_set_useWorldSpace_m53AA0FE659EFB041647DB6A29826D20D52CBE148(L_67, (bool)1, /*hidden argument*/NULL);
			// resetPositions(root);
			TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC * L_68 = V_2;
			TreeBuilder_t7B3AA32B3BA3E0AFD9A8CC410875A24DE0554EAC * L_69 = V_2;
			TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_70 = L_69->get_root_4();
			TreeBuilder_resetPositions_m94D2731BDFE7166481A38C93D132EFE1DA5C26E9(L_68, L_70, /*hidden argument*/NULL);
			// yield return new WaitForSeconds(time);
			float L_71 = __this->get_time_3();
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_72 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_72, L_71, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_72);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_02c1;
		}

IL_0236:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// break;
			goto IL_0299;
		}

IL_0240:
		{
			// instr.node1.childVolumes[instr.additionalInfo]++;
			QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_73 = V_3;
			TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_74 = L_73->get_node1_1();
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_75 = L_74->get_childVolumes_4();
			QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_76 = V_3;
			int16_t L_77 = L_76->get_additionalInfo_3();
			int32_t* L_78 = ((L_75)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_77)));
			int32_t L_79 = *((int32_t*)L_78);
			*((int32_t*)L_78) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
			// break;
			goto IL_0299;
		}

IL_025d:
		{
			// instr.node1.childVolumes[1]++;
			QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * L_80 = V_3;
			TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_81 = L_80->get_node1_1();
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_82 = L_81->get_childVolumes_4();
			int32_t* L_83 = ((L_82)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)));
			int32_t L_84 = *((int32_t*)L_83);
			*((int32_t*)L_83) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1));
			// break;
			goto IL_0299;
		}

IL_0275:
		{
			// yield return new WaitForSeconds(time);
			float L_85 = __this->get_time_3();
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_86 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_86, L_85, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_86);
			__this->set_U3CU3E1__state_0(3);
			V_0 = (bool)1;
			goto IL_02c1;
		}

IL_0291:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0299:
		{
			// foreach (QueueCommand instr in q)
			RuntimeObject* L_87 = __this->get_U3CU3E7__wrap1_4();
			bool L_88;
			L_88 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_87);
			if (L_88)
			{
				goto IL_0050;
			}
		}

IL_02a9:
		{
			U3CreadQueueU3Ed__13_U3CU3Em__Finally1_m3634BF69C371F9B3ACD943491FEEFB425D2F3B82(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_4((RuntimeObject*)NULL);
			// }
			V_0 = (bool)0;
			goto IL_02c1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_02ba;
	}

FAULT_02ba:
	{ // begin fault (depth: 1)
		U3CreadQueueU3Ed__13_System_IDisposable_Dispose_m0443FDF92426B01620C271BDB02637ED40429DBB(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(698)
	} // end fault
	IL2CPP_CLEANUP(698)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_02c1:
	{
		bool L_89 = V_0;
		return L_89;
	}
}
// System.Void TreeBuilder/<readQueue>d__13::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__13_U3CU3Em__Finally1_m3634BF69C371F9B3ACD943491FEEFB425D2F3B82 (U3CreadQueueU3Ed__13_t6F0C1ECD9FAFBBD32DA5617BD6250B17D9F58C2A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_4();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_2);
	}

IL_001c:
	{
		return;
	}
}
// System.Object TreeBuilder/<readQueue>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CreadQueueU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8BFC6B3D60929483CDFE6F5CC3307E44E30508E5 (U3CreadQueueU3Ed__13_t6F0C1ECD9FAFBBD32DA5617BD6250B17D9F58C2A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TreeBuilder/<readQueue>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreadQueueU3Ed__13_System_Collections_IEnumerator_Reset_m577914D2A44533C9EB11AF4C551C25A99E3411A6 (U3CreadQueueU3Ed__13_t6F0C1ECD9FAFBBD32DA5617BD6250B17D9F58C2A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CreadQueueU3Ed__13_System_Collections_IEnumerator_Reset_m577914D2A44533C9EB11AF4C551C25A99E3411A6_RuntimeMethod_var)));
	}
}
// System.Object TreeBuilder/<readQueue>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CreadQueueU3Ed__13_System_Collections_IEnumerator_get_Current_m1FCD60F9362BA87C9722521CE91FA92BF26B9D79 (U3CreadQueueU3Ed__13_t6F0C1ECD9FAFBBD32DA5617BD6250B17D9F58C2A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void TreeBuilder/QueueCommand::.ctor(System.Int16,TreeBuilder/TreeNode,TreeBuilder/TreeNode,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueCommand__ctor_m8D9B039659E872A481176B078FF23FD94A31D0F0 (QueueCommand_t9B46CEF78D2599DE90A5DDB2045A86018AD249EA * __this, int16_t ___commandId0, TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * ___node11, TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * ___node22, int16_t ___additionalInfo3, const RuntimeMethod* method)
{
	{
		// public QueueCommand(short commandId, TreeNode node1, TreeNode node2, short additionalInfo){
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.commandId = commandId;
		int16_t L_0 = ___commandId0;
		__this->set_commandId_0(L_0);
		// this.node1 = node1;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_1 = ___node11;
		__this->set_node1_1(L_1);
		// this.node2 = node2;
		TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * L_2 = ___node22;
		__this->set_node2_2(L_2);
		// this.additionalInfo = additionalInfo;
		int16_t L_3 = ___additionalInfo3;
		__this->set_additionalInfo_3(L_3);
		// }
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
// System.Void TreeBuilder/TreeNode::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeNode__ctor_mCABA83289871304795C0000DD27CF32225492C45 (TreeNode_t191EDA5C74F926296E6D77038C95AEECEA903D57 * __this, int32_t ___value0, int32_t ___depth1, int32_t ___NoOfChildren2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineRendererU5BU5D_t65EF16DA3FB3E6D083B247824B04BE10D0B46743_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TreeNode(int value, int depth, int NoOfChildren){
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// children = new TreeNode[NoOfChildren];
		int32_t L_0 = ___NoOfChildren2;
		TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA* L_1 = (TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA*)(TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA*)SZArrayNew(TreeNodeU5BU5D_t47A1BAFCDD7D1472CDDFBE288EE34AB4DABF99DA_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_children_1(L_1);
		// childVolumes = new int[NoOfChildren];
		int32_t L_2 = ___NoOfChildren2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->set_childVolumes_4(L_3);
		// childEdges = new LineRenderer[NoOfChildren];
		int32_t L_4 = ___NoOfChildren2;
		LineRendererU5BU5D_t65EF16DA3FB3E6D083B247824B04BE10D0B46743* L_5 = (LineRendererU5BU5D_t65EF16DA3FB3E6D083B247824B04BE10D0B46743*)(LineRendererU5BU5D_t65EF16DA3FB3E6D083B247824B04BE10D0B46743*)SZArrayNew(LineRendererU5BU5D_t65EF16DA3FB3E6D083B247824B04BE10D0B46743_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->set_childEdges_6(L_5);
		// this.value = value;
		int32_t L_6 = ___value0;
		__this->set_value_2(L_6);
		// this.depth = depth;
		int32_t L_7 = ___depth1;
		__this->set_depth_3(L_7);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		float L_2 = ___z2;
		__this->set_z_2(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		__this->set_z_2((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
