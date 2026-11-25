// flags: -O4,s
typedef struct { char pad[0x50]; } Elem;
typedef struct { int f0; Elem arr[4]; } Container;
extern void FUN_02036094(void *);
extern void FUN_020737a0(void *);
extern void FUN_020360a4(void *, int, int, int);
extern void FUN_0207355c(void *, void *);
extern void FUN_020bce3c(void *);
extern char DAT_0211a250[];
extern char DAT_0211a230[];
void FUN_020737c0(void) {
    Container c;
    Elem *p;
    int i;
    FUN_02036094(&c);
    p = c.arr;
    do {
        FUN_020737a0(p);
        p++;
    } while (p < c.arr + 4);
    FUN_020360a4(&c, 6, 3, 0x144);
    for (i = 0; i < 4; i++) {
        FUN_0207355c(&c.arr[i], DAT_0211a250 + i * 0x50);
    }
    FUN_020bce3c(&c);
    DAT_0211a230[0xd] = 0x1e;
}
