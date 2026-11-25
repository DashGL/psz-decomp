// flags: -O4,s
extern int FUN_0209ad88(void *, int, void *);
struct Ent0209ad54 {
    unsigned char a, b, c, d;
    unsigned int val;
};
struct Self0209ad54 {
    unsigned char pad0[0x1c];
    struct Ent0209ad54 arr[16];
    int count;
    unsigned char pad1[0xc];
    void *ctx;
};
void FUN_0209ad54(struct Self0209ad54 *self) {
    int count = self->count;
    int i;
    for (i = 0; i < count; i++) {
        struct Ent0209ad54 *p = &self->arr[i];
        if (FUN_0209ad88(self->ctx, p->c, &p->val)) {
            p->d = 1;
        }
    }
}
