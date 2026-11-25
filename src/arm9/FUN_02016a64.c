// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb4, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Sub16A64 {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int state;
    void (*cb18)(void *, int);
    void (*cb1c)(void *, int);
};

struct Main16A64 {
    struct Sub16A64 *sub;
    unsigned char pad[0x2c];
    int active;
};

extern struct Main16A64 *DAT_02105718;
extern void FUN_0201671c(struct Sub16A64 *, int);
extern void FUN_020160bc(struct Sub16A64 *, int);

void FUN_02016a64(int p0) {
    struct Main16A64 *m = DAT_02105718;
    struct Sub16A64 *s = m->sub;
    if (s->f10 == 0) {
        return;
    }
    m->active = 1;
    if (s->cb18 != 0) {
        s->cb18(DAT_02105718, p0);
    }
    if (DAT_02105718->active != 0) {
        switch (s->state) {
        case 0:
            FUN_0201671c(s, p0);
            break;
        case 1:
        case 2:
            FUN_020160bc(s, p0);
            break;
        case 3:
            break;
        }
    }
    if (s->cb1c != 0) {
        s->cb1c(DAT_02105718, p0);
    }
}
