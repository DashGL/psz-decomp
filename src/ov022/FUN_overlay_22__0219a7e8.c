//cpp
// flags: -O4,s
struct Stats {
    unsigned short s[4];
};
struct Player {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual int GetKind();
    bool IsType3() { return GetKind() == 3; }
};
extern "C" {
extern Player *FUN_overlay_22__0219a638(int, int);
int FUN_overlay_22__0219a7e8(void) {
    int chosen = -1;
    unsigned short best = 0xffff;
    for (int pass = 0; pass < 2 && chosen == -1; pass++) {
        for (int index = 0; index < 4; index++) {
            Player *player = FUN_overlay_22__0219a638(index, 1);
            if (player != 0) {
                if (pass == 1 || !player->IsType3()) {
                    Stats st = *(Stats *)((char *)player + 0x14e);
                    if (best > st.s[0]) {
                        chosen = index;
                        best = st.s[0];
                    }
                }
            }
        }
    }
    return chosen;
}
}
