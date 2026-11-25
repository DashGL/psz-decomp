//cpp
// flags: -O4,s
extern "C" {
unsigned int FUN_020855fc(int);
extern unsigned int DAT_0211a3d4[4];
}
extern "C" int FUN_02078968(void) {
    int i;
    for (i = 0; i < 4; i++) {
        if (FUN_020855fc(i) - 1 <= 1) {
            int ok = (DAT_0211a3d4[i] & 2) ? 1 : 0;
            if (ok) return 0;
        }
    }
    return 1;
}
