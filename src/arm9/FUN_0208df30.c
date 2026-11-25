// flags: -O4,s
typedef struct { int x, z; } V359;
typedef struct { int n[5]; } P359;
typedef struct { unsigned char *data; int x, y, z; unsigned short angle; signed char a; unsigned char b, c, d, e, pad; } N359;
extern char *DAT_02108c64;
extern void *DAT_02108d64;
extern int FUN_0206d36c(void *, void *), FUN_0208e1d4(void *, int);
extern char *FUN_02032ca0(void *, int);
extern V359 **FUN_02041b2c(void *);
extern void *FUN_020ba8a0(unsigned);
extern void FUN_0208e1f4(void *), FUN_0208e25c(void *, void *), FUN_020656b8(void *, int, unsigned);

int FUN_0208df30(char *s) {
    P359 params;
    int largeScale;
    V359 delta;
    V359 delta2;
    V359 small;
    int smallScale;
    int mode;
    V359 **points;
    int i;
    unsigned char *data;
    N359 *node2;
    unsigned char *data2;
    int index;
    char *room;
    unsigned short count;
    unsigned short total;
    int j, used;
    char *global;
    V359 *first, *second;
    N359 *node, *other;

    global = DAT_02108c64;
    params.n[0] = *(int *)(global + 36);
    params.n[1] = *(int *)(global + 40);
    params.n[2] = *(int *)(global + 44);
    params.n[3] = *(int *)(global + 48);
    params.n[4] = *(int *)(global + 52);
    mode = FUN_0206d36c(&params, 0);
    global = DAT_02108c64;
    room = FUN_02032ca0(global, ((signed char *)global)[22]);
    if (!room) return 0;
    count = 0;
    for (j = 0; j < 4; j++) {
        if (FUN_0208e1d4(room, j)) count = (unsigned short)(count + 1);
    }
    if (mode) total = count;
    else total = (unsigned short)(count * 2);
    if (!count) return 0;
    points = 0;
    if (DAT_02108d64) points = FUN_02041b2c(DAT_02108d64);
    if (!points) return 0;
    *(void **)(s + 12) = FUN_020ba8a0(24 * total);
    *(void **)(s + 16) = FUN_020ba8a0(4 * total);
    if (!*(void **)(s + 12) || !*(void **)(s + 16)) return 0;
    *(int *)(s + 4) = total;
    *(void **)(s + 8) = *(void **)(s + 12);
    used = 0;
    largeScale = 40960;
    i = 0;
    do {
        if (i >= 0 && i < 4 && *(int *)(room + 36) >= 0 && *(int *)(room + 36) < 4)
            index = (*(int *)(room + 36) + i) % 4;
        else
            index = -1;
        if (!FUN_0208e1d4(room, index)) continue;
        if (mode) {
            node = &(*(N359 **)(s + 12))[used];
            data = *(unsigned char **)(s + 16) + 4 * used;
            first = points[i];
            second = ((V359 **)((char *)points + 16))[i];
            if (first && second) {
                int dz = second->z - first->z;
                int dx = second->x - first->x;
                delta.x = dx;
                delta.z = dz;
                FUN_0208e1f4(&delta);
                FUN_0208e25c(&delta, &largeScale);
                node->x = second->x + delta.x;
                node->y = 0;
                node->z = second->z + delta.z;
            } else {
                node->x = 0;
                node->y = 0;
                node->z = 0;
            }
            node->angle = 0;
            node->a = -1;
            node->b = 0;
            node->c = 2;
            node->d = 4;
            node->e = used + 20;
            node->data = data;
            data[0] = index;
            FUN_020656b8(data + 1, 0, 3);
        } else {
            node2 = &(*(N359 **)(s + 12))[used];
            other = &(*(N359 **)(s + 12))[used + count];
            data2 = *(unsigned char **)(s + 16) + 4 * used;
            first = points[i];
            second = ((V359 **)((char *)points + 16))[i];
            if (first && second) {
                int dz = second->z - first->z;
                int dx = second->x - first->x;
                delta2.x = dx;
                delta2.z = dz;
                FUN_0208e1f4(&delta2);
                small.x = delta2.x;
                small.z = delta2.z;
                smallScale = 8192;
                FUN_0208e25c(&small, &smallScale);
                FUN_0208e25c(&delta2, &largeScale);
                node2->x = second->x + delta2.x;
                node2->y = 0;
                node2->z = second->z + delta2.z;
                other->x = second->x + small.x;
                other->y = 0;
                other->z = second->z + small.z;
            } else {
                node2->x = 0;
                node2->y = 0;
                node2->z = 0;
                other->x = 0;
                other->y = 0;
                other->z = 0;
            }
            node2->angle = 0;
            node2->a = -1;
            node2->b = 0;
            node2->c = 2;
            node2->d = 4;
            node2->e = used + 20;
            node2->data = data2;
            data2[0] = index;
            FUN_020656b8(data2 + 1, 0, 3);
            other->angle = 0;
            other->a = 0;
            other->b = 1;
            other->c = 30;
            other->d = 4;
            other->e = used + 45;
            other->data = data2;
        }
        used++;
    } while (++i < 4u);
    return 1;
}
