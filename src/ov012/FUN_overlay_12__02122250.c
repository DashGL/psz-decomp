// flags: -O4,s
extern int FUN_020bbfa8(int);
extern int FUN_020bbf6c(int);
extern void FUN_overlay_12__02122518(void *, int);
extern void FUN_020c193c(int, int, int, int, int);

struct State_2250 {
    int min_cnt;
    int total;
    int count;
};
struct Entry_2250 {
    int key;
    int avail;
};
struct Self_2250 {
    int f0;
    signed char sel;
    unsigned char pad[7];
    int dirty;
};
extern struct State_2250 DAT_0213ec9c;
extern int DAT_0213eca8[];
extern struct Entry_2250 DAT_0213ecb4[];

int FUN_overlay_12__02122250(struct Self_2250 *self) {
    int count, n;
    if ((!FUN_020bbfa8(2) || !FUN_020bbf6c(2)) && FUN_020bbf6c(1)) {
        count = DAT_0213ec9c.count;
        if (count < 3) {
            n = DAT_0213ec9c.total;
            if (self->sel < n) {
                DAT_0213eca8[count] = DAT_0213ecb4[self->sel].key;
                DAT_0213ecb4[self->sel].avail = 0;
                DAT_0213ec9c.count = count + 1;
                FUN_overlay_12__02122518(self, n);
                self->dirty = 1;
                FUN_020c193c(0, 0, 0, 0, -1);
                return 0;
            }
        }
        FUN_020c193c(0, 5, 0, 0, -1);
    }
    return 1;
}
