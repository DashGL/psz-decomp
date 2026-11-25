// flags: -O4,s
// near: target=0xa8 candidate=0xac exact_bytes=999 vers=2.0/sp2p3; see notes/sessions/matching-resume2-upper-2026-11-12.md
struct S12 {
    int a, b, c;
};
extern void FUN_0203020c(void *, int, int);
typedef void *(*ArrayCallback020b314c)(void *);
#pragma thumb off
extern void *FUN_0200c2dc(unsigned int, unsigned int, unsigned int, ArrayCallback020b314c, ArrayCallback020b314c);
#pragma thumb on
extern int FUN_020304f8(void *);
extern void FUN_020b3b4c(void *, int, int);
extern int DAT_020fc720;
extern struct S12 DAT_020fc958;
extern void *FUN_020b354c(void *);
extern void *FUN_020b3448(void *);

void *FUN_020b314c(char *param_1, int param_2) {
    int r6;
    int count;
    FUN_0203020c(param_1, param_2, 0x26);
    r6 = 0;
    *(int **)param_1 = &DAT_020fc720;
    *(int *)(param_1 + 0x30) = **(int **)(param_1 + 4);
    *(int *)(param_1 + 0x34) = 0;
    *(int *)(param_1 + 0x38) = 0;
    *(int *)(param_1 + 0x3c) = 0;
    *(struct S12 *)(param_1 + 0x44) = DAT_020fc958;
    *(struct S12 *)(param_1 + 0x50) = DAT_020fc958;
    *(int *)(param_1 + 0x5c) = 0;
    *(int *)(param_1 + 0x60) = 0;
    count = **(int **)(param_1 + 0x30);
    if (count <= 0) {
        count = 4;
    }
    if ((*(char **)(param_1 + 4))[0x12] != 0) {
        r6 = 1;
        count /= 2;
    }
    *(int *)(param_1 + 0x38) = count;
    *(void **)(param_1 + 0x34) = FUN_0200c2dc(*(int *)(param_1 + 0x38), 0x58, 8, FUN_020b3448, FUN_020b354c);
    if (*(int *)(param_1 + 0x34) != 0) {
        int i;
        for (i = 0; i < *(int *)(param_1 + 0x38); i++) {
            int v = FUN_020304f8(param_1);
            FUN_020b3b4c(*(char **)(param_1 + 0x34) + i * 0x58, v, r6);
        }
    }
    return param_1;
}
