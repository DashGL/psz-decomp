// flags: -O4,s
extern char *DAT_0213e8dc;
void *FUN_overlay_15__02133c6c(unsigned int index) {
    char *p = DAT_0213e8dc;
    if (*(unsigned short *)(p + 2) & (1 << index)) {
        return (void *)(p + 14 + 30 * (index - 1));
    }
    return 0;
}
