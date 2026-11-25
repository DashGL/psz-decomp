// flags: -O2,s
enum { E0 = 0, E1 = 1 };
extern void FUN_02083590(void *);
extern void FUN_0208340c(void *, int);
extern unsigned char *FUN_02083534(void *, unsigned int);
extern int FUN_020833ac(void *, int);
extern int FUN_02082050(void *, void *, int);
void FUN_02082228(char *s) {
    unsigned int count, i;
    FUN_02083590(s + 0x60);
    count = *(unsigned int *)(s + 0xb0);
    for (i = 0; i < count; i++) {
        unsigned char *p = FUN_02083534(s + 0x60, i);
        if (p && ((p[0] & 4) ? E1 : E0) == E0 && p[2] < 4) {
            int amount = FUN_020833ac(s, *(int *)(s + 0x87c) - *(int *)(s + 0x878));
            int used;
            if (!amount) amount = 1;
            used = FUN_02082050(s, p, amount);
            if (used) {
                FUN_0208340c(s, used);
                p[0] |= 0x10;
                return;
            }
        }
    }
}
