//cpp
// flags: -O4,s
struct Equip {
    virtual void v0();
    virtual void v1();
    virtual void get1(int *);
    virtual void get2(int *);
    virtual void get3(int *);
};
struct Actor {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
    virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63();
    virtual void v64(); virtual void v65();
    virtual int query();
};
extern "C" {
int FUN_020aa4b4(void *);
int FUN_0207f8dc(void *, int);
int FUN_0203a1fc(void *);
int FUN_020b701c(void *, int);
int FUN_020b6568(void *, int);
int FUN_020b6590(void *, void *);
int FUN_020b6b24(void *);
int FUN_020b65ac(void *);
int FUN_020b65c8(void *, void *, void *);
int FUN_020b6610(void *, void *, int);
int FUN_020b66ec(void *, void *);
int FUN_020b6724(void *, void *, int);
int FUN_020b6f3c(void *, int);
int FUN_020b6fa0(void *, int);
int FUN_020b7144(void *);
int FUN_020b71b0(void *);
int FUN_020b6f00(void *, int);
int FUN_020b6b78(int *, int *, int *, int);
}
#define O(n) (*(int *)(out + (n)))
extern "C" void FUN_020aa594(char *self, char *out, int kind) {
    int first[4], second[4], third[4];
    int special, factor, sum, multiplier;
    int a, b, c;
    ((Equip *)(self + 0x20))->get1(first);
    ((Equip *)(self + 0x20))->get2(second);
    ((Equip *)(self + 0x20))->get3(third);
    if (kind == 29) O(0) = 1;
    else if (kind == 32) { O(0) = 1; O(0xb4) |= 1; O(0xac) = 10; }
    else if (kind == 30) { O(0) = 1; O(0xb4) |= 1; O(0xb0) |= 1; }
    else if (kind == 31) { O(0) = 1; O(0xb4) |= 1; O(0xb0) |= 2; }
    else O(0) = 0;
    O(4) = 2;
    O(8) = FUN_020b701c(self + 0x20, kind);
    special = FUN_020aa4b4(self);
    if (special) O(0xb8) = FUN_020b6568(self + 0x20, special);
    else {
        factor = FUN_0207f8dc(self + 0x158, 0);
        O(0xb8) = (FUN_020b6568(self + 0x20, 0) * factor) >> 12;
    }
    O(0xbc) = 0;
    O(0xbc) += FUN_020b6590(self + 0x20, second);
    O(0xbc) += FUN_020b6b24(self + 0x20);
    O(0xbc) += FUN_020b65ac(self + 0x20);
    O(0xbc) += FUN_020b65c8(self + 0x20, first, third);
    O(0xc0) = 0;
    if (!FUN_0203a1fc(first)) {
        sum = 0;
        sum += FUN_020b6610(self + 0x20, first, 1);
        sum += FUN_020b66ec(self + 0x20, first);
        multiplier = FUN_020b6724(self + 0x20, first, kind);
        O(0xc0) = (int)(((long long)sum * multiplier + 2048) >> 12);
    }
    O(0xc8) = FUN_020b6f3c(self + 0x20, kind);
    O(0xc4) = FUN_020b6fa0(self + 0x20, kind);
    multiplier = *(int *)(self + 0x210);
    if (multiplier > 4096) O(0xc8) = (int)(((long long)O(0xc8) * multiplier + 2048) >> 12);
    O(0xdc) = ((Actor *)self)->query();
    O(0xe0) = FUN_020b7144(self + 0x20);
    O(0xe4) = FUN_020b71b0(self + 0x20);
    O(0xe8) = *(unsigned short *)(self + 0x14e);
    if (*(signed char *)(self + 0x149)) O(0x28) |= 1;
    if (*(int *)(self + 0x210) > 4096) O(0x38) = 2;
    O(0x1c) = FUN_020b6f00(self + 0x20, kind);
    a = -1;
    b = 1;
    c = 0;
    if (FUN_020b6b78(&a, &b, &c, kind)) {
        O(0x3c) = a;
        O(0x40) = b;
        O(0x44) = c;
        O(0x4c) = 0;
    }
}
