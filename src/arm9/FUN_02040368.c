// flags: -O2,s
#pragma opt_strength_reduction off
extern void FUN_020405e8(void *);
extern void FUN_0204059c(void *);
struct Sub02040368 { unsigned char pad[20]; };
struct Self02040368 {
    unsigned char pad0[0xc];
    unsigned short fc;
    unsigned short pad1;
    unsigned int f10;
    struct Sub02040368 arr[4];
    struct Sub02040368 extra;
    unsigned int f78;
};
void FUN_02040368(struct Self02040368 *s) {
    unsigned int i;
    for (i = 0; i < 4; i++) {
        FUN_020405e8(&s->arr[i]);
    }
    FUN_0204059c(s);
    s->fc = 0;
    s->f10 = 0;
    FUN_020405e8(&s->extra);
    s->f78 = 0;
}
