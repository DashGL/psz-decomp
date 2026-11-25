// flags: -O4,p -noThumb
extern unsigned int FUN_02053840(void);

int FUN_02062850(char *self) {
    unsigned int mask = FUN_02053840();
    unsigned short i, start, candidate;
    if (!mask) return 0;
    start = *(unsigned short *)(self + 4);
    candidate = start;
    for (i = 0; i < 16; i++, candidate = (unsigned short)(candidate == 16 ? 1 : candidate + 1)) {
        if ((mask & (1u << (candidate - 1))) && start != candidate) {
            *(unsigned short *)(self + 4) = candidate;
            break;
        }
    }
    return 1;
}
