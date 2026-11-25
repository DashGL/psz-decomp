//cpp
// flags: -O4,s
struct Vec {
    int x, y, z;
};

struct Self {
    char pad[0x174];
    Vec pos[4];
};

extern "C" {
extern int FUN_0208546c(void);
extern void *FUN_020352a4(void *, int);
extern char *FUN_02039200(void *);
extern int FUN_0203bf3c(void *);
#pragma thumb off
extern int FUN_0205c86c(const Vec *);
#pragma thumb on
extern void *DAT_02108cf4;
extern Vec DAT_020fc958;
int FUN_0209eaf4(Self *s);
}

int FUN_0209eaf4(Self *s) {
    char *actor = FUN_02039200(FUN_020352a4(DAT_02108cf4, FUN_0208546c()));
    if (actor && FUN_0203bf3c(actor)) {
        Vec position = *(Vec *)(actor + 0x9c);
        int py_v, pz_v;
        pz_v = *(volatile int *)&position.z;
        py_v = *(volatile int *)&position.y;
        for (unsigned int i = 0; i < 4; i++) {
            int ne2 = 1;
            int ne1 = 1;
            int px = s->pos[i].x;
            if (px == DAT_020fc958.x) {
                int py = s->pos[i].y;
                if (py == DAT_020fc958.y) ne1 = 0;
            }
            if (!ne1) {
                int pz = s->pos[i].z;
                if (pz == DAT_020fc958.z) ne2 = 0;
            }
            if (ne2) {
                int dz = pz_v - s->pos[i].z;
                int dy = py_v - s->pos[i].y;
                int dx = position.x - s->pos[i].x;
                Vec delta;
                delta.x = dx;
                delta.y = dy;
                delta.z = dz;
                if (FUN_0205c86c(&delta) < (13 << 12)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
