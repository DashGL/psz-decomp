// flags: -O4,s
typedef struct { int x, y, z; } V;
extern void FUN_02083d30(void *, void *, void *);
void FUN_020bc078(V *out, V *a, V *b, int *weight) {
    V wa, wb;
    int complement;
    FUN_02083d30(&wb, weight, b);
    complement = 4096 - *weight;
    FUN_02083d30(&wa, &complement, a);
    {
        int z = wa.z + wb.z;
        int y = wa.y + wb.y;
        int x = wa.x + wb.x;
        out->x = x;
        out->y = y;
        out->z = z;
    }
}
