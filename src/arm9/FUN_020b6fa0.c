extern short DAT_020f5914[][6];
extern int FUN_020b701c(void *, int);
int FUN_020b6fa0(signed char *s, int kind) {
    int index = -1;
    int result = FUN_020b701c(s, kind);
    if (result != -1) {
        index = result;
    } else if (kind == 29) {
        index = 5;
    }
    if (index == -1) return 4096;
    {
        int row = -1;
        int a = s[36];
        int b = s[37];
        int c = s[38];
        if (c == 2) {
            if (a == 0) {
                if (b == 0) row = 0;
                else row = 1;
            } else if (a == 1) {
                if (b == 0) row = 2;
                else row = 3;
            }
        }
        if (row == -1) return 4096;
        return DAT_020f5914[row][index];
    }
}
