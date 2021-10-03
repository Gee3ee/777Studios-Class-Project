#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000009 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000A TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000C TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000010 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000012 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000014 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000015 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000016 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000017 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000018 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000019 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000001A System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000001B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000001C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000001D System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001E System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001F System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000020 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000021 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000022 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000023 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000024 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000025 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000027 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000028 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000029 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002B System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000002D System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000002E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000030 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000031 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000032 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000033 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000034 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000035 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000036 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000037 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000038 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000039 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003B System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003C System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000003D System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000040 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000041 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000042 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000043 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000044 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000045 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000046 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000047 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000048 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000049 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000004A System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000004B System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000004C System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000004D System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x0000004E TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x0000004F System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000050 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000051 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000052 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000053 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000054 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000055 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000056 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000057 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x00000058 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x00000059 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x0000005A System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x0000005B System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x0000005C TElement[] System.Linq.Buffer`1::ToArray()
// 0x0000005D System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x0000005E System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x0000005F System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000060 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000061 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000062 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000063 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000064 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000065 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000066 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000067 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000068 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000069 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006A System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000006B System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x0000006C System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x0000006D System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x0000006E System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x0000006F System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000070 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000071 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000072 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000073 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000074 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000075 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000076 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000077 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000078 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000079 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[121] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[121] = 
{
	2618,
	2704,
	2704,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[42] = 
{
	{ 0x02000004, { 63, 4 } },
	{ 0x02000005, { 67, 9 } },
	{ 0x02000006, { 78, 7 } },
	{ 0x02000007, { 87, 10 } },
	{ 0x02000008, { 99, 11 } },
	{ 0x02000009, { 113, 9 } },
	{ 0x0200000A, { 125, 12 } },
	{ 0x0200000B, { 140, 1 } },
	{ 0x0200000C, { 141, 2 } },
	{ 0x0200000D, { 143, 2 } },
	{ 0x0200000F, { 145, 3 } },
	{ 0x02000010, { 150, 5 } },
	{ 0x02000011, { 155, 7 } },
	{ 0x02000012, { 162, 3 } },
	{ 0x02000013, { 165, 7 } },
	{ 0x02000014, { 172, 4 } },
	{ 0x02000015, { 176, 21 } },
	{ 0x02000017, { 197, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 2 } },
	{ 0x06000009, { 32, 1 } },
	{ 0x0600000A, { 33, 3 } },
	{ 0x0600000B, { 36, 2 } },
	{ 0x0600000C, { 38, 4 } },
	{ 0x0600000D, { 42, 4 } },
	{ 0x0600000E, { 46, 3 } },
	{ 0x0600000F, { 49, 1 } },
	{ 0x06000010, { 50, 1 } },
	{ 0x06000011, { 51, 3 } },
	{ 0x06000012, { 54, 2 } },
	{ 0x06000013, { 56, 2 } },
	{ 0x06000014, { 58, 5 } },
	{ 0x06000024, { 76, 2 } },
	{ 0x06000029, { 85, 2 } },
	{ 0x0600002E, { 97, 2 } },
	{ 0x06000034, { 110, 3 } },
	{ 0x06000039, { 122, 3 } },
	{ 0x0600003E, { 137, 3 } },
	{ 0x06000049, { 148, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[199] = 
{
	{ (Il2CppRGCTXDataType)2, 1295 },
	{ (Il2CppRGCTXDataType)3, 5044 },
	{ (Il2CppRGCTXDataType)2, 2186 },
	{ (Il2CppRGCTXDataType)2, 1867 },
	{ (Il2CppRGCTXDataType)3, 8711 },
	{ (Il2CppRGCTXDataType)2, 1379 },
	{ (Il2CppRGCTXDataType)2, 1874 },
	{ (Il2CppRGCTXDataType)3, 8729 },
	{ (Il2CppRGCTXDataType)2, 1869 },
	{ (Il2CppRGCTXDataType)3, 8718 },
	{ (Il2CppRGCTXDataType)2, 1296 },
	{ (Il2CppRGCTXDataType)3, 5045 },
	{ (Il2CppRGCTXDataType)2, 2209 },
	{ (Il2CppRGCTXDataType)2, 1876 },
	{ (Il2CppRGCTXDataType)3, 8736 },
	{ (Il2CppRGCTXDataType)2, 1396 },
	{ (Il2CppRGCTXDataType)2, 1884 },
	{ (Il2CppRGCTXDataType)3, 8766 },
	{ (Il2CppRGCTXDataType)2, 1880 },
	{ (Il2CppRGCTXDataType)3, 8750 },
	{ (Il2CppRGCTXDataType)2, 438 },
	{ (Il2CppRGCTXDataType)3, 19 },
	{ (Il2CppRGCTXDataType)3, 20 },
	{ (Il2CppRGCTXDataType)2, 818 },
	{ (Il2CppRGCTXDataType)3, 3728 },
	{ (Il2CppRGCTXDataType)2, 439 },
	{ (Il2CppRGCTXDataType)3, 23 },
	{ (Il2CppRGCTXDataType)3, 24 },
	{ (Il2CppRGCTXDataType)2, 824 },
	{ (Il2CppRGCTXDataType)3, 3730 },
	{ (Il2CppRGCTXDataType)2, 1650 },
	{ (Il2CppRGCTXDataType)3, 7615 },
	{ (Il2CppRGCTXDataType)3, 4076 },
	{ (Il2CppRGCTXDataType)2, 494 },
	{ (Il2CppRGCTXDataType)3, 518 },
	{ (Il2CppRGCTXDataType)3, 519 },
	{ (Il2CppRGCTXDataType)2, 1380 },
	{ (Il2CppRGCTXDataType)3, 5542 },
	{ (Il2CppRGCTXDataType)2, 1226 },
	{ (Il2CppRGCTXDataType)2, 929 },
	{ (Il2CppRGCTXDataType)2, 1013 },
	{ (Il2CppRGCTXDataType)2, 1076 },
	{ (Il2CppRGCTXDataType)2, 1227 },
	{ (Il2CppRGCTXDataType)2, 930 },
	{ (Il2CppRGCTXDataType)2, 1014 },
	{ (Il2CppRGCTXDataType)2, 1077 },
	{ (Il2CppRGCTXDataType)2, 1015 },
	{ (Il2CppRGCTXDataType)2, 1078 },
	{ (Il2CppRGCTXDataType)3, 3729 },
	{ (Il2CppRGCTXDataType)2, 691 },
	{ (Il2CppRGCTXDataType)2, 1005 },
	{ (Il2CppRGCTXDataType)2, 1006 },
	{ (Il2CppRGCTXDataType)2, 1074 },
	{ (Il2CppRGCTXDataType)3, 3727 },
	{ (Il2CppRGCTXDataType)2, 928 },
	{ (Il2CppRGCTXDataType)2, 1012 },
	{ (Il2CppRGCTXDataType)2, 927 },
	{ (Il2CppRGCTXDataType)3, 10508 },
	{ (Il2CppRGCTXDataType)3, 3323 },
	{ (Il2CppRGCTXDataType)2, 732 },
	{ (Il2CppRGCTXDataType)2, 1008 },
	{ (Il2CppRGCTXDataType)2, 1075 },
	{ (Il2CppRGCTXDataType)2, 1126 },
	{ (Il2CppRGCTXDataType)3, 5046 },
	{ (Il2CppRGCTXDataType)3, 5048 },
	{ (Il2CppRGCTXDataType)2, 308 },
	{ (Il2CppRGCTXDataType)3, 5047 },
	{ (Il2CppRGCTXDataType)3, 5056 },
	{ (Il2CppRGCTXDataType)2, 1299 },
	{ (Il2CppRGCTXDataType)2, 1870 },
	{ (Il2CppRGCTXDataType)3, 8719 },
	{ (Il2CppRGCTXDataType)3, 5057 },
	{ (Il2CppRGCTXDataType)2, 1047 },
	{ (Il2CppRGCTXDataType)2, 1096 },
	{ (Il2CppRGCTXDataType)3, 3736 },
	{ (Il2CppRGCTXDataType)3, 10498 },
	{ (Il2CppRGCTXDataType)2, 1881 },
	{ (Il2CppRGCTXDataType)3, 8751 },
	{ (Il2CppRGCTXDataType)3, 5049 },
	{ (Il2CppRGCTXDataType)2, 1298 },
	{ (Il2CppRGCTXDataType)2, 1868 },
	{ (Il2CppRGCTXDataType)3, 8712 },
	{ (Il2CppRGCTXDataType)3, 3735 },
	{ (Il2CppRGCTXDataType)3, 5050 },
	{ (Il2CppRGCTXDataType)3, 10497 },
	{ (Il2CppRGCTXDataType)2, 1877 },
	{ (Il2CppRGCTXDataType)3, 8737 },
	{ (Il2CppRGCTXDataType)3, 5063 },
	{ (Il2CppRGCTXDataType)2, 1300 },
	{ (Il2CppRGCTXDataType)2, 1875 },
	{ (Il2CppRGCTXDataType)3, 8730 },
	{ (Il2CppRGCTXDataType)3, 5583 },
	{ (Il2CppRGCTXDataType)3, 2688 },
	{ (Il2CppRGCTXDataType)3, 3737 },
	{ (Il2CppRGCTXDataType)3, 2687 },
	{ (Il2CppRGCTXDataType)3, 5064 },
	{ (Il2CppRGCTXDataType)3, 10499 },
	{ (Il2CppRGCTXDataType)2, 1885 },
	{ (Il2CppRGCTXDataType)3, 8767 },
	{ (Il2CppRGCTXDataType)3, 5077 },
	{ (Il2CppRGCTXDataType)2, 1302 },
	{ (Il2CppRGCTXDataType)2, 1883 },
	{ (Il2CppRGCTXDataType)3, 8753 },
	{ (Il2CppRGCTXDataType)3, 5078 },
	{ (Il2CppRGCTXDataType)2, 1050 },
	{ (Il2CppRGCTXDataType)2, 1099 },
	{ (Il2CppRGCTXDataType)3, 3741 },
	{ (Il2CppRGCTXDataType)3, 3740 },
	{ (Il2CppRGCTXDataType)2, 1872 },
	{ (Il2CppRGCTXDataType)3, 8721 },
	{ (Il2CppRGCTXDataType)3, 10502 },
	{ (Il2CppRGCTXDataType)2, 1882 },
	{ (Il2CppRGCTXDataType)3, 8752 },
	{ (Il2CppRGCTXDataType)3, 5070 },
	{ (Il2CppRGCTXDataType)2, 1301 },
	{ (Il2CppRGCTXDataType)2, 1879 },
	{ (Il2CppRGCTXDataType)3, 8739 },
	{ (Il2CppRGCTXDataType)3, 3739 },
	{ (Il2CppRGCTXDataType)3, 3738 },
	{ (Il2CppRGCTXDataType)3, 5071 },
	{ (Il2CppRGCTXDataType)2, 1871 },
	{ (Il2CppRGCTXDataType)3, 8720 },
	{ (Il2CppRGCTXDataType)3, 10501 },
	{ (Il2CppRGCTXDataType)2, 1878 },
	{ (Il2CppRGCTXDataType)3, 8738 },
	{ (Il2CppRGCTXDataType)3, 5084 },
	{ (Il2CppRGCTXDataType)2, 1303 },
	{ (Il2CppRGCTXDataType)2, 1887 },
	{ (Il2CppRGCTXDataType)3, 8769 },
	{ (Il2CppRGCTXDataType)3, 5584 },
	{ (Il2CppRGCTXDataType)3, 2690 },
	{ (Il2CppRGCTXDataType)3, 3743 },
	{ (Il2CppRGCTXDataType)3, 3742 },
	{ (Il2CppRGCTXDataType)3, 2689 },
	{ (Il2CppRGCTXDataType)3, 5085 },
	{ (Il2CppRGCTXDataType)2, 1873 },
	{ (Il2CppRGCTXDataType)3, 8722 },
	{ (Il2CppRGCTXDataType)3, 10503 },
	{ (Il2CppRGCTXDataType)2, 1886 },
	{ (Il2CppRGCTXDataType)3, 8768 },
	{ (Il2CppRGCTXDataType)3, 3733 },
	{ (Il2CppRGCTXDataType)3, 3734 },
	{ (Il2CppRGCTXDataType)3, 3744 },
	{ (Il2CppRGCTXDataType)2, 2216 },
	{ (Il2CppRGCTXDataType)2, 692 },
	{ (Il2CppRGCTXDataType)2, 440 },
	{ (Il2CppRGCTXDataType)3, 29 },
	{ (Il2CppRGCTXDataType)3, 7602 },
	{ (Il2CppRGCTXDataType)2, 1651 },
	{ (Il2CppRGCTXDataType)3, 7616 },
	{ (Il2CppRGCTXDataType)2, 495 },
	{ (Il2CppRGCTXDataType)3, 520 },
	{ (Il2CppRGCTXDataType)3, 7608 },
	{ (Il2CppRGCTXDataType)3, 2669 },
	{ (Il2CppRGCTXDataType)2, 327 },
	{ (Il2CppRGCTXDataType)3, 7603 },
	{ (Il2CppRGCTXDataType)2, 1647 },
	{ (Il2CppRGCTXDataType)3, 546 },
	{ (Il2CppRGCTXDataType)2, 507 },
	{ (Il2CppRGCTXDataType)2, 718 },
	{ (Il2CppRGCTXDataType)3, 2675 },
	{ (Il2CppRGCTXDataType)3, 7604 },
	{ (Il2CppRGCTXDataType)3, 2664 },
	{ (Il2CppRGCTXDataType)3, 2665 },
	{ (Il2CppRGCTXDataType)3, 2663 },
	{ (Il2CppRGCTXDataType)3, 2666 },
	{ (Il2CppRGCTXDataType)2, 714 },
	{ (Il2CppRGCTXDataType)2, 2251 },
	{ (Il2CppRGCTXDataType)3, 3732 },
	{ (Il2CppRGCTXDataType)3, 2668 },
	{ (Il2CppRGCTXDataType)2, 992 },
	{ (Il2CppRGCTXDataType)3, 2667 },
	{ (Il2CppRGCTXDataType)2, 931 },
	{ (Il2CppRGCTXDataType)2, 2212 },
	{ (Il2CppRGCTXDataType)2, 1026 },
	{ (Il2CppRGCTXDataType)2, 1079 },
	{ (Il2CppRGCTXDataType)3, 3339 },
	{ (Il2CppRGCTXDataType)2, 740 },
	{ (Il2CppRGCTXDataType)3, 3957 },
	{ (Il2CppRGCTXDataType)3, 3958 },
	{ (Il2CppRGCTXDataType)3, 3963 },
	{ (Il2CppRGCTXDataType)2, 1134 },
	{ (Il2CppRGCTXDataType)3, 3960 },
	{ (Il2CppRGCTXDataType)3, 10783 },
	{ (Il2CppRGCTXDataType)2, 719 },
	{ (Il2CppRGCTXDataType)3, 2682 },
	{ (Il2CppRGCTXDataType)1, 989 },
	{ (Il2CppRGCTXDataType)2, 2222 },
	{ (Il2CppRGCTXDataType)3, 3959 },
	{ (Il2CppRGCTXDataType)1, 2222 },
	{ (Il2CppRGCTXDataType)1, 1134 },
	{ (Il2CppRGCTXDataType)2, 2265 },
	{ (Il2CppRGCTXDataType)2, 2222 },
	{ (Il2CppRGCTXDataType)3, 3964 },
	{ (Il2CppRGCTXDataType)3, 3962 },
	{ (Il2CppRGCTXDataType)3, 3961 },
	{ (Il2CppRGCTXDataType)2, 215 },
	{ (Il2CppRGCTXDataType)3, 2691 },
	{ (Il2CppRGCTXDataType)2, 317 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	121,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	42,
	s_rgctxIndices,
	199,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
