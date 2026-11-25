// FUN_overlay_10__0211f4d0 @ 0x0211f4d0 (0xd6, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch40.json; original draft retained for referenced provenance.
// FUN_overlay_10__0211f4d0 @ 0x0211f4d0 (thumb)
// check: 2.0/sp2p3 target=0xd6 candidate=0xd6 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int *FUN_overlay_10__0211efd8(void *);
extern void FUN_overlay_10__0211f3e8(void *,int),FUN_overlay_10__0211f3f8(void *,int);
int FUN_overlay_10__0211f4d0(int *self,int column,int row){
    int result=0,value;
    switch(self[37]){
    case 0:
        if(row==0){
            if(column>=0 && column<5){
                self[37]=1;
                FUN_overlay_10__0211f3e8(FUN_overlay_10__0211efd8(self),0);
                FUN_overlay_10__0211f3f8(FUN_overlay_10__0211efd8(self),0);
                result=1;
            }else if(column>=5 && column<10){
                self[37]=1;
                FUN_overlay_10__0211f3e8(FUN_overlay_10__0211efd8(self),1);
                FUN_overlay_10__0211f3f8(FUN_overlay_10__0211efd8(self),0);
                result=1;
            }
        }
        break;
    case 1:
        if(column==0){
            self[37]=0;
            FUN_overlay_10__0211f3f8(FUN_overlay_10__0211efd8(self),4);
            value=FUN_overlay_10__0211efd8(self)[3];
            if(value>=5 && value<10)FUN_overlay_10__0211f3e8(FUN_overlay_10__0211efd8(self),0);
            result=1;
        }else{
            self[37]=0;
            FUN_overlay_10__0211f3f8(FUN_overlay_10__0211efd8(self),4);
            value=FUN_overlay_10__0211efd8(self)[3];
            if(value>=0 && value<5)FUN_overlay_10__0211f3e8(FUN_overlay_10__0211efd8(self),5);
            result=1;
        }
        break;
    }
    return result;
}
