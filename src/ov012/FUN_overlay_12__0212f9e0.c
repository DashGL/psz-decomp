// FUN_overlay_12__0212f9e0 @ 0x0212f9e0 (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch01.json; original draft retained for referenced provenance.
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern const unsigned data_0213e60c[];
extern void FUN_overlay_12__021305d0(void *),FUN_overlay_12__02133aa4(void),FUN_020ba8b4(void *),FUN_overlay_12__0212c9a0(void);
extern void *FUN_overlay_12__02131dd4(void *);
void *FUN_overlay_12__0212f9e0(int *self)
{
    int *child;self[0]=(int)data_0213e60c;
    if(self[17]==1){FUN_overlay_12__021305d0(self);if(!self[18])FUN_overlay_12__02133aa4();}
    if(self[39]){FUN_020ba8b4((void *)self[39]);self[39]=0;}
    FUN_overlay_12__0212c9a0();child=(int *)self[53];
    if(child){((void (*)(void *))(*(unsigned **)child)[2])(child);self[53]=0;}
    FUN_overlay_12__02131dd4(self);return self;
}
