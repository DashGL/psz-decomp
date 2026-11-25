// FUN_overlay_12__02120cd8 @ 0x02120cd8 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch01.json; original draft retained for referenced provenance.
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern const unsigned data_0213d404[];
extern void FUN_overlay_12__02120f78(void *),FUN_020ba8ac(void *);
extern void *FUN_overlay_12__021209f4(void *),*FUN_020c2b68(void *);
extern void FUN_0200c4d4(void *,unsigned,unsigned,void *(*)(void *));
void *FUN_overlay_12__02120cd8(int *self)
{
    int *child;self[0]=(int)data_0213d404;FUN_overlay_12__02120f78(self);
    child=(int *)self[3];if(child){if(child)((void *(*)(void *))(*(unsigned **)child)[1])(child);self[3]=0;}
    FUN_0200c4d4(self+1,2,4,FUN_020c2b68);FUN_overlay_12__021209f4(self);return self;
}
