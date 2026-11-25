// FUN_020737a0 @ 0x020737a0 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_020737a0 @ 0x020737a0 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear halfwords +0/+12 and initialize embedded records +14/+24; return self.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020737a0.txt.
 */
extern void FUN_020c4434(void *);
void *FUN_020737a0(char *self) {
    *(unsigned short *)self=0; *(unsigned short *)(self+18)=0;
    FUN_020c4434(self+20); FUN_020c4434(self+36); return self;
}
