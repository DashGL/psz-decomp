// FUN_02096984 @ 0x02096984 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_02096984 @ 0x02096984 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Remove five slots, clear masks and reset embedded state.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02096984.txt.
 */
extern void FUN_020966dc(void *,int),FUN_02096598(void *); void FUN_02096984(char *self) { int i; for(i=0;i<5;i++) FUN_020966dc(self,i); *(unsigned short *)(self+36)=0; *(unsigned short *)(self+38)=0; FUN_02096598(self+40); }
