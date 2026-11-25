// flags: -O4,s
extern int FUN_0208546c(void);
extern int FUN_0203b3e4(void *);
extern int FUN_020b7fdc(int, int);
extern void *FUN_0208555c(int);

void FUN_0209c5cc(unsigned char *s) {
    void *actor;
    int player;
    actor = FUN_0208555c(FUN_0208546c());
    if (actor) {
        if (FUN_0203b3e4(actor)) {
            s[6] = 1;
        } else {
            s[6] = 0;
        }
    }
    for (player = 0; player < 4; player++) {
        int i;
        unsigned char *p;
        if (!FUN_0208555c(player)) {
            continue;
        }
        i = 3;
        p = s + 28 * player;
        for (; i >= 0; i--) {
            if (FUN_020b7fdc(i, player)) {
                p[8 + i] = 1;
            } else {
                p[8 + i] = 0;
                break;
            }
        }
        for (; i >= 0; i--) {
            p[8 + i] = 0;
        }
        if (FUN_020b7fdc(4, player)) {
            p[12] = 1;
        } else {
            p[12] = 0;
        }
        for (i = 5; i <= 10; i++) {
            if (FUN_020b7fdc(i, player)) {
                p[8 + i] = 1;
            } else {
                p[8 + i] = 0;
            }
        }
        if (FUN_020b7fdc(11, player)) {
            p[19] = 1;
        } else {
            p[19] = 0;
        }
        for (i = 0; i < 4; i++) {
            int index = i * 2 + 12;
            if (FUN_020b7fdc(index, player)) {
                p[index + 8] = 1;
                p[index + 9] = 0;
            } else {
                p[index + 8] = 0;
                p[index + 9] = 1;
            }
        }
    }
}
