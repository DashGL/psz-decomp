// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern void FUN_0203666c(void *), FUN_020472cc(void *, int), FUN_020456bc(void *, int), FUN_0204260c(void *, int, void *, void *), FUN_02035408(void *, int, int, int);
extern int FUN_02078188(int);
extern char *FUN_0204daa8(int);
extern void *FUN_020475ec(void *, int);
extern short UNK_020ed83c[];

void *FUN_0207a120(int actorid, Vec *position, int angle, int option, int attachment) {
    int desc[25], matrix[12], rotation[9];
    char *actor;
    Vec v;
    int a = angle;
    FUN_0203666c(desc);
    desc[21] = 15;
    FUN_020472cc(desc, 15);
    FUN_020456bc(desc, desc[21]);
    if (FUN_02078188(actorid)) {
        actor = FUN_0204daa8(actorid);
        if (actor && *(void **)(actor + 140)) {
            FUN_0204260c(*(void **)(actor + 140), 2, matrix, rotation);
            a = *(unsigned short *)(actor + 192);
            FUN_02035408(&v, matrix[9] + ((2252 * UNK_020ed83c[(a >> 4) * 2]) >> 12), matrix[10], matrix[11] + ((2252 * UNK_020ed83c[(a >> 4) * 2 + 1]) >> 12));
            *(Vec *)((char *)desc + 32) = v;
            *(short *)((char *)desc + 58) = a;
        }
    } else {
        *(Vec *)((char *)desc + 32) = *position;
        *(short *)((char *)desc + 58) = a;
    }
    if (attachment >= 0) {
        desc[17] = 3;
        desc[18] = attachment;
        desc[19] = -1;
        desc[7] |= 0x08000000;
    }
    return FUN_020475ec(desc, option);
}
