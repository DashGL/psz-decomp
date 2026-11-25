// FUN_020328f4 @ 0x020328f4 (0x6a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_020328f4 @ 0x020328f4 (inventory code 0x6a, thumb)
// check: 2.0/sp2p3 target=0x6a candidate=0x6a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 44.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b44/020328f4.txt.
 */
extern int FUN_0206d0f8(void *);extern void FUN_020831a0(void *,int,int);extern void *FUN_02031a74(void);extern void *FUN_02031c74(void *);extern char *FUN_02094264(void *,int);extern void FUN_02082bbc(void *,int,unsigned int);extern void FUN_02082b30(void *,int);extern void FUN_02082a98(void *,void *);
void FUN_020328f4(void **s,int *p,int arg){if(*s){int type=p[0],mode=p[1];if(!FUN_0206d0f8(p)){if(p[0]==8){FUN_020831a0(*s,mode,arg);return;}if(mode==3){void *m=FUN_02031c74(FUN_02031a74());if(m){char *q=FUN_02094264(m,arg);if(q)FUN_02082bbc(*s,type,*(unsigned char *)(q+4));}return;}if(mode==1){FUN_02082b30(*s,type);return;}FUN_02082a98(*s,p);}}}
