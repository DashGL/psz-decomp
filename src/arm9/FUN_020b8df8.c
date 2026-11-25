//cpp
// flags: -O4,s
struct Actor {
    virtual void v00(void); virtual void v01(void); virtual void v02(void); virtual void v03(void);
    virtual void v04(void); virtual void v05(void); virtual void v06(void); virtual void v07(void);
    virtual void v08(void); virtual void v09(void); virtual void v0a(void); virtual void v0b(void);
    virtual void v0c(void); virtual void v0d(void); virtual void v0e(void); virtual void v0f(void);
    virtual void v10(void); virtual void v11(void); virtual void v12(void); virtual void v13(void);
    virtual void v14(void); virtual void v15(void); virtual void v16(void); virtual void v17(void);
    virtual void v18(void); virtual void v19(void); virtual void v1a(void); virtual void v1b(void);
    virtual void v1c(void); virtual void v1d(void); virtual void v1e(void); virtual void v1f(void);
    virtual void v20(void); virtual void v21(void); virtual void v22(void); virtual void v23(void);
    virtual void v24(void); virtual void v25(void); virtual void v26(void); virtual void v27(void);
    virtual void v28(void); virtual void v29(void); virtual void v2a(void); virtual void v2b(void);
    virtual void v2c(void); virtual void v2d(void); virtual void v2e(void); virtual void v2f(void);
    virtual void v30(void); virtual void v31(void); virtual void v32(void); virtual void v33(void);
    virtual void v34(void); virtual void v35(void); virtual void v36(void); virtual void v37(void);
    virtual void v38(void); virtual void v39(void); virtual void v3a(void); virtual void v3b(void);
    virtual void v3c(void); virtual void v3d(void); virtual void v3e(void); virtual void v3f(void);
    virtual void v40(void);
    virtual int v41(void);          /* 0x104 = 0x41*4 */
    virtual void v42(void *);       /* 0x108 = 0x42*4 */
    virtual void v43(void *);       /* 0x10c = 0x43*4 */
    virtual void v44(void);
    virtual void v45(void *);       /* 0x114 = 0x45*4 */
};

extern "C" {
extern int FUN_020aa4b4(void *), FUN_0207f8dc(void *, int), FUN_0203a1fc(void *);
extern int FUN_020b701c(void *, int), FUN_020b6568(void *, int), FUN_020b6590(void *, void *), FUN_020b6b24(void *), FUN_020b65ac(void *), FUN_020b65c8(void *, void *, void *);
extern int FUN_020b6610(void *, void *, int), FUN_020b66ec(void *, void *), FUN_020b6724(void *, void *, int), FUN_020b6f3c(void *, int), FUN_020b6fa0(void *, int);
extern int FUN_020b7144(void *), FUN_020b71b0(void *), FUN_020b6f00(void *, int), FUN_020b6b78(int *, int *, int *, int);
#define O(n) (*(int *)(out + (n)))

void FUN_020b8df8(Actor *self, char *out, int kind) {
    char *s = (char *)self;
    int first[4], second[4], third[4], special, factor, sum, multiplier;
    self->v45(first);
    self->v42(second);
    self->v43(third);
    if (kind == 29) O(0) = 1;
    else if (kind == 32) { O(0) = 1; O(0xb4) |= 1; O(0xac) = 10; }
    else if (kind == 30) { O(0) = 1; O(0xb4) |= 1; O(0xb0) |= 1; }
    else if (kind == 31) { O(0) = 1; O(0xb4) |= 1; O(0xb0) |= 2; }
    else O(0) = 0;
    O(4) = 2;
    O(8) = FUN_020b701c(s + 0x20, kind);
    special = FUN_020aa4b4(s);
    if (special) O(0xb8) = FUN_020b6568(s + 0x20, special);
    else {
        factor = FUN_0207f8dc(s + 0x158, 0);
        O(0xb8) = (FUN_020b6568(s + 0x20, 0) * factor) >> 12;
    }
    O(0xbc) = 0;
    O(0xbc) += FUN_020b6590(s + 0x20, second);
    O(0xbc) += FUN_020b6b24(s + 0x20);
    O(0xbc) += FUN_020b65ac(s + 0x20);
    O(0xbc) += FUN_020b65c8(s + 0x20, first, third);
    O(0xc0) = 0;
    if (!FUN_0203a1fc(first)) {
        sum = 0;
        sum += FUN_020b6610(s + 0x20, first, 1);
        sum += FUN_020b66ec(s + 0x20, first);
        multiplier = FUN_020b6724(s + 0x20, first, kind);
        O(0xc0) = (int)(((long long)sum * multiplier + 2048) >> 12);
    }
    O(0xc8) = FUN_020b6f3c(s + 0x20, kind);
    O(0xc4) = FUN_020b6fa0(s + 0x20, kind);
    multiplier = *(int *)(s + 0x210);
    if (multiplier > 4096) O(0xc8) = (int)(((long long)O(0xc8) * multiplier + 2048) >> 12);
    if (!O(0)) O(0xc8) = (int)(((long long)O(0xc8) * 1024 + 2048) >> 12);
    else O(0xc8) = (int)(((long long)O(0xc8) * 3072 + 2048) >> 12);
    O(0xdc) = self->v41();
    O(0xe0) = FUN_020b7144(s + 0x20);
    O(0xe4) = FUN_020b71b0(s + 0x20);
    O(0xe8) = *(unsigned short *)(s + 0x14e);
    if (*(signed char *)(s + 0x149)) O(0x28) |= 1;
    if (*(int *)(s + 0x210) > 4096) O(0x38) = 2;
    O(0x1c) = FUN_020b6f00(s + 0x20, kind);
    {
        int a = -1, b = 1, c = 0;
        if (FUN_020b6b78(&a, &b, &c, kind)) {
            O(0x3c) = a;
            O(0x40) = b;
            O(0x44) = c;
            O(0x4c) = 0;
        }
    }
}
}
