// FUN_0206d3dc @ 0x0206d3dc (0x4a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206d3dc @ 0x0206d3dc
// check: 2.0/sp2p3 target=0x4a candidate=0x4a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Find first of eight generated records matching input; optional output receives candidate index.
 * Evidence: scratch/coverage-root/batch13/0206d3dc.txt.
 */
extern int FUN_0206d1fc(const int *);
extern void FUN_0206d178(int *);
extern void FUN_0206d4bc(int *,int,int,int);
extern int FUN_0206d1a8(const int *,const int *);
int FUN_0206d3dc(const int *self,int *out){int tmp[5],i;if(FUN_0206d1fc(self)){FUN_0206d178(tmp);for(i=0;i<8;++i){FUN_0206d4bc(tmp,i,self[0],self[1]);if(FUN_0206d1a8(tmp,self)){if(out)*out=i;return 1;}}}return 0;}
