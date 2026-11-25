// flags: -O4,p
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

typedef void (*CloseCallback)(int, int, int, u8, int, void *);

typedef struct {
    u8 index;
    u8 aid;
} ConnInfo;

typedef struct {
    u8 pad00[0x24];
    int state;             /* 0x24 */
    u8 pad28[0x05];
    u8 isHost;             /* 0x2d */
    u8 pad2e[0x62];
    CloseCallback callback;/* 0x90 */
    void *cbParam;         /* 0x94 */
    u8 pad98[0x2ed];
    u8 f385;               /* 0x385 */
    u8 pad386[2];
    void *f388;            /* 0x388 */
    volatile u8 f38c;      /* 0x38c */
    volatile u8 f38d;      /* 0x38d */
    u8 f38e;               /* 0x38e */
    u8 pad38f[0xdd];
    int f46c[0x77];        /* 0x46c */
    u8 f648[0x20];         /* 0x648 */
    u32 f668;              /* 0x668 */
} MatchCnt;

extern MatchCnt *DAT_0211dcbc;
extern void *DAT_0211dcc4[];
extern u8 DAT_02101714[];

extern int FUN_020e5124(void);
extern ConnInfo *FUN_020d377c(void *);
extern void FUN_020e9b78(u8);
extern int FUN_020e1720(u8);
extern void FUN_020e5050(void);
extern void FUN_020e4d5c(int);
extern int FUN_020e4c30(int, int, int);
extern void FUN_020e056c(int, int);
extern int FUN_020e4db8(int, int);
extern void FUN_020e2ab8(int, void *, int);
extern void FUN_020d6674(void *);
extern int FUN_020e2a58(int);
extern void FUN_020e34e0(void);
extern void FUN_020e4abc(void);
extern void FUN_020e170c(int);

void FUN_020e1b00(void *conn, int reason)
{
    int profileID = 0;
    int isServer = 0;
    int isConnected;
    int dwcErr;
    u8 aid;
    int errCode;

    if (FUN_020e5124()) {
        return;
    }

    switch (reason) {
    case 0:
    case 1:
        dwcErr = 0;
        break;
    case 2:
    case 3:
        dwcErr = 6;
        errCode = -7600;
        break;
    case 4:
        errCode = -7601;
        dwcErr = 9;
        break;
    }

    if (dwcErr == 0) {
        ConnInfo *info = FUN_020d377c(conn);
        if (!info) {
            return;
        }
        aid = info->aid;
        if (DAT_0211dcbc->f668 & (1 << aid)) isConnected = 1; else isConnected = 0;
        FUN_020e9b78(aid);
        if ((DAT_0211dcbc->f38d == 2 && reason == 0) ||
            (DAT_0211dcbc->f38d == 3 && aid == 0)) {
            isServer = 1;
        }
        profileID = FUN_020e1720(aid);
        DAT_0211dcc4[info->index] = 0;
        if (DAT_0211dcbc->f385 != 0) {
            DAT_0211dcbc->f385--;
        }
        if (DAT_0211dcbc->f38c != 0) {
            DAT_0211dcbc->f38c--;
        }
    }

    if (DAT_0211dcbc->isHost == 0 && DAT_0211dcbc->state == 6 && !isConnected) {
        if (DAT_0211dcbc->f38d == 2 && dwcErr == 0) {
            FUN_020e5050();
            FUN_020e4d5c(profileID);
            return;
        }
        return;
    }

    if (FUN_020e4c30(dwcErr, errCode, profileID)) {
        return;
    }
    if (dwcErr != 0) {
        FUN_020e056c(dwcErr, errCode - 80000);
        return;
    }

    if (DAT_0211dcbc->isHost == 0 && (DAT_0211dcbc->f38d == 2 || DAT_0211dcbc->f38d == 3)) {
        if (DAT_0211dcbc->f46c[DAT_0211dcbc->f385 + 2] != 0) {
            DAT_0211dcbc->f648[DAT_0211dcbc->f385 + 1] = DAT_0211dcbc->f648[DAT_0211dcbc->f385 + 2];
            FUN_020e4db8(DAT_0211dcbc->f385 + 1, DAT_0211dcbc->f385 + 3);
        }
    }

    if (DAT_0211dcbc->f38d == 2) {
        if (DAT_0211dcbc->isHost == 0) {
            FUN_020e5050();
        } else if (DAT_0211dcbc->f385 == 0) {
            FUN_020e2ab8(1, DAT_02101714, 0);
        }
    } else if (DAT_0211dcbc->f385 == 0) {
        FUN_020e2ab8(1, DAT_02101714, 0);
    }

    if (DAT_0211dcbc->f38d == 0 || DAT_0211dcbc->f38d == 1) {
        DAT_0211dcbc->f38e = DAT_0211dcbc->f38c;
        FUN_020d6674(DAT_0211dcbc->f388);
    }

    if (DAT_0211dcbc->callback != 0 && isConnected) {
        DAT_0211dcbc->callback(dwcErr, reason == 0 ? 1 : 0, isServer, aid, FUN_020e2a58(profileID), DAT_0211dcbc->cbParam);
    }

    if ((DAT_0211dcbc->isHost != 0 || DAT_0211dcbc->f38d != 2) && DAT_0211dcbc->f385 == 0) {
        FUN_020e34e0();
        FUN_020e4abc();
        FUN_020e170c(3);
    }
}
