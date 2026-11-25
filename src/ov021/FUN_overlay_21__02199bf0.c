// FUN_overlay_21__02199bf0 @ 0x02199bf0 (0x180, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch1.json; original draft retained for referenced provenance.
// check: vers=2.0/sp2p3 target=0x180 candidate=0x180 words=0 exact_bytes=0 bad_relocs=0
// Destructor: release all owned state objects in ROM order, then destroy base.
extern char DAT_021a12fc[];
extern void FUN_02037848(void *);
typedef void (*Method)(void *);
typedef struct {Method *vtable;} Object;
static inline void destroy(Object *p) { if(p)p->vtable[4](p); }
#define P(o) (*(Object **)((char *)self+(o)))
void *FUN_overlay_21__02199bf0(void *self)
{
    *(void **)self=DAT_021a12fc;
    if(P(0x7c)){destroy(P(0x7c));P(0x7c)=0;}
    if(P(0x38)){destroy(P(0x38));P(0x38)=0;}
    if(P(0x3c)){destroy(P(0x3c));P(0x3c)=0;}
    if(P(0x40)){destroy(P(0x40));P(0x40)=0;}
    if(P(0x44)){destroy(P(0x44));P(0x44)=0;}
    if(P(0x48)){destroy(P(0x48));P(0x48)=0;}
    if(P(0x4c)){destroy(P(0x4c));P(0x4c)=0;}
    if(P(0x50)){destroy(P(0x50));P(0x50)=0;}
    if(P(0x54)){destroy(P(0x54));P(0x54)=0;}
    if(P(0x58)){destroy(P(0x58));P(0x58)=0;}
    if(P(0x5c)){destroy(P(0x5c));P(0x5c)=0;}
    if(P(0x60)){destroy(P(0x60));P(0x60)=0;}
    if(P(0x64)){destroy(P(0x64));P(0x64)=0;}
    if(P(0x68)){destroy(P(0x68));P(0x68)=0;}
    if(P(0x6c)){destroy(P(0x6c));P(0x6c)=0;}
    if(P(0x70)){destroy(P(0x70));P(0x70)=0;}
    if(P(0x74)){destroy(P(0x74));P(0x74)=0;}
    if(P(0x78)){destroy(P(0x78));P(0x78)=0;}
    if(P(0x34)){destroy(P(0x34));P(0x34)=0;}
    if(P(0x30)){destroy(P(0x30));P(0x30)=0;}
    FUN_02037848(self);
    return self;
}
