// FUN_02032974 @ 0x02032974 (0x74, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02032974 @ 0x02032974 (inventory code 0x6e, thumb)
// check: 2.0/sp2p3 target=0x74 candidate=0x74 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 45.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b45/02032974.txt.
 */
extern char *FUN_02031a74(void);extern void FUN_02083168(void *,int);extern void FUN_020328d8(void *);extern int FUN_020782b4(void *);extern int FUN_0207f45c(void *,void *);extern char *FUN_020781fc(void *);extern void FUN_02031144(void *,void *,unsigned int);extern void FUN_02032a9c(void *,void *);extern void FUN_020325cc(void *);
void FUN_02032974(char *s){unsigned int record[7];int id=*(signed char *)(s+22);*(int *)(FUN_02031a74()+52)=id;*(short *)(s+4)=1;*(int *)(s+8)=0;if(*(void **)s)FUN_02083168(*(void **)s,id);FUN_020328d8(record);if(FUN_020782b4(record)&&FUN_0207f45c(s+20,record)){char *p=FUN_020781fc(record);if(p){void *m=*(void **)0x02108c58;if(m)FUN_02031144(m,p,*(unsigned short *)(p+12));}}FUN_02032a9c(s,s+20);FUN_020325cc(s);}
