// flags: -O4,s
typedef struct { unsigned int x, y, z; } V;
extern void *FUN_02073198(void);
extern int FUN_020854f8(void *);
extern int FUN_0204db98(void *, int);
extern int FUN_0204dbc4(void *, int);
extern char *FUN_0208555c(int);
extern int FUN_02085880(int);
extern void FUN_0203666c(void *);
extern void FUN_02046d94(void *, int, int);
extern void FUN_0203a850(void *, void *, int);
extern void FUN_02085128(int, void *);

void FUN_0204f560(char *s) {
    int allowed;
    int valid = 0;
    int current = FUN_020854f8(FUN_02073198());
    if (*(int *)(s + 20) == current) {
        allowed = 1;
        if (current != *(signed char *)(s + 1)) {
            allowed = 0;
        }
    } else {
        allowed = 1;
    }
    if (FUN_0204db98(s + 4, 0) && FUN_0204dbc4(s + 4, 17)) {
        int index = *(unsigned char *)(s + 7);
        int category = *(unsigned char *)(s + 6);
        int a = *(int *)(s + 8);
        int v1 = (a & (0xfe << 10)) >> 11;
        int v2 = (a & (0xfe << 17)) >> 18;
        int v3 = (a & 0x7f0) >> 4;
        int b = *(int *)(s + 12);
        int v4 = (b & (0xfe << 23)) >> 24;
        int total = v4 + (v3 + (v2 + v1));
        int v5 = ((a & (int)(0xfeu << 24)) >> 25) & 0x7f;
        int n0 = a & 0xf;
        int n1 = (b & 0x00f00000) >> 20;
        int n2 = (b & 0x000f0000) >> 16;
        int n3 = (b & 0x0000f000) >> 12;
        int n4 = (b & 0x00000f00) >> 8;
        int n5 = (b & 0x0000001c) >> 2;
        if (index >= 0 && index < 33 &&
            category >= 0 && category < 5 &&
            total >= 0 && total <= 100 &&
            v5 >= 0 && v5 <= 100 &&
            v2 >= 0 && v2 <= 100 &&
            v1 >= 0 && v1 <= 100 &&
            v3 >= 0 && v3 <= 100 &&
            v4 >= 0 && v4 <= 100 &&
            n0 >= 0 && n0 < 10 &&
            n1 >= 0 && n1 < 10 &&
            n2 >= 0 && n2 < 10 &&
            n3 >= 0 && n3 < 10 &&
            n4 >= 0 && n4 < 12 &&
            n5 >= 0 && n5 < 5) {
            valid = 1;
        }
    }
    if (allowed && valid) {
        char *obj = FUN_0208555c(*(int *)(s + 20));
        if (obj) {
            if (FUN_02085880(*(int *)(s + 20))) {
                char *holder = *(char **)(obj + 436);
                if (holder) {
                    char *child = *(char **)(holder + 20);
                    if (child) {
                        unsigned int request[25];
                        V scale;
                        FUN_0203666c(request);
                        *(V *)((char *)request + 32) = *(V *)(child + 92);
                        *(unsigned short *)((char *)request + 58) = *(unsigned short *)(obj + 192);
                        request[21] = 9;
                        scale.x = 2048; scale.y = 2048; scale.z = 2048;
                        *(V *)((char *)request + 44) = scale;
                        request[18] = 23;
                        request[19] = (unsigned int)-1;
                        request[17] = 0;
                        FUN_02046d94(request, 0, 0);
                    }
                }
            }
            FUN_0203a850(obj, s + 4, 0);
        } else {
            FUN_02085128(*(int *)(s + 20), s + 4);
        }
    }
}
