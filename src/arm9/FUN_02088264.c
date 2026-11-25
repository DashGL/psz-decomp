// flags: -O4,s
typedef struct { int x, y, z; } Vec;

extern int DAT_02105768[];
#pragma thumb off
extern void FUN_0205b960(Vec *, void *, Vec *);
extern int FUN_0205c540(int);
extern int FUN_0205c520(int, int);
#pragma thumb on

int FUN_02088264(char *s, Vec *left, Vec *right, Vec *point) {
    Vec out, pos;
    int delta, magnitude, dx, dy, length, scale;

    if (!*(int *)(s + 324)) return 0;
    pos.x = *(int *)(s + 92);
    pos.y = *(int *)(s + 96);
    pos.z = *(int *)(s + 100);
    FUN_0205b960(&pos, DAT_02105768, &out);
    point->x = *(int *)(s + 328) - out.x - *(int *)(s + 352);
    point->y = *(int *)(s + 332) - out.y;
    point->z = -8;
    delta = point->y - out.y;
    magnitude = delta >= 0 ? delta : -delta;
    if (magnitude < 512) return 0;
    left->x = -170;
    left->y = delta > 0 ? 256 : -256;
    left->z = point->z;
    right->x = 170;
    right->y = left->y;
    right->z = point->z;
    dy = (point->y - left->y) / 3;
    dx = (point->x - left->x) / 3;
    length = (int)(((long long)dx * dx + 2048) >> 12) + (int)(((long long)dy * dy + 2048) >> 12);
    if (length > 97) {
        scale = FUN_0205c520(1092, FUN_0205c540(length));
        point->x = left->x + (int)(((long long)dx * scale + 2048) >> 12);
        point->y = left->y + (int)(((long long)dy * scale + 2048) >> 12);
    }
    return 1;
}
