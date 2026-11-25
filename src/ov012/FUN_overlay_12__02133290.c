// FUN_overlay_12__02133290 @ 0x02133290 (0xd0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch37.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0xd0 candidate=0xd0 words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 numeric digit-entry widget constructor and OAM resource initialization, full 208-byte extent including literal pool.
typedef struct{int w[7];} Args;
extern void *FUN_overlay_12__02131d80(void *,void *,int);
extern void FUN_0200c938(void *,int),FUN_overlay_12__02131c80(const void *,int);
extern int FUN_overlay_12__02131ad0(int);
void *FUN_overlay_12__02133290(int *self,void *owner,const int *cfg){int i,val;FUN_overlay_12__02131d80(self,owner,0);self[0]=0x0213e8e8;*(Args *)(self+16)=*(const Args *)cfg;self[23]=0;self[24]=0;self[25]=0;self[26]=-1;self[27]=-1;FUN_0200c938(self+28,8);self[30]=0;self[31]=1;self[32]=15;for(i=0;i<2;i++)self[28+i]=0;val=cfg[2];for(i=0;i<10;i++){if(val>0)self[25]++;val/=10;}if(self[25]==0)self[25]=1;self[23]=cfg[4];FUN_overlay_12__02131c80((const void *)0x0213bb70,11);if(FUN_overlay_12__02131ad0(2)!=-1){self[26]=0;self[27]=FUN_overlay_12__02131ad0(2);}else if(FUN_overlay_12__02131ad0(5)!=-1){self[26]=1;self[27]=FUN_overlay_12__02131ad0(5);}return self;}
