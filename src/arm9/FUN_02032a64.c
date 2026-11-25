//cpp
// flags: -O4,s
extern "C" {
char *FUN_02031a74(void);
void FUN_02032838(void *, void *);
}
extern "C" void FUN_02032a64(char *s) {
    int active;
    *(unsigned short *)(s + 4) = 0;
    *(int *)(FUN_02031a74() + 0x34) = -1;
    active = (*(signed char *)(s + 0x14) == 1) ? 1 : 0;
    if (active) FUN_02032838(s + 0x18, s + 0x14);
    *(unsigned int *)(s + 0x68) = 0;
}
