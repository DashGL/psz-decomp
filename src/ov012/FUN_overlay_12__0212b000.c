// flags: -O4,p
typedef struct { int a, b; } Pair;
extern int *DAT_0213f2c0;
extern unsigned char DAT_0213e0cc[];
extern Pair DAT_020ebb98;
extern void FUN_overlay_12__0212a934(void *);
extern void FUN_overlay_12__0212af68(void);
extern void FUN_overlay_12__0212b19c(void *, int, int, int, void (*)(void), void (*)(void));
void FUN_overlay_12__0212b000(void) {
    int *self = DAT_0213f2c0;
    if (self) {
        FUN_overlay_12__0212a934(self);
        self[16] = 3;
        FUN_overlay_12__0212b19c(self, 2, 0, -1, 0, FUN_overlay_12__0212af68);
        *(Pair *)(self + 18) = *(Pair *)(DAT_0213e0cc + 0x28);
        *(Pair *)(self + 20) = DAT_020ebb98;
    }
}
