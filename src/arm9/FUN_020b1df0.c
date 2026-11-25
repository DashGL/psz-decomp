// flags: -O4,s -lang c++
struct S_b1df0_blk {
    int words[0x1f];
    unsigned char pad7c[2];
    unsigned char f7e;
    unsigned char f7f;
    int f80;
};
struct S_b1df0_sub20 {
    virtual void v00();
    virtual void v04();
    virtual void v08();
    virtual int fc(void *);
};
struct S_b1df0_obj {
    unsigned char pad0[0x20];
    S_b1df0_sub20 sub20;
    unsigned char pad24[0x228];
    unsigned char f24c[0xb48];
    S_b1df0_blk fd94;
};

extern "C" {
extern S_b1df0_obj *FUN_02085640(void);
extern int FUN_020855bc(int);
extern int FUN_0203b820(void *);
extern int FUN_0203b844(void *);
extern void FUN_0208dd7c(void *, int, int, int);
void FUN_020b1df0(int p0);
}

void FUN_020b1df0(int p0) {
    unsigned int sp00[4];
    S_b1df0_obj *r4 = FUN_02085640();
    int r5, r6, r7;
    if (r4 == 0 || FUN_020855bc(*(int *)(p0 + 0x2c)) != 1) {
        return;
    }
    S_b1df0_blk blk = r4->fd94;
    if (r4->sub20.fc(sp00) == 1) {
        r5 = ((int)(sp00[1] & 0xfe000000) >> 25) & 0x7f;
    } else {
        r5 = 0;
    }
    r6 = FUN_0203b820(r4);
    if (r6 > 0 && r6 <= 4) {
        switch (r6) {
        case 1:
            r7 = FUN_0203b844(r4);
            FUN_0208dd7c(r4->f24c, r7, blk.f7e * 30 + (blk.f7f * r5 * 30) / 100, r6);
            break;
        case 2:
            r7 = FUN_0203b844(r4);
            FUN_0208dd7c(r4->f24c, r7, blk.f7e * 30 + (blk.f7f * r5 * 30) / 100, r6);
            break;
        case 3:
            r7 = FUN_0203b844(r4);
            FUN_0208dd7c(r4->f24c, r7, blk.f7e * 30 + (blk.f7f * r5 * 30) / 100, r6);
            break;
        case 4:
            r7 = FUN_0203b844(r4);
            FUN_0208dd7c(r4->f24c, r7, blk.f7e * 30 + (blk.f7f * r5 * 30) / 100, r6);
            break;
        }
    }
}
