// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct Vec { int x, y, z; } Vec;
typedef int (*Predicate)(void *);
typedef struct {
    int pad[54];
    void *children[40];
} Obj_19_854c;
extern void FUN_020bbfbc(void *, unsigned);
#pragma thumb off
extern int FUN_0205c7ac(const void *, const void *);
#pragma thumb on

void *FUN_overlay_19__0219854c(Obj_19_854c *self, unsigned angle) {
    Vec direction, candidate, unit;
    void *best;
    int score, index;
    unit.x = 0; unit.y = 0; unit.z = 4096;
    direction = unit;
    FUN_020bbfbc(&direction, angle);
    best = 0;
    score = -4096;
    for (index = 0; index < 40; index++) {
        int *child = (int *)self->children[index];
        if (child && child[2] == 2 && ((Predicate)(*(unsigned **)child)[6])(child)) {
            unsigned childAngle = ((unsigned short *)self->children[index])[12];
            Vec childUnit;
            int dot;
            childUnit.x = 0; childUnit.y = 0; childUnit.z = 4096;
            candidate = childUnit;
            FUN_020bbfbc(&candidate, childAngle);
            dot = FUN_0205c7ac(&direction, &candidate);
            if ((dot > score) ? E1 : E0) {
                score = dot;
                best = self->children[index];
            }
        }
    }
    return best;
}
