// flags: -O4,s
typedef struct { unsigned int x, y, z; } V;
typedef struct { unsigned int a, b, c, d; } Key;
extern Key DAT_020ed648;
extern void FUN_02049b40(void);
extern int FUN_02047440(void *);
extern int FUN_0204770c(void *);
extern int FUN_0204771c(void *);
extern void FUN_0206e730(void *, void *);
extern void FUN_0206e740(void *, void *);
extern int FUN_020464d4(void *, void *, int, void *, int);
extern void FUN_020bf6e0(void *, void *, int, int, unsigned short);
extern int FUN_020be450(void);
extern void FUN_020be5d4(int, int, int, void *);
#pragma thumb off
extern int FUN_0200a3a0(int, int);
#pragma thumb on
extern void *FUN_02034b8c(void *, int);
extern char *FUN_0204daa8(int);
extern void FUN_02047ae8(void *);
extern int FUN_0204a9cc(void *);
#define W(n) (*(unsigned int *)(s + (n)))
#define P(n) (*(char **)(s + (n)))
int FUN_02049958(char *s) {
    int result = FUN_02047440(s);
    if (!result && FUN_0204770c(s) && FUN_0204771c(s)) {
        Key key;
        V pos;
        unsigned int request[13], center[2];
        char *obj;
        if (!W(260) && P(48)) {
            obj = *(char *volatile *)(s + 48);
            FUN_0206e730(obj, (void *)FUN_02049b40);
            FUN_0206e740(obj, s);
            W(260) = 1;
            key = DAT_020ed648;
            FUN_020464d4(s + 264, s + 268, 20, &key, 1);
        }
        if ((int)W(292) < 15) W(292) += 1;
        if (W(400) != ~0u) {
            center[0] = W(304) + W(92);
            center[1] = W(308) + W(100);
            FUN_020bf6e0(s + 312, center, (int)(W(280) * (unsigned int)*(short *)(s + 278)), W(284), *(unsigned short *)(s + 272));
            FUN_020be5d4(FUN_020be450(), W(400), 0, s + 312);
            if (W(228) & 0x400000) {
                int x = (int)W(304), z = (int)W(308), ax = x, az, factor;
                if (ax < 0) ax = -ax;
                az = z;
                if (az < 0) az = -az;
                factor = FUN_0200a3a0(20480, ax + az);
                pos.x = center[0] + (unsigned int)x * (unsigned int)factor;
                pos.y = 0;
                pos.z = center[1] + (unsigned int)z * (unsigned int)factor;
                if (!FUN_02034b8c(&pos, 256)) {
                    if (W(228) & 0x400000) W(404) = 1;
                } else if ((W(228) & 0x400000) && W(404)) {
                    W(408) = 1;
                }
            }
            if (W(152) != ~0u) W(408) = 0;
            obj = FUN_0204daa8(W(232));
            if (obj) *(unsigned char *)(obj + 329) = W(408);
            FUN_02047ae8(request);
            request[0] = W(232);
            request[1] = W(400);
            request[2] = W(96);
            request[3] = W(256);
            if ((int)W(284) <= 0) request[12] = 1;
            FUN_0204a9cc(request);
            if (obj) *(unsigned char *)(obj + 329) = 0;
        }
    }
    return result;
}
