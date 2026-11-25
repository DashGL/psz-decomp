// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern const Vec DAT_020fc958;
extern void FUN_020bc5cc(int *, const int *, const int *);
void FUN_overlay_31__02198968(int *out, int *p) {
    Vec v;
    int rx, sx, cx, rz, sz, cz, ry, sy, cy, y, z;
    if (p[1]) {
        v = *(Vec *)((char *)p[1] + 56);
        cy = 2458; sy = v.y; FUN_020bc5cc(&ry, &sy, &cy); y = ry - 61440;
        cz = -2458; sz = v.z; FUN_020bc5cc(&rz, &sz, &cz); z = rz + 24576;
        cx = 2458; sx = v.x; FUN_020bc5cc(&rx, &sx, &cx);
        out[0] = rx; out[1] = z; out[2] = y;
    } else {
        *(Vec *)out = DAT_020fc958;
    }
}
