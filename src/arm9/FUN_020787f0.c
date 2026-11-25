// FUN_020787f0 @ 0x020787f0 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_020787f0 @ 0x020787f0 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear eight byte fields, then apply common record initialization; return self.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020787f0.txt.
 */
extern void FUN_020783b0(void *);
void *FUN_020787f0(char *self) { self[2]=0; self[3]=0; self[4]=0; self[5]=0; self[6]=0; self[7]=0; self[14]=0; self[15]=0; FUN_020783b0(self); return self; }
