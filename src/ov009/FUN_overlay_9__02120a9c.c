// flags: -O4,p
extern const unsigned short DAT_02120e90[];
unsigned int FUN_overlay_9__02120a9c(void *p, int index) {
    if (index >= 0 && index < 3) return DAT_02120e90[index];
    return 0xffff;
}
