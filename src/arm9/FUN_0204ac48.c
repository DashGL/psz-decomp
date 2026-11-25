// flags: -O4,s
extern unsigned int *DAT_0210e234;
void FUN_0204ac48(void) {
    int i;
    if (DAT_0210e234) for (i = 0; i < 10; i++) {
        DAT_0210e234[4 + i] = ~0u;
        DAT_0210e234[14 + i] = ~0u;
    }
}
