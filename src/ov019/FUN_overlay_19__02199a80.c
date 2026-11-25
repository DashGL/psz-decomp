//cpp
// flags: -O4,s
struct Owner {
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
    virtual void v44(); virtual void v45(); virtual void v46();
    unsigned pad[147];
    unsigned flags;
};
extern "C" {
extern void *DAT_0219d33c[];
extern Owner *DAT_02108d04;
extern int FUN_0203ae60(void *);
extern void FUN_02094848(void *);
}
extern "C" void *FUN_overlay_19__02199a80(unsigned *self) {
    self[0] = (unsigned)DAT_0219d33c;
    if (self[23] == 1) {
        Owner *owner = DAT_02108d04;
        if (owner) {
            int ok = ((owner->flags & 8) != 0) ? 1 : 0;
            if (ok == 1 && FUN_0203ae60(owner) == 0) {
                FUN_02094848(owner);
            }
            owner->v46();
        }
    }
    return self;
}
