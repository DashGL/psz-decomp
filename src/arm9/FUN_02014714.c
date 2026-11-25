// flags: -O4,s -noThumb
extern volatile int DAT_02104754[];
extern unsigned short DAT_020f66d4;

enum { E0 = 0, E1 = 1 };

void FUN_02014714(void) {
    if ((DAT_02104754[3] <= 0) ? E1 : E0) return;
    {
        int n = DAT_02104754[3] - 1;
        unsigned short prior = DAT_020f66d4;
        DAT_02104754[3] = n;
        if (prior > n) {
            DAT_020f66d4 = 0xfffe;
        }
    }
}
