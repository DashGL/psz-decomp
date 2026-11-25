// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef void (*Callback)(void *, int, int);

extern void FUN_020a7704(void *, int, int);
extern void FUN_020a7730(void *, int, int);
extern void FUN_020a75e0(void *, int, int, int, int, Callback);
extern void FUN_020a5cdc(void *);
extern void FUN_020c193c(int, int, int, int, int);
extern void FUN_020c1d7c(int, int, int, int, int);
extern int FUN_020bc26c(unsigned short *, unsigned short *);

#define W(n) (*(int *)(s + (n)))
#define H(n) (*(unsigned short *)(s + (n)))

void FUN_020a5dc8(char *s, Callback callback) {
    unsigned short x = 0, y = 0;
    int nx, ny, ox, oy, dx, dy, dist, special;

    if (FUN_020bc26c(&x, &y)) {
        if (!W(6404)) {
            H(6400) = x;
            H(6402) = y;
        }
        nx = x / 2;
        ny = ((int)y - 37) / 2;
        ox = H(6400) / 2;
        oy = ((int)H(6402) - 37) / 2;
        dx = nx - ox;
        dy = ny - oy;
        dist = dx * dx + dy * dy;
        special = callback == FUN_020a7704;
        if (special && dist > 25) callback = FUN_020a7730;
        FUN_020a75e0(s + 244, nx, ny, ox, oy, callback);
        if ((nx < 8 || nx >= 120) ? E0 : ((ny < 0 || ny >= 48) ? E0 : E1)) {
            if (!W(6404)) FUN_020c193c(0, special ? 14 : 12, 0, 0, -1);
            else if (dist > 3) FUN_020c1d7c(0, special ? 15 : 13, 0, 0, -1);
        }
        H(6400) = x;
        H(6402) = y;
        if (!W(6404) || dist > 0) FUN_020a5cdc(s);
        W(6404) = 1;
    } else {
        W(6404) = 0;
        s[7216] = 0;
    }
}
