/* Shared prelude for auto-matched (Ghidra m2c) sources - factored out of the
 * per-file boilerplate the batch pipeline emits; see
 * tools/probes/auto_m2c_v2.py PRELUDE. File-specific extern decls stay in
 * the matching src file; this header only carries the typedef aliases.
 * Type-faithful to Ghidra's output: do not "improve" these definitions. */
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned char uchar;
typedef unsigned long long ulonglong;
typedef unsigned long long u64;
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef short s16;
typedef signed char s8;
typedef unsigned char bool;
#define true 1
#define false 0
typedef long long longlong;
typedef void (*FUNCPTR)();