// FUN_02072910 @ 0x02072910 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02072910 @ 0x02072910 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize two invalid words and two zero halfwords in second argument, then zero 64 payload bytes.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02072910.txt.
 */
extern void FUN_020656b8(void *,int,unsigned int);
void FUN_02072910(void *unused,char *record) {
    *(int *)record=-1; *(int *)(record+4)=-1;
    *(unsigned short *)(record+8)=0; *(unsigned short *)(record+10)=0;
    FUN_020656b8(record+12,0,64);
}
