//cpp
extern "C" {
// flags: -O4,s
typedef struct {
    unsigned char b[4];
} Item;

extern int FUN_0208a094(void *);
extern int FUN_0203a820(Item *, int);

int FUN_020a7a54(char *s, Item *item) {
    Item first, second;
    int result = 0;
    int total = FUN_0208a094(s);
    int original = (*(int *)(s + 8) & 0xf00) >> 8;
    int next;
    int a = 0, b = 0, c = 0;
    int d;

    first = *item;
    if (FUN_0203a820(&first, 0)) {
        int type = item->b[1];
        a = (type >= 1 && type <= 7);
        b = (type >= 8 && type <= 13);
        c = (type >= 14 && type <= 16);
    }

    second = *item;
    d = FUN_0203a820(&second, 1);

    next = original;
    if (total >= 60 && (next % 3) != 0) {
        switch (original) {
        case 1:
            if (c || d) next = 2;
            break;
        case 2:
            if (a || b) next = 1;
            break;
        case 4:
            if (b || c) next = 5;
            break;
        case 5:
            if (a || d) next = 4;
            break;
        case 7:
            if (b || d) next = 8;
            break;
        case 8:
            if (a || c) next = 7;
            break;
        case 10:
            if (a || c) next = 11;
            break;
        case 11:
            if (b || d) next = 10;
            break;
        }
    }

    if (original != next) {
        int cnt = ((*(int *)(s + 8) & 0xe0) >> 5) + 1;
        *(unsigned int *)(s + 8) = (*(unsigned int *)(s + 8) & ~0xe0) | (cnt << 5);
        if (((*(int *)(s + 8) & 0xe0) >> 5) >= 5) {
            *(unsigned int *)(s + 8) = (*(unsigned int *)(s + 8) & ~0xf00) | (next << 8);
            *(unsigned int *)(s + 8) &= ~0xe0;
            result = 1;
        }
    } else {
        *(int *)(s + 8) &= ~0xe0;
    }

    return result;
}

}
