// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct {
    unsigned char pad0[0x9c];
    Vec pos;
    unsigned char pad1[0xc0 - 0x9c - 12];
    unsigned short angle;
} Actor;
typedef unsigned long long U64;
extern short UNK_020ed83c[];
extern Vec UNK_020fc958;
extern int UNK_020f4638[];
extern U64 UNK_0211c844[];
extern U64 FUN_0200a380(U64, U64);
extern Actor *FUN_02085640(void);
extern int FUN_0203bee0(void *);
extern void *FUN_02096488(void);
extern void FUN_02096b18(void *, Vec *, int, Vec *, unsigned short);
extern void FUN_02098660(void *, Vec *, int *, Vec *, Vec *, Vec *, int);
extern void FUN_020987d0(void *, Vec *);
extern void FUN_0209882c(void *);

#define W(n) (*(int *)(s + (n)))

void FUN_02098f30(char *s) {
    Actor *actor;
    char *p;
    Vec pos, velocity, offset, result;
    int angle, speed;
    unsigned high, delay;
    U64 random;
    if (W(16) >= 2) return;
    actor = FUN_02085640();
    if (!actor) return;
    {
        Vec *src = &actor->pos;
        pos.x = src->x;
        pos.y = src->y;
        pos.z = src->z;
    }
    angle = 2 * ((int)actor->angle >> 4);
    velocity.x = UNK_020ed83c[angle];
    velocity.y = 0;
    velocity.z = UNK_020ed83c[angle + 1];
    speed = FUN_0203bee0(actor);
    velocity.x = (int)(((long long)velocity.x * speed + 2048) >> 12);
    velocity.y = (int)(((long long)velocity.y * speed + 2048) >> 12);
    velocity.z = (int)(((long long)velocity.z * speed + 2048) >> 12);
    offset = UNK_020fc958;
    FUN_02096b18(FUN_02096488(), &offset, **(int **)(s + 12), &UNK_020fc958, 0);
    FUN_02098660(*(void **)(*(char **)(s + 12) + 8), &result, (int *)(s + 8), &pos, &velocity, &offset, 4096);
    if (W(8) >= UNK_020f4638[W(16)]) {
        FUN_020987d0(*(void **)(*(char **)(s + 12) + 8), &result);
        W(16) = 1;
    } else {
        FUN_0209882c(*(void **)(*(char **)(s + 12) + 8));
        W(8) = 0;
        *(int *)(*(char **)(s + 12) + 48) = 0;
        UNK_0211c844[0] = UNK_0211c844[1] * UNK_0211c844[0] + UNK_0211c844[2];
        delay = (unsigned)(FUN_0200a380(UNK_0211c844[0] >> 32, 30) >> 32);
        p = *(char **)(s + 12);
        *(int *)(p + 52) = 6;
        *(int *)(p + 56) = delay;
    }
}
