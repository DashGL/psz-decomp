//cpp
// flags: -O4,s
struct B4 { unsigned char b[4]; };
struct Buf { B4 head; unsigned char rest[12]; };
struct Base {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual int get(Buf *);
};
extern "C" {
extern void *FUN_020845a8(B4 *);
extern int FUN_020b6170(void *, int);
extern int FUN_020b618c(void *, int);
int FUN_020b6b24(Base *self) {
    Buf buf;
    int sum = 0;
    if (self->get(&buf) == 1) {
        B4 key = buf.head;
        void *p = FUN_020845a8(&key);
        if (p) {
            for (int i = 0; i < 2; i++) {
                if (FUN_020b6170(p, i) == 5) {
                    sum += FUN_020b618c(p, i);
                }
            }
        }
    }
    return sum;
}
}
