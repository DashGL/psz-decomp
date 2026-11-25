// FUN_02042358 @ 0x02042358 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02042358 @ 0x02042358 (inventory code 0x30, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 24.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b24/02042358.txt.
 */
int FUN_02042358(char *s,int index) { if(index>-1 && index<5) { void **slot=((void **)(s+0xcc))+index; void *p=*slot; if(p) { if(p) { if(p) ((void (*)(void *))(*(void ***)p)[1])(p); *slot=0; } return 1; } } return 0; }
