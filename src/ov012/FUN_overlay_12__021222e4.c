// flags: -O4,s
extern int FUN_020bbf6c(int);
extern void FUN_overlay_12__02122518(void *, int);

struct State_22e4 {
    int min_cnt;
    int total;
    int count;
};
struct Entry_22e4 {
    int key;
    int avail;
};
struct Self_22e4 {
    int f0;
    signed char sel;
    unsigned char pad[7];
    int dirty;
};
extern struct State_22e4 DAT_0213ec9c;
extern int DAT_0213eca8[];
extern struct Entry_22e4 DAT_0213ecb4[];

void FUN_overlay_12__021222e4(struct Self_22e4 *self) {
    int i;
    if (FUN_020bbf6c(2)) {
        if (DAT_0213ec9c.count > DAT_0213ec9c.min_cnt) {
            for (i = 0; i < DAT_0213ec9c.total; i++) {
                if (DAT_0213eca8[DAT_0213ec9c.count - 1] == DAT_0213ecb4[i].key) {
                    DAT_0213ecb4[i].avail = 1;
                    break;
                }
            }
            if (DAT_0213ec9c.count > 0) DAT_0213ec9c.count--;
            DAT_0213eca8[DAT_0213ec9c.count] = 0;
            self->dirty = 1;
        }
        self->sel = 0;
        if (!DAT_0213ecb4[self->sel].avail) {
            FUN_overlay_12__02122518(self, DAT_0213ec9c.total);
        }
    }
}
