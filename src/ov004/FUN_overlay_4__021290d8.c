// flags: -O4,s
extern void *FUN_02086e3c(void), *FUN_0208f068(void), *FUN_02077930(void), *FUN_02079114(void), *FUN_02077f3c(void);
extern char *FUN_020870c4(void *);
extern int FUN_02087138(void *), FUN_02077da8(void *), FUN_02077d98(void *), FUN_0209e2e8(void *), FUN_02078038(void *);
extern const signed char *FUN_0208efa8(void *, int, int, int);
extern void FUN_020c38f0(void *, int), FUN_020c3788(void *, const signed char *, int, int, int);
extern void FUN_02079160(void *, int *, int, unsigned short, int, int, int, int, int);
extern void FUN_overlay_4__02129280(void *);
extern void FUN_020c331c(int, int, int, int);
extern void FUN_0207920c(void *, int, int, int, unsigned short, int, int);

void FUN_overlay_4__021290d8(int *self) {
    char *session;
    void *base, *font;
    int table, handle, xy[2], minutes;
    unsigned int seconds, rem;
    const signed char *text;
    if (self[0]) {
        if (self[6] == 0) {
            if (FUN_02087138(FUN_02086e3c())) {
                session = FUN_020870c4(FUN_02086e3c());
                FUN_020c38f0((void *)self[0], 0);
                FUN_020c3788((void *)self[0], (signed char *)session + 2, 0, 0, 2);
                base = FUN_0208f068();
                if (!base) return;
                table = FUN_02077da8(FUN_02077930());
                text = FUN_0208efa8(base, table, 1, FUN_0209e2e8(session));
                FUN_020c3788((void *)self[0], text, 70, 0, 2);
                table = FUN_02077d98(FUN_02077930());
                text = FUN_0208efa8(base, table, 0, 20);
                if (text) FUN_020c3788((void *)self[0], text, 160, 0, 2);
                text = FUN_0208efa8(base, table, 0, 21);
                if (text) FUN_020c3788((void *)self[0], text, 0, 12, 2);
                text = FUN_0208efa8(base, table, 0, 22);
                if (text) FUN_020c3788((void *)self[0], text, 0, 24, 2);
                self[6] = 1;
            }
        } else {
            font = FUN_02079114();
            if (!font) return;
            handle = FUN_02078038(FUN_02077f3c());
            xy[0] = 0xce000;
            xy[1] = 0xec000;
            FUN_02079160(font, xy, 2, 3, self[7], -1, -1, 8, 0);
            FUN_overlay_4__02129280(self);
            xy[0] = 0x69000;
            xy[1] = 0x104000;
            seconds = (unsigned int)self[8];
            minutes = seconds / 60;
            rem = seconds % 60;
            if (minutes > 999) minutes = 999;
            FUN_02079160(font, xy, 2, 3, minutes, -1, -1, 8, 0);
            xy[0] += 0x17000;
            FUN_020c331c(49, xy[0], xy[1], handle);
            xy[0] += 0x7000;
            FUN_0207920c(font, xy[0], xy[1], 2, 2, rem, 1);
        }
    }
}
