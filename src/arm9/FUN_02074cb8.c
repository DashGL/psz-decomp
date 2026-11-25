// FUN_02074cb8 @ 0x02074cb8 (0x3e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch05-manifest.json; original draft retained for referenced provenance.
// FUN_02074cb8 @ 0x02074cb8 (inventory code 0x3e, thumb)
// check: 2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Handle session failure or pending shutdown.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02074cb8.txt.
 */
typedef void (*Method)(void *); extern int *FUN_0200d16c(void); extern int FUN_02074d50(void *); extern void FUN_02073678(void); void FUN_02074cb8(int *self) { int mode=FUN_0200d16c()[3]; void *p; if((mode==1 || mode==8) && self[11]==-1) { self[8]=3; return; } if(FUN_02074d50(self)==3) { p=(void *)self[9]; (*(Method **)p)[2](p); FUN_02073678(); self[8]=0; } }
