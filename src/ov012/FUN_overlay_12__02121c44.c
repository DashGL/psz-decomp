// FUN_overlay_12__02121c44 @ 0x02121c44 (0x94, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch44.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0x94 candidate=0x94 words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 seven-state cancel/back transition handler, full 148-byte extent including literal pool.
extern int FUN_overlay_12__02121d30(void *),FUN_overlay_12__02120634(void *);
extern void *FUN_overlay_12__02121d58(void *);
extern void FUN_overlay_12__02120664(void *),FUN_overlay_12__02121c1c(void *);
int FUN_overlay_12__02121c44(unsigned char *self,int *state){int prev=*(int *)(self+0xc94),ok=1;*(int *)(self+0xc94)=*state;switch(*state){case 0:return FUN_overlay_12__02121d30(self);case 1:case 4:FUN_overlay_12__02121d58(self);break;case 2:case 3:*(int *)(self+0xc98)-=1;*(int *)(self+0x58)=*(int *)(self+0xc98);*state=1;break;case 5:if(FUN_overlay_12__02120634(self+0x48)){FUN_overlay_12__02120664(self+0x48);FUN_overlay_12__02121c1c(self+0x48);FUN_overlay_12__02121d58(self);*state=7;}else ok=0;break;case 6:break;}if(ok)*(int *)(self+0xc8c)=0;else *(int *)(self+0xc94)=prev;return 1;}
