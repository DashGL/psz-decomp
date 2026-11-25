// flags: -O4,p
extern int FUN_020c7694(int);
struct Addr020d7e90 { unsigned short family, port; int ip; };
extern int FUN_020c750c(int, char *, int, int, struct Addr020d7e90 *, int *);
extern int FUN_020d7e8c(void *, void *, char *, int);
extern void FUN_020d7ce8(void *, void *, char *, int);
extern void FUN_020d7e24(void *, void *, char *, int);

void FUN_020d7e90(int *arg0, int arg1) {
    char buf[2048];
    struct Addr020d7e90 addr;
    int addr_len = 8;
    int sock = 0;

    if (!arg1) {
        sock = arg0[8];
    }
    if (!FUN_020c7694(sock)) {
        return;
    }
    do {
        int n = FUN_020c750c(sock, buf, 0x7ff, 0, &addr, &addr_len);
        unsigned char *cur;
        if (n == -1) {
            break;
        }
        buf[n] = 0;
        for (cur = (unsigned char *)arg0[2]; cur != 0; cur = *(unsigned char **)(cur + 0x24)) {
            if (arg1) {
                if ((cur[0x15] & 8) && *(int *)(cur + 0x10) == addr.ip) {
                    goto match;
                }
            }
            if (*(int *)cur == addr.ip) {
                if (*(unsigned short *)(cur + 4) == addr.port || arg1) goto match;
            }
            if (*(int *)cur != arg0[10] || !(cur[0x15] & 2) || *(int *)(cur + 8) != addr.ip || *(unsigned short *)(cur + 0xc) != addr.port) {
                continue;
            }
        match:
            if (arg1) {
                if (!FUN_020d7e8c(arg0, cur, buf, n)) {
                    continue;
                }
                break;
            } else {
                if (arg0[0] == 1) {
                    FUN_020d7ce8(arg0, cur, buf, n);
                } else {
                    FUN_020d7e24(arg0, cur, buf, n);
                }
                break;
            }
        }
    } while (FUN_020c7694(sock));
}
