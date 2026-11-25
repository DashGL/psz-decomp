// flags: -O4,p -noThumb
#pragma opt_propagation off
extern unsigned int DAT_021116a0[];
extern unsigned int DAT_02111ce0[];
extern void FUN_02065a0c(unsigned int, void *, void *, unsigned int);
extern void FUN_0205649c(unsigned int, unsigned int);

void FUN_020564fc(void) {
    unsigned int *s = DAT_021116a0;
    unsigned int *p = DAT_02111ce0;
    unsigned int command;
    FUN_02065a0c(s[10], (void *)0x04100010, (void *)s[8], 0x200);
    command = s[7];
    FUN_0205649c((command >> 8) | 0xb7000000, command << 24);
    *(volatile unsigned int *)0x040001a4 = p[1];
}
