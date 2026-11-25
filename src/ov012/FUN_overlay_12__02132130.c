// flags: -O4,s
typedef struct { unsigned char bytes[4]; } Key;
typedef struct { unsigned short graphic, a, b, pad; int x, y; } Draw;
extern void FUN_02071d0c(void *);
extern void FUN_02090b44(void *);
extern int FUN_overlay_12__0213205c(void *, int *);
extern int FUN_overlay_12__02131ad0(int);
extern void FUN_020c32b4(void *, int);
extern int FUN_overlay_12__02132254(void *);
extern int FUN_overlay_12__02134020(void *);
extern int FUN_overlay_12__0213233c(void *, int);

void FUN_overlay_12__02132130(int *item, int selected, int *position) {
    Key key = *(Key *)item;
    Draw draw;
    int bank, graphic, requirements, allowed, learned;
    Key *kp = &key;
    FUN_02071d0c(&draw);
    FUN_02090b44(&draw);
    bank = 0;
    graphic = FUN_overlay_12__0213205c(item, &bank);
    if (graphic != -1) {
        draw.graphic = graphic;
        draw.x = position[0] + 45056;
        draw.y = position[1];
        FUN_020c32b4(&draw, FUN_overlay_12__02131ad0(bank));
    }
    draw.x = position[0];
    draw.y = position[1];
    if (selected) {
        draw.graphic = 54;
        FUN_020c32b4(&draw, FUN_overlay_12__02131ad0(1));
    } else {
        requirements = FUN_overlay_12__02132254(kp);
        allowed = FUN_overlay_12__02134020(item);
        learned = FUN_overlay_12__0213233c(kp, (item[1] & 0x3fc000) >> 14);
        if (!requirements || (!allowed && !learned)) {
            draw.graphic = 55;
            FUN_020c32b4(&draw, FUN_overlay_12__02131ad0(1));
        }
    }
}
