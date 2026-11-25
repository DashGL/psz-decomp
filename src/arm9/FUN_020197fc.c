// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// FUN_020197fc @ 0x020197fc, true extent0x30; canonical bytes+relocs exact.
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// ROM has two distinct literal bases: aggregate destination and0210571c.
// Flags are at second-base+0xfc, not a field of the nearest aggregate.
// Null guard, 12-byte grouped copy, and flags read/modify/write preserved.
// flags: -O4,s -noThumb
typedef struct { unsigned int a,b,c; } Triple;
extern Triple DAT_021057fc;
extern struct { unsigned char padding[0xfc]; unsigned int flags; } DAT_0210571c;
void FUN_020197fc(Triple *p) { if(p) { DAT_021057fc=*p; DAT_0210571c.flags &= ~0xa4u; } }
