// flags: -O4,s
typedef struct { unsigned int x, y, z; } Vec;
typedef struct { unsigned int w[7]; } Seven;
extern char DAT_020f9208[], DAT_020f8e5c[];
extern Seven DAT_020f8e6c;
extern void FUN_0204b050(void *, void *);
extern void FUN_0205aa80(void *);
extern void FUN_0203955c(void *);
void *FUN_0204af10(char *s) {
    Vec a, b;
    int i;
    *(void **)s = DAT_020f9208;
    *(int *)(s + 4) = 0; *(int *)(s + 8) = 7; *(int *)(s + 12) = 0; *(int *)(s + 16) = 0;
    *(Seven *)(s + 20) = DAT_020f8e6c;
    *(int *)(s + 48) = 0;
    FUN_0204b050(s + 52, DAT_020f8e5c);
    *(int *)(s + 68) = 0; *(int *)(s + 72) = 0; *(int *)(s + 76) = 4096;
    a.z = a.y = a.x = 0; *(Vec *)(s + 80) = a;
    b.z = b.y = b.x = 0; *(Vec *)(s + 92) = b;
    *(short *)(s + 104) = 0; *(short *)(s + 106) = 0; *(short *)(s + 108) = 0;
    *(int *)(s + 148) = 0; *(int *)(s + 152) = -1; *(int *)(s + 156) = 0;
    *(int *)(s + 160) = -1; *(int *)(s + 164) = -1; *(int *)(s + 168) = -1;
    *(int *)(s + 172) = 0; *(int *)(s + 176) = 5; *(int *)(s + 180) = 5;
    *(int *)(s + 184) = 0; *(int *)(s + 188) = 0;
    *(int *)(s + 192) = *(int *)(s + 168);
    *(Vec *)(s + 196) = *(Vec *)(s + 80);
    *(int *)(s + 224) = 0; *(int *)(s + 228) = 0; *(int *)(s + 232) = -1;
    *(int *)(s + 236) = 0; *(int *)(s + 240) = 0; *(int *)(s + 244) = 0; *(int *)(s + 248) = 0;
    s[252] = 9;
    for (i = 0; i < 7; i++) *(int *)(s + 20 + 4 * i) = 0;
    FUN_0205aa80(s + 112);
    FUN_0203955c(s + 208);
    return s;
}
