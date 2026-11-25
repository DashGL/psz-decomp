// FUN_020bef98 @ 0x020bef98 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch01-manifest.json; original draft retained for referenced provenance.
// FUN_020bef98 @ 0x020bef98 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Select one of three embedded list heads and insert record after head, repairing reverse links.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bef98.txt.
 */
void FUN_020bef98(char *self,int list,void **record) {
    void **heads[3]; void **head;
    heads[0]=(void **)(self+0x968); heads[1]=(void **)(self+0x980); heads[2]=(void **)(self+0x998);
    head=heads[list]; record[4]=head; record[5]=head[5];
    if(head[5]) ((void **)head[5])[4]=record;
    head[5]=record;
}
