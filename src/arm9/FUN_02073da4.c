// FUN_02073da4 @ 0x02073da4 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_02073da4 @ 0x02073da4 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize embedded fields then zero complete object; return receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02073da4.txt.
 */
extern void FUN_020c4434(void *), FUN_020656b8(void *,int,unsigned int);
void *FUN_02073da4(char *self) {
    *(unsigned short *)(self+4)=0; *(unsigned short *)(self+22)=0; FUN_020c4434(self+24);
    FUN_020656b8(self,0,40); return self;
}
