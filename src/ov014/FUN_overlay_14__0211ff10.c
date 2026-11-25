// FUN_overlay_14__0211ff10 @ 0x0211ff10 (0x11c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch40.json; original draft retained for referenced provenance.
// FUN_overlay_14__0211ff10 @ 0x0211ff10 (thumb)
// check: 2.0/sp2p3 target=0x11c candidate=0x11c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void *FUN_overlay_14__0211e968(void),*FUN_02086e3c(void);extern char *FUN_020870c4(void *);
extern int FUN_020bbf6c(unsigned),FUN_overlay_14__0211f158(void *,unsigned),FUN_overlay_14__0211ecd0(void *),FUN_overlay_14__0211edb8(void *),FUN_overlay_14__0211ec6c(void *,void *),FUN_02087138(void *);
extern void FUN_overlay_14__0211f268(void *),FUN_020c193c(unsigned,unsigned,unsigned,unsigned,int),FUN_020c4434(void *),FUN_020c44e4(void *,void *),FUN_overlay_14__0211e990(void *,unsigned);
int FUN_overlay_14__0211ff10(unsigned *self,unsigned short *event){
    unsigned name[4];int result=0;char *player;
    if(self[1]==0){
        if(FUN_020bbf6c(256)){FUN_overlay_14__0211f158(FUN_overlay_14__0211e968(),1);FUN_020c193c(0,0,0,0,-1);}
        else if(FUN_020bbf6c(512)){FUN_overlay_14__0211f158(FUN_overlay_14__0211e968(),0);FUN_020c193c(0,0,0,0,-1);}
        else if(FUN_020bbf6c(8)){FUN_overlay_14__0211f268(FUN_overlay_14__0211e968());FUN_020c193c(0,2,0,0,-1);}
        if(!FUN_overlay_14__0211ecd0(FUN_overlay_14__0211e968())){
            if(FUN_overlay_14__0211edb8(FUN_overlay_14__0211e968())==1){
                FUN_020c4434(name);
                if(FUN_overlay_14__0211ec6c(FUN_overlay_14__0211e968(),name)>0&&FUN_02087138(FUN_02086e3c())){
                    player=FUN_020870c4(FUN_02086e3c());FUN_020c44e4(player,name);FUN_020c44e4(player+16,name);event[0]=7;event[1]=4;self[1]=1;result=1;
                }else{FUN_020c193c(0,5,0,0,-1);FUN_overlay_14__0211e990(FUN_overlay_14__0211e968(),0);}
            }else{event[0]=7;event[1]=2;self[1]=1;result=1;}
        }
    }else FUN_overlay_14__0211ecd0(FUN_overlay_14__0211e968());
    return result;
}
