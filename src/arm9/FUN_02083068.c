// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern char *FUN_02082fac(void *, int);
extern int **FUN_02041b2c(void *);
#pragma thumb off
extern int FUN_0205c9e4(int, int);
#pragma thumb on
extern void *UNK_02108d64;

int FUN_02083068(void *s, Vec *out, unsigned short *angle, int index) {
    char *entry = FUN_02082fac(s, index);
    int **edges, *a, *b, i, j, blocked;
    Vec v;
    if (entry && UNK_02108d64) {
        edges = FUN_02041b2c(UNK_02108d64);
        if (edges) {
            for (i = 0; i < 4; i++) {
                a = ((int * volatile *)edges)[i];
                b = edges[i + 4];
                if (!a || !b) continue;
                if (i >= 0 && i < 4 && *(int *)(entry + 36) >= 0 && *(int *)(entry + 36) < 4)
                    j = (*(int *)(entry + 36) + i) % 4;
                else
                    j = -1;
                if (j >= 0 && j < 4)
                    blocked = (((unsigned char *)entry)[28 + j] & 7) != 0;
                else
                    blocked = 0;
                if (!blocked) {
                    v.x = a[0];
                    v.y = 0;
                    v.z = a[1];
                    *out = v;
                    *angle = FUN_0205c9e4(a[0] - b[0], a[1] - b[1]);
                    return 1;
                }
            }
        }
    }
    return 0;
}
