// flags: -O4,s
typedef struct { unsigned int x, y, z; } V;
typedef struct { int type; V position; int value, timer; short a, b, c, pad; } Entry;
typedef struct { unsigned short a, b; } Pair16;
extern int FUN_02085880(int), FUN_020719d8(void *, Entry *);
extern void *FUN_02034680(void *, const void *), *FUN_020718e0(void), *FUN_02046d94(void *, int, int), *FUN_02090c20(void);
extern void FUN_020345f0(void *, const void *), FUN_0203666c(void *), FUN_0203bc90(void *), FUN_0204b3ac(void *, void (*)(void *), void *, int), FUN_02090f74(void *, void *, void *, int), FUN_020c193c(unsigned int, unsigned int, int, unsigned int, int);

void FUN_0203b6e4(char *self) {
    V position;
    unsigned int descriptor[25];
    Entry event;
    V old, current;
    short projected[2];
    if (FUN_02085880(*(int *)(self + 252)) == 1) {
        position = *(V *)(self + 156);
        position.y = 4096;
        event.type = -1;
        event.timer = 30;
        event.value = 0;
        event.a = 0;
        event.b = 0;
        event.c = 25;
        event.type = 4;
        FUN_02034680(&event.position, &position);
        FUN_020719d8(FUN_020718e0(), &event);
        FUN_020345f0(&old, self + 180);
        old.y = 4096;
        FUN_0203666c(descriptor);
        descriptor[21] = 9;
        descriptor[22] = *(unsigned int *)(self + 252);
        *(V *)(descriptor + 8) = old;
        descriptor[7] |= 65536;
        *(void **)(self + 456) = FUN_02046d94(descriptor, 0, 0);
        if (*(void **)(self + 456)) FUN_0204b3ac(*(void **)(self + 456), FUN_0203bc90, self, 0);
        FUN_020345f0(&current, self + 156);
        FUN_02090f74(projected, FUN_02090c20(), &current, 1);
        FUN_020c193c(0, 10, projected[0], projected[1], -1);
    }
    {
        char *src = self + 80;
        unsigned short *dst = (unsigned short *)(self + 334);
        dst[0] = *(unsigned short *)(src + 12);
        dst[1] = *(unsigned short *)(src + 14);
    }
}
