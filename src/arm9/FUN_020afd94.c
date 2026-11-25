// FUN_020afd94 @ 0x020afd94 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_020afd94 @ 0x020afd94 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return vector distance below receiver threshold, otherwise sentinel.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020afd94.txt.
 */
extern void FUN_02036348(void *,void *,void *); extern int FUN_0205c86c(void *); int FUN_020afd94(char *self,char *other) { int result; unsigned int vector[3]; if(self==other) return 0x0ffff000; FUN_02036348(vector,self+12,other+12); result=FUN_0205c86c(vector); if(*(int *)(self+8)<=result) result=0x0ffff000; return result; }
