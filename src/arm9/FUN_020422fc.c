// flags: -O4,p
struct S_020422fc {
    unsigned int unk0;
    unsigned int flags;
    unsigned char pad[0x20];
    unsigned int field28 : 12;
};
extern struct S_020422fc *FUN_0204225c(void *, int);
extern int FUN_020469dc(void *, void *);
extern void FUN_02042358(void *, int);
extern void FUN_02042278(void *, void *, int);

int FUN_020422fc(void *s, int index, void *resource) {
    if (resource != 0) {
        struct S_020422fc *p = FUN_0204225c(s, index);
        if (p != 0) {
            int ok = 0;
            int aligned = 0;
            if ((p->flags & 2) && p->field28 == 0) {
                aligned = 1;
            }
            if (aligned && (p->flags & 0x20)) {
                ok = 1;
            }
            if (ok) {
                return FUN_020469dc(p, resource);
            }
            FUN_02042358(s, index);
        }
        FUN_02042278(s, resource, index);
        return 1;
    }
    return 0;
}
