// flags: -O4,s
typedef struct { int x, y; } Pair;
typedef struct { int x, y, z; } Vec;
typedef struct { Pair *a[4]; Pair *b[4]; } PointTable;

extern void FUN_0205c8cc(void *, void *);
extern unsigned short FUN_0205c9e4(int, int);
extern int DAT_020f4238[];
extern int DAT_020f4244[];

void FUN_0208e514(char *s, int index, int type, int flags, int b1, int b0, int b3, int which, int b2, PointTable *points) {
    char *entry;
    char *bytes;
    Pair *a;
    Pair *b;
    Vec delta;
    int scale;

    if (index < 0 || *(unsigned int *)(s + 4) <= (unsigned int)index) {
        return;
    }
    entry = *(char **)(s + 12) + 24 * index;
    bytes = *(char **)(s + 16) + 4 * index;
    a = points->a[which];
    b = points->b[which];
    if (a && b) {
        int dz = a->y - b->y;
        delta.x = a->x - b->x;
        delta.y = 0; delta.z = dz;
        if (delta.x != 0 || delta.y != 0 || delta.z != 0) {
            FUN_0205c8cc(&delta, &delta);
        }
        scale = DAT_020f4238[type];
        delta.x = (int)(((long long)delta.x * scale + 2048) >> 12);
        delta.y = (int)(((long long)delta.y * scale + 2048) >> 12);
        delta.z = (int)(((long long)delta.z * scale + 2048) >> 12);
        *(int *)(entry + 4) = b->x + delta.x;
        *(int *)(entry + 8) = 0;
        *(int *)(entry + 12) = b->y + delta.z;
        *(unsigned short *)(entry + 16) = FUN_0205c9e4(delta.x, delta.z);
    } else {
        *(int *)(entry + 4) = 0;
        *(int *)(entry + 8) = 0;
        *(int *)(entry + 12) = 0;
        *(unsigned short *)(entry + 16) = 0;
    }
    entry[18] = 0;
    entry[19] = 0;
    entry[20] = (char)DAT_020f4244[type];
    entry[21] = 4;
    entry[22] = (char)flags;
    *(char **)entry = bytes;
    bytes[0] = (char)b0;
    bytes[1] = (char)b1;
    bytes[2] = (char)b2;
    bytes[3] = (char)b3;
}
