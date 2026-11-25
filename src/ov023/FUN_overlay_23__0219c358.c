//cpp
// flags: -O4,p
struct Fx {
    int v;
    Fx() {}
    operator int() const { return v; }
};

struct Payload {
    int words[5];
    unsigned char bytes[4];
};

extern "C" {
extern Fx DAT_0219db04;
extern Fx DAT_0219db00;
extern Fx DAT_0219dafc;
extern Fx DAT_0219daf8;
extern Fx DAT_0219daf4;
extern Fx DAT_0219daf0;
extern int DAT_0219cf08[];

extern void FUN_overlay_23__0219c168(Payload *);
extern Fx FUN_02086d60(const Fx *, const Fx *);
extern unsigned int FUN_02035b60(unsigned int);
extern void FUN_overlay_23__02199e74(void *, Payload *);

void FUN_overlay_23__0219c358(int *self) {
    void *owner = (void *)self[1];
    int *state = (int *)((char *)self + 0x8c);
    Payload p;
    FUN_overlay_23__0219c168(&p);
    p.words[0] = state[0x48 / 4];
    p.words[1] = state[0x50 / 4];
    p.words[2] = FUN_02086d60(&DAT_0219db04, &DAT_0219db00);
    p.words[3] = FUN_02086d60(&DAT_0219dafc, &DAT_0219daf8);
    p.words[4] = FUN_02086d60(&DAT_0219daf4, &DAT_0219daf0);
    p.bytes[0] = (unsigned char)DAT_0219cf08[FUN_02035b60(5)];
    p.bytes[1] = (unsigned char)(FUN_02035b60(3) + 1);
    FUN_overlay_23__02199e74(owner, &p);
}
}
