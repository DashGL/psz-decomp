// FUN_overlay_12__02132fb4 @ 0x02132fb4 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch01.json; original draft retained for referenced provenance.
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void FUN_overlay_12__02132f94(void *),FUN_overlay_12__02131b10(int),FUN_overlay_12__02131ff8(void *,int),FUN_overlay_12__02131f88(void *);
void FUN_overlay_12__02132fb4(int *self)
{
    if(self[23]==0){
        FUN_overlay_12__02132f94(self);FUN_overlay_12__02131b10(0);FUN_overlay_12__02131b10(1);
        if(self[19]==0)FUN_overlay_12__02131b10(2);else if(self[19]==1)FUN_overlay_12__02131b10(5);
        if(self[18])((void (*)(void))self[18])();
        if(!self[31])FUN_overlay_12__02131ff8(self,1);
        self[23]=1;
    }else if(self[23]==2)FUN_overlay_12__02131f88(self);
}
