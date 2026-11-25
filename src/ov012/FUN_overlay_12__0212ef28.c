// FUN_overlay_12__0212ef28 @ 0x0212ef28 (0x168, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch01.json; original draft retained for referenced provenance.
// check: 2.0/sp2p3 target=0x168 candidate=0x168 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void *data_02108d68;
extern void FUN_020427a4(void *),FUN_020a45a4(int),FUN_02040c0c(void *,int,int,int,unsigned),FUN_02035804(void *),FUN_020be480(void *);
extern void *FUN_020be450(void);
extern int FUN_02040d44(void *,int),FUN_020bbfa8(int),FUN_020c2e38(void);
extern void FUN_overlay_12__0212ee44(void *),FUN_overlay_12__0212f454(void *),FUN_overlay_12__0212f888(void *),FUN_overlay_12__02131fd0(void *,int),FUN_overlay_12__0212f6e0(void *);
void FUN_overlay_12__0212ef28(int *self)
{
    int previous,key;unsigned short angle;
    FUN_020427a4(data_02108d68);
    if(self[66]){
        if(self[56]>0){self[56]--;if(self[56]==0)FUN_020a45a4(1);}
        if(FUN_02040d44((void *)self[66],0))FUN_02040c0c((void *)self[66],0,self[65],4096,0);
        angle=*(unsigned short *)(self[66]+68);
        if(FUN_020bbfa8(512))angle+=768;
        else if(FUN_020bbfa8(256))angle-=768;
        *(unsigned short *)(self[66]+68)=angle;FUN_02035804((void *)self[66]);
    }
    if(self[18]>0){
        previous=self[59];FUN_overlay_12__0212ee44(self);
        if(previous!=self[59]){
            FUN_overlay_12__0212f454(self);self[67]=-1;self[55]=12;FUN_020be480(FUN_020be450());return;
        }
        if(!self[66]&&self[67]==-1){
            self[55]=(unsigned)self[55]-1u;
            if(self[55]<=0&&!FUN_020c2e38()){
                key=((short *)((char *)self+80))[self[59]];
                if(key>=61&&key<=68){FUN_overlay_12__0212f888(self);return;}
                if(key>-1){
                    if(self[64]){FUN_overlay_12__02131fd0(self,1);self[16]=3;return;}
                    FUN_overlay_12__0212f6e0(self);
                }
            }
        }
    }
}
