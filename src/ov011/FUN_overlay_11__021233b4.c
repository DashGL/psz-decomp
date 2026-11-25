// FUN_overlay_11__021233b4 @ 0x021233b4 (0x13c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch39.json; original draft retained for referenced provenance.
// FUN_overlay_11__021233b4 @ 0x021233b4 (thumb)
// check: 2.0/sp2p3 target=0x13c candidate=0x13c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int FUN_020bbf6c(unsigned),FUN_overlay_11__0211f458(void *,unsigned),FUN_overlay_11__0211f0b4(void *),FUN_overlay_11__0211ef68(void *,void *),FUN_020872c4(void *);
extern void *FUN_overlay_11__0211ec64(void),*FUN_02086e3c(void);
extern void FUN_020c193c(unsigned,unsigned,unsigned,unsigned,int),FUN_overlay_11__0211f568(void *),FUN_overlay_11__0211efcc(void *),FUN_020c4434(void *),FUN_020c44e4(void *,void *),FUN_overlay_11__0211ec8c(void *,unsigned);
int FUN_overlay_11__021233b4(unsigned *self,unsigned short *event){
    unsigned name[4];int result=0;
    if(self[1]==0){
        if(self[2]==0){
            if(FUN_020bbf6c(256)){if(FUN_overlay_11__0211f458(FUN_overlay_11__0211ec64(),1))FUN_020c193c(0,0,0,0,-1);}
            else if(FUN_020bbf6c(512)){if(FUN_overlay_11__0211f458(FUN_overlay_11__0211ec64(),0))FUN_020c193c(0,0,0,0,-1);}
            else if(FUN_020bbf6c(8)){FUN_overlay_11__0211f568(FUN_overlay_11__0211ec64());FUN_020c193c(0,2,0,0,-1);}
        }
        FUN_overlay_11__0211efcc(FUN_overlay_11__0211ec64());self[2]=0;
        switch(FUN_overlay_11__0211f0b4(FUN_overlay_11__0211ec64())){
        case 1:
            FUN_020c4434(name);
            if(FUN_overlay_11__0211ef68(FUN_overlay_11__0211ec64(),name)>0){FUN_020c44e4((void *)0x02156b38,name);FUN_020c44e4((void *)0x02156b48,name);event[0]=7;event[1]=3;self[1]=2;result=1;}
            else FUN_overlay_11__0211ec8c(FUN_overlay_11__0211ec64(),0);
            break;
        case 2:event[0]=5;event[1]=1;self[1]=2;result=1;break;
        }
    }else if(self[1]==1){
        FUN_overlay_11__0211efcc(FUN_overlay_11__0211ec64());
        if(!FUN_020872c4(FUN_02086e3c())){event[0]=12;event[1]=3;self[1]=2;result=1;}
    }else FUN_overlay_11__0211efcc(FUN_overlay_11__0211ec64());
    return result;
}
