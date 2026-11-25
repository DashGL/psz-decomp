// flags: -O4,p
typedef unsigned int u32;
extern char DAT_020fde7c[], DAT_020fde98[], DAT_020fdea0[], DAT_020fdea8[], DAT_020fdeb0[], DAT_020fdeb8[], DAT_020fdec0[], DAT_020fdec8[], DAT_020fdeec[], DAT_020fdef4[];
extern int FUN_020cf1d0(void *, void *), FUN_020c83f4(int, unsigned short, int *), FUN_020cf7a8(void *, int, char **), FUN_020cfa00(void *), FUN_020cf198(void *, void *), FUN_020cb574(void *, int, unsigned short, void *, int *, int);
extern void FUN_020d1b74(void *, void *), FUN_020cb184(void *, void *, void *), FUN_020cb1a0(void *, void *, int), FUN_020c7bec(void *), FUN_020cf8a0(void *, void *);
#pragma thumb off
extern char *FUN_02003fa8(char *, char *);
extern int FUN_02003f38(char *, char *, int);
#pragma thumb reset
#define W(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(char **)((char *)(p)+(o)))
int FUN_020ce8dc(void *owner, char *session) {
    char *manager = *(char **)owner;
    int status2; char *peer, *node, *end = 0, *response;
    int result, status, release;
    if (!session) return 3;
    if (W(session, 0) == 106 || W(session, 0) == 100) return 3;
    switch (W(session, 0)) {
    case 101:
        break;
    case 102:
        result = FUN_020cf1d0(owner, session);
        if (result) return result;
        break;
    case 103:
        FUN_020c83f4(W(session, 8), *(unsigned short *)(session + 12), &status);
        if (status != 1) break;
        release = 1;
        if (!FUN_020cf7a8(owner, W(session, 16), &peer)) {
            FUN_020d1b74(owner, DAT_020fde7c);
            return 3;
        }
        FUN_020cb184(owner, session + 0x2c, DAT_020fde98);
        FUN_020cb184(owner, session + 0x2c, DAT_020fdea0);
        FUN_020cb1a0(owner, session + 0x2c, W(manager, 0x1a0));
        FUN_020cb184(owner, session + 0x2c, DAT_020fdea8);
        FUN_020cb184(owner, session + 0x2c, manager + 0x110);
        FUN_020cb184(owner, session + 0x2c, DAT_020fdeb0);
        FUN_020cb184(owner, session + 0x2c, P(peer, 0x1c));
        FUN_020cb184(owner, session + 0x2c, DAT_020fdeb8);
        for (node = P(manager, 0x5d4); node; node = P(node, 0x4c)) {
            if (W(node, 16) == W(session, 16) && node != session && W(node, 0) <= 103) {
                release = 0;
            }
        }
        if (release) {
            FUN_020c7bec(P(peer, 0x1c));
            P(peer, 0x1c) = 0;
            if (FUN_020cfa00(peer)) FUN_020cf8a0(owner, peer);
        }
        W(session, 0) = 104;
        break;
    case 104:
        if (P(session, 0x1c)) end = FUN_02003fa8(P(session, 0x1c), DAT_020fdeb8);
        if (!end) break;
        *end = 0;
        response = P(session, 0x1c);
        if (!FUN_02003f38(response, DAT_020fdec0, 7)) {
            ++W(session, 0x18);
            if (W(session, 0x18) > 1) {
                FUN_020d1b74(owner, DAT_020fdec8);
                return 3;
            }
            result = FUN_020cf198(owner, session);
            if (result) return result;
        } else if (FUN_02003f38(response, DAT_020fdeec, 6)) {
            FUN_020d1b74(owner, DAT_020fdef4);
            return 3;
        }
        W(session, 0) = 105;
        W(session, 0x24) = 0;
        break;
    }
    if (W(session, 0x34) > 0) {
        result = FUN_020cb574(owner, W(session, 8), *(unsigned short *)(session + 12), session + 0x2c, &status2, 1);
        if (status2 || result) W(session, 0) = 106;
    }
    return 0;
}
