// flags: -O4,p -noThumb
extern unsigned int FUN_0205dd50(void);
extern unsigned int DAT_021125b8[];
void FUN_0205f574(void) {
    unsigned int value = FUN_0205dd50();
    DAT_021125b8[2] = value;
    if (value == 0) return;
    switch (value) {
    case 32:
        DAT_021125b8[1] = 0x06890000;
        break;
    case 64:
        DAT_021125b8[1] = 0x06894000;
        break;
    }
}
