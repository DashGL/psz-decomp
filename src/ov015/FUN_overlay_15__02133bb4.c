// flags: -O4,p
extern char *DAT_0213e8dc;
extern unsigned short *DAT_0213b710[];
extern unsigned short *DAT_a_0213b710[];
unsigned int FUN_overlay_15__02133bb4(unsigned int index) {
    char *p = DAT_0213e8dc;
    DAT_0213b710[0] = (unsigned short *)(p + 2);
    DAT_0213b710[1] = (unsigned short *)(p + 4);
    DAT_0213b710[2] = (unsigned short *)(p + 6);
    DAT_0213b710[3] = (unsigned short *)(p + 8);
    DAT_0213b710[4] = (unsigned short *)(p + 10);
    DAT_0213b710[5] = (unsigned short *)(p + 12);
    return *DAT_a_0213b710[index];
}
