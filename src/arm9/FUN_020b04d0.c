// FUN_020b04d0 @ 0x020b04d0 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020b04d0 @ 0x020b04d0 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Add to signed halfword then clamp truncated result to zero and capacity.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b04d0.txt.
 */
int FUN_020b04d0(short *self,int amount) { self[4]=self[4]+amount; if(self[4]<0) self[4]=0; else if(self[5]<self[4]) self[4]=self[5]; return self[4]; }
