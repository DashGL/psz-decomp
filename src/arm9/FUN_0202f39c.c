// flags: -O4,s -noThumb
extern char *DAT_02108c0c;
extern void FUN_0202e834(int), FUN_0202e984(void), FUN_0202e79c(int, void *, int, int), FUN_020301ac(int), FUN_020673d4(void *, unsigned), FUN_0202fdb4(void *);

void FUN_0202f39c(char *event) {
    switch (*(unsigned short *)(event + 2)) {
    case 0:
        switch (*(unsigned short *)(event + 4)) {
        case 14:
            if (*(int *)(DAT_02108c0c + 0x2260) == 12) {
                FUN_0202e834(8);
                FUN_0202e984();
            } else {
                FUN_0202e834(9);
                FUN_0202e79c(0, DAT_02108c0c + 0x2140, 0, 0x872);
            }
            break;
        case 15:
            FUN_020301ac(((int)*(unsigned short *)(*(char **)(event + 8) + 14) >> 8) & 0xff);
            FUN_020673d4(*(void **)(event + 8), 0x620);
            FUN_0202fdb4(*(void **)(event + 8));
            break;
        default:
            FUN_0202e834(11);
            FUN_0202e79c(7, DAT_02108c0c + 0x2140, *(unsigned short *)(event + 4), 0x881);
            break;
        }
        break;
    case 4:
    default:
        FUN_0202e834(11);
        FUN_0202e79c(7, DAT_02108c0c + 0x2140, 0, 0x88c);
        break;
    }
}
