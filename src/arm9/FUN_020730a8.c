//cpp
// flags: -O4,s
struct VSub {
    virtual ~VSub();
};
struct State {
    int f0;
    char pad[0x1c];
    VSub *f20;
    VSub *f24;
    VSub *f28;
};
extern "C" {
extern State DAT_0211a210;
extern int DAT_0211a214;
void FUN_02072f3c(int *);
void FUN_020730a8(void) {
    if (DAT_0211a210.f20 != 0) {
        if (DAT_0211a210.f20 != 0) {
            delete DAT_0211a210.f20;
            DAT_0211a210.f20 = 0;
        }
    }
    if (DAT_0211a210.f24 != 0) {
        if (DAT_0211a210.f24 != 0) {
            delete DAT_0211a210.f24;
            DAT_0211a210.f24 = 0;
        }
    }
    if (DAT_0211a210.f28 != 0) {
        if (DAT_0211a210.f28 != 0) {
            delete DAT_0211a210.f28;
            DAT_0211a210.f28 = 0;
        }
    }
    FUN_02072f3c(&DAT_0211a214);
}
}
