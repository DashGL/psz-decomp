// FUN_02093bdc @ 0x02093bdc (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_02093bdc @ 0x02093bdc (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Virtually destroy two owned pointers and clear each.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02093bdc.txt.
 */
void *FUN_02093bdc(void **self) { int i; for(i=0;i<2;i++) { void *p=self[i]; if(p) { if(p) (*(void (***)(void *))p)[1](p); self[i]=0; } } return self; }
