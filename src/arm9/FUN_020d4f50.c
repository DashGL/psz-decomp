// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x150, exact bytes and relocation targets.
// flags: -O4,p
struct S_sockaddr_in {
    unsigned char sin_len;
    unsigned char sin_family;
    unsigned short sin_port;
    int sin_addr;
};
struct S_d4f50 {
    int f0;
    unsigned char pad4[0x24];
    int f28;
    unsigned char pad2c[0x14];
    int f40;
};
extern void FUN_020d52c8(void **p_buf, int *p_len);
extern int FUN_020c76b0(int);
extern int FUN_020c7540(int, void *, int, int, struct S_sockaddr_in *, int);
extern int FUN_020c75a8(int);
extern int FUN_020d4340(struct S_d4f50 *, int, int);
extern int FUN_020d43d0(struct S_d4f50 *, int, int, int);
extern void FUN_020d5128(struct S_d4f50 *);
extern void *FUN_020d4bc0(struct S_d4f50 *, int, int);
extern int FUN_020d3030(struct S_d4f50 *, void *, int, int, int, void *, int, int);

int FUN_020d4f50(struct S_d4f50 *p0, int p1, int p2, void *p3, int p4) {
    int err;
    FUN_020d52c8(&p3, &p4);
    if (p0->f40 != 3 && FUN_020c76b0(p0->f0) == 0) {
        return 1;
    }
    {
        struct S_sockaddr_in addr = {0};
        addr.sin_family = 2;
        addr.sin_addr = p1;
        addr.sin_port = ((p2 >> 8) & 0xff) | ((p2 << 8) & 0xff00);
        if (FUN_020c7540(p0->f0, p3, p4, 0, &addr, 8) == -1) {
            err = FUN_020c75a8(p0->f0);
            if (err == -15) {
                if (FUN_020d4340(p0, p1, p2) == 0) {
                    return 0;
                }
            } else if (err == -23) {
                if (FUN_020d43d0(p0, p1, p2, 1) == 0) {
                    return 0;
                }
            } else if (err == -42 || err == -6) {
                return 1;
            } else if (err == -42 || err == -6) {
                return 1;
            } else if (err != -35) {
                FUN_020d5128(p0);
                return 0;
            }
        } else if (p0->f28 != 0) {
            void *v = FUN_020d4bc0(p0, p1, p2);
            if (FUN_020d3030(p0, v, p1, p2, 0, p3, p4, 1) == 0) {
                return 0;
            }
        }
    }
    return 1;
}
