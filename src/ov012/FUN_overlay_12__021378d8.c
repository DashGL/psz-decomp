// flags: -O4,s
extern int FUN_020bbf6c(unsigned);
extern int FUN_020bbf94(unsigned);
extern int FUN_020c2e38(void);
extern void FUN_020c193c(unsigned, unsigned, int, unsigned, int);
int FUN_overlay_12__021378d8(int *s) {
    switch (s[7]) {
    case 0:
        if (FUN_020bbf6c(1)) {
            if (s[5] == 0) {
                FUN_020c193c(0, 0, 0, 0, -1);
                s[7] = 1;
                if (s[6] != -1) s[5] = s[6];
                else s[5] = 0;
                s[4] = 1;
            } else if (!FUN_020c2e38()) {
                FUN_020c193c(0, 0, 0, 0, -1);
                return 1;
            }
        } else if (FUN_020bbf94(64) || FUN_020bbf94(128)) {
            s[5] ^= 1;
            FUN_020c193c(0, 2, 0, 0, -1);
        }
        break;
    case 1:
        if (FUN_020bbf6c(1)) {
            if (!FUN_020c2e38()) {
                FUN_020c193c(0, 0, 0, 0, -1);
                s[6] = s[5];
                return 1;
            }
        } else if (FUN_020bbf6c(2)) {
            FUN_020c193c(0, 1, 0, 0, -1);
            s[7] = 0;
            s[5] = 0;
            s[4] = 1;
        } else if (FUN_020bbf94(64)) {
            if (s[5] <= 0) s[5] = 2;
            else s[5]--;
            FUN_020c193c(0, 2, 0, 0, -1);
        } else if (FUN_020bbf94(128)) {
            if (s[5] >= 2) s[5] = 0;
            else s[5]++;
            FUN_020c193c(0, 2, 0, 0, -1);
        }
        break;
    }
    return 0;
}
