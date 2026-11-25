// FUN_0209af64 @ 0x0209af64 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_0209af64 @ 0x0209af64 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Append halfword and byte to bounded singleton queue and increment live count.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209af64.txt.
 */
void FUN_0209af64(unsigned int value,unsigned int tag) { char *p=*(char **)0x0211a61c; if(p) { int count=*(int *)(p+156); if(count<16) { char *slot=p+28+8*count; *(unsigned short *)slot=value; slot[2]=tag; *(int *)(p+156)=*(int *)(p+156)+1; } } }
