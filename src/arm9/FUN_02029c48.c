// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x9c, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_0202c694(void *);
extern int FUN_02003c70(char *);
extern void FUN_0202c6e8(void *, void *, int);
extern void FUN_0202c7a0(void *, void *);
extern void FUN_0202bdd4(void *);
extern void FUN_0202be1c(void *, void *, int);
extern void FUN_0202bed4(void *, void *);

void FUN_02029c48(void *param_1, char *param_2, char *param_3) {
    unsigned char digest[0x14];

    FUN_0202c694(param_3 + 0x348);
    FUN_0202c6e8(param_3 + 0x348, param_2, FUN_02003c70(param_2));
    FUN_0202c6e8(param_3 + 0x348, param_3, 0x30);
    FUN_0202c6e8(param_3 + 0x348, param_3 + 0x34, 0x40);
    FUN_0202c7a0(param_3 + 0x348, digest);
    FUN_0202bdd4(param_3 + 0x3fc);
    FUN_0202be1c(param_3 + 0x3fc, param_3, 0x30);
    FUN_0202be1c(param_3 + 0x3fc, digest, 0x14);
    FUN_0202bed4(param_3 + 0x3fc, param_1);
}
