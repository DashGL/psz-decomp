// FUN_0206a238 @ 0x0206a238 (0x7c, arm) - ported from FUN_02031460 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0206a238 @ 0x02031460 (0x7c, ARM), verified 2.0/base. */
typedef unsigned int u32;
typedef short s16;
typedef unsigned short u16;
extern void FUN_0206740c(void *, int);

struct Sub_02031460 {
    s16 arr[16];
    u32 f20;
};

struct S_02031460 {
    u32 f0;
    u32 f4;
    u16 f8;
    u16 fa;
    char pad[0x14];
    struct Sub_02031460 subs[16];
    s16 tail[16];
};

void FUN_0206a238(struct S_02031460 *a0) {
    int i, j;
    a0->f4 = 0;
    a0->f8 = 0;
    a0->fa = 0;
    a0->f0 = 0;
    for (i = 0; i < 16; i++) {
        a0->subs[i].f20 = 0;
        for (j = 0; j < 16; j++) {
            a0->subs[i].arr[j] = -1;
        }
    }
    for (i = 0; i < 16; i++) {
        a0->tail[i] = -1;
    }
    FUN_0206740c(a0, sizeof(*a0));
}
