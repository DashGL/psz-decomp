// FUN_020a5fb4 @ 0x020a5fb4 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_020a5fb4 @ 0x020a5fb4 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Map selectors one and two to actions seven/eight, default six.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a5fb4.txt.
 */
extern void FUN_020a5330(void *,int); void FUN_020a5fb4(void *self,int selector) { switch(selector) { case 0:break; case 1:FUN_020a5330(self,7);return; case 2:FUN_020a5330(self,8);return; default:break; } FUN_020a5330(self,6); }
