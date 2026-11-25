// flags: -O2,s
typedef struct {
    unsigned int x, y, z;
} V;

extern unsigned int DAT_02108d60;
extern V DAT_020f8bd4;
extern V D_020f8bd4;

extern void FUN_02040570(void *, V *, unsigned short *);
extern void FUN_020403d0(void *, V *, unsigned short, int);
extern void FUN_020bbfbc(V *, unsigned short);
extern void FUN_0203647c(V *, V *, V *);
extern void FUN_02036848(void *, V *);

void FUN_020403f0(char *s) {
    V tmp;
    V a;
    V db, b;
    V dc, c;
    V dd, d;
    V de, e;
    unsigned short half;
    unsigned int i;

    if (*(unsigned int *)(s + 0x10) == 0) {
        FUN_02040570(s, &tmp, &half);
        FUN_020403d0(s, &tmp, half, 0);
    }

    for (i = 0; i < 4; i++) {
        *(V *)(s + 0x14 + 0x14 * i) = *(V *)s;
        *(unsigned short *)(s + 0x20 + 0x14 * i) = *(unsigned short *)(s + 0xc);
        *(unsigned int *)(s + 0x24 + 0x14 * i) = *(unsigned int *)(s + 0x10);
    }

    if (*(unsigned int *)(s + 0x78) != 0) {
        unsigned short angle;
        if ((DAT_02108d60 & 1) == 0) {
            DAT_020f8bd4.x = 0;
            DAT_020f8bd4.y = 0;
            DAT_020f8bd4.z = 0x1000;
            DAT_02108d60 |= 1;
        }
        angle = *(unsigned short *)(s + 0xc);
        a = D_020f8bd4;
        FUN_020bbfbc(&a, angle);

        b = D_020f8bd4;
        FUN_020bbfbc(&b, angle);
        FUN_0203647c(&db, &a, &b);
        FUN_02036848(s + 0x14, &db);

        c = D_020f8bd4;
        FUN_020bbfbc(&c, (unsigned short)(angle + 0x4000));
        FUN_0203647c(&dc, &a, &c);
        FUN_02036848(s + 0x28, &dc);

        d = D_020f8bd4;
        FUN_020bbfbc(&d, (unsigned short)(angle + 0xc000));
        FUN_0203647c(&dd, &a, &d);
        FUN_02036848(s + 0x3c, &dd);

        e = D_020f8bd4;
        FUN_020bbfbc(&e, (unsigned short)(angle + 0x8000));
        FUN_0203647c(&de, &a, &e);
        FUN_02036848(s + 0x50, &de);
    }
}
