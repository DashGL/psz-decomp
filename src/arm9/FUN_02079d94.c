// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { int w[9]; } Shape;
typedef struct { unsigned char b[4]; } Key;
typedef struct { int w[3]; } Packet;

extern char *DAT_02108c64;
extern void *DAT_02108c68;
extern char *FUN_02030540(void *);
extern void *FUN_02034b78(void);
extern void FUN_020bbfbc(Vec *, unsigned short);
extern void FUN_020302e8(Vec *, void *);
extern void FUN_02030da8(Key *, void *);
extern void FUN_02079c14(Packet *, Key *, int);
extern void FUN_020bce3c(Packet *);
extern void FUN_02033170(void *);
extern void FUN_02079f10(void *);
extern void FUN_0207a070(void *);
extern void FUN_02035144(void *, int);
extern void FUN_0207a030(void *);
extern void FUN_020c193c(int, int, int, int, int);
extern int FUN_02044c84(Shape *, void *, Vec *, unsigned short);
extern int FUN_020350d0(void *, Shape *);
extern int FUN_02033418(void *, int, int);

void FUN_02079d94(char *s, int event) {
    Vec rotated;
    Shape shape;
    Packet packet;
    Vec base;
    Vec pos;
    Vec offset;
    Key key;

    if (event == 0) {
        if (*(signed char *)(*(char **)(s + 4) + 18) == 0) {
            char *p = FUN_02030540(s);
            if (p != 0) {
                unsigned short angle;
                base.x = 0;
                base.y = 0;
                base.z = -0x1000;
                angle = *(unsigned short *)(s + 0x2c);
                rotated = base;
                FUN_020bbfbc(&rotated, angle);
                FUN_020302e8(&offset, s);
                pos.x = offset.x + rotated.x;
                pos.y = offset.y + rotated.y;
                pos.z = offset.z + rotated.z;
                if (FUN_02044c84(&shape, p + 0xc, &pos, angle)) {
                    void *manager = FUN_02034b78();
                    if (manager) {
                        *(int *)(s + 0x40) = FUN_020350d0(manager, &shape);
                    }
                }
            }
        }
    } else if (event == 1) {
        FUN_02030da8(&key, s);
        FUN_02079c14(&packet, &key, 0);
        FUN_020bce3c(&packet);
        FUN_02033170(DAT_02108c64 + 0x6c);
    } else if (event == 2) {
        FUN_02079f10(s);
        FUN_0207a070(s);
    } else if (event == 3) {
        *(int *)(s + 0x44) = 15;
    } else if (event == 4) {
        if ((!!(**(unsigned char **)(s + 0x34) & 0x80)) != 0) {
            if (!(*(int *)(s + 0x38) & 2)) {
                int kind = *(signed char *)(*(char **)(s + 4) + 18);
                int ok = 0;
                if (kind == 0) {
                    ok = FUN_02033418(DAT_02108c68, 4, 0);
                } else if (kind == 1) {
                    ok = FUN_02033418(DAT_02108c68, 4, 1);
                } else if (kind == 2) {
                    ok = FUN_02033418(DAT_02108c68, 4, 2);
                    if (ok) {
                        **(unsigned char **)(s + 0x34) = 0;
                    }
                }
                if (ok) {
                    FUN_020c193c(4, 1, 0, 0, -1);
                    *(int *)(s + 0x38) |= 2;
                }
            }
        }
    } else if (event == 5) {
        void *manager;
        FUN_02079f10(s);
        manager = FUN_02034b78();
        if (manager) {
            FUN_02035144(manager, *(int *)(s + 0x40));
        }
        FUN_0207a030(s);
    }
}
