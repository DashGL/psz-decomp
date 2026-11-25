// flags: -O4,s
extern const char DAT_02100204[];
extern unsigned long long FUN_020dd1dc(unsigned int);
extern unsigned int FUN_020dd1f4(unsigned int);
extern unsigned int FUN_020dd4e4(unsigned int, unsigned int, unsigned int, void *);
#pragma thumb off
extern unsigned int FUN_020662b4(unsigned int, unsigned int, const char *, void *, unsigned int, unsigned int, unsigned int, unsigned int, void *);
#pragma thumb on

unsigned int FUN_020dd528(unsigned int record, unsigned int address, unsigned int output) {
    unsigned char text[44];
    unsigned long long pair = FUN_020dd1dc(record);
    unsigned int value;
    FUN_020dd4e4((unsigned int)pair, (unsigned int)(pair >> 32), 43, text + 21);
    value = FUN_020dd1f4(record);
    FUN_020dd4e4(value, 0, 32, text);
    return FUN_020662b4(output, 21, DAT_02100204, text + 21, (unsigned char)(address >> 24), (unsigned char)(address >> 16), (unsigned char)(address >> 8), (unsigned char)address, text);
}
