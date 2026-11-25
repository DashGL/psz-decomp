// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    short f0;
    short f2;
    unsigned short f4;
    short f6;
    unsigned short f8;
    unsigned short fa;
} Sub_e0708;
typedef struct {
    int f0;
    Sub_e0708 *f4;
} G_e0708;
extern G_e0708 DAT_0211dc9c;
extern void FUN_020656b8(void *, int, int);
extern int FUN_020da80c(void *);
extern void FUN_020e056c(int, int);
extern void FUN_020e05ac(void);
extern void FUN_020e05d8(void);
void FUN_020e0708(void) {
    int sp[3];
    if (DAT_0211dc9c.f4 != 0) {
        if (DAT_0211dc9c.f4->f4 == 1) {
            FUN_020656b8(sp, 0, 0xc);
            ((unsigned char *)sp)[8] = DAT_0211dc9c.f4->f8;
            ((unsigned char *)sp)[9] = DAT_0211dc9c.f4->fa;
            sp[0] = (int)FUN_020e05ac;
            sp[1] = (int)FUN_020e05d8;
            DAT_0211dc9c.f4->f4 = 2;
            if (FUN_020da80c(sp) == 0) {
                FUN_020e056c(9, (int)0xffff3be9);
            }
        }
    } else {
        FUN_020e056c(9, (int)0xffff3be9);
    }
}
