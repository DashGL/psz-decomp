// flags: -O4,p -noThumb
struct S_02057034 {
    unsigned short f0;
    unsigned short f2;
    unsigned char f4;
    unsigned char f5_0 : 1;
    unsigned char f5_1 : 1;
    unsigned char f5_2 : 6;
    unsigned short f6;
    unsigned int f8;
};
struct Hw_02111f08 {
    unsigned short f0;
    unsigned short f2;
    unsigned short f4;
    unsigned short f6;
};
struct GbaRom {
    unsigned char pad0[0xac];
    unsigned int f_ac;
    unsigned char pad1[2];
    unsigned char f_b2;
    unsigned char pad2[0xb];
    unsigned short f_be;
};
extern void FUN_020571bc(unsigned short, void *);
extern void FUN_02057140(void *);
extern void FUN_02057188(void *);
extern void FUN_02057218(unsigned short, void *);
extern struct Hw_02111f08 DAT_02111f08;

int FUN_02057034(void) {
    int b8[2];
    int b0[2];
    int ok = 1;
    struct GbaRom *chb = (struct GbaRom *)0x08000000;
    struct S_02057034 *cip = (struct S_02057034 *)0x027ffc30;

    if (cip->f0 == 0xffff) {
        return 0;
    }
    if (cip->f5_1 == 1) {
        return 0;
    }
    FUN_020571bc(DAT_02111f08.f6, b8);
    FUN_02057140(b0);
    if ((chb->f_b2 == 0x96 && cip->f0 != chb->f_be) ||
        (chb->f_b2 != 0x96 && cip->f0 != *(unsigned short *)0x0801fffe) ||
        (cip->f8 != chb->f_ac && cip->f5_0 != 0)) {
        ok = 0;
        cip->f5_1 = 1;
    }
    FUN_02057188(b0);
    FUN_02057218(DAT_02111f08.f6, b8);
    return ok;
}
