// FUN_02071bcc @ 0x02071bcc (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02071bcc @ 0x02071bcc (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Subtract signed halfword +1c from +1a, decrement positive +1c toward zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02071bcc.txt.
 */
void FUN_02071bcc(void *unused,char *record) {
    *(short *)(record+26)=*(short *)(record+26)-*(short *)(record+28);
    if(*(short *)(record+28)>0) (*(short *)(record+28))--;
}
