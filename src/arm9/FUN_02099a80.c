// flags: -O4,s
typedef struct { int w[5]; } Descriptor;

typedef struct {
    unsigned char b0;
    unsigned char b1;
    unsigned char b2;
    unsigned char b3;
    union {
        unsigned int w4;
        int i4;
    };
    unsigned int w8;
} Out;

typedef struct {
    unsigned char pad0[5];
    unsigned char b5;
    unsigned char pad6[2];
    unsigned short u0 : 6;
    unsigned short u1 : 4;
    unsigned short u2 : 6;
} Data;

extern char *DAT_02108c64;
extern void FUN_0203955c(void *);
extern void FUN_02045990(void *, void *);
extern Data *FUN_02084568(void *);

int FUN_02099a80(char *s, Out *out, int category, int slot) {
    Data *data;
    if (!*(void **)(s + 28)) {
        return 0;
    }
    if (category >= 0 && category < 5 && slot >= 0 && slot < 3) {
        FUN_0203955c(out);
        FUN_02045990(out, *(char **)(s + 28) + 4 * (category * 3 + slot));
        data = FUN_02084568(out);
        if (data) {
            out->w4 = (out->w4 & ~0xfu) | (data->u1 & 0xf);
            if ((int)(out->w4 & 0xf) < 1 || (int)(out->w4 & 0xf) >= 4) {
                out->i4 = (out->i4 & ~0xf) | 1;
            }
            if ((category == 2 || category == 3) && out->b1 == 11) {
                volatile Descriptor desc;
                char *g = DAT_02108c64;
                int a = *(int *)(g + 36);
                desc.w[1] = *(int *)(g + 40);
                desc.w[0] = a;
                desc.w[2] = *(int *)(g + 44);
                desc.w[3] = *(int *)(g + 48);
                desc.w[4] = *(int *)(g + 52);
                if (a != 4) {
                    out->w4 = (out->w4 & ~0xfu) | 2;
                } else {
                    out->w4 = (out->w4 & ~0xfu) | 3;
                }
            }
            out->w8 = (out->w8 & 0xfffc1fffu) | ((data->b5 & 31) << 13);
            out->w8 = (out->w8 & 0xfffff1ffu) | ((data->b5 >> 5) << 9);
            return 1;
        }
    }
    return 0;
}
