// flags: -O4,s
typedef struct { int x, y, z; } V;
extern unsigned int UNK_0211aa54[];
extern int UNK_020fc620[];
extern V UNK_020fc630;
extern void FUN_020345f0(void *, void *);
#pragma thumb off
extern void FUN_0205c8cc(void *, void *), FUN_0205c7e8(void *, void *, void *);
extern int FUN_0205c7ac(void *, void *), FUN_0205cc08(int);
#pragma thumb on
int FUN_020b0f70(char *s) {
    V source, direction, negative, cross;
    int angle;
    FUN_020345f0(&source, s + 52);
    negative.x = -source.x;
    negative.y = -source.y;
    negative.z = -source.z;
    direction = negative;
    if (direction.x || direction.y || direction.z) FUN_0205c8cc(&direction, &direction);
    if (!(UNK_0211aa54[1] & 1)) {
        UNK_020fc620[4] = 0;
        UNK_020fc620[5] = 0;
        UNK_020fc620[6] = 4096;
        UNK_0211aa54[1] |= 1;
    }
    angle = FUN_0205cc08(FUN_0205c7ac(&UNK_020fc630, &direction));
    FUN_0205c7e8(&UNK_020fc630, &direction, &cross);
    if (cross.y < 0) angle = (unsigned short)(65536 - angle);
    return angle;
}