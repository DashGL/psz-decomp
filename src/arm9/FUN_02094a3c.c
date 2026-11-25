// FUN_02094a3c @ 0x02094a3c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern unsigned int FUN_02070870(void *,void *);
extern void FUN_0208ddcc(void *,int,int,unsigned int);
typedef struct{int x,y,z;}V3;
void FUN_02094a3c(char *self,V3 pos){if(self){unsigned int ang=FUN_02070870(self,&pos);FUN_0208ddcc((void *)0x0211a5c4,*(int *)(self+0xfc),8,ang);}}
