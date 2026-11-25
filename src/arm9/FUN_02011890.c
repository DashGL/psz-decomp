// flags: -noThumb
unsigned int FUN_02011890(unsigned int base, int index) {
    unsigned int entry;
    if (index < 0) return 0;
    if ((unsigned int)index >= *(unsigned int *)(base + 28)) return 0;
    entry = base + 32 + (unsigned int)index * 12;
    if (*(unsigned int *)entry == 0xffffffffu) return 0;
    return entry;
}
