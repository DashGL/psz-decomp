// flags: -O4,s
typedef struct {
    unsigned char b[4];
} Key;

extern int FUN_0203a820(Key *, int);
extern int FUN_0203a1a8(Key *, int);
extern int FUN_0204edc8(void *, int);
extern void *FUN_02084638(Key *);

static inline int is_cat(Key k, int cat) {
    return FUN_0203a820(&k, cat);
}

static inline int is_sub(Key k, int sub) {
    return FUN_0203a1a8(&k, sub);
}

static inline void *get_entry(Key k) {
    return FUN_02084638(&k);
}

int FUN_020a8c38(char *s, Key *item) {
    int result = 0;
    switch ((*(int *)(s + 8) & 0xf00) >> 8) {
    case 0:
    case 1:
    case 2: {
        int ok = 0;
        if (is_cat(*item, 0)) {
            int r; if ((int)item->b[1] >= 1 && (int)item->b[1] <= 7) r = 1; else r = 0;
            if (r != 0) ok = 1;
        }
        if (ok != 0) {
            result = 1;
        } else {
            int ok2 = 0;
            int ok1 = 0;
            if (is_cat(*item, 3) && is_sub(*item, 3)) {
                ok1 = 1;
            }
            if (ok1 != 0 && (int)item->b[2] < 19) {
                ok2 = 1;
            }
            if (ok2 != 0) {
                result = 1;
            }
        }
        break;
    }
    case 3:
    case 4:
    case 5: {
        if (is_cat(*item, 1)) {
            result = 1;
        } else if (is_cat(*item, 3)) {
            void *entry = get_entry(*item);
            if (entry != 0 && FUN_0204edc8(entry, 0x800)) {
                result = 1;
            }
        }
        break;
    }
    case 6:
    case 7:
    case 8: {
        int ok = 0;
        if (is_cat(*item, 0)) {
            int r; if ((int)item->b[1] >= 14 && (int)item->b[1] <= 16) r = 1; else r = 0;
            if (r != 0) ok = 1;
        }
        if (ok != 0) {
            result = 1;
        } else {
            int ok2 = 0;
            int ok1 = 0;
            if (is_cat(*item, 3) && is_sub(*item, 3)) {
                ok1 = 1;
            }
            if (ok1 != 0 && (int)item->b[2] >= 19) {
                ok2 = 1;
            }
            if (ok2 != 0) {
                result = 1;
            }
        }
        break;
    }
    case 9:
    case 10:
    case 11:
        result = 1;
        break;
    }
    return result;
}
