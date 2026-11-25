// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xdc, exact bytes and relocation targets.
extern int FUN_020c7694(int);
extern int FUN_020c750c(int, void *, int, int, void *, int *);
extern int FUN_020d8f78(void *, int, unsigned short);
extern void *FUN_020d8668(void *, int, unsigned short);
extern int FUN_020d86e4(void *);
extern void FUN_020d86cc(void *, int);
extern void FUN_020d8f18(void *, void *);
extern unsigned int FUN_020c7824(void);
extern void FUN_020c7478(int);
extern int DAT_0211dba4;

typedef struct {
    unsigned short a;
    unsigned short port;
    int ip;
} SockAddr;

int FUN_020da6f8(void *a0) {
    unsigned char sp14[0x5dc];
    SockAddr sp0c;
    int sp08 = 8;
    while (FUN_020c7694(*(int *)((char *)a0 + 0x6b4)) != 0) {
        if (FUN_020c750c(*(int *)((char *)a0 + 0x6b4), sp14, 0x5db, 0, &sp0c, &sp08) != -1) {
            if (FUN_020d8f78(a0, sp0c.ip, sp0c.port) == -1) {
                void *r4 = FUN_020d8668(a0, sp0c.ip, sp0c.port);
                if (FUN_020d86e4(r4) != 0) {
                    return 5;
                }
                FUN_020d86cc(r4, 0x11);
                FUN_020d8f18(a0, r4);
            }
        }
    }
    if (FUN_020c7824() - *(unsigned int *)((char *)a0 + 0x6b8) > 0x7d0) {
        FUN_020c7478(*(int *)((char *)a0 + 0x6b4));
        *(int *)((char *)a0 + 0x6b4) = -1;
        *(int *)a0 = 1;
        (*(void (**)(void *, int, int, int))((char *)a0 + 0x488))(a0, 3, DAT_0211dba4, *(int *)((char *)a0 + 0x494));
    }
    return 0;
}
