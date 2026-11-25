// flags: -O4,s
typedef struct { int x, y; } Pair;
typedef struct { short a, b, c, pad; int x, y; } Draw;
extern const int data_0213b30c[];
extern void FUN_overlay_12__0212d570(int,int,int,int),FUN_02071d0c(void *),FUN_02090b44(void *),FUN_020c32b4(void *,int),FUN_02079160(void *,const Pair *,unsigned int,int,int,int,int,int,int),FUN_overlay_12__0212d488(void *,int),FUN_overlay_12__0212d51c(void *,int),FUN_overlay_12__0212c9a0(void),FUN_overlay_12__0212c8f8(const char *,int,int,int),FUN_overlay_12__0212d63c(const char *,int);
extern int FUN_overlay_12__02131ad0(int),FUN_overlay_12__0212f264(void *,int);
extern char *FUN_020a0ce8(void);
extern void *FUN_02079114(void);
extern const char *FUN_overlay_12__0212d288(int),*FUN_overlay_12__0212d268(int,int);
void FUN_overlay_12__0212f0f4(int *self,int mode)
{
    Draw draw;
    Pair pos, base;
    char *stats;
    int id, resource, number_resource, row, index;
    FUN_overlay_12__0212d570(10, self[19], self[18], mode);
    FUN_02071d0c(&draw);
    FUN_02090b44(&draw);
    draw.x = 0x1d000;
    draw.a = 18;
    resource = FUN_overlay_12__02131ad0(4);
    number_resource = FUN_overlay_12__02131ad0(1);
    stats = FUN_020a0ce8() + 236;
    index = self[60];
    base = *(const Pair *)(data_0213b30c + 7);
    for (row = 0; row < 5 && index < self[18]; row++, index++) {
        id = ((short *)((char *)self + 80))[index];
        if (FUN_overlay_12__0212f264(self, id)) {
            draw.y = (mode ? (row * 16 + 261) : (row * 16 + 69)) << 12;
            FUN_020c32b4(&draw, resource);
        }
        pos = base;
        pos.y = (mode ? (row * 16 + 261) : (row * 16 + 69)) << 12;
        FUN_02079160(FUN_02079114(), &pos, 2, 5, *(unsigned short *)(stats + 4 + id * 2) & 0x7fff, number_resource, -1, 8, 0);
    }
    FUN_overlay_12__0212d488(self + 57, mode);
    FUN_overlay_12__0212d51c(self + 57, mode);
    if (self[62]) {
        self[62] = 0;
        FUN_overlay_12__0212c9a0();
        if (self[18] > 0) {
            index = self[60];
            for (row = 0; row < 5 && index < self[18]; row++, index++)
                FUN_overlay_12__0212c8f8(FUN_overlay_12__0212d288(((short *)((char *)self + 80))[index]), 51, row * 16 + 69, 2);
        } else
            FUN_overlay_12__0212d63c(FUN_overlay_12__0212d268(0, 17), 2);
    }
}
