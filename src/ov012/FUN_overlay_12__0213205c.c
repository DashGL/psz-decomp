// flags: -O4,s
typedef struct {
    unsigned char bytes[4];
} Key;

typedef struct {
    Key key;
    unsigned int unk4;
    unsigned int flags;
} Item;

extern int FUN_0204daec(void *);
extern int FUN_overlay_12__021320d4(void *);
extern int DAT_0213bae4[];

int FUN_overlay_12__0213205c(Item *item, int *bank) {
    Key key = item->key;
    Key *kp = &key;
    if (FUN_0204daec(item) && ((int)(item->flags & 0x1000) >> 12)) {
        *bank = 1;
        switch (kp->bytes[0]) {
        case 0: {
            int sub = kp->bytes[1];
            unsigned int valid = 0;
            do {
                if (sub < 0) break;
                if (sub >= 18) break;
                valid = 1;
            } while (0);
            if (valid) {
                return DAT_0213bae4[sub * 2];
            }
            break;
        }
        case 1:
            return 59;
        }
        return -1;
    }
    *bank = 0;
    return FUN_overlay_12__021320d4(kp);
}
