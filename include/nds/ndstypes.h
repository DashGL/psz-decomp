// Minimal stand-in for the TWL SDK's ndstypes.h, just enough for decomp
// sources to compile without the proprietary SDK headers.
#ifndef NDS_NDSTYPES_H
#define NDS_NDSTYPES_H

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef long long s64;

typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile s8 vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;

#endif // NDS_NDSTYPES_H