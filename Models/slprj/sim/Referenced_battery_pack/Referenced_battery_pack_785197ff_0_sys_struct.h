#ifndef struct__PartitionedSystemTag
#define struct__PartitionedSystemTag
typedef struct _PartitionedSystemTag { PartitionedSystem mBase ; int32_T
mRefCnt ; PmAllocator mAlloc ; } _PartitionedSystem ;
#else
typedef struct _PartitionedSystemTag _PartitionedSystem ;
#endif
