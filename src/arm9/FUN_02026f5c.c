// flags: -O4,p -noThumb
#pragma opt_propagation off
extern int FUN_02027f8c(void *);
extern int FUN_020672b8(void *);
extern void FUN_0206719c(void *);
extern int FUN_02027070(void *, void *, int, int, int, int);
extern void FUN_02067220(void *);

int FUN_02026f5c(char *arg0, void *arg1, int arg2, int arg3, int arg4, int arg5) {
    char *sub;
    int lock_flag;
    int res;

    if (FUN_02027f8c(arg0) != 0) {
        return -0x1c;
    }
    {
        int ok = 0;
        if (arg0 != 0) {
            ok = (*(short *)(arg0 + 0x70) & 1) != 0;
        }
        if (ok == 0) {
            return -0x27;
        }
    }
    {
        signed char t = *(signed char *)(arg0 + 0x73);
        int is_stream = 1;
        if (t != 0 && t != 4) {
            is_stream = 0;
        }
        if (is_stream) {
            if (!(*(volatile short *)(arg0 + 0x70) & 4) || (*(volatile short *)(arg0 + 0x70) & 8)) {
                return -0x38;
            }
        }
    }
    sub = *(char **)(arg0 + 0x68);
    if ((arg5 & 4) || *(signed char *)(arg0 + 0x72) == 0) {
        if (FUN_020672b8(sub + 0xe0) == 0) {
            return -6;
        }
        lock_flag = 0;
    } else {
        FUN_0206719c(sub + 0xe0);
        lock_flag = 1;
    }
    res = FUN_02027070(arg0, arg1, arg2, arg3, arg4, lock_flag);
    FUN_02067220(sub + 0xe0);
    return res;
}
