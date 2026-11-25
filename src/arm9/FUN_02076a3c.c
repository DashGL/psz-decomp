// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct {
    unsigned short f0;
    unsigned short f2;
    unsigned short arr[5];
    unsigned short pad;
    int f10;
    int f14;
    int f18;
    unsigned int flags;
    Vec pos;
    Vec scale;
    unsigned short s0, s1, s2, s3;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
    int f60;
} Effect;

extern void *UNK_0210e240;
extern void FUN_02035408(void *, int, int, int);
extern void FUN_02050948(void *, void *, int, int);
extern void FUN_02046d94(void *, int, int);
extern unsigned short *FUN_020508ec(void *, void *);
extern int FUN_02035b60(int);

void FUN_02076a3c(char *s, Vec *position) {
    Effect effect;
    Vec copy;
    int identity;
    int i, valid = 0;
    void *resource;
    unsigned short *entry;
    effect.f0 = 0xffff;
    effect.f2 = 0xffff;
    for (i = 0; i < 5; i++) {
        effect.arr[i] = 0xffff;
    }
    effect.f10 = -1;
    effect.f14 = -1;
    effect.f18 = 4096;
    effect.flags = 0;
    FUN_02035408(&effect.pos, 0, 0, 0);
    FUN_02035408(&effect.scale, 4096, 4096, 4096);
    effect.s0 = 0;
    effect.s1 = 0;
    effect.s2 = 0;
    effect.s3 = 0;
    effect.f40 = -1;
    effect.f44 = -1;
    effect.f48 = -1;
    effect.f4c = -1;
    effect.f50 = 0;
    effect.flags |= 2;
    effect.f54 = 149;
    effect.f58 = -1;
    effect.f5c = 0;
    effect.f60 = 0;
    if (*(signed char *)(*(char **)(s + 4) + 18) == 1) {
        resource = UNK_0210e240;
        if (resource) {
            FUN_02050948(&identity, resource, 46, 0);
            entry = FUN_020508ec(resource, &identity);
            if (entry) {
                effect.f0 = entry[0];
                effect.f2 = entry[2];
                effect.arr[0] = entry[4];
                effect.flags &= ~2u;
                effect.s1 = (unsigned short)FUN_02035b60(0);
                valid = 1;
            }
        }
    } else {
        effect.f54 = 38;
        valid = 1;
    }
    copy = *position;
    copy.y += 2048;
    effect.pos = copy;
    if (valid) {
        FUN_02046d94(&effect, 0, 0);
    }
}
