// FUN_02051b3c @ 0x02051b3c (0x98, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch28-manifest.json; original draft retained for referenced provenance.
// FUN_02051b3c @ 0x02051b3c (inventory code 0x98, thumb)
// check: 2.0/sp2p3 target=0x98 candidate=0x98 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 61.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b61/02051b3c.txt.
 */
int FUN_02051b3c(char *s,int index,int kind,int *out){int count=0;if(index>=0&&index<**(int **)(s+4)){char *header=*(char **)s+8*index;int n=*(signed char *)(header+2);if(n>0){char *p=*(char **)(s+8)+12**(short *)header,*end=p+12*n;for(;p<end;p+=12){int m=*(signed char *)(p+1);if(m>0&&*(signed char *)(p+8)==kind){char *entry=*(char **)(s+16)+8**(short *)(p+2),*last=entry+8*m;for(;entry<last;entry+=8){out[2*count]=*(signed char *)entry;out[2*count+1]=(*(signed char *)(entry+2)&2)!=0;if(++count>=32)return count;}}}}}return count;}
