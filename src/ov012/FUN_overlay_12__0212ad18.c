// flags: -O4,p
typedef struct { int a, b; } Pair;
extern unsigned char DAT_0213e0cc[];
extern Pair DAT_020ebb98;
extern void FUN_overlay_12__0212a934(void *);
void FUN_overlay_12__0212ad18(unsigned char *p) {
    *(int *)(p + 460) = 0; *(int *)(p + 484) = 0; *(int *)(p + 496) = 0; FUN_overlay_12__0212a934(p); *(int *)(p + 64) = 2; *(Pair *)(p + 72) = *(Pair *)(DAT_0213e0cc + 0x58); *(Pair *)(p + 80) = DAT_020ebb98;
}
