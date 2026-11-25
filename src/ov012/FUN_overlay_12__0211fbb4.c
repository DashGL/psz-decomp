// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern int DAT_0211a51c;
extern struct { int pad[2]; int f8; signed char fc; } DAT_0211a3c4;
extern unsigned short DAT_0211a3b8;
extern void *DAT_02108c68;
extern void FUN_overlay_12__021201dc(void *);
extern void FUN_overlay_12__02120278(void *);
extern int FUN_02084c1c(void *);
extern int FUN_02084be4(void *);
extern int FUN_02084be8(void *);
extern int FUN_02084bf8(void *);
extern int FUN_overlay_12__0211f7e0(void);
extern int FUN_02033400(void *, unsigned);
extern int FUN_020788c0(void);
extern char *FUN_02078cb8(void);
void FUN_overlay_12__0211fbb4(char *self) {
    char *first, *second;
    unsigned stage;
    int allowed;
    FUN_overlay_12__021201dc(self);
    FUN_overlay_12__02120278(self);
    if (FUN_02084c1c(&DAT_0211a51c) && FUN_02084be4(&DAT_0211a51c) == 1) return;
    if (!FUN_02084be8(&DAT_0211a51c)) {
        if (!FUN_02084bf8(&DAT_0211a51c)) return;
        if (!FUN_overlay_12__0211f7e0()) return;
    }
    stage = *(unsigned *)(self + 3048);
    if (stage == 0) {
        if (((DAT_0211a3c4.f8 >= 0) ? E1 : E0) == 0) return;
        if (((DAT_0211a3b8 & 2) ? E1 : E0) == 0) return;
        if (DAT_0211a3c4.fc != 0) return;
        if (!FUN_02033400(DAT_02108c68, 7)) return;
        *(unsigned *)(self + 3048) = 1;
        return;
    }
    if (stage != 1) return;
    first = self + 712;
    second = self + 1000;
    if (*(unsigned *)(self + 16)) return;
    if (!*(unsigned *)(first + 284) || *(unsigned short *)first != 2 || *(unsigned *)(first + 280) || *(unsigned *)(first + 276)) return;
    if (!*(unsigned *)(second + 284) || *(unsigned short *)second != 2 || *(unsigned *)(second + 280) || *(unsigned *)(second + 276) != 1) return;
    allowed = 1;
    if (((*(int *)(FUN_02078cb8() + 8) >= 0) ? E1 : E0) != 0) allowed = 0;
    else if (((FUN_020788c0() == 0) ? E1 : E0) == 0) {
        int status = FUN_020788c0();
        if (status != 3 && status != 4) allowed = 0;
    }
    if (allowed) {
        *(unsigned short *)first = 0;
        *(unsigned *)(first + 280) = 1;
        *(unsigned short *)second = 0;
        *(unsigned *)(second + 280) = 1;
        *(unsigned *)(self + 3048) = 2;
        *(unsigned *)(self + 12) = *(unsigned *)(first + 276);
    }
}
