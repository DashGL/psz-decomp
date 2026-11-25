// FUN_02078b3c @ 0x02078b3c (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch25-manifest.json; original draft retained for referenced provenance.
// FUN_02078b3c @ 0x02078b3c (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve current descriptor and global record; fill output or initialize fallback.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02078b3c.txt.
 */
extern signed char *FUN_02078310(void); extern void *FUN_02031a74(void),*FUN_02031c74(void *); extern void FUN_02094258(void *,void *,int),FUN_0206d0b8(void *); void FUN_02078b3c(void *out) { signed char *p=FUN_02078310(); if(p) { int index=p[1]; void *record=FUN_02031c74(FUN_02031a74()); if(record) { FUN_02094258(out,record,index); return; } } FUN_0206d0b8(out); }
