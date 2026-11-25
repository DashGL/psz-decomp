// flags: -O4,s
extern int FUN_020c6c04(unsigned int);
extern unsigned int FUN_020c6bd8(unsigned int);
unsigned int FUN_020c6c24(unsigned int profiles) {
    int index = FUN_020c6c04(profiles); if (index >= 0 && index < 3) return FUN_020c6bd8(profiles + 48 * index); return 0;
}
