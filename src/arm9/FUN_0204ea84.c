// FUN_0204ea84 @ 0x0204ea84 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204ea84 @ 0x0204ea84 (inventory code 0x4c, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 37.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b37/0204ea84.txt.
 */
extern int FUN_0204ea00(void *);extern char *FUN_02086e3c(void);extern void *FUN_020b00ac(void *,int);extern int FUN_020849d4(void *);extern void FUN_020b0450(void *,int,int);
int FUN_0204ea84(void *s,int value) {int result=0,id=FUN_0204ea00(s);char *m=FUN_02086e3c()+16;if(id!=-1){int old=FUN_020849d4(FUN_020b00ac(m,id));if(old>value){FUN_020b0450(m,id,value);result=1;}else if(old==value){FUN_020b0450(m,id,-1);result=1;}}return result;}
