//cpp
// flags: -O4,s
struct VObj {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2c();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3c();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4c();
    virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5c();
    virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6c();
    virtual void v70(); virtual void v74(); virtual void v78(); virtual void v7c();
    virtual void v80(); virtual void v84(); virtual void v88(); virtual void v8c();
    virtual void v90(); virtual void v94(); virtual void v98(); virtual int v9c();
};
extern "C" VObj *FUN_0208555c(int);
extern "C" int FUN_0203ae60(char *);
extern "C" void FUN_02094928(VObj *, signed char);

enum { E0 = 0, E1 = 1 };

extern "C" void FUN_02098a54(int *a) {
    VObj *p = FUN_0208555c(a[0]);
    if (p != 0 && FUN_0203ae60((char *)p) == 0) {
        if (p->v9c() || ((*(int *)((char *)p + 0xf8) & 0x400) ? E1 : E0)) {
            FUN_02094928(p, *((signed char *)p + 0x143));
            a[1] = 0;
        }
    }
}
