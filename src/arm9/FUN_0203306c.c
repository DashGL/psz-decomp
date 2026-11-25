// FUN_0203306c @ 0x0203306c (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_0203306c @ 0x0203306c (inventory code 0x58, thumb)
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 39.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b39/0203306c.txt.
 */
extern void *FUN_02031a74(void);extern void *FUN_02031c74(void *);extern int FUN_02094270(void *);extern int FUN_02093ff4(int,int);extern void FUN_02032dfc(void *,void *);extern int FUN_0206d47c(void *);
int FUN_0203306c(char *s){void *p=FUN_02031c74(FUN_02031a74());if(p){int id=*(signed char *)(s+21);unsigned int record[5];if(id==(int)((unsigned int)FUN_02094270(p)-1)&&FUN_02093ff4(5,id)>=0)return 1;FUN_02032dfc(record,s);if(FUN_0206d47c(record)&&FUN_02093ff4(7,id)>=0)return 1;}return 0;}
