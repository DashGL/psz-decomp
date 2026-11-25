// flags: -O4,p -noThumb
typedef unsigned int U;
typedef char *Args;
#define ARGS(p) ((Args)(((U)&(p)&~3U)+4U))
extern char UNK_020f614c[], UNK_02101a20[];
extern U UNK_02101990[], UNK_021019b4[];
extern char *UNK_021181a0[];
extern int FUN_020058ac(void *, int), FUN_020672b8(void *);
extern void FUN_0206719c(void *), FUN_02067220(void *);
extern void *FUN_020036fc(void *, const void *, U);
extern int FUN_02002ed8(void *(*)(void *, const void *, U), void *, const char *, Args);
int FUN_0200376c(const char *format, ...) {
    int result;
    if (FUN_020058ac(UNK_020f614c, -1) >= 0) return -1;
    if (!FUN_020672b8(UNK_02101a20)) {
        UNK_02101990[3] = *(U *)(UNK_021181a0[1] + 108);
        UNK_021019b4[3] = 1;
    } else if (UNK_02101990[3] == *(U *)(UNK_021181a0[1] + 108)) {
        ++UNK_021019b4[3];
    } else {
        FUN_0206719c(UNK_02101a20);
        UNK_02101990[3] = *(U *)(UNK_021181a0[1] + 108);
        UNK_021019b4[3] = 1;
    }
    result = FUN_02002ed8(FUN_020036fc, UNK_020f614c, format, ARGS(format));
    if (--UNK_021019b4[3] == 0) FUN_02067220(UNK_02101a20);
    return result;
}
