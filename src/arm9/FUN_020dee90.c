// flags: -O4,p
extern const char DAT_0210059c[];
extern const char DAT_021005a0[];
extern int FUN_020e02a8(int, int, int, int);
#pragma thumb off
extern int FUN_02003c70(const char *);
extern int FUN_020662b4(char *, int, const char *, const char *);
#pragma thumb on
extern int FUN_020df018(void *, void *, int);

int FUN_020dee90(char *param_1, const char *param_2, int param_3, int param_4) {
    char *r4 = param_1 + 0x19f8;
    const char *r6 = (*(int *)(param_1 + 0x19f4) == 0) ? DAT_0210059c : DAT_021005a0;
    int r7;
    int l1;
    int l2;
    int need;
    char *cur;
    int avail;
    (*(int *)(param_1 + 0x19f4))++;
    r7 = FUN_020e02a8(param_3, param_4, 0, 0);
    l1 = FUN_02003c70(r6);
    l2 = FUN_02003c70(param_2);
    need = r7 + (l1 - 2 + l2);
    cur = *(char **)(r4 + 4);
    avail = *(char **)(r4 + 8) - cur;
    if (need > avail) {
        if (FUN_020df018(param_1, r4, need - avail + 1) == 0) {
            return 1;
        }
        cur = *(char **)(r4 + 4);
        avail = *(char **)(r4 + 8) - cur;
    }
    *(int *)(r4 + 4) += FUN_020662b4(cur, avail, r6, param_2);
    if (FUN_020e02a8(param_3, param_4, *(int *)(r4 + 4), *(int *)(r4 + 8) - *(int *)(r4 + 4) - 1) < 0) {
        return 1;
    }
    *(char **)(r4 + 4) += r7;
    **(char **)(r4 + 4) = 0;
    return 0;
}
