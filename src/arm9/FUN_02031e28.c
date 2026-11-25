//cpp
// flags: -O4,p
struct Child_02031e28 {
    unsigned char pad[0xc];
    int flag;
};
struct S_02031e28 {
    int f0;
    Child_02031e28 *child;
    int state;
};
extern "C" void FUN_02031e28(S_02031e28 *s) {
    if (s->child != 0) {
        int ok = (s->child->flag != 0) ? 1 : 0;
        if (ok != 0) {
            s->state = 1;
            return;
        }
        s->state = 0;
    }
}
