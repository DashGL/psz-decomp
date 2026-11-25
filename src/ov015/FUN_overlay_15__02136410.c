//cpp
// flags: -O4,p
static inline int GXS_GetVisiblePlane() {
    return (*(volatile unsigned int *)0x04001000 & 0x1f00) >> 8;
}
static inline void GXS_SetVisiblePlane(int plane) {
    *(volatile unsigned int *)0x04001000 = (*(volatile unsigned int *)0x04001000 & ~0x1f00) | (plane << 8);
}
static inline int GX_GetVisiblePlane() {
    return (*(volatile unsigned int *)0x04000000 & 0x1f00) >> 8;
}
static inline void GX_SetVisiblePlane(int plane) {
    *(volatile unsigned int *)0x04000000 = (*(volatile unsigned int *)0x04000000 & ~0x1f00) | (plane << 8);
}
extern "C" void FUN_overlay_15__02136410(int screen, int mask) {
    if (screen == 1) {
        GXS_SetVisiblePlane(GXS_GetVisiblePlane() & ~mask);
    } else {
        GX_SetVisiblePlane(GX_GetVisiblePlane() & ~mask);
    }
}
