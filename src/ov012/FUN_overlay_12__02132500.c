// flags: -O4,s
//cpp
struct Settings { int word[7]; };
struct Obj_2500 {
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
};
extern "C" {
extern const unsigned DAT_overlay_12__0213e898[];
extern void *FUN_overlay_12__02131d80(void *, void *, unsigned);
extern void FUN_overlay_12__0211f17c(void *), FUN_overlay_12__02131fd0(void *, int);
#pragma thumb off
extern void *FUN_0200c938(void *, int);
#pragma thumb on
extern void *FUN_overlay_12__021324cc(void *);

void *FUN_overlay_12__02132500(int *self, void *owner, const Settings *settings, int activate, int fifth, int sixth)
{
    char *entry, *end;
    FUN_overlay_12__02131d80(self, owner, 0);
    self[0] = (int)DAT_overlay_12__0213e898;
    *(Settings *)(self + 16) = *settings;
    self[23] = 0; self[24] = 0;
    FUN_overlay_12__0211f17c(self + 25);
    self[29] = 0; self[30] = 1; self[31] = sixth; self[32] = fifth; self[33] = 1;
    self[34] = 0; self[35] = 0; self[36] = 0; self[37] = 0; self[38] = 0; self[39] = 0; self[40] = 0;
    self[41] = 0; self[42] = 0; self[43] = 0; self[44] = 0; self[45] = 0; self[46] = 0;
    FUN_0200c938(self + 47, 8);
    entry = (char *)self + 196;
    end = (char *)self + 16244;
    do {
        FUN_overlay_12__021324cc(entry);
        entry += 4012;
    } while (entry < end);
    self[47] = 0; self[48] = 0;
    switch (settings->word[3]) {
    case 0:
        self[37] = 50; self[38] = 69; self[39] = 150; self[40] = 70;
        break;
    case 1:
        self[37] = 30; self[38] = 69; self[39] = 170; self[40] = 70;
        break;
    }
    self[41] = (unsigned)self[37] - 21u;
    self[42] = self[38];
    if (!activate) FUN_overlay_12__02131fd0(self, 1);
    else ((Obj_2500 *)self)->v14();
    return self;
}
}
