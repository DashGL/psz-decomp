typedef unsigned int u32;
typedef unsigned short u16;
#define REG32(a) (*(volatile u32 *)(a))
#define REG16(a) (*(volatile u16 *)(a))

extern void FUN_02051c60(void);
extern void FUN_02051d60(int);
extern void FUN_0205ce8c(u32, u32, u32);
extern void FUN_0205cef4(u32);
extern void FUN_0200cebc(u32);
extern void FUN_02065c30(u32, void (*)(void));
extern void FUN_02065e00(u32);
extern void FUN_0205cdd4(int);
extern void FUN_0200cc70(void);
extern void FUN_0200cc44(void);

static inline void G2_SetBG0Priority(int p) { REG16(0x04000008) = (u16)((REG16(0x04000008) & ~3) | p); }
static inline void G2_SetBG1Priority(int p) { REG16(0x0400000a) = (u16)((REG16(0x0400000a) & ~3) | p); }
static inline void G2_SetBG3Priority(int p) { REG16(0x0400000e) = (u16)((REG16(0x0400000e) & ~3) | p); }
static inline void G2S_SetBG0Priority(int p) { REG16(0x04001008) = (u16)((REG16(0x04001008) & ~3) | p); }
static inline void G2S_SetBG1Priority(int p) { REG16(0x0400100a) = (u16)((REG16(0x0400100a) & ~3) | p); }
static inline void G2S_SetBG2Priority(int p) { REG16(0x0400100c) = (u16)((REG16(0x0400100c) & ~3) | p); }
static inline void G2S_SetBG3Priority(int p) { REG16(0x0400100e) = (u16)((REG16(0x0400100e) & ~3) | p); }

void FUN_0200ccfc(void) {
    REG16(0x04000304) = REG16(0x04000304) | 0x8000;
    FUN_02051c60();
    FUN_02051d60(1);
    FUN_0205ce8c(1, 0, 1);
    FUN_0205cef4(0);
    REG32(0x04000000) = (REG32(0x04000000) & 0xffcfffef) | 0x10;
    REG32(0x04001000) = (REG32(0x04001000) & 0xffcfffef) | 0x200010;
    REG32(0x04001000) = REG32(0x04001000) & 0xff7fffff;
    REG32(0x04000000) = (REG32(0x04000000) & 0xffffe0ff) | 0x1300;
    REG32(0x04001000) = (REG32(0x04001000) & 0xffffe0ff) | 0x1b00;
    REG32(0x04000000) = REG32(0x04000000) & 0xf8ffffff;
    REG32(0x04000000) = REG32(0x04000000) & 0xc7ffffff;
    REG16(0x0400000a) = (REG16(0x0400000a) & 0x43) | 0x84;
    REG16(0x04001008) = (REG16(0x04001008) & 0x43) | 0x80;
    REG16(0x0400100a) = (REG16(0x0400100a) & 0x43) | 0x208;
    REG16(0x0400100e) = (REG16(0x0400100e) & 0x43) | 0x1094;
    G2_SetBG0Priority(1);
    G2_SetBG1Priority(0);
    G2_SetBG3Priority(3);
    G2S_SetBG0Priority(2);
    G2S_SetBG1Priority(1);
    G2S_SetBG2Priority(0);
    G2S_SetBG3Priority(3);
    REG16(0x04000060) = (REG16(0x04000060) & 0xffffcffd) | 2;
    FUN_0200cebc(1);
    REG16(0x04000050) = 0;
    REG32(0x04000540) = 2;
    REG16(0x04000060) = REG16(0x04000060) & 0xcffb;
    REG16(0x04000060) = (REG16(0x04000060) & 0xffffcfff) | 8;
    REG32(0x04000580) = 0xbfff0000;
    FUN_0200cebc(1);
    FUN_02065c30(1, FUN_0200cc44);
    FUN_02065e00(1);
    (void)REG16(0x04000208);
    REG16(0x04000208) = 1;
    FUN_0205cdd4(1);
    FUN_0200cc70();
}
