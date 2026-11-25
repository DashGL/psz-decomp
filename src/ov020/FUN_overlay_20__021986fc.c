// flags: -O4,s
typedef struct { unsigned int x, y, z; } Vec;
extern unsigned int DAT_020fc988;
extern Vec DAT_020fc958;
extern volatile unsigned int DAT_0219f940[];

void FUN_overlay_20__021986fc(unsigned int *p) {
    p[0] = 0;
    p[1] = 0;
    p[2] = DAT_020fc988;
    *(Vec *)(p + 3) = DAT_020fc958;
    *(Vec *)(p + 6) = DAT_020fc958;
    p[9] = DAT_0219f940[15];
    p[10] = DAT_0219f940[15];
    p[11] = DAT_0219f940[16];
    p[12] = DAT_0219f940[14];
    *(Vec *)(p + 13) = DAT_020fc958;
    *(Vec *)(p + 16) = DAT_020fc958;
    ((unsigned short *)p)[38] = 0;
    p[20] = DAT_020fc988;
    p[21] = DAT_020fc988;
    p[22] = DAT_020fc988;
    p[23] = DAT_020fc988;
    p[24] = DAT_020fc988;
    p[25] = DAT_020fc988;
    p[26] = DAT_0219f940[3];
    p[27] = DAT_0219f940[2];
    ((unsigned short *)p)[56] = 0;
    ((unsigned short *)p)[57] = 0;
}
