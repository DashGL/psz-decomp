// flags: -O4,s
enum { E0 = 0, E1 = 1 };

extern const int DAT_020ed09c;
extern const int DAT_020ed0a0;
extern int DAT_0219fd20[];
extern void *FUN_02075040(void *, int);
extern void FUN_02072724(void *, int);
extern void FUN_overlay_20__0219d43c(void *);
extern int FUN_02072650(void *, int, int, int);
extern void FUN_02072750(void *, int, void *);

void FUN_overlay_20__0219d4d8(int *self)
{
    int i;

    for (i = 0; i < 6; i++) {
        int *entry = (int *)((char *)self[55] + 0x1c * i);
        if (((entry[1] != DAT_020ed09c) ? E1 : E0) != 0) {
            if (!FUN_02075040(self, *(volatile int *)(entry + 1))) {
                FUN_02072724(self, entry[0]);
                FUN_overlay_20__0219d43c(entry);
            } else if (((entry[2] > DAT_0219fd20[1]) ? E1 : E0) != 0) {
                FUN_02072724(self, entry[0]);
                entry[0] = DAT_020ed0a0;
            } else if (entry[0] == DAT_020ed0a0 && ((entry[2] > DAT_0219fd20[2]) ? E1 : E0) != 0) {
                int type = (entry[6] == 0) ? 4 : 5;
                int handle = FUN_02072650(self, type, 0, 0);
                entry[0] = handle;
                FUN_02072750(self, handle, entry + 3);
            }
            entry[2] += 4096;
        }
    }
}
