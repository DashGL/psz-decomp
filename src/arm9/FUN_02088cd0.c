// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa4, exact bytes and relocation targets.
// FUN_02088cd0: full 0xa4 bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md
//cpp
// flags: -O4,p
extern "C" {
void *FUN_020c1fc8(void);
int FUN_020c2608(void *, int);
int FUN_02088d74(void *, void *);
void FUN_020c38f0(int, int);
int FUN_0203a1fc(void *);
void FUN_0208b14c(void *);
void FUN_02088f00(void *);
void FUN_0208902c(void *);
void FUN_0208a0bc(void *);
void FUN_0208aadc(void *);
void FUN_0208a830(void *);
}
struct Base0_02088cd0 { int a[8]; };
struct Base1_02088cd0 { int b; };
struct Derived_02088cd0 : Base0_02088cd0, Base1_02088cd0 {};
extern Derived_02088cd0 *DAT_02108d04;

extern "C" void FUN_02088cd0(char *param_1, Base1_02088cd0 *param_2) {
    if (FUN_020c2608(FUN_020c1fc8(), *(int *)(param_1 + 0x20)) != 0) {
        if (FUN_02088d74(param_1, param_1 + 0x10) == 0) {
            FUN_020c38f0(*(int *)(param_1 + 0x30), 0);
            FUN_020c38f0(*(int *)(param_1 + 0x34), 0);
            *(int *)(param_1 + 0x38) = 0;
        }
        if (FUN_0203a1fc(param_1) == 0) {
            if (param_2 == 0) {
                *(Base1_02088cd0 **)(param_1 + 0x5c) = DAT_02108d04;
            } else {
                *(Base1_02088cd0 **)(param_1 + 0x5c) = param_2;
            }
            FUN_0208b14c(param_1);
            FUN_02088f00(param_1);
            switch (*(unsigned char *)param_1) {
            case 0:
                FUN_0208902c(param_1);
                break;
            case 1:
                FUN_0208a0bc(param_1);
                break;
            case 2:
                FUN_0208aadc(param_1);
                break;
            case 3:
                FUN_0208a830(param_1);
                break;
            }
            *(int *)(param_1 + 0x5c) = 0;
        }
    }
}
