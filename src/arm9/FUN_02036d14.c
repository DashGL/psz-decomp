// flags: -O4,s
typedef struct {
    int x, y, z;
} Vec;

extern unsigned int DAT_02108cf8[];
extern short DAT_020ed83c[];
extern int DAT_020f6f44[];

extern void FUN_02036f40(void *);
extern void FUN_020bbfbc(Vec *, unsigned short);
extern void FUN_0203647c(Vec *, Vec *, Vec *);
extern void FUN_0204bf88(void *);
extern void FUN_020bc5cc(int *, int *, int *);

void FUN_02036d14(char *s) {
    Vec pos;
    Vec offset;
    Vec scale;
    Vec result;
    int factor;
    int product;
    int delta;
    char *record;

    FUN_02036f40(s);
    record = **(char ***)(s + 0x14);
    pos = *(Vec *)(s + 0x38);
    pos.y = *(int *)(s + 0xd0);

    if (*(int *)(record + 4) != 0 || *(int *)(record + 8) != 0 ||
        *(int *)(record + 0xc) != *(int *)(record + 0x10)) {
        unsigned short angle = *(unsigned short *)(s + 0x44);
        int rx = *(int *)(record + 4);
        int rz = *(int *)(record + 8);
        char *obj;
        offset.x = rx;
        offset.y = 0;
        offset.z = rz;
        FUN_020bbfbc(&offset, angle);
        FUN_0203647c(&result, &pos, &offset);
        *(Vec *)(*(char **)(s + 0xc4) + 0x5c) = result;
        obj = *(char **)(s + 0xc4);
        *(unsigned short *)(obj + 0x6a) = angle;
        FUN_0204bf88(obj);
    } else {
        *(Vec *)(*(char **)(s + 0xc4) + 0x5c) = pos;
    }

    {
        int has = !!(*(unsigned int *)(s + 0x94) & 0x10);
        if (has != 0) {
            int val;
            *(unsigned short *)(s + 0xcc) += 0xb60;
            factor = ((int)DAT_020ed83c[((int)*(unsigned short *)(s + 0xcc) >> 4) * 2] + 0x1000) / 2;
            if (!(DAT_02108cf8[1] & 1)) {
                DAT_020f6f44[1] = 0x1000;
                DAT_02108cf8[1] |= 1;
            }
            if (!(DAT_02108cf8[0] & 1)) {
                DAT_020f6f44[0] = 0x2000;
                DAT_02108cf8[0] |= 1;
            }
            delta = DAT_020f6f44[0] - DAT_020f6f44[1];
            FUN_020bc5cc(&product, &delta, &factor);
            scale.x = *(int *)(record + 0xc);
            scale.y = 0x1000;
            scale.z = *(int *)(record + 0x10);
            val = product + DAT_020f6f44[1];
            scale.x = (int)(((long long)scale.x * val + 0x800) >> 12);
            scale.y = (int)(((long long)scale.y * val + 0x800) >> 12);
            scale.z = (int)(((long long)scale.z * val + 0x800) >> 12);
            *(Vec *)(*(char **)(s + 0xc4) + 0x50) = scale;
        }
    }
}
