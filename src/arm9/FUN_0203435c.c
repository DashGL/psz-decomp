//cpp
// flags: -O4,s
struct Child_0203435c {
    virtual void v0();
    virtual ~Child_0203435c();
};
struct Self_0203435c {
    void *vtbl;
    char pad[60];
    Child_0203435c *children[9];
};
extern "C" {
extern unsigned int DAT_020f6d44[];
extern unsigned int DAT_02108c74[];
extern void FUN_02050db4(void), FUN_02034138(void *), FUN_020c6944(void *), FUN_02037f8c(void *), FUN_020ba8ac(void *);
char *FUN_0203435c(char *s) {
    Self_0203435c *obj = (Self_0203435c *)s;
    int i;
    obj->vtbl = DAT_020f6d44;
    for (i = 0; i < 9; i++) {
        if (obj->children[i]) {
            if (obj->children[i]) {
                delete obj->children[i];
                obj->children[i] = 0;
            }
        }
    }
    FUN_02050db4();
    FUN_02034138(s);
    DAT_02108c74[4] = 0;
    FUN_020c6944(s + 184);
    FUN_02037f8c(s);
    FUN_020ba8ac(s);
    return s;
}
}
