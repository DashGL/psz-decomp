//cpp
// flags: -O4,s
struct Actor {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66(void *);
    virtual void v67(void *);
    virtual void v68();
    virtual void v69(void *);
};
struct Self : Actor {
    unsigned char pad0[0x1c];
    int sub;
    unsigned char pad24[0x5c - 0x24];
    unsigned short f5c;
    unsigned short f5e;
    unsigned char pad60[0x158 - 0x60];
    int f158;
};
extern "C" {
extern int FUN_020aa4b4(void *), FUN_0207f8dc(void *, int), FUN_0207f770(void *), FUN_0203a1fc(void *);
extern int FUN_020b67d8(void *, int), FUN_020b6800(void *, void *), FUN_020b681c(void *, void *), FUN_020b6850(void *), FUN_020b68f8(void *, void *, void *), FUN_020b6940(void *, void *), FUN_020b6d34(void *, void *, int);
extern int FUN_020b6984(void *), FUN_020b6994(void *, void *), FUN_020b6998(void *, void *), FUN_020b69dc(void *), FUN_020b6a48(void *, void *, void *), FUN_020b6a90(void *, void *);
extern int FUN_020b721c(void *), FUN_020b7224(void *), FUN_020b72a0(void *);
void FUN_020b940c(Self *self, int *out) {
    int first[4], second[4], third[4];
    int special, factor, value, i;
    self->v69(first);
    self->v66(second);
    self->v67(third);
    special = FUN_020aa4b4(self);
    if (special) value = FUN_020b67d8(&self->sub, special);
    else { factor = FUN_0207f8dc(&self->f158, 1); value = (FUN_020b67d8(&self->sub, 0) * factor) >> 12; }
    out[1] = value; out[2] = 0;
    out[2] += FUN_020b6800(&self->sub, second);
    out[2] += FUN_020b681c(&self->sub, first);
    out[2] += FUN_020b6850(&self->sub);
    out[2] += FUN_020b68f8(&self->sub, first, third);
    if (!FUN_0203a1fc(third)) {
        out[3] = FUN_020b6940(&self->sub, third);
        for (i = 0; i < 5; ++i) out[6 + i] = FUN_020b6d34(&self->sub, third, i);
    } else {
        out[3] = 0;
        for (i = 0; i < 5; ++i) out[6 + i] = 0;
    }
    value = FUN_020b6984(&self->sub);
    out[16] = (value * FUN_0207f8dc(&self->f158, 1)) >> 12; out[17] = 0;
    out[17] += FUN_020b6994(&self->sub, second);
    out[17] += FUN_020b6998(&self->sub, first);
    out[17] += FUN_020b69dc(&self->sub);
    out[17] += FUN_020b6a48(&self->sub, first, third);
    if (!FUN_0203a1fc(third)) out[18] = FUN_020b6a90(&self->sub, third);
    else out[18] = 0;
    out[19] = FUN_020b721c(&self->sub); out[20] = FUN_020b7224(&self->sub); out[21] = FUN_020b72a0(&self->sub);
    out[25] = self->f5c; out[26] = self->f5e;
    int *p = &self->f158; out[27] = FUN_0207f770(p); out[28] = FUN_0207f770(p);
}
}
