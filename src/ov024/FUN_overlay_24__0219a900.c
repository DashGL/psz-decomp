// flags: -O4,s
typedef struct {
    int x;
    int y;
    int z;
} Vec;

typedef struct {
    int f00;
    void *owner;
    int *state;
    Vec vel;
} Self;

extern int DAT_0219c63c;
extern int FUN_020370b8(void *, int, Vec *);
extern void FUN_0205c8cc(Vec *, Vec *);
extern void FUN_02037924(void *);
extern void FUN_02040c0c(void *, int, int, int, int);

void FUN_overlay_24__0219a900(Self *self) {
    Vec direction;
    Vec scaled;
    void *owner = self->owner;
    int *state = self->state;
    int speed;
    int anim;

    if (!FUN_020370b8(owner, state[18], &direction)) {
        FUN_02037924(state);
        return;
    }
    if (direction.x != 0 || direction.y != 0 || direction.z != 0) {
        FUN_0205c8cc(&direction, &direction);
    }
    speed = DAT_0219c63c;
    scaled.x = (int)(((long long)direction.x * speed + 0x800) >> 12);
    scaled.y = (int)(((long long)direction.y * speed + 0x800) >> 12);
    scaled.z = (int)(((long long)direction.z * speed + 0x800) >> 12);
    self->vel = scaled;
    anim = 4;
    if (state[19] == 0) {
        anim = 5;
    }
    FUN_02040c0c(owner, 0, anim, 0x1000, 0);
}
