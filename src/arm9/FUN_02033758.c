// flags: -O4,s
extern void *DAT_02108cf4;
extern int FUN_020781b0(int);
extern void *FUN_020352a4(void *, int);
extern char *FUN_02076fb0(void *);
extern char *FUN_0209a4b4(void *);
extern char *FUN_02076618(void *);
extern void FUN_020337c0(void *, void *);
void FUN_02033758(short *out, int id) {
    if (FUN_020781b0(id)) {
        void *p = FUN_020352a4(DAT_02108cf4, id);
        if (p) {
            char *q = FUN_02076fb0(p);
            if (q) { FUN_020337c0(out, q + 16); return; }
            q = FUN_0209a4b4(p);
            if (q) { FUN_020337c0(out, q + 12); return; }
            q = FUN_02076618(p);
            if (q) { FUN_020337c0(out, q + 16); return; }
        }
    }
    out[0] = -1;
    out[1] = -1;
}
