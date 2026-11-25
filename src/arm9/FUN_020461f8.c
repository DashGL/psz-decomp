// flags: -O4,s
typedef struct { int x, y, z; } Vector;
extern const Vector DAT_02109b24[33];
extern void FUN_02035408(Vector *, int, int, int);
void FUN_020461f8(Vector *out, int id) {
    if (id >= 0 && id < 33) {
        Vector v;
        FUN_02035408(&v, DAT_02109b24[id].x, DAT_02109b24[id].y, DAT_02109b24[id].z);
        *out = v;
    } else {
        Vector zero;
        zero.x = 0; zero.y = 0; zero.z = 0;
        *out = zero;
    }
}
