// flags: -O4,s
typedef struct { int x, y, z; } V330;
extern const short DAT_020ed83c[];
extern char *FUN_0204daa8(int);
extern void FUN_020345f0(void *, void *);
extern void FUN_0204e700(int, int, int);
extern void FUN_020b5460(void *, int, void *, int);
extern void FUN_020b551c(void *, int, int);
extern void FUN_020b559c(void *, int, int);
extern void FUN_020b56b4(void *, int, void *, int);
extern void FUN_020b5718(void *, int, void *, int);
extern void FUN_020b57d4(void *, int, void *, int);
extern void FUN_020b588c(void *, int, int, int);
extern void FUN_020b5940(void *, int, int, void *, int);
#pragma thumb off
extern int FUN_0200a3a0(int, int);
extern void FUN_0205aa80(void *);
#pragma thumb on
extern void FUN_0205abac(void *, int, int);
extern void FUN_0204a954(void *, void *, void *, void *);
extern void FUN_02047ae8(void *);
extern void FUN_0204ff00(void *, int, int, int, int);
extern void *FUN_0204fc0c(int, void *, void *, int);

void FUN_020b5200(void *context, int id, unsigned char *item, int extra, int *input) {
    V330 position, offset;
    int matrix[9];
    V330 out;
    int desc[13];
    char *actor;
    int timing, param, repeats, duration, chance, type;
    unsigned category, kind;
    int divisor, mode, extent;
    kind = item[0];
    category = item[1];
    actor = FUN_0204daa8(id);
    if (!actor || kind != 0) return;
    divisor = *(int *)(actor + 212);
    mode = *(int *)(item + 4) & 15;
    timing = -1;
    FUN_020345f0(&position, actor + 156);
    extent = 0;
    param = -1;
    repeats = -1;
    duration = -1;
    chance = 100;
    type = 7;
    offset.x = 0;
    offset.y = 0;
    offset.z = 0;
    switch (category) {
    case 0:
        break;
    case 6:
        if (mode == 2) FUN_0204e700(id, 90, 0);
        break;
    case 8:
        switch (mode) {
        case 2:
            FUN_020b5460(context, id, input, divisor);
            break;
        case 3: {
            V330 a;
            timing = 43;
            param = 2;
            repeats = 15;
            duration = 1228800;
            a.x = 0;
            a.y = 0;
            extent = 16384;
            a.z = extent;
            offset = a;
            chance = 25;
            break;
        }
        }
        break;
    case 9:
        switch (mode) {
        case 1: {
            V330 b;
            timing = 63;
            param = 0;
            repeats = 15;
            duration = 1228800;
            b.x = 0;
            b.y = 0;
            extent = 16384;
            b.z = extent;
            offset = b;
            chance = 15;
            type = 12;
            break;
        }
        case 3:
            FUN_020b551c(context, id, divisor);
            break;
        }
        break;
    case 11:
        if (mode == 2) FUN_020b559c(context, id, divisor);
        break;
    case 13:
        switch (mode) {
        case 1:
            FUN_020b56b4(context, id, item, divisor);
            break;
        case 2:
            FUN_020b5718(context, id, input, divisor);
            break;
        }
        break;
    case 15:
        switch (mode) {
        case 2:
            FUN_020b57d4(context, id, input, divisor);
            break;
        case 3:
            FUN_020b588c(context, id, extra, divisor);
            break;
        }
        break;
    case 16:
        switch (mode) {
        case 1:
            break;
        case 2:
            FUN_020b5940(context, id, extra, input, divisor);
            break;
        case 3: {
            V330 c;
            timing = 40;
            param = 3;
            repeats = 15;
            duration = 1228800;
            c.x = 0;
            c.y = 0;
            extent = 16384;
            c.z = extent;
            offset = c;
            chance = 50;
            break;
        }
        }
        break;
    }
    if (timing < 0) return;
    {
        int rate = FUN_0200a3a0(timing << 12, divisor);
        int angle = *(unsigned short *)(actor + 192);
        void *effect;
        FUN_0205aa80(matrix);
        FUN_0205abac(matrix, DAT_020ed83c[2 * (angle >> 4)], DAT_020ed83c[2 * (angle >> 4) + 1]);
        FUN_0204a954(&out, &position, matrix, &offset);
        FUN_02047ae8(desc);
        desc[0] = id;
        desc[3] = type;
        desc[5] = input[0];
        desc[6] = input[2];
        effect = FUN_0204fc0c(rate, desc, &out, extent);
        if (effect && param != -1) {
            FUN_0204ff00(effect, param, repeats, duration, chance);
        }
    }
}
