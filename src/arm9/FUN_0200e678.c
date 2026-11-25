// flags: -O4,s -noThumb
extern unsigned int FUN_02069678(unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_02069e58(void);
extern unsigned int FUN_02069c30(unsigned int);
extern unsigned int FUN_02069dec(unsigned int);
extern unsigned int FUN_02066fc8(void *, unsigned int, unsigned int);
extern unsigned int FUN_0200d5e0(unsigned int);
extern unsigned int FUN_0200d5b0(unsigned int);
extern unsigned int FUN_0200d644(unsigned int);
extern unsigned int FUN_02069870(unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned int DAT_02102820[];
extern char DAT_021027e0[];

void FUN_0200e678(void) {
    unsigned int *g = DAT_02102820;
    unsigned int sequence;
    int channel, allocated;
    if (!g[0]) return;
    channel = (int)g[11];
    allocated = (channel >= 0);
    FUN_02069678(g[9], g[10], allocated ? (1u << channel) : 0, 0);
    if (allocated) {
        sequence = FUN_02069e58();
        FUN_02069c30(1);
        FUN_02069dec(sequence);
        while (FUN_02066fc8(DAT_021027e0, 0, 0)) {}
    }
    if (g[10]) FUN_0200d5e0(g[10]);
    if (g[8]) FUN_0200d5b0(g[8]);
    if (allocated) FUN_0200d644(g[11]);
    if (g[1] == 1) FUN_02069870(0, 0, 0, 0);
    g[0] = 0;
}
