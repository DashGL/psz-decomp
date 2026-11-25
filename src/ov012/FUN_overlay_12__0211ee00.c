// flags: -O4,p
typedef struct { const unsigned int *words; unsigned int index; } View;
extern const char DAT_0213d254[];
extern int FUN_0200376c(const char *, ...);
extern void FUN_02000cac(void);
int FUN_overlay_12__0211ee00(const View *view) {
    const unsigned int *words; unsigned int index = view->index; words = view->words; if (index >= 258) { FUN_0200376c(DAT_0213d254); FUN_02000cac(); } return (words[index >> 5] & (1u << (index & 31))) != 0;
}
