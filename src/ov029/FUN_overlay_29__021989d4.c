// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { int x, y, z; } Vec;
extern const int DAT_020fc988;
extern const short DAT_020ed83c[];
extern void FUN_02092654(void *, void *);
extern void FUN_02075068(void *, int);
extern int FUN_02074e9c(void *, int, int, int);
extern void FUN_overlay_29__02198a80(void *);

void FUN_overlay_29__021989d4(int *self, int *scale, int *duration) {
    if ((DAT_020fc988 >= self[54]) ? E1 : E0) {
        Vec v;
        int index = ((int)*(unsigned short *)(self + 17) >> 4) * 2;
        v.x = DAT_020ed83c[index];
        v.y = 0;
        v.z = DAT_020ed83c[index + 1];
        FUN_02092654(&v, scale);
        self[55] += v.x;
        self[56] += v.y;
        self[57] += v.z;
        FUN_02075068(self, self[53]);
        self[53] = FUN_02074e9c(self, 2, 0, 0);
        FUN_overlay_29__02198a80(self);
        self[54] = *duration;
    }
}
