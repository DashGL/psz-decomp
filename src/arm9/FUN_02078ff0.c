// flags: -O4,p
enum { E0 = 0, E1 = 1 };
typedef struct {
    int pad[6];
    unsigned int flags;
} Inner;
typedef struct {
    char pad0[0x8c];
    Inner *p;
    char pad1[0x58];
    int mode;
    int pad2;
    int enabled;
} Obj;
void FUN_02078ff0(Obj *s, int flag) {
    Inner *p;
    s->enabled = flag;
    p = s->p;
    if (p != 0) {
        if (s->enabled != 0 && s->mode == 4) {
            if (((p->flags & 1) ? E1 : E0) == 0) {
                p->flags |= 1;
            }
        } else {
            if (((p->flags & 1) ? E1 : E0) != 0) {
                p->flags &= ~1u;
            }
        }
    }
}
