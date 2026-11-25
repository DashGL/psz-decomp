// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x148, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void *FUN_0201d764(void *p);
extern void *FUN_0201d774(void *p);
extern void FUN_0201959c(void *p);
extern void *FUN_02018eec(void *p);
extern void FUN_02018e34(void *p, void **a, void **b);
extern void (*DAT_020f6940)(void *);
extern void (*DAT_020f6938)(void *);

void FUN_0201ce50(unsigned int *p0) {
    void *sp4;
    void *sp0;
    void *r4;
    void *r5;

    switch (*p0) {
    case 0x30444d42:
        r4 = FUN_0201d764(p0);
        if (FUN_0201d774(p0) != 0) {
            FUN_0201959c(r4);
        }
    case 0x30585442:
        r5 = FUN_0201d774(p0);
        if (r5 != 0) {
            r4 = FUN_02018eec(r5);
            FUN_02018e34(r5, &sp4, &sp0);
            if (r4 != 0) {
                DAT_020f6940(r4);
            }
            if (sp0 != 0) {
                DAT_020f6938(sp0);
            }
            if (sp4 != 0) {
                DAT_020f6938(sp4);
            }
        }
        break;
    case 0x30414342:
    case 0x30414d42:
    case 0x30415442:
    case 0x30415642:
    case 0x30505442:
        break;
    }
}
