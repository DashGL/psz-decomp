// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct {
    unsigned char pad0[0x45];
    signed char type;
    unsigned char pad1[0x9c - 0x46];
    Vec pos;
    unsigned char pad2[0x14e - 0xa8];
    unsigned short hp;
} Entity;
extern void *DAT_02108cf4;
extern void *FUN_020352a4(void *, int);
extern Entity *FUN_02039200(void *);
extern int FUN_0203ae60(void *);
extern int FUN_0203bf3c(void *);
extern void FUN_02036348(Vec *, const Vec *, const Vec *);
extern unsigned short FUN_0205c9e4(int, int);

void FUN_overlay_21__0219b324(unsigned char *p) {
    Vec origin;
    Vec position;
    Vec delta;
    int best;
    signed char bestType;
    unsigned short bestHealth;
    int i;

    origin = *(Vec *)(*(unsigned char **)(p + 4) + 0xfc);
    best = -1;
    bestHealth = 0;
    bestType = 0;
    for (i = 0; i <= 3; i++) {
        Entity *entity = FUN_02039200(FUN_020352a4(DAT_02108cf4, i));
        if (entity != 0 && !FUN_0203ae60(entity) && FUN_0203bf3c(entity)) {
            unsigned short center;
            unsigned short difference;
            int side;
            int mode;
            Vec *vp = &entity->pos;
            position.x = vp->x;
            position.y = vp->y;
            position.z = vp->z;
            FUN_02036348(&delta, &position, &origin);
            center = (unsigned short)(*(unsigned short *)(*(unsigned char **)(p + 4) + 0x108) + *(unsigned short *)(p + 0x4e));
            difference = (unsigned short)(center - FUN_0205c9e4(delta.x, delta.z));
            side = 0;
            if (difference >= 0x8000) {
                difference = (unsigned short)(0x10000 - difference);
                side = 1;
            }
            mode = *(int *)(p + 0x20);
            if (mode != 0) {
                if (mode == 1 && side != 0) continue;
                if (mode == 2 && side == 0) continue;
            }
            if (difference >= (*(unsigned short *)(p + 0x54) >> 1)) continue;
            {
                signed char type = entity->type;
                unsigned short hp = entity->hp;
                if (best == -1 || (type == 1 && bestType == 0) || (type == bestType && hp < bestHealth)) {
                    bestType = type;
                    bestHealth = hp;
                    best = i;
                }
            }
        }
    }
    *(int *)(p + 0x7c) = best;
}
