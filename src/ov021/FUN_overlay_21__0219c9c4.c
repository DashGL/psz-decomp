//cpp
// flags: -O4,s
struct Vec { int x, y, z; };
struct M43 { int v[12]; };
struct M33 { int v[9]; };
struct Pair { int a, b; };
struct Prop3 { int v[3]; };
struct Desc52 { int align; unsigned char bytes[48]; };
struct Shape36 { int align; unsigned char bytes[32]; };

#define I(p,o) (*(int *)((char *)(p)+(o)))
#define U(p,o) (*(unsigned int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))
#define V(p,o) (*(Vec *)((char *)(p)+(o)))

extern "C" {
extern int DAT_021a007c[], DAT_021a0084[], DAT_021a008c[], DAT_021a1510;
extern unsigned short DAT_021a0054[];
extern Vec DAT_021a0070, DAT_021a0058, DAT_021a0064;
extern void *DAT_02108cf4, *DAT_02108d04;

extern void *FUN_02036c88(void *, int), *FUN_020be450(void), *FUN_020be5ec(void *, int);
extern void *FUN_020352a4(void *, int), *FUN_02039200(void *), *FUN_02090c20(void);
extern int FUN_0204260c(void *, int, M43 *, M33 *), FUN_020beccc(void *, void *, int, void *, void *);
extern int FUN_0208546c(void), FUN_0203ae60(void *), FUN_0203b41c(void *);
extern int FUN_overlay_21__0219b5e4(void *), FUN_02040d2c(void *, int);
extern void FUN_02040c0c(void *, int, int, int, int), FUN_020c0488(void *), FUN_020c0484(void *, int);
extern void FUN_020be4f8(void *, int, int), FUN_020345f0(Vec *, const Vec *);
extern void FUN_02090f74(short *, void *, const Vec *, int), FUN_020c193c(int, int, int, int, int);
extern void FUN_020946a0(void *), FUN_02080ae0(int, int), FUN_020bed1c(void *, int);
extern void FUN_02036368(Vec *), FUN_020bbfbc(Vec *, unsigned short);
extern Vec FUN_02091cc0(const Vec *, const int *);
extern void FUN_02036848(Vec *, const Vec &), FUN_020bf680(void *, const int *, int);
extern void FUN_020be5d4(void *, int, int, void *), FUN_020437d8(int, int, int, int, int);
extern void FUN_02037ff0(void *, const Vec *), FUN_0203e4a0(void *, const Vec *);

#pragma thumb off
extern void FUN_0200c938(void *, int);
extern void FUN_0205b960(const Vec *, const M43 *, Vec *);
extern void FUN_0205b0f0(const Vec *, const M33 *, Vec *);
#pragma thumb on

void FUN_overlay_21__0219c9c4(void *self)
{
    void *owner = P(self, 4);
    void *manager = P(self, 8);

    switch (I(self, 0xc)) {
    case 0:
        if (U(self, 0x18) < 30) {
            unsigned short delta = 91;
            if (I(self, 0x14) == 0) {
                delta = 0xffa5;
            }
            H(manager, 0x4c) += delta;
        } else {
            FUN_02040c0c(owner, I(self, 0x10), DAT_021a007c[I(self, 0x14)], 4096, 0);
            I(self, 0xc) = 1;
            I(self, 0x18) = 0;
        }
        break;
    case 1:
        if (U(self, 0x18) == 20) {
            Desc52 descriptor;
            Prop3 properties;
            Pair key;
            FUN_020c0488(&descriptor);
            FUN_020c0484(&descriptor, 8);
            FUN_0200c938(&properties, 12);
            properties.v[0] = 1;
            properties.v[1] = 1;
            FUN_0200c938(&key, 8);
            key.b = I(owner, 0xc);
            I(self, 0x1c) = FUN_020beccc(FUN_020be450(), &descriptor, 1, &properties, &key);
            FUN_020be4f8(FUN_020be450(), I(self, 0x1c), 2);
        }
        if (U(self, 0x18) == 30) {
            M43 matrix;
            M33 basis;
            Vec local;
            Vec position;
            short screen[2];
            FUN_0204260c(FUN_02036c88(owner, I(manager, 0x28)), 10, &matrix, &basis);
            FUN_0200c938(&local, 12);
            FUN_0205b960(&local, &matrix, &local);
            FUN_020345f0(&position, &local);
            FUN_02090f74(screen, FUN_02090c20(), &position, 0);
            FUN_020c193c(26, 9, screen[0], screen[1], 4);
        }
        if (U(self, 0x18) >= 20 && I(self, 0x20) == -1) {
            void *collision = FUN_020be5ec(FUN_020be450(), I(self, 0x1c));
            int captured = 0;
            if (collision) {
                char *hit = (char *)collision + 8;
                if (I(hit, 0x34) & 1) {
                    int id = I(hit, 0x40);
                    void *actor = FUN_02039200(FUN_020352a4(DAT_02108cf4, id));
                    if (actor && id == FUN_0208546c() && !FUN_0203ae60(actor) && !FUN_0203b41c(actor)) {
                        int handle;
                        FUN_020946a0(actor);
                        FUN_02080ae0(id, 1);
                        ((void (*)(void *))P(P(DAT_02108d04, 0), 0xb4))(DAT_02108d04);
                        handle = I(self, 0x1c);
                        if (handle != -1) {
                            FUN_020bed1c(FUN_020be450(), handle);
                            I(self, 0x1c) = -1;
                        }
                        I(self, 0x20) = id;
                        I(self, 0x24) = I(hit, 0x30);
                        captured = 1;
                        I(owner, 0x110) = 1;
                    }
                }
            }
            if (!captured) {
                M43 matrix;
                M33 basis;
                Vec local;
                Vec position;
                FUN_0204260c(FUN_02036c88(owner, I(manager, 0x28)), 10, &matrix, &basis);
                FUN_0200c938(&local, 12);
                FUN_0205b960(&local, &matrix, &local);
                FUN_020345f0(&position, &local);
                Vec axis = DAT_021a0070;
                Vec direction;
                Shape36 shape;
                int point[2];
                FUN_0205b0f0(&axis, &basis, &axis);
                axis.y = 0;
                FUN_020345f0(&direction, &axis);
                FUN_02036368(&direction);
                FUN_020bbfbc(&direction, DAT_021a0054[I(self, 0x14)]);
                FUN_02036848(&position, FUN_02091cc0(&direction, &DAT_021a1510));
                point[0] = position.x;
                point[1] = position.z;
                FUN_020bf680(&shape, point, 8192);
                FUN_020be5d4(FUN_020be450(), I(self, 0x1c), 0, &shape);
            }
        }
        break;
    case 2:
        if (U(self, 0x18) % 30 == 15 && I(self, 0x20) != -1) {
            void *actor = FUN_02039200(FUN_020352a4(DAT_02108cf4, I(self, 0x20)));
            if (actor && !FUN_0203ae60(actor)) {
                FUN_020437d8(I(owner, 0xc), 9, I(self, 0x20), I(self, 0x24), 0);
            }
        }
        break;
    case 4:
        if (FUN_overlay_21__0219b5e4(manager)) {
            I(manager, 0x18) = 2;
        }
        break;
    }

    if (I(self, 0x20) != -1) {
        void *model = FUN_02036c88(owner, I(manager, 0x28));
        if (model) {
            M43 matrix;
            M33 basis;
            Vec local;
            Vec position;
            FUN_0204260c(model, 10, &matrix, &basis);
            FUN_0200c938(&local, 12);
            FUN_0205b960(&local, &matrix, &local);
            FUN_020345f0(&position, &local);
            Vec axis = DAT_021a0058;
            Vec direction;
            void *actor;
            FUN_0205b0f0(&axis, &basis, &axis);
            axis.y = 0;
            FUN_020345f0(&direction, &axis);
            FUN_02036368(&direction);
            FUN_020bbfbc(&direction, DAT_021a0054[I(self, 0x14)]);
            actor = FUN_02039200(FUN_020352a4(DAT_02108cf4, I(self, 0x20)));
            if (actor) {
                Vec actorPosition = V(actor, 0x9c);
                position.y = actorPosition.y;
                FUN_02036848(&position, FUN_02091cc0(&direction, &DAT_021a1510));
                FUN_02037ff0(DAT_02108d04, &position);
            }
        }
    }

    if (FUN_02040d2c(owner, I(self, 0x10))) {
        switch (I(self, 0xc)) {
        case 1: {
            int handle;
            FUN_02040c0c(owner, I(self, 0x10), DAT_021a0084[I(self, 0x14)], 4096, 0);
            handle = I(self, 0x1c);
            if (handle != -1) {
                FUN_020bed1c(FUN_020be450(), handle);
                I(self, 0x1c) = -1;
            }
            if (I(self, 0x20) != -1) {
                void *model = FUN_02036c88(owner, I(manager, 0x28));
                if (model) {
                    M43 matrix;
                    M33 basis;
                    Vec local;
                    Vec position;
                    FUN_0204260c(model, 10, &matrix, &basis);
                    FUN_0200c938(&local, 12);
                    FUN_0205b960(&local, &matrix, &local);
                    FUN_020345f0(&position, &local);
                    Vec axis = DAT_021a0064;
                    Vec direction;
                    void *actor;
                    FUN_0205b0f0(&axis, &basis, &axis);
                    axis.y = 0;
                    FUN_020345f0(&direction, &axis);
                    FUN_02036368(&direction);
                    FUN_020bbfbc(&direction, DAT_021a0054[I(self, 0x14)]);
                    actor = FUN_02039200(FUN_020352a4(DAT_02108cf4, I(self, 0x20)));
                    if (actor) {
                        Vec actorPosition = V(actor, 0x9c);
                        position.y = actorPosition.y;
                        FUN_02036848(&position, FUN_02091cc0(&direction, &DAT_021a1510));
                        FUN_0203e4a0(DAT_02108d04, &position);
                    }
                }
            }
            I(manager, 0x1c) = 4;
            I(self, 0xc) = 2;
            break;
        }
        case 3: {
            FUN_02040c0c(owner, I(self, 0x10), 44, 4096, 0);
            I(self, 0xc) = 4;
            break;
        }
        }
        I(self, 0x18) = 0;
    } else if (I(self, 0xc) == 2 && U(self, 0x18) > 90) {
        FUN_02040c0c(owner, I(self, 0x10), DAT_021a008c[I(self, 0x14)], 4096, 0);
        I(self, 0xc) = 3;
        if (I(self, 0x20) == FUN_0208546c()) {
            ((void (*)(void *))P(P(DAT_02108d04, 0), 0xb8))(DAT_02108d04);
            I(self, 0x20) = -1;
        }
        I(self, 0x18) = 0;
    }
    U(self, 0x18)++;
}
}
