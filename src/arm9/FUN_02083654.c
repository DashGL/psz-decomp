// FUN_02083654 @ 0x02083654 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_02083654 @ 0x02083654 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct base and two embedded objects.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02083654.txt.
 */
extern void FUN_020715a8(void *),FUN_02083810(void *),FUN_02083da8(void *);void *FUN_02083654(char *self){FUN_020715a8(self);*(unsigned int *)self=0x020fa814;*(int *)(self+168)=-1;*(int *)(self+172)=0;FUN_02083810(self+176);FUN_02083da8(self+312);return self;}
