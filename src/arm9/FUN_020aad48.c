// flags: -O4,s
typedef struct {
    char pad0[0x9c];
    char sub[0x24];
    unsigned short f_c0;
    char pad1[0x1d6];
    int handles[4];
    char pad2[0x510];
    int arr1[2][4];
    unsigned short arr2[2][4];
    unsigned char arr3[2][4];
    unsigned char arr4[2][4];
} ObjAad48;

extern void FUN_020aae80(void *, int, int);
extern void FUN_020ab554(void *);
extern int FUN_020526c8(void *, int, int, int, int, int);

void FUN_020aad48(ObjAad48 *s) {
    int j, i;
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 3; ++j) {
            s->arr1[i][j] = 6144;
            s->arr2[i][j] = 12288;
            s->arr3[i][j] = 1;
            s->arr4[i][j] = 0;
            FUN_020aae80(s, i, j);
        }
        s->arr1[i][3] = 6144;
        s->arr2[i][3] = 12288;
        s->arr3[i][3] = 1;
    }
    s->handles[0] = FUN_020526c8(s->sub, s->arr1[0][0], s->f_c0, s->arr2[0][0], s->arr3[0][0], 0);
    s->handles[1] = FUN_020526c8(s->sub, s->arr1[0][1], s->f_c0, s->arr2[0][1], s->arr3[0][1], 1);
    s->handles[2] = FUN_020526c8(s->sub, s->arr1[0][2], s->f_c0, s->arr2[0][2], s->arr3[0][2], 2);
    s->handles[3] = FUN_020526c8(s->sub, 8192, s->f_c0, 65535, 1, 3);
    FUN_020ab554(s);
}
