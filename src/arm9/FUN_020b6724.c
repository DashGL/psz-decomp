// flags: -O4,s
typedef struct { unsigned char v[4]; } Key;
typedef struct { int w[3]; signed char pad0; signed char b[3]; char tail[8]; } Data6;
extern int UNK_020f58fc[];
extern int FUN_02084684(int, void *, void *);
extern int FUN_020b701c(void *, int);
extern int FUN_020b67c0(void *, int);
extern int FUN_020848e0(int, int);
#pragma thumb off
extern int FUN_0200a3a0(int, int);
#pragma thumb reset
int FUN_020b6724(int *s, Key *source, int kind) {
    Data6 data;
    Key key = *source;
    int index, n, value, i;
    if (!FUN_02084684(s[26], &key, &data))
        return 4096;
    index = -1;
    n = FUN_020b701c(s, kind);
    if (n != -1)
        index = n;
    else if (kind == 29)
        index = 5;
    if (index == -1)
        return 4096;
    value = UNK_020f58fc[index];
    for (i = 0; i < 3; i++) {
        if (value == FUN_020b67c0(&data, i))
            return FUN_0200a3a0(FUN_020848e0(FUN_020b67c0(&data, i), data.b[i]) << 12, 100);
    }
    return 4096;
}
