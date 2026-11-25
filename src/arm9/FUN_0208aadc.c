// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x9a, exact bytes and relocation targets.
// flags: -O4,s
struct S4 { unsigned char b[4]; };
struct R4 { unsigned char f0 : 5; };
extern struct R4 *FUN_020845fc(struct S4 *);
extern int FUN_0208b0b4(void *, struct R4 *);
extern void FUN_0208ab78(void *, struct R4 *);
extern void FUN_0208acf8(void *, struct R4 *);
extern void FUN_0208ae24(void *, struct R4 *);
extern void FUN_0208af0c(void *, struct R4 *);
extern void FUN_0208afa8(void *, struct R4 *);
extern void FUN_0208aff0(void *, struct R4 *);
extern void FUN_0208ad8c(void *, struct R4 *);
extern void FUN_0208b3e4(void *, int);

void FUN_0208aadc(struct S4 *param_1) {
    struct S4 local;
    struct R4 *r4;
    local = *param_1;
    r4 = FUN_020845fc(&local);
    if (r4 != 0) {
        switch (FUN_0208b0b4(param_1, r4)) {
        case 0:
            FUN_0208ab78(param_1, r4);
            break;
        case 1:
            FUN_0208acf8(param_1, r4);
            break;
        case 2:
            FUN_0208ae24(param_1, r4);
            break;
        case 3:
            FUN_0208af0c(param_1, r4);
            break;
        case 4:
            FUN_0208afa8(param_1, r4);
            break;
        case 5:
            FUN_0208aff0(param_1, r4);
            break;
        case 6:
            FUN_0208ad8c(param_1, r4);
            break;
        }
        FUN_0208b3e4(param_1, r4->f0 + 1);
    }
}
