// flags: -O4,s
#pragma thumb off
extern void FUN_020144f0(void);
extern void FUN_02014714(void);
#pragma thumb on
extern void FUN_overlay_10__0211feb8(void *, int, int);
extern void FUN_overlay_10__0211ff08(void *, int);
void FUN_overlay_10__021201cc(char *s) {
    FUN_020144f0();
    FUN_overlay_10__0211feb8(s, -1, 1);
    switch (*(int *)(s + 0x94)) {
    case 1:
        FUN_overlay_10__0211ff08(s, -1);
        break;
    case 2:
        FUN_overlay_10__0211ff08(s, 1);
        break;
    }
    FUN_02014714();
}
