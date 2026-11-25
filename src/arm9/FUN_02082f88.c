// FUN_02082f88 @ 0x02082f88 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_02082f88 @ 0x02082f88 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return signed byte from valid child and four-slot index.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02082f88.txt.
 */
extern char *FUN_02082fac(void *,int); int FUN_02082f88(void *self,int index,int slot) { char *p=FUN_02082fac(self,index); if(p && slot>=0 && slot<4) return *(signed char *)(p+24+slot); return -1; }
