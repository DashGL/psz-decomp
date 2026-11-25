// flags: -O4,p
typedef unsigned int u32;
typedef struct { char s[22]; } S22;
typedef struct { char s[23]; } S23;
typedef struct { unsigned long long id; u32 rest[3]; } Identity;
extern const S22 DAT_0213a230;
extern const S23 DAT_0213a246;
extern const char DAT_0213b0a4[];
extern const char DAT_0213b0bc[];
extern char *DAT_0213e828[];
extern void FUN_overlay_15__021252f8(const char *, void (*)(const void *, u32, u32));
extern char *FUN_overlay_15__021252bc(const char *);
extern char *FUN_overlay_15__0213553c(const char *, u32 *, int);
extern void FUN_020e9ebc(void *);
extern void FUN_overlay_15__021355e0(void *);
#pragma thumb off
extern void FUN_0205f29c(const void *, u32, u32);
extern void FUN_0205ef9c(const void *, u32, u32);
extern void FUN_02065774(const void *, void *, u32);
extern void FUN_0206740c(const void *, u32);
extern void FUN_0205eb64(const void *, u32, u32);
#pragma thumb on

void FUN_overlay_15__021290ec(void) {
    S22 first = DAT_0213a230;
    S23 second = DAT_0213a246;
    Identity identity;
    char *palette;
    int i;
    FUN_overlay_15__021252f8(DAT_0213b0a4, FUN_0205f29c);
    FUN_overlay_15__021252f8(DAT_0213b0bc, FUN_0205ef9c);
    DAT_0213e828[1] = FUN_overlay_15__0213553c(FUN_overlay_15__021252bc(second.s), 0, 4);
    palette = FUN_overlay_15__0213553c(FUN_overlay_15__021252bc(first.s), 0, 4);
    FUN_020e9ebc(&identity);
    if (identity.id == 0) {
        char *src = palette + 0xc0;
        char *dst = palette + 0x40;
        for (i = 0; i < 2; i++) {
            FUN_02065774(src, dst, 32);
            src += 32;
            dst += 32;
        }
    }
    FUN_0206740c(palette, 512);
    FUN_0205eb64(palette, 0, 512);
    FUN_overlay_15__021355e0(palette);
    *(volatile unsigned short *)0x04001008 = (*(volatile unsigned short *)0x04001008 & ~3) | 3;
    *(volatile unsigned short *)0x0400100a = (*(volatile unsigned short *)0x0400100a & ~3) | 3;
    *(volatile unsigned short *)0x0400000a = (*(volatile unsigned short *)0x0400000a & ~3) | 3;
    *(volatile unsigned short *)0x0400000c = (*(volatile unsigned short *)0x0400000c & ~3) | 3;
}
