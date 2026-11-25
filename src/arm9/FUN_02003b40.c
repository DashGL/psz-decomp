// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x130, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Thread02003b40 {
    char pad[0x6c];
    int id;
};
struct ThreadInfo02003b40 {
    int f0;
    struct Thread02003b40 *curr;
};
struct LockRec02003b40 {
    char pad[0x1c];
    int val;
};
extern int DAT_02101a80[];
extern struct ThreadInfo02003b40 DAT_021181a0;
extern struct LockRec02003b40 DAT_02101990;
extern struct LockRec02003b40 DAT_021019b4;
extern void (*DAT_02101db4[])(int);
extern int FUN_020672b8(void *);
extern void FUN_0206719c(void *);
extern void FUN_02067220(void *);
extern void FUN_02000cd0(int);

int FUN_02003b40(int sig) {
    void (*handler)(int);
    if (sig < 1 || sig > 7) {
        return -1;
    }
    if (FUN_020672b8(DAT_02101a80) == 0) {
        DAT_02101990.val = DAT_021181a0.curr->id;
        DAT_021019b4.val = 1;
    } else if (DAT_02101990.val == DAT_021181a0.curr->id) {
        DAT_021019b4.val++;
    } else {
        FUN_0206719c(DAT_02101a80);
        DAT_02101990.val = DAT_021181a0.curr->id;
        DAT_021019b4.val = 1;
    }
    handler = DAT_02101db4[sig - 1];
    if (handler != (void (*)(int))1) {
        DAT_02101db4[sig - 1] = 0;
    }
    if (--DAT_021019b4.val == 0) {
        FUN_02067220(DAT_02101a80);
    }
    if (handler == (void (*)(int))1 || (handler == 0 && sig == 1)) {
        return 0;
    }
    if (handler == 0) {
        FUN_02000cd0(0);
    }
    handler(sig);
    return 0;
}
