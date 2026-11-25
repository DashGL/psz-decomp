//cpp
// flags: -O4,s
extern "C" {
extern void FUN_020c2b84(void *, void *, int, int, int);
extern void *DAT_0213e9f8[];
}
static inline int GXS_GetVisiblePlane() {
    return (*(volatile unsigned int *)0x04001000 & 0x1f00) >> 8;
}
static inline void GXS_SetVisiblePlane(int plane) {
    *(volatile unsigned int *)0x04001000 = (*(volatile unsigned int *)0x04001000 & ~0x1f00) | (plane << 8);
}
extern "C" void FUN_overlay_12__02134a90(void *p, int index) {
    GXS_SetVisiblePlane(GXS_GetVisiblePlane() | 8);
    *(volatile unsigned short *)0x0400100e = (*(volatile unsigned short *)0x0400100e & 0x43) | 0x190;
    if (index >= 0 && index < 7) {
        FUN_020c2b84(p, DAT_0213e9f8[index], 7, 1, 4);
    }
}
