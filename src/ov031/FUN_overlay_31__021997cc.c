//cpp
// flags: -O4,s
extern "C" {
extern void FUN_overlay_31__02199c5c(void *);
extern void FUN_overlay_31__0219876c(void *);
extern void FUN_02036b24(void *, int);
extern void FUN_overlay_31__02199cf4(void *);
}
extern "C" void FUN_overlay_31__021997cc(int *self) {
    FUN_overlay_31__02199c5c(self);
    FUN_overlay_31__0219876c(self + 60);
    if (((*(int *)0x020fc988 < self[71]) ? 1 : 0) != 0) {
        self[71] -= 4096;
        if (((*(int *)0x020fc988 >= self[71]) ? 1 : 0) != 0) {
            FUN_02036b24(self, 4096);
        }
    }
    FUN_overlay_31__02199cf4(self);
}
