// flags: -O4,s
extern int FUN_overlay_22__0219a110(void *);
extern int FUN_overlay_22__0219a130(void *);
extern void FUN_overlay_22__0219a0f4(void *, int);
extern unsigned short FUN_overlay_22__02198ad8(void *, int);
extern void FUN_overlay_22__0219aa30(void *, void *, unsigned short, unsigned short, unsigned short);
extern void FUN_overlay_22__0219ae34(void *, int);
extern void FUN_overlay_22__02198b10(void *, int);
extern void FUN_overlay_22__02199238(void *);
void FUN_overlay_22__021991d0(int *self) {
    switch (FUN_overlay_22__0219a110(self)) {
    case 17:
        if (FUN_overlay_22__0219a130(self)) FUN_overlay_22__0219a0f4(self, 18);
        break;
    case 18:
        ((unsigned short *)self)[21] = FUN_overlay_22__02198ad8(self, ((signed char *)self)[0x14d]);
        FUN_overlay_22__0219aa30(self, self + 4, ((unsigned short *)self)[20], ((unsigned short *)self)[21], ((unsigned short *)self)[22]);
        FUN_overlay_22__0219ae34(self, 11);
        FUN_overlay_22__02198b10(self, 0xb33);
        break;
    }
    FUN_overlay_22__02199238(self);
}
