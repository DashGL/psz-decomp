// flags: -O4,s
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;

typedef struct { int a, b, c; } Triple;
typedef struct { u8 k0, k1; u8 lo : 7; u8 hi : 1; } Key;
typedef struct { int x, y, z; } Vec3;
typedef struct { u16 a, b, c; } U16_3;
typedef struct { int id; } Handle;

extern u32 DAT_020fa6cc[];
extern Triple DAT_020f2e4c;
extern void FUN_0204add0(void *);
extern void FUN_0204b398(void *);
extern void FUN_0203fd88(void *);
extern void FUN_020456bc(void *, int);
extern void FUN_0204b268(void *, void *);
extern void FUN_0204bf88(void *);
extern void FUN_02046724(Triple *, int, void *, int);
extern char *FUN_0208555c(int);
extern int FUN_02035b60(int);
extern int FUN_02046828(int);

void *FUN_02080578(char *s, s8 *cfg, Key *key, u16 *angles, s16 *scale, const U16_3 *other, volatile int owner, u8 *item) {
    u8 descriptor[16];
    Triple settings;
    u8 itemcopy[16];
    char *actor;
    u32 flag;
    int ok;
    int ow;

    FUN_0204add0(s);
    *(u32 **)s = DAT_020fa6cc;
    *(u8 *)(s + 0xfd) = key->k1;
    *(s8 *)(s + 0xfe) = cfg[3];
    *(s8 *)(s + 0xff) = cfg[4];
    *(s8 *)(s + 0x100) = cfg[7];
    *(U16_3 *)(s + 0x102) = *other;
    *(u16 *)(s + 0x108) = 0;
    *(u16 *)(s + 0x10a) = 0;
    *(u8 *)(s + 0x10c) = item[1];
    *(u8 *)(s + 0x10d) = item[3];
    *(u8 *)(s + 0x10e) = item[2];

    FUN_0204b398(s);
    FUN_0203fd88(descriptor);
    FUN_020456bc(descriptor, key->k0);
    FUN_0204b268(s + 0x34, descriptor);

    *(int *)(s + 4) = 3;
    *(int *)(s + 0xe0) = 1;
    ow = owner;
    *(int *)(s + 0xe8) = ow;

    if (key->hi) {
        actor = FUN_0208555c(*(int *)(s + 0xe8));
        if (actor != 0) {
            *(int *)(s + 0x4c) = *(int *)(actor + 0xd4);
        }
    }

    if ((u8)cfg[2] != 0) {
        *(int *)(s + 0x48) = ((u8)cfg[2] - (u8)cfg[1]) * *(int *)(s + 0x4c);
        *(u32 *)(s + 0xe4) |= 2;
    } else {
        *(int *)(s + 0x48) = -1;
    }

    flag = (*(u8 *)(s + 0xfd) & 0xc0) != 0;
    if (flag) {
        flag = (*(u8 *)(s + 0xfd) & 0x80) != 0;
        if (flag) {
            *(u16 *)(s + 0x6c) = FUN_02035b60(0x10000);
        }
        flag = (*(u8 *)(s + 0xfd) & 0x40) != 0;
        if (flag) {
            *(u16 *)(s + 0x6a) = FUN_02035b60(0x10000);
        }
        *(u16 *)(s + 0x68) = 0;
        FUN_0204bf88(s);
    } else if (cfg[5] != 0) {
        *(u16 *)(s + 0x68) = angles[0];
        *(u16 *)(s + 0x6c) = angles[2];
        *(u16 *)(s + 0x6a) = angles[1];
        FUN_0204bf88(s);
    }

    *(u16 *)(s + 0x108) = *(u16 *)(s + 0x6a);
    {
        Vec3 *sc = (Vec3 *)(s + 0x50);
        sc->x = scale[0];
        sc->y = scale[1];
        sc->z = scale[2];
    }
    *(u32 *)(s + 0xe4) |= 1;
    *(u32 *)(s + 0xe4) |= 0x01000000;

    ok = 1;
    if (key->k0 == 0x70 || key->k0 == 0x77) {
        ok = 0;
    }
    if (ok) {
        int a, b, c;
        settings = DAT_020f2e4c;
        itemcopy[0] = 0;
        itemcopy[1] = item[1];
        itemcopy[3] = item[3];
        itemcopy[2] = item[2];
        FUN_02046724(&settings, ow, itemcopy, 0);
        a = settings.a;
        b = settings.c;
        c = FUN_02046828(ow);
        if (key->k0 == 0x59 || key->k0 == 0x7d) {
            a = 4; b = 0; c = -1;
        } else if (key->k0 == 0x74) {
            a = 1; b = 0x19; c = -1;
        }
        *(int *)(s + 0x9c) = a;
        *(int *)(s + 0xa0) = b;
        *(int *)(s + 0xa4) = c;
        *(u32 *)(s + 0xe4) |= 0x08000000;
    }
    return s;
}
