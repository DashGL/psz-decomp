// FUN_02072f74 @ 0x02072f74 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02072f74 @ 0x02072f74 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Zero 340 bytes, then set words +4 through +10 to -1.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02072f74.txt.
 */
extern void FUN_020656b8(void *,int,unsigned int);
void FUN_02072f74(unsigned int *self) {
    int i; FUN_020656b8(self,0,340); for(i=0;i<4;i++) self[i+1]=~0u;
}
