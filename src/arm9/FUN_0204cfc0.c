// flags: -O4,s
typedef struct { unsigned int w[3]; } Vector;
typedef struct { unsigned int w[9]; } Rotation;
typedef struct { unsigned int w[12]; } Matrix;
extern unsigned int FUN_0204daa8(int);
extern int FUN_0204260c(void *, unsigned int, void *, void *), FUN_0204a9cc(void *), FUN_0200a3a0(int, int);
extern void FUN_0205aa80(void *), FUN_0204d280(void *, void *), FUN_0204d4c4(void *, void *, void *), FUN_020197fc(void *), FUN_02047fec(void *), FUN_02019784(void), FUN_02034680(void *, void *), FUN_0204d668(void *), FUN_0204c594(void *), FUN_020bf680(void *, void *, unsigned int), FUN_020be5d4(void *, unsigned int, int, void *);
extern void *FUN_020be450(void), *FUN_02034b8c(void *, unsigned int), *FUN_02047ae8(void *);

typedef struct {
    unsigned int f00;
    int f04;
    char *f08;
    unsigned int f0c;
    unsigned int f10;
    unsigned int f14;
    Vector f18;
    Vector f24;
    int f30;
    int f34;
    unsigned int f38;
    unsigned int pad3c[5];
    int f50[4];
    int f60;
    int f64;
    unsigned int f68[22];
    unsigned int fc0;
    unsigned int fc4;
    unsigned int fc8;
    unsigned int fcc;
    unsigned int fd0;
    unsigned int fd4;
} Obj;

int FUN_0204cfc0(Obj *s) {
    if (s->f08) {
        Vector position;
        Rotation rotation;
        Vector old;
        char *owner;
        position.w[0] = 0;
        position.w[1] = 0;
        position.w[2] = 0;
        FUN_0205aa80(&rotation);
        old = s->f24;
        owner = (char *)FUN_0204daa8(s->f04);
        if (owner) {
            Vector ownerpoint;
            ownerpoint = *(Vector *)(owner + 156);
            if (*(void **)(owner + 140)) {
                Matrix joint;
                Rotation jointrot;
                FUN_0204260c(*(void **)(owner + 140), 8, &joint, &jointrot);
                ownerpoint.w[0] = joint.w[9];
                ownerpoint.w[1] = joint.w[10];
                ownerpoint.w[2] = joint.w[11];
                FUN_0204d280(s, &ownerpoint);
            }
            {
                Vector offset;
                FUN_0204d4c4(s, &offset, &rotation);
                position.w[0] = ownerpoint.w[0] - offset.w[0];
                position.w[1] = ownerpoint.w[1] + offset.w[1];
                position.w[2] = ownerpoint.w[2] - offset.w[2];
            }
        }
        if (s->fcc == 0 || s->fcc == 2) {
            FUN_020197fc(&position);
            FUN_02047fec(&rotation);
            FUN_02019784();
            FUN_02034680(&s->f24, &position);
            FUN_02034680(s->f08 + 108, &position);
        }
        s->f34++;
        if (s->f34 > s->f30) {
            if (s->f14) {
                s->f14 = 0;
                s->f30 = -1;
                s->f34 = 0;
                FUN_02034680(&s->f18, &s->f24);
                s->f38 = !s->f38;
                FUN_0204d668(s);
            } else if (owner) {
                char *child = *(char **)(owner + 432);
                if (child && *(void **)(child + 20))
                    FUN_0204c594(*(void **)(child + 20));
            }
        }
        if (s->fc0 != ~0u) {
            Vector test;
            unsigned int query[13];
            unsigned int plane[2];
            int dx, dz, ax, az, scale, z, x;
            plane[0] = s->f24.w[0];
            plane[1] = s->f24.w[2];
            FUN_020bf680(s->f68, plane, s->f64);
            FUN_020be5d4(FUN_020be450(), s->fc0, 0, s->f68);
            {
                int ox = old.w[0];
                int oz = old.w[2];
                x = s->f24.w[0];
                dx = x - ox;
                z = s->f24.w[2];
                dz = z - oz;
                ax = dx;
                if (dx < 0) ax = -dx;
                az = dz;
                if (dz < 0) az = -dz;
                scale = (s->f64 * 2) / (ax + az);
                test.w[0] = x + dx * scale;
                test.w[1] = 0;
                test.w[2] = z + dz * scale;
            }
            if (!FUN_02034b8c(&test, 256))
                s->fd0 = 1;
            else if (s->fd0)
                s->fd4 = 1;
            if (s->f50[s->f60] >= 0)
                s->fd4 = 0;
            owner = (char *)FUN_0204daa8(s->f04);
            if (owner)
                owner[329] = s->fd4;
            if (!s->fc4) {
                FUN_02047ae8(query);
                query[0] = s->f04;
                query[1] = s->fc0;
                query[2] = s->f24.w[1];
                query[3] = s->fc8;
                query[7] = 1;
                s->fc4 = FUN_0204a9cc(query);
                if (s->fc4) {
                    if (s->f60 < 2)
                        s->fc4 = 0;
                    else
                        s->f60 = 0;
                }
            }
            if (owner)
                owner[329] = 0;
        }
    }
    return 1;
}
