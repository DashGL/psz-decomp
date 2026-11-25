// flags: -O4,p -noThumb
extern int FUN_02027174(void *, int, int, int *, int);
extern int FUN_0202721c(void *, char *, int, int, unsigned short, int, int);

int FUN_02027070(char *arg0, char *arg1, int arg2, unsigned short arg3, int arg4, int arg5) {
    int *sub = *(int **)(*(int *)(arg0 + 0x68) + 0x10c);
    int n;
    int total = 0;
    int chunk_max;
    int v14;
    int mss = sub[0x12];

    if (*(signed char *)(arg0 + 0x73) == 1) {
        if (arg2 > mss - 0x2a) {
            return -0x23;
        }
        chunk_max = arg2;
    } else {
        chunk_max = mss - 0x36;
        if (arg2 <= chunk_max) {
            chunk_max = arg2;
        }
    }
    if (arg2 > 0) {
        int loop_flag = arg5 & 1;
        do {
            n = FUN_02027174(arg0, arg2, chunk_max, &v14, arg5);
            if (n > 0) {
                if (FUN_0202721c(arg0, arg1, n, v14, arg3, arg4, arg5) <= 0) {
                    return -6;
                }
                arg1 += n;
                arg2 -= n;
                total += n;
            }
            if (!loop_flag) {
                if (n > 0) {
                    break;
                }
                return -6;
            }
        } while (arg2 > 0);
    }
    return total;
}
