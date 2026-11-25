// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern int FUN_020866b4(int, void *);
#pragma thumb off
extern unsigned short FUN_0205cc08(int);
#pragma thumb on
extern void FUN_02036348(void *, void *, void *);
extern void FUN_02037390(int *, void *);
extern void FUN_02036368(void *);

int FUN_020865fc(char *s) {
    int position[3];
    int delta[3];
    int distance;
    if (FUN_020866b4(*(int *)s, position)) {
        FUN_02036348(delta, position, s + 12);
        FUN_02037390(&distance, delta);
        {
            int d;
            int flags = *(int *)(s + 28);
            d = *(int *)(((int)&distance) & 0xFFFFFFFFFFFFFFFFULL);
            if ((((flags & 1) ? E1 : E0) && d < *(int *)(s + 4)) ||
                (((flags & 2) ? E1 : E0) && d > *(int *)(s + 8))) {
                return 0;
            }
            if ((flags & 4) ? E1 : E0) {
                unsigned short angle;
                delta[1] = 0;
                FUN_02036368(delta);
                angle = FUN_0205cc08(delta[2]);
                if (delta[0] < 0) {
                    angle = (unsigned short)(65536 - angle);
                }
                angle -= *(unsigned short *)(s + 24);
                if (angle >= 32768) {
                    angle = 65536 - angle;
                }
                if (angle > *(unsigned short *)(s + 26)) {
                    return 0;
                }
            }
        }
        return 1;
    }
    return 0;
}
