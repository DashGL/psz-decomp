// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
typedef struct { unsigned long long state, multiplier, increment; } Random;
enum { E0 = 0, E1 = 1 };
extern Random DAT_0211c844;
extern const int DAT_0219c0ac[];
extern int FUN_02037294(void *, const Vec3 *);
extern int FUN_overlay_28__021999d8(void *, Vec3 *);
extern void FUN_02037390(int *, const Vec3 *);
extern void FUN_02037910(void *, void *);

void FUN_overlay_28__02199834(unsigned char *self)
{
    Vec3 pos, target, diff;
    int distance1, distance2, bit;
    unsigned char *actor = *(unsigned char **)(self + 4);
    if (((*(int *)(self + 8) == *(int *)(self + 0x10)) ? E1 : E0) != 0) {
        pos = *(const Vec3 *)(actor + 0x38);
        if (*(int *)(self + 0x58) != 0) *(int *)(self + 0x58) = 0;
        else *(int *)(self + 0x5c) = FUN_02037294(actor, &pos);
        if (FUN_overlay_28__021999d8(self, &target) != 0) {
            diff.x = target.x - pos.x;
            diff.y = target.y - pos.y;
            diff.z = target.z - pos.z;
            switch (*(int *)(self + 0x54)) {
            case 0:
                bit = 0;
                FUN_02037390(&distance1, &diff);
                if (((distance1 > DAT_0219c0ac[3]) ? E1 : E0) != 0) {
                    *(int *)(self + 0x50) = 3;
                    DAT_0211c844.state = DAT_0211c844.multiplier * DAT_0211c844.state + DAT_0211c844.increment;
                    bit = (int)(((unsigned long long)(unsigned int)(DAT_0211c844.state >> 32) * 2) >> 32);
                } else *(int *)(self + 0x50) = 2;
                if (bit == 0) *(int *)(self + 0x54) = 1;
                break;
            case 1:
                *(int *)(self + 0x50) = 4;
                *(int *)(self + 0x54) = 2;
                break;
            case 2:
                FUN_02037390(&distance2, &diff);
                if (((distance2 > DAT_0219c0ac[1]) ? E1 : E0) != 0) *(int *)(self + 0x50) = 6;
                else *(int *)(self + 0x50) = 5;
                *(int *)(self + 0x54) = 0;
                break;
            }
        } else {
            *(int *)(self + 0x54) = 0;
            *(int *)(self + 0x50) = 2;
        }
        switch (*(unsigned int *)(self + 0x50)) {
        case 4: FUN_02037910(self, *(void **)(self + 0x34)); break;
        case 3: FUN_02037910(self, *(void **)(self + 0x3c)); break;
        case 5: FUN_02037910(self, *(void **)(self + 0x40)); break;
        case 6: FUN_02037910(self, *(void **)(self + 0x44)); break;
        default: FUN_02037910(self, *(void **)(self + 0x38)); break;
        }
        *(int *)(self + 0x50) = 0;
    }
}
