// FUN_0203d200 @ 0x0203d200 (0x7c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203d200 @ 0x0203d200 (inventory code 0x76, thumb)
// check: 2.0/sp2p3 target=0x7c candidate=0x7c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 46.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b46/0203d200.txt.
 */
extern void FUN_0208d7e4(void *,unsigned int,int,int,int);extern void FUN_02034534(void *,int,int);extern char *FUN_02072af0(void);extern void FUN_02072c20(void *,int,int);extern void FUN_020a8e54(int);
void FUN_0203d200(char *s,int kind){if(*(int *)(s+576)==14){unsigned int id=*(unsigned int *)(s+252);int amount=*(unsigned short *)(s+92);void *m;if(kind==34)amount/=2;else if(kind==39)amount=1;FUN_0208d7e4(s+588,id,(short)amount,0,5);m=*(void **)0x02108c84;if(m)FUN_02034534(m,0,0);if(*(int *)(FUN_02072af0()+8)==7)FUN_02072c20(FUN_02072af0(),0,1);if(kind!=33)FUN_020a8e54(3);}}
