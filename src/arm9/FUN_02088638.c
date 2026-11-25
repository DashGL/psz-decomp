// FUN_02088638 @ 0x02088638 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_02088638 @ 0x02088638 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Submit transfer when three backing fields are nonzero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02088638.txt.
 */
extern void FUN_020205dc(int,unsigned int,void *,unsigned int); void FUN_02088638(char *self) { void *p=*(void **)(self+380); if(p && *(unsigned int *)(self+372) && *(unsigned int *)(self+268)) FUN_020205dc(0,(*(unsigned int *)(self+268)&65535)<<3,p,2048); }
