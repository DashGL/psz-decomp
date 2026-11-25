// flags: -O4,s
extern int FUN_020bc674(void *);
static inline void set2(int *p, int a, int b) { p[0] = a; p[1] = b; }

void FUN_02070ff0(char *s, int x, int y, int z) {
    int previous[2], origin[2], distance, maximum, current;
    set2(previous, x - *(int *)(s + 108), z - *(int *)(s + 116));
    set2(origin, x - *(int *)(s + 24), z - *(int *)(s + 32));
    *(int *)(s + 148) = FUN_020bc674(previous);
    *(int *)(s + 108) = x;
    *(int *)(s + 112) = y;
    *(int *)(s + 116) = z;
    distance = FUN_020bc674(origin);
    maximum = *(int *)(s + 156);
    if (distance > maximum) distance = maximum;
    current = *(int *)(s + 124);
    if (distance > current)
        *(int *)(s + 124) = current + ((distance - current) >> 1);
    else if (maximum < current)
        *(int *)(s + 124) = current + ((maximum - current) >> 1);
}
