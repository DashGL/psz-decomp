// FUN_overlay_12__0211fb68 @ 0x0211fb68 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch43.json; original draft retained for referenced provenance.
// FUN_overlay_12__0211fb68 @ 0x0211fb68 (thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void FUN_overlay_12__0211fbb4(void *),FUN_overlay_12__0211fd08(void *),FUN_overlay_12__0211fdac(void *),FUN_overlay_12__02120104(void *);
void FUN_overlay_12__0211fb68(char *self,unsigned mode){
    if(*(unsigned *)(self+3040))return;
    if(mode<=1){FUN_overlay_12__0211fbb4(self);return;}
    if(mode==2){
        if(*(unsigned *)(self+48)==2)FUN_overlay_12__0211fd08(self);
        else FUN_overlay_12__0211fbb4(self);
        return;
    }
    if(mode==3){
        if(*(unsigned *)(self+48)==3)FUN_overlay_12__0211fdac(self);
        else FUN_overlay_12__0211fbb4(self);
        return;
    }
    if(mode==5)FUN_overlay_12__02120104(self);
}
