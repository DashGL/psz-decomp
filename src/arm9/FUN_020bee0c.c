// FUN_020bee0c @ 0x020bee0c (0x42, thumb) - ported from FUN_020ac394 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
typedef signed char s8;

extern void FUN_020bf0b4(void *);
extern void FUN_020bef74(void *, void *);

void FUN_020bee0c(char *a0) {
    char *p = a0;
    int i;
    for (i = 0; i < 100; i++, p += 0x18) {
        int flag = !*(volatile int *)(p + 0xc);
        if (flag == 0) {
            FUN_020bf0b4(p);
            flag = !!*(volatile s8 *)(p + 2);
            if (flag != 0) {
                FUN_020bef74(a0, p);
            }
        }
    }
}
