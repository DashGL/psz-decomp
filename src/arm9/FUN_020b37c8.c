// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern char *UNK_02108c84;
extern void FUN_020b3988(void *, int), FUN_020b36a0(void *, int);
extern void FUN_020bc078(void *, void *, void *, void *);
extern void FUN_0203647c(void *, void *, void *), FUN_02036348(void *, void *, void *);
extern void FUN_020348e4(void *, void *), FUN_02034904(void *, unsigned short), FUN_0203497c(void *);
extern unsigned short FUN_0205c9e4(int, int);
extern int FUN_020bc26c(unsigned short *, unsigned short *);
#define I(o) (*(int *)(self + (o)))
#define H(o) (*(short *)(self + (o)))
#define U(o) (*(unsigned short *)(self + (o)))
#define P(o) (*(char **)(self + (o)))

void FUN_020b37c8(char *self, void *input, int parameter)
{
    Vec position, delta, selected, copy, current, difference, next, fall;
    int mode, dx, dy;
    unsigned short angle, touchX, touchY;
    char *selection;

    if (!P(4))
        return;
    switch (H(0x50)) {
    case 0:
        H(0x52) = 0;
        if (!I(0x4c))
            FUN_020b3988(self, parameter);
        else
            FUN_020b36a0(self, parameter);
        mode = 0x21;
        FUN_020bc078(&next, self + 0x28, input, &mode);
        *(Vec *)(self + 0x28) = next;
        FUN_0203647c(&position, self + 0x28, self + 0x1c);
        FUN_020348e4(P(4), &position);
        FUN_02036348(&delta, &position, self + 0x10);
        *(Vec *)(self + 0x10) = position;
        FUN_02034904(P(4), FUN_0205c9e4(-delta.x, -delta.z));
        break;
    case 1:
        if (!FUN_020bc26c(&touchX, &touchY))
            H(0x50) = 0;
        angle = 0;
        if (UNK_02108c84) {
            selection = *(char **)(UNK_02108c84 + 0x40 + 4 * (*(int *)(UNK_02108c84 + 0x64)));
            if (selection) {
                selected = *(Vec *)(selection + 0x18);
                copy.x = selected.x;
                copy.y = selected.y;
                copy.z = selected.z;
                FUN_0203647c(&current, self + 0x28, self + 0x1c);
                FUN_02036348(&difference, &copy, &current);
                angle = FUN_0205c9e4(-difference.x, -difference.z);
                FUN_02034904(P(4), angle);
            }
        }
        dx = U(0x54) - touchX;
        dy = U(0x56) - touchY;
        U(0x54) = touchX;
        U(0x56) = touchY;
        if (dx * dx + dy * dy >= 25) {
            ++H(0x52);
            if (H(0x52) >= 90) {
                I(0x44) = angle;
                H(0x50) = 2;
            }
        }
        break;
    case 2:
        I(0x44) += 0xf00;
        FUN_02034904(P(4), (unsigned short)I(0x44));
        I(0x20) -= 0x52;
        FUN_0203647c(&fall, self + 0x28, self + 0x1c);
        FUN_020348e4(P(4), &fall);
        if (I(0x20) < -4096) {
            FUN_0203497c(P(4));
            H(0x50) = 3;
        }
        break;
    case 3:
        break;
    }
}
