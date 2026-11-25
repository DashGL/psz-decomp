// flags: -O4,s
typedef struct { unsigned char b[4]; } Key;
typedef struct { int w[7]; } Config;
typedef struct { int w[10]; } Row;
typedef struct {
    Row rows[100];
    int count;
    int pad1, pad2;
} Group;
typedef struct {
    int pad0[17];
    int (*cb17)(void *, int, int);
    int pad1[3];
    int (*cb21)(const void *, int, int);
    int pad2;
    int state;
    int group_idx;
    int pad3[2];
    int row_idx;
    int pad4[7];
    int flag35;
    int pad5[13];
    Group groups[1];
} Panel;
extern const Config DAT_overlay_12__0213bac4;
extern void FUN_020c193c(int, int, int, int, int), FUN_overlay_12__02133264(void *, const void *);
extern int FUN_02084900(void *), FUN_020849d4(void *);
int FUN_overlay_12__02132e30(Panel *self)
{
    Config options;
    Key key;
    int result, b, a, c;
    int *row;
    if (self->state != 1) return 0;
    if (!self->groups[self->group_idx].count) {
        FUN_020c193c(0, 5, 0, 0, -1);
        return 0;
    }
    result = 1;
    row = self->groups[self->group_idx].rows[self->row_idx].w;
    if (self->cb21) {
        key = *(const Key *)row;
        if (!self->cb21(&key, row[4], row[5])) {
            FUN_020c193c(0, 5, 0, 0, -1);
            return 0;
        }
    }
    if (!self->flag35 && FUN_02084900(row)) {
        a = row[6];
        if (a == -1) a = FUN_020849d4(row);
        b = row[7];
        c = row[8];
        if (c == -1) c = FUN_020849d4(row);
        options = DAT_overlay_12__0213bac4;
        options.w[2] = a;
        options.w[3] = b;
        options.w[4] = c;
        if (a == 0 && b == 0) {
            if (self->cb17) self->cb17(row, row[4], row[5]);
            result = 0;
        } else {
            FUN_overlay_12__02133264(self, &options);
        }
    } else if (self->cb17) {
        result = self->cb17(row, row[4], row[5]);
    }
    if (!result) FUN_020c193c(0, 5, 0, 0, -1);
    return result;
}
