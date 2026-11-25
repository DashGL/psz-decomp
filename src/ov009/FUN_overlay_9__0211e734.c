// FUN_overlay_9__0211e734 @ 0x0211e734 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch56.json; original draft retained for referenced provenance.
// FUN_overlay_9__0211e734 @ 0x0211e734 (0x30 including pool, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
/* Closed13-slot factory table reaches seven destructor tables; eachslot20
 * consumes onlyreceiver. Global cleanup020a4420 takes noincomingargs. */
// flags: -O4,s
extern void FUN_020a4420(void);
extern void FUN_020b2234(void *, void *);
extern void *data_02120bec;

struct VTable0211e734 {
    int pad[5];
    void (*dtor)(void *);
};

struct Obj0211e734 {
    int f0;
    struct VTable0211e734 **f4;
    int f8;
    int fc;
    int f10;
};

void FUN_overlay_9__0211e734(struct Obj0211e734 *self) {
    FUN_020a4420();
    if (self->f4 != 0) {
        if (self->f4 != 0) {
            (*self->f4)->dtor(self->f4);
        }
        self->f4 = 0;
    }
    FUN_020b2234(&self->f8, &data_02120bec);
    self->f10 = 0;
}
