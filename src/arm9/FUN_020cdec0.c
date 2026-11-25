// flags: -O4,p
struct Pair_020cdec0 {
    int a;
    int b;
};

extern void *FUN_020c7bcc(int);
extern void FUN_020d1b74(void *, const void *);
extern void FUN_020ccd44(int, void *);
extern int FUN_020ce6f4(void *, int, int, void **, int, int, int);
extern int FUN_020cb81c(void *, struct Pair_020cdec0, void *, void *, int);
extern void FUN_020ce7d0(void *, void *);
extern int FUN_020cde40(void *, int, int);
extern int FUN_020c979c(void *, int);
extern int FUN_020cf7a8(void *, int, void **);
extern const char DAT_020fdbcc[];

int FUN_020cdec0(int *arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    void *v1c;
    int *hdr = (int *)*arg0;
    void *v18 = 0;
    struct Pair_020cdec0 pair;
    int *buf;
    int handle;
    int flag = 0;
    if (arg2 == 1) {
        flag = 1;
    }
    if (*(int *)((char *)hdr + 0x100) == 0) {
        flag = 0;
    }

    if (arg4 != 0 && flag && FUN_020cf7a8(arg0, arg1, &v1c) != 0 && *(int *)((char *)v1c + 0x10) != 0) {
        buf = (int *)FUN_020c7bcc(0x204);
        if (buf == 0) {
            FUN_020d1b74(arg0, DAT_020fdbcc);
            return 1;
        }
        FUN_020ccd44(*(int *)((char *)v1c + 0x10), buf);
        buf[0] = 0;
        buf[1] = arg1;
        pair.a = arg4;
        pair.b = arg5;
        {
            int res = FUN_020ce6f4(arg0, 2, 0, &v18, 1, arg4, arg5);
            if (res != 0) {
                return res;
            }
            handle = *(int *)((char *)v18 + 0x18);
            res = FUN_020cb81c(arg0, pair, buf, v18, 0);
            if (res != 0) {
                return res;
            }
            FUN_020ce7d0(arg0, v18);
        }
    } else {
        int res = FUN_020ce6f4(arg0, 2, 0, &v18, arg3, arg4, arg5);
        if (res != 0) {
            return res;
        }
        handle = *(int *)((char *)v18 + 0x18);
        res = FUN_020cde40(arg0, arg1, handle);
        if (res != 0) {
            return res;
        }
    }
    if (arg3 != 0) {
        int res = FUN_020c979c(arg0, handle);
        if (res != 0) {
            return res;
        }
    }
    return 0;
}
