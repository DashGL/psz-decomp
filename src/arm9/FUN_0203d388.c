// flags: -O4,s
extern char *DAT_02108c84;
extern int FUN_020bbfa8(unsigned int);

unsigned short FUN_0203d388(void *unused, int direction) {
    char *m = DAT_02108c84;
    if (m != 0) {
        char *o = ((char **)(m + 64))[*(unsigned int *)(m + 100)];
        if (o != 0) {
            unsigned int angle = ((unsigned int (*)(void *))(*(void ***)o)[4])(o);
            switch (direction) {
            case 16: {
                unsigned int res;
                if (FUN_020bbfa8(64)) res = angle - 0xa000;
                else if (FUN_020bbfa8(128)) res = angle - 0xe000;
                else res = angle - 0xc000;
                return (unsigned short)res;
            }
            case 32: {
                unsigned int res;
                if (FUN_020bbfa8(64)) res = angle - 0x6000;
                else if (FUN_020bbfa8(128)) res = angle - 0x2000;
                else res = angle - 0x4000;
                return (unsigned short)res;
            }
            case 64:
                angle = (unsigned short)(angle - 0x8000); return angle;
            case 128:
                return (unsigned short)angle;
            }
        }
    }
    return 0;
}
