// FUN_overlay_17__0211fe18 @ 0x0211fe18 (0x114, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch40.json; original draft retained for referenced provenance.
// check: 2.0/sp2p3 target=0x114 candidate=0x114 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern const char *data_02124fc0[];
extern const int data_02124e0c[];
extern int FUN_020038ec(char *,unsigned,const char *,...);
extern unsigned FUN_overlay_17__0211e6a8(unsigned,unsigned,const void *,const void *,const void *,unsigned);
extern void *FUN_overlay_17__0211e7a8(unsigned);
extern void FUN_overlay_17__0211e7bc(void *,const void *,const void *),FUN_overlay_17__0211e998(void *,int,int,int),FUN_overlay_17__0211e95c(void *,int,int,int);
void FUN_overlay_17__0211fe18(int *self,int index)
{
    char filename[32];
    void *actor;
    int kind;
    if(index<0||index>=46)return;
    FUN_020038ec(filename,32,data_02124fc0[2],index,data_02124fc0[3]);
    if(self[0]==-1)self[0]=FUN_overlay_17__0211e6a8(0,0,data_02124fc0[1],filename,0,0);
    else{actor=FUN_overlay_17__0211e7a8(self[0]);if(actor)FUN_overlay_17__0211e7bc(actor,filename,0);}
    actor=FUN_overlay_17__0211e7a8(self[0]);
    if(actor){
        self[1]=0;*(int *)((char *)actor+0x2ba8)=500;
        FUN_overlay_17__0211e998(actor,2,0,(unsigned)self[1]<<24);
        FUN_overlay_17__0211e95c(actor,2,0,1);
        kind=data_02124e0c[index];
        switch(kind){
        case -1:FUN_overlay_17__0211e95c(actor,1,1,1);FUN_overlay_17__0211e95c(actor,1,2,1);break;
        case 0:FUN_overlay_17__0211e95c(actor,1,1,0);FUN_overlay_17__0211e95c(actor,1,2,1);break;
        case 1:FUN_overlay_17__0211e95c(actor,1,1,1);FUN_overlay_17__0211e95c(actor,1,2,0);break;
        default:FUN_overlay_17__0211e95c(actor,1,1,0);FUN_overlay_17__0211e95c(actor,1,2,0);break;
        }
    }
    self[4]=1;self[6]=0;self[7]=0;
}
