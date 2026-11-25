// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct {
    signed char a;
    signed char b;
    signed char c;
    unsigned char d;
} Id;
typedef struct {
    unsigned short f0;
    unsigned short f2;
    unsigned short arr[5];
    unsigned short pad;
    int f10;
    int f14;
    int f18;
    int flags;
    Vec pos;
    Vec scale;
    unsigned short s0, s1, s2, s3;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
    int f60;
} Effect;

extern void FUN_02030da8(void *, void *);
extern void FUN_020302e8(void *, void *);
extern void FUN_020bce3c(void *);
extern void FUN_02035408(void *, int, int, int);
extern void FUN_02046d94(void *, int, int);
extern void FUN_02033658(int, int, void *);

void FUN_0208c208(char *s) {
    Id id;
    unsigned char packet[12];
    Vec position;
    Effect effect;
    int value, i;
    if (*(int *)(s + 0x48) != 0) return;
    value = *(int *)(s + 0x44);
    FUN_02030da8(&id, s);
    packet[0] = 1;
    packet[1] = 0;
    packet[2] = 0;
    packet[3] = 0;
    packet[4] = id.a;
    packet[5] = id.b;
    packet[6] = id.c;
    packet[7] = id.d;
    packet[8] = 0;
    packet[9] = value;
    packet[10] = 0;
    packet[11] = 0;
    packet[2] = 5;
    packet[3] = 4;
    packet[0] = 3;
    FUN_020bce3c(packet);
    FUN_020302e8(&position, s);
    position.y += 0xccd;
    effect.f0 = 0xffff;
    effect.f2 = 0xffff;
    for (i = 0; i < 5; i++) {
        effect.arr[i] = 0xffff;
    }
    effect.f10 = -1;
    effect.f14 = -1;
    effect.f18 = 0x1000;
    effect.flags = 0;
    FUN_02035408(&effect.pos, 0, 0, 0);
    FUN_02035408(&effect.scale, 0x1000, 0x1000, 0x1000);
    effect.s0 = 0;
    effect.s1 = 0;
    effect.s2 = 0;
    effect.s3 = 0;

    effect.f40 = -1;
    effect.f44 = -1;
    effect.f48 = -1;
    effect.f4c = -1;
    effect.f50 = 0;
    effect.flags |= 2;
    effect.f54 = 0x95;
    effect.f58 = -1;
    effect.f5c = 0;
    effect.f60 = 0;
    effect.f54 = 0x34;
    effect.pos = position;
    FUN_02046d94(&effect, 0, 0);
    FUN_02033658(1, 0x16, &position);
    *(int *)(s + 0x48) = 1;
}
