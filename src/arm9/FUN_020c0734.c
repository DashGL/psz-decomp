// flags: -O4,s
#pragma thumb off
extern void FUN_02068510(void *);
#pragma thumb on
extern void FUN_020c3768(void *);

typedef struct {
    unsigned short a[9];
} Name9;

typedef struct {
    Name9 n;
    unsigned short tail;
} Name10;

typedef struct {
    unsigned int pad;
    Name10 name;
} GlobalName;

extern GlobalName DAT_0211b3ec;

enum { E0 = 0, E1 = 1 };

int FUN_020c0734(void) {
    unsigned int profile[21];

    if (((DAT_0211b3ec.name.n.a[0] == 0) ? E1 : E0) == 1) {
        Name10 *dst;
        Name10 *src;
        FUN_02068510(profile);
        FUN_020c3768(profile + 1);
        dst = &DAT_0211b3ec.name;
        src = (Name10 *)(profile + 1);
        dst->n = src->n;
        dst->tail = src->tail;
        DAT_0211b3ec.name.n.a[8] = 0;
        return 1;
    }
    return 0;
}
