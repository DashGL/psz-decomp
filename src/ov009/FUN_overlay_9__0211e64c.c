// flags: -O4,p
extern unsigned int DAT_02121134[];
unsigned int FUN_overlay_9__0211e64c(void) {
    switch (DAT_02121134[0]) {
    case 0: return DAT_02121134[1];
    case 14: case 15: return 9;
    default: return ~0U;
    }
}
