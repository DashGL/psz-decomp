// flags: -O4,s
extern void *DAT_0211a50c;
extern void FUN_0209bf5c(void *, void *, int);
extern void FUN_0209c034(void *, void *, int);
extern void FUN_0209c28c(void *, void *, int);
extern void FUN_0209c314(void *);

void FUN_0209bf08(unsigned char *desc, int extra) {
    void *p = DAT_0211a50c;
    if (p) {
        switch (desc[0]) {
        case 0:
            if (desc[1] == 0x11) {
                FUN_0209bf5c(p, desc, extra);
            } else {
                FUN_0209c034(p, desc, extra);
            }
            break;
        case 1:
            FUN_0209c28c(p, desc, extra);
            break;
        case 3:
            if (desc[1] == 1) {
                FUN_0209c314(desc);
            }
            break;
        }
    }
}
