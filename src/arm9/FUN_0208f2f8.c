// Native dispatch evidence: notes/sessions/matching-upper-2026-11-12-actor-interface-language.md
//cpp
// flags: -O4,s
struct C_0208f2f8 {
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
    virtual int v28();
};
extern "C" {
typedef struct { int x, y, z; } Vec;
extern char *FUN_020ac3b4(void *, int), *FUN_020335fc(int);
extern int FUN_0205256c(void *, int, void *), FUN_020525b8(void *, int, void *);
extern void FUN_02070870(void *, void *), FUN_02094a3c(void *, Vec);
int FUN_0208f2f8(char *s) {
    int desc[17], pair[3];
    Vec position;
    char *p, *resource;
    if (s) {
        p = FUN_020ac3b4(s, 3);
        if (p && ((unsigned char *)p)[272] && FUN_0205256c(p, 0, pair)) {
            position.x = pair[0];
            position.y = 0;
            position.z = pair[1];
            FUN_02070870(s, &position);
            *(short *)(s + 316) = *(unsigned short *)(s + 192);
            if (FUN_020525b8(p, 0, desc)) {
                resource = FUN_020335fc(desc[16]);
                if (resource && *(int *)(resource + 12) == 10) FUN_02094a3c(s, position);
            }
        }
        return ((C_0208f2f8 *)s)->v28();
    }
    return 0;
}
}
