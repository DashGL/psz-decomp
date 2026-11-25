// FUN_020483f4 @ 0x020483f4 (0x62, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_020483f4 @ 0x020483f4 (inventory code 0x62, thumb)
// check: 2.0/sp2p3 target=0x62 candidate=0x62 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 43.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b43/020483f4.txt.
 */
extern void FUN_02046d00(void *,void *);extern void FUN_020456bc(void *,int);extern void *FUN_02048620(void *,int,int,int);
void FUN_020483f4(char *s,void *src,int a,int b){unsigned int record[25];int i;*(int *)(s+4)=b;FUN_02046d00(record,src);record[20]=2;record[21]=7;FUN_020456bc(record,7);for(i=0;i<3;i++)((void **)(s+8))[i]=FUN_02048620(record,0,i,b);record[21]=8;FUN_020456bc(record,8);for(i=0;i<3;i++)((void **)(s+20))[i]=FUN_02048620(record,a,i,b);}
