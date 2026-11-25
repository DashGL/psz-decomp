// flags: -O4,p -noThumb
// USA ARM9 runtime leaf reconstructed from actual ARM instructions; no inline assembly.
extern unsigned int DAT_020f6488[];
unsigned int FUN_02003a78(void){unsigned int *state=DAT_020f6488;unsigned int value=*state*0x41c64e6d+12345;*state=value;return (value>>16)&32767;}
