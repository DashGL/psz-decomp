// flags: -noThumb
enum { E0 = 0, E1 = 1 };
typedef unsigned short u16; typedef unsigned int u32;
extern void FUN_02015834(u32, u32, int, u32, u32, u32, u32);
extern void FUN_02015bc0(u32, void *, u32, u32, u32, u32);
void FUN_02015c1c(u32 p0, u16 *s, u32 p2, u32 p3, u32 p4, u32 p5, u32 p6, u32 p7) {
    FUN_02015834(p0, s[3], s[2] == 0 ? E0 : E1, s[0], s[1], p6, p7);
    FUN_02015bc0(p0, s, p2, p3, p4, p5);
}