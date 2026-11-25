// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x26, exact bytes and relocation targets.
// Evidence: notes/sessions/matching-upper-continue-2026-11-12.md
// FUN_02085380 @ 0x02085380 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct 12-byte message with four halfword fields.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02085380.txt.
 */
extern void FUN_02036094(void *),FUN_020360a4(void *,int,int,int); void *FUN_02085380(short *self) { FUN_02036094(self); FUN_020360a4(self,2,9,12); self[2]=0; self[3]=0; self[4]=1; self[5]=-1; return self; }
