// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xc0, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc0, exact bytes and relocation targets.
// flags: -O4,s
// check: exact
// target: FUN_overlay_15__0212f664 @ 0x0212f664 (size 0xc0, ov015)

struct State8c {
    unsigned char sel;
    unsigned char *owner;
};
extern struct State8c data_0213e88c;
extern const signed char data_0213a570[];
extern int FUN_overlay_15__02124eb4(void);
extern int FUN_overlay_15__02127e4c(void);
extern void FUN_overlay_15__02132190(int);
extern void FUN_overlay_15__02124f18(void);
extern void FUN_overlay_15__02127de4(void (*)(void));
extern void FUN_overlay_15__0212830c(void);
extern int FUN_overlay_15__02131ba0(int);
extern void FUN_overlay_15__02124edc(int);
extern int FUN_overlay_15__02127e40(void);
extern void FUN_overlay_15__02132e00(int, int, int, int, int);
extern void FUN_overlay_15__0212fa58(void);
extern void FUN_overlay_15__0212fab4(void);
extern void FUN_overlay_15__02131bb4(unsigned);
extern void FUN_overlay_15__0212fbb8(void);
extern void FUN_overlay_15__0212f724(void);

void FUN_overlay_15__0212f664(void)
{
    unsigned char sel;
    int slot;

    switch (FUN_overlay_15__02124eb4()) {
    case 0:
        switch (FUN_overlay_15__02127e4c()) {
        case 0:
            FUN_overlay_15__02132190(7);
            data_0213e88c.owner[0x1d] = 2;
            break;
        case 1:
            FUN_overlay_15__02124f18();
            FUN_overlay_15__02127de4(FUN_overlay_15__0212830c);
            return;
        }
        break;
    case 1:
        data_0213e88c.owner[0x1d] = 1;
        sel = data_0213e88c.sel;
        if (sel >= 4) {
            slot = sel - 4;
            if (FUN_overlay_15__02131ba0(slot) == 0xff) {
                FUN_overlay_15__02132190(9);
                FUN_overlay_15__02124edc(-1);
                return;
            }
            FUN_overlay_15__02132190(6);
            FUN_overlay_15__02132e00(
                70, 0, 1,
                data_0213a570[FUN_overlay_15__02127e40()],
                slot + 1);
            FUN_overlay_15__0212fa58();
            FUN_overlay_15__02124f18();
            FUN_overlay_15__02127de4(FUN_overlay_15__0212fab4);
            return;
        }
        if (sel <= 2) {
            FUN_overlay_15__02131bb4(sel);
        }
        FUN_overlay_15__02132190(6);
        FUN_overlay_15__0212fbb8();
        break;
    default:
        return;
    }
    FUN_overlay_15__02127de4(FUN_overlay_15__0212f724);
}

// Caller/callee ABI evidence: Caller212f6a6 loads selected profile byte into r0; low-profile branch212f6f6 checks<=2 and calls2131bb4 without overwriting it. Actualcallee shifts incomingprofile by8 for sourceblock and storesprofile atbase1268. Explicitly forwards consumed profile instead of undefined zero-argument call.
