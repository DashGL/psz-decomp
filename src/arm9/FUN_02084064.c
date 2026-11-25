// FUN_02084064 @ 0x02084064 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_02084064 @ 0x02084064 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy three-word vector and reset transform fields.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02084064.txt.
 */
extern void FUN_02034680(void *,void *); void FUN_02084064(char *self) { char *p; FUN_02034680(self+36,self+108); *(unsigned int *)(self+40)=6144; p=self+364; *(unsigned int *)p=0; *(unsigned int *)(p+4)=4096; *(unsigned int *)(p+8)=0; *(unsigned short *)(p+12)=0; }
