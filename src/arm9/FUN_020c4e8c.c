// FUN_020c4e8c @ 0x020c4e8c (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// FUN_020c4e8c @ 0x020c4e8c
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Bounds-check signed record index, return two words through output pointers, or set error 106 and return false.
 * Evidence: scratch/coverage-root/batch5/020c4e8c.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
int FUN_020c4e8c(char *self,int index,unsigned int *a,unsigned int *b) {
    if(index<0 || index>=*(int *)(self+56)) { *(unsigned int *)(self+36)=106;return 0; }
    { unsigned int *record=*(unsigned int **)(self+52)+2*index;*a=record[0];*b=record[1]; }
    return 1;
}
