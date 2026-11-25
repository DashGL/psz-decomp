// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { Vec fourth, third, second, first; } Frame;
extern void FUN_overlay_31__02198968(void *, void *);
extern void FUN_overlay_31__021989ec(void *, void *, int, int);
extern void FUN_02043f30(void *, int, void *);

void FUN_overlay_31__0219876c(int *self) {
    Frame f;
    if (self[1]) {
        switch (self[0]) {
        case 0:
            FUN_overlay_31__02198968(&f.first, self);
            *(Vec *)(self + 5) = f.first;
            break;
        case 1:
            FUN_overlay_31__02198968(&f.second, self);
            *(Vec *)(self + 5) = f.second;
            if (self[4] <= self[3]) self[0] = 2;
            break;
        case 2:
            FUN_overlay_31__021989ec(&f.third, self, self[3] - self[4], 20);
            *(Vec *)(self + 5) = f.third;
            if (self[4] + 20 <= self[3]) self[0] = 3;
            break;
        case 4:
            FUN_overlay_31__021989ec(&f.fourth, self, 40 - self[3], 40);
            *(Vec *)(self + 5) = f.fourth;
            if (self[3] >= 40) self[0] = 0;
            break;
        case 5:
            break;
        }
        FUN_02043f30((void *)self[1], self[2], self + 5);
    }
    self[3]++;
}
