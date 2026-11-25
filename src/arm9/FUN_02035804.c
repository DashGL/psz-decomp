// flags: -O4,s
//cpp
struct S_35804 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8();
    virtual void v9();
};
extern "C" {
void FUN_0203649c(void *);
void FUN_020363c4(void *);
void FUN_020378c8(void *);
void FUN_02040e10(void *);
void FUN_02043ca8(void *);
void FUN_0204429c(void *);
void FUN_02072474(void *);
void FUN_02074e30(void *);
void FUN_02036d14(void *);
void FUN_02035804(char *s);
}

void FUN_02035804(char *s) {
    unsigned int nz, active;
    FUN_0203649c(s);
    nz = (*(unsigned int *)(s + 8) != 0);
    active = (nz == 0);
    ((S_35804 *)s)->v9();
    FUN_020363c4(s);
    if (active) FUN_020378c8(*(void **)(s + 16));
    if (active) FUN_02040e10(s);
    FUN_02043ca8(s);
    FUN_0204429c(s);
    if (active) FUN_02072474(s);
    FUN_02074e30(s);
    FUN_02036d14(s);
    *(unsigned int *)(s + 148) &= ~0x20000u;
}
