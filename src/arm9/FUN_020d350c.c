// flags: -O4,p
extern int FUN_020d51c0(void *, unsigned int *, unsigned short *);
extern int FUN_020d3174(void *, void **, unsigned int, unsigned short);
extern int FUN_020d31ac(void *, void *, int, int);
extern void FUN_020d4ee4(void *);
extern void FUN_020d34d4(void *);
extern void FUN_020c7864(int);

int FUN_020d350c(void *arg0, void **arg1, void *arg2, void *arg3, int arg4, int arg5, int arg6, int arg7) {
    void *obj;
    unsigned int ip;
    unsigned short port;
    int res;

    if (FUN_020d51c0(arg2, &ip, &port) == 0 || ip == 0 || port == 0) {
        return 4;
    }
    if (((((ip << 24) & 0xff000000U) | (((ip << 8) & 0x00ff0000U) | ((unsigned char)(ip >> 24) | ((ip >> 8) & 0x0000ff00U)))) & 0xe0000000U) == 0xe0000000U) {
        return 4;
    }
    res = FUN_020d3174(arg0, &obj, ip, port);
    if (res != 0) {
        return res;
    }
    *(int *)((char *)obj + 0x20) = arg5;
    res = FUN_020d31ac(obj, arg3, arg4, arg6);
    if (res != 0) {
        FUN_020d4ee4(obj);
        return res;
    }
    if (arg7 == 0) {
        if (arg1 != 0) {
            *arg1 = obj;
        }
        return 0;
    }
    *(int *)((char *)obj + 0x24) += 1;
    do {
        FUN_020d34d4(arg0);
        res = (*(int *)((char *)obj + 0xc) >= 5) ? 1 : 0;
        if (!res) {
            FUN_020c7864(1);
        }
    } while (!res);
    *(int *)((char *)obj + 0x24) -= 1;
    if (*(int *)((char *)obj + 0xc) == 5) {
        *arg1 = obj;
    }
    return *(int *)((char *)obj + 0x18);
}
