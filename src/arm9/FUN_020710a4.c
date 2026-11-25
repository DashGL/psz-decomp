// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern int FUN_02071188(void);
#pragma thumb off
extern void FUN_0205c778(void *, void *, void *);
#pragma thumb on

int FUN_020710a4(char *s, Vec *position) {
    int magnitude;
    Vec offset;
    if (*(int *)(s + 164) > 0) {
        int r;
        magnitude = (int)(((long long)*(int *)(s + 124) * 41 + 2048) >> 12);
        magnitude = (int)(((long long)magnitude * *(int *)(s + 160) + 2048) >> 12);
        r = 2048 - FUN_02071188();
        offset.x = (int)(((long long)magnitude * r + 2048) >> 12);
        r = 2048 - FUN_02071188();
        offset.y = (int)(((long long)magnitude * r + 2048) >> 12);
        r = 2048 - FUN_02071188();
        offset.z = (int)(((long long)magnitude * r + 2048) >> 12);
        FUN_0205c778(position, &offset, position);
        (*(int *)(s + 164))--;
        return 1;
    }
    return 0;
}
