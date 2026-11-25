// flags: -O4,p -noThumb
extern unsigned int FUN_0206842c(void);
extern void FUN_02068948(void);
extern struct {
    unsigned int pad[7];
    volatile unsigned int busy;
} DAT_0211a180;
extern volatile unsigned int DAT_0211a19c;
unsigned int FUN_0206b2e8(void) {
    unsigned int busy = DAT_0211a180.busy;
    volatile unsigned int *p = &DAT_0211a19c;
    while (busy) {
        if (FUN_0206842c() == 128) FUN_02068948();
        busy = *p;
    }
    return busy;
}
