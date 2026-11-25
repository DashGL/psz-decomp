//cpp
// flags: -O4,s

struct Player46 {
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
};
extern "C" {
extern unsigned int DAT_021a1280[];
extern int DAT_020ed09c;
extern char *DAT_02108d04;
extern void FUN_overlay_21__0219abe0(void);
extern void FUN_02075068(void *, int), FUN_02072724(void *, int), FUN_overlay_21__02198284(void *), FUN_0200c530(void *, int, int, void (*)(void)), FUN_02035518(void *), FUN_020ba8ac(void *);
void *FUN_overlay_21__021982c4(char *self) {
    int i, invalid;
    char *player;
    *(void **)self = DAT_021a1280;
    if (*(int *)(self + 0x27c) != -1) {
        FUN_02075068(self, *(int *)(self + 0x27c));
        *(int *)(self + 0x27c) = -1;
    }
    if (*(int *)(self + 0x278) != -1) {
        FUN_02072724(self, *(int *)(self + 0x278));
        *(int *)(self + 0x278) = -1;
    }
    i = 0;
    invalid = DAT_020ed09c;
    for (; i < 10; i++) {
        if (invalid != *(int *)(self + i * 4 + 0x118)) *(int *)(self + i * 4 + 0x118) = invalid;
    }
    for (i = 0; i < 5; i++) {
        if (*(int *)(self + i * 0x34 + 0x19c) != -1) FUN_02075068(self, *(int *)(self + i * 0x34 + 0x19c));
        if (*(int *)(self + i * 0x34 + 0x198) != -1) FUN_02072724(self, *(int *)(self + i * 0x34 + 0x198));
        FUN_overlay_21__02198284(self + 0x174 + i * 0x34);
    }
    player = DAT_02108d04;
    if (player) {
        ((Player46 *)player)->v46();
        *(unsigned *)(player + 0xf8) &= ~2u;
    }
    if (*(void **)(self + 0xec)) {
        FUN_0200c530(*(void **)(self + 0xec), 0xbc, 8, FUN_overlay_21__0219abe0);
        *(void **)(self + 0xec) = 0;
    }
    FUN_02035518(self);
    FUN_020ba8ac(self);
    return self;
}
}
