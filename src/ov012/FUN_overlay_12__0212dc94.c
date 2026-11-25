//cpp
// flags: -O4,s
struct Obj_0212dc94 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void v14();
};
extern "C" {
extern unsigned int DAT_0213e288[];
extern const int DAT_0213b2a0[7];
extern void *FUN_overlay_12__02131d80(void *, void *, int);
extern int FUN_overlay_12__02131fd0(void *, int);
#pragma thumb off
extern void FUN_0200c938(void *, unsigned), FUN_0206557c(unsigned, void *, unsigned);
#pragma thumb on
void *FUN_overlay_12__0212dc94(int *self, void *parent, int active) {
    int i;
    FUN_overlay_12__02131d80(self, parent, 0);
    *(void **)self = DAT_0213e288;
    self[16] = 0;
    self[17] = 0;
    FUN_0200c938(self + 18, 28);
    self[25] = -1;
    self[26] = 0;
    self[27] = 0;
    self[28] = -1;
    FUN_0206557c(0, self + 18, 28);
    for (i = 0; i < 7; i++) self[18 + i] = DAT_0213b2a0[i];
    if (active) FUN_overlay_12__02131fd0(self, 1);
    else ((Obj_0212dc94 *)self)->v14();
    return self;
}
}
