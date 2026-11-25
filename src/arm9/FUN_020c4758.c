// FUN_020c4758 @ 0x020c4758 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// FUN_020c4758 @ 0x020c4758
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Append length+8 records, updating shared cursor and object count after each record; alias-sensitive reloads retained.
 * Evidence: scratch/coverage-root/batch10/020c4758.txt.
 */
void FUN_020c4758(unsigned char *self,const unsigned int *lengths,int count,unsigned int *cursor) {
 int i;for(i=0;i<count;++i){unsigned int *record=*(unsigned int **)(self+0x34)+2*(*(unsigned int *)(self+0x38));record[0]=*cursor;record[1]=lengths[i]+8;*cursor+=record[1];++*(unsigned int *)(self+0x38);}
}
