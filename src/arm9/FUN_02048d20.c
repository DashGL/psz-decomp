// flags: -O4,s
typedef struct { unsigned int words[3]; } Vector_02048d20;
extern void FUN_0203666c(void *);
extern void FUN_020472cc(void *, int);
extern void FUN_02046d00(void *, void *);
extern char *FUN_02046d94(void *, int, unsigned int);

void *FUN_02048d20(int type, unsigned int *point, unsigned int heading, unsigned int owner, unsigned int fifth, unsigned int sixth, int duration, int fast) {
    unsigned int desc[25], left[25], right[25];
    char *p;
    int marked;
    FUN_0203666c(desc);
    if (type == 12) desc[21] = 57;
    else if (type == 9) desc[21] = 58;
    else desc[21] = 56;
    FUN_020472cc(desc, desc[21]);
    if (duration > 0) desc[5] = duration / (int)desc[23];
    *(Vector_02048d20 *)&desc[8] = *(const Vector_02048d20 *)point;
    *(unsigned short *)((char *)desc + 58) = heading;
    desc[22] = owner;
    desc[24] = sixth;
    if (fast) {
        desc[23] = (int)desc[23] / 5;
        desc[5] *= 5;
    }
    marked = 0;
    if ((unsigned int)(type - 8) <= 4) {
        marked = 1;
    }
    if (type == 10) {
        int f = (int)fifth;
        FUN_02046d00(left, desc);
        *(unsigned short *)((char *)left + 58) = heading + 4096;
        p = FUN_02046d94(left, type, (unsigned int)f);
        if (p && marked) *(unsigned int *)(p + 228) |= 2048;
        FUN_02046d00(right, desc);
        *(unsigned short *)((char *)right + 58) = heading - 4096;
        p = FUN_02046d94(right, type, (unsigned int)f);
        if (p && marked) *(unsigned int *)(p + 228) |= 2048;
    }
    p = FUN_02046d94(desc, type, fifth);
    if (p && marked) *(unsigned int *)(p + 228) |= 2048;
    return p;
}
