//cpp
// flags: -O4,s
enum { E0 = 0, E1 = 1 };
struct Actor_0208ca04 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual int kind();
};
extern "C" {
extern void *FUN_0208555c(int);
extern int FUN_02085880(int);
extern void FUN_02070110(void *, void *, int);
void FUN_0208ca04(char *desc) {
    void *p = FUN_0208555c(*(short *)(desc + 22));
    if (p != 0 && ((((Actor_0208ca04 *)p)->kind() == 1) ? E1 : E0) == 0 && FUN_02085880(*(short *)(desc + 22)) == 1) {
        FUN_02070110(p, desc + 4, *(short *)(desc + 20));
    }
}
}
