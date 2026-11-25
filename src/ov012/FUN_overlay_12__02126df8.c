// FUN_overlay_12__02126df8 @ 0x02126df8 (0xb0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch28.json; original draft retained for referenced provenance.
// FUN_overlay_12__02126df8 @ 0x02126df8 (thumb)
// check: 2.0/sp2p3 target=0xb0 candidate=0xb0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern char *FUN_02086e3c(void);
extern void *FUN_020b00d0(void *,int);
extern int FUN_overlay_12__02134ae8(void *),FUN_02084900(void *),FUN_020b03bc(void *,int,int,int),FUN_020b0450(void *,int,int);
extern int FUN_overlay_12__02126ea8(void *,void *),FUN_overlay_12__02126ec4(void *,void *,int);
int FUN_overlay_12__02126df8(int *self){
    void *inventory,*material,*target;
    int effect;
    if(self[5]<0 || self[4]<0)return 0;
    inventory=FUN_02086e3c()+16;
    material=FUN_020b00d0(inventory,self[5]);
    target=FUN_020b00d0(inventory,self[4]);
    if(!material)return 0;
    if(!FUN_overlay_12__02134ae8(material))return 0;
    if(!FUN_02084900(material))return 0;
    if(!FUN_020b03bc(inventory,self[5],0,1))return 0;
    effect=FUN_overlay_12__02134ae8(material);
    if(!target)return 0;
    if(!FUN_overlay_12__02126ea8(self,target))return 0;
    if(!FUN_overlay_12__02126ec4(self,target,effect))return 0;
    if(FUN_020b0450(inventory,self[5],1))return 1;
    return 0;
}
