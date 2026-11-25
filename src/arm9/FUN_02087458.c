// FUN_02087458 @ 0x02087458 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_02087458 @ 0x02087458 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear word +34, invalidate +38, zero and initialize 3444-byte subobject +3c.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02087458.txt.
 */
extern void FUN_0206557c(int,void *,unsigned int), FUN_02086edc(void *);
void FUN_02087458(char *self) { *(int *)(self+52)=0; *(int *)(self+56)=-1; FUN_0206557c(0,self+60,3444); FUN_02086edc(self+60); }
