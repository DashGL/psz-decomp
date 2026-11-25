// FUN_overlay_12__021333b8 @ 0x021333b8 (0x102, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch37.json; original draft retained for referenced provenance.
// FUN_overlay_12__021333b8; full Thumb extent 0x102
// check: vers=2.0/sp2p3 target=0x102 candidate=0x102 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int FUN_020bbf94(unsigned int);
extern unsigned int FUN_overlay_12__02133684(void *);
extern void FUN_overlay_12__0213366c(void *,int),FUN_020c193c(int,int,int,int,int);
void FUN_overlay_12__021333b8(int *self)
{
    int previous_digit=self[24],previous_value=self[23],direction=-1;
    if(FUN_020bbf94(128)) {
        int value=self[23];direction=1;
        if(self[19]==value)self[23]=self[18];
        else self[23]=value-FUN_overlay_12__02133684(self);
    } else if(FUN_020bbf94(64)) {
        int value=self[23];direction=0;
        if(self[18]==value)self[23]=self[19];
        else self[23]=value+FUN_overlay_12__02133684(self);
    } else if(FUN_020bbf94(16)) {
        self[24]--;
        if(self[24]<0){self[24]=0;self[23]=self[19];}
    } else if(FUN_020bbf94(32)) {
        self[24]++;
        if(self[24]>=self[25]){self[24]=self[25]-1;self[23]=self[18];}
    }
    if(self[18]<self[23])self[23]=self[18];
    if(self[23]<self[19])self[23]=self[19];
    if(direction!=-1) {
        if(previous_value!=self[23]) {
            FUN_020c193c(0,2,0,0,-1);
            FUN_overlay_12__0213366c(self,direction);
        } else FUN_020c193c(0,5,0,0,-1);
    } else if(previous_digit!=self[24] || previous_value!=self[23])FUN_020c193c(0,2,0,0,-1);
}
