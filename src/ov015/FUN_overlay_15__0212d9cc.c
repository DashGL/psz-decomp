// flags: -O4,p
typedef struct {
    unsigned int y : 8;
    unsigned int attr0_hi : 8;
    unsigned int x : 9;
    unsigned int attr1_hi : 7;
    unsigned short tile : 10;
    unsigned short prio : 2;
    unsigned short pal : 4;
} Oam;

extern unsigned char DAT_0213e86c[];
extern const unsigned char DAT_0213a3ea[][3];
extern int FUN_overlay_15__0212de98(int);
extern void FUN_overlay_15__02135aac(int, int, void *);

void FUN_overlay_15__0212d9cc(int kind, int mode, int index)
{
    unsigned short x[5];
    Oam **slot;
    unsigned int graphic;

    x[0] = 204;
    x[1] = 192;
    x[2] = 192;
    x[3] = 143;
    x[4] = 143;
    slot = (Oam **)(*(unsigned char **)(DAT_0213e86c + 8) + 24 + index * 4);
    if ((unsigned int)(kind - 1) <= 1) {
        if (FUN_overlay_15__0212de98(index) == 2) {
            slot = (Oam **)(*(unsigned char **)(DAT_0213e86c + 8) + 44);
        } else {
            slot = (Oam **)(*(unsigned char **)(DAT_0213e86c + 8) + 48);
        }
    }
    graphic = DAT_0213a3ea[kind][mode];
    if (graphic) {
        unsigned int v;
        unsigned int *dst;
        FUN_overlay_15__02135aac(0, graphic, *slot);
        v = ((unsigned int)x[kind] << 23) >> 7;
        dst = (unsigned int *)*slot;
        *dst = v | (*dst & 0xfe00ff00u);
        (*slot)->prio = 3;
    } else {
        *(unsigned int *)(*slot) = (*(unsigned int *)(*slot) & 0xfe00ff00u) | 0x01000000;
    }
}
