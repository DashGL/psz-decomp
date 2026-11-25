//cpp
// flags: -O4,s
class Player_0219a6c0 {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual int v16();
};
extern "C" {
extern Player_0219a6c0 *FUN_overlay_22__0219a638(int, int);
extern int FUN_0203bf68(void *);
extern unsigned FUN_02035b60(unsigned);
}
extern "C" int FUN_overlay_22__0219a6c0(void) {
    int candidates[4], count = 0, pass, index;
    for (pass = 0; pass < 2 && count == 0; pass++) {
        for (index = 0; index < 4; index++) {
            Player_0219a6c0 *player = FUN_overlay_22__0219a638(index, 1);
            if (player) {
                if (pass != 1) {
                    if (((player->v16() == 3) ? 1 : 0) != 0) continue;
                }
                if (FUN_0203bf68(player) == 1) {
                    candidates[count] = index;
                    count++;
                }
            }
        }
    }
    if (count) return candidates[FUN_02035b60(count)];
    return -1;
}
