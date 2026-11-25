// flags: -O4,p
extern char *DAT_02108c84;

unsigned short FUN_0203d448(void *unused, int direction, int secondary) {
    char *m = DAT_02108c84;
    if (m) {
        char *o = ((char **)(m + 0x40))[*(unsigned int *)(m + 0x64)];
        if (o) {
            unsigned int angle = ((unsigned int (*)(void *))(*(void ***)o)[4])(o);
            switch (direction) {
            case 0x10:
                if (secondary == 0x40) {
                    angle -= 0xa000;
                } else if (secondary == 0x80) {
                    angle -= 0xe000;
                } else {
                    angle -= 0xc000;
                }
                return angle;
            case 0x20:
                if (secondary == 0x40) {
                    angle -= 0x6000;
                } else if (secondary == 0x80) {
                    angle -= 0x2000;
                } else {
                    angle -= 0x4000;
                }
                return angle;
            case 0x40:
                angle = (unsigned short)(angle - 0x8000);
                return angle;
            case 0x80:
                return angle;
            }
        }
    }
    return 0;
}
