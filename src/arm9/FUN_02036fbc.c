// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern Vec DAT_020fc958;
extern int FUN_02036f7c(void *, Vec *);
extern void FUN_0203647c(Vec *, Vec *, Vec *);
extern void FUN_020bbfbc(Vec *, unsigned int);
#pragma thumb off
extern unsigned int FUN_0205c9e4(int, int);
#pragma thumb on
extern void FUN_02036368(Vec *);

void FUN_02036fbc(char *s, Vec *input) {
    enum { E0 = 0, E1 = 1 };
    Vec base, result, a, b, c;
    if (FUN_02036f7c(s, &base)) {
        FUN_0203647c(&result, input, &base);
        if ((result.x == DAT_020fc958.x && result.y == DAT_020fc958.y && result.z == DAT_020fc958.z) ? E1 : E0) {
            a = base;
            FUN_020bbfbc(&a, 256);
            result = a;
        } else {
            unsigned short cur = *(unsigned short *)(s + 68);
            unsigned int angle = (unsigned short)(cur - FUN_0205c9e4(input->x, input->z));
            if (angle > 32512 && angle < 32768) {
                b = base;
                FUN_020bbfbc(&b, 65280);
                result = b;
            } else if (angle >= 32768 && angle < 33024) {
                c = base;
                FUN_020bbfbc(&c, 256);
                result = c;
            }
        }
        FUN_02036368(&result);
        *(unsigned short *)(s + 68) = FUN_0205c9e4(result.x, result.z);
    }
}
