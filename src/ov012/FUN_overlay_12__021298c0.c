// flags: -O4,s
struct S { int pad[19]; int status[4]; };
extern struct S *DAT_0213f2bc;
extern char DAT_0211a51c[];
extern int FUN_02084cc0(const void *);
void FUN_overlay_12__021298c0(int index) {
    if (DAT_0213f2bc && index != FUN_02084cc0(DAT_0211a51c) && index >= 0 && index < 4)
        DAT_0213f2bc->status[index] = 0;
}
