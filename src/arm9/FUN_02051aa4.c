// flags: -O4,s
//cpp
struct Obj_02051aa4 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual unsigned int v6(int);
};
extern "C" {
extern void *DAT_02108cf4;
extern void *DAT_02108d5c;
extern void FUN_02001540(void *, int, unsigned int);
extern void *FUN_020352a4(void *, unsigned int);
extern char *FUN_020352c0(void *);
extern char *FUN_02040340(void *, unsigned int);
extern int FUN_02044820(void *, unsigned int);
extern int FUN_0207f770(void *);
extern int FUN_0207f79c(void *, int);

int FUN_02051aa4(unsigned int unused, char *out, unsigned int id, unsigned int selector) {
    char *obj;
    FUN_02001540(out, 0, 20);
    obj = FUN_020352c0(FUN_020352a4(DAT_02108cf4, id));
    if (obj) {
        int slot = FUN_02044820(obj, selector);
        if (slot >= 0) {
            void *mgr = DAT_02108d5c;
            char *name = FUN_02040340(mgr, ((Obj_02051aa4 *)obj)->v6(slot));
            for (int i = 0; i < 19; i++) {
                if (name[i] == 0) {
                    break;
                }
                out[i] = name[i];
            }
            *(int *)(out + 20) = (*(signed char ***)(obj + 20))[0][0];
            *(int *)(out + 24) = (*(signed char ***)(obj + 20))[0][1];
            char *sub = obj + 100;
            *(int *)(out + 28) = FUN_0207f770(sub);
            for (int i = 0; i < 2; i++) {
                *(int *)(out + 32 + 4 * i) = FUN_0207f79c(sub, i);
            }
            return 1;
        }
    }
    return 0;
}
}
