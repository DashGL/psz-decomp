// flags: -O4,s
#pragma thumb off
extern unsigned int FUN_02003c70(void *);
extern void *FUN_02003dd4(void *, void *, unsigned int);
#pragma thumb on
typedef struct {
    char pad[0xa144];
    char buf[256];
} S;
void FUN_overlay_17__021227e0(S *p, char *text) {
    int n = (int)FUN_02003c70(p->buf) + (int)FUN_02003c70(text) + 1;
    if (n <= 256 && n > 0) {
        FUN_02003dd4(p->buf, text, FUN_02003c70(text));
        p->buf[n - 1] = 0;
    }
}
