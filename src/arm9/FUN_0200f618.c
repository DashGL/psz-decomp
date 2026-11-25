// flags: -O4,p -noThumb
struct Entry_f618 {
    unsigned int f0;
    unsigned short f4[4];
};
struct Child_f618 {
    unsigned int val : 24;
    unsigned int flags : 8;
};
extern struct Entry_f618 *FUN_0200ec50(unsigned int);
extern struct Child_f618 *FUN_0200ecb4(unsigned int);
extern unsigned int FUN_0200f95c(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_0200efe0(unsigned int);
extern unsigned int FUN_0200f758(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int *);
extern unsigned int FUN_0200fd4c(unsigned int, unsigned int, int, unsigned int, unsigned int);
extern void FUN_0206a324(unsigned int, int, unsigned int);

unsigned int FUN_0200f618(unsigned int index, unsigned int flags, unsigned int a, unsigned int b, unsigned int *out) {
    struct Entry_f618 *entry = FUN_0200ec50(index);
    unsigned int object, result, value;
    struct Child_f618 *child;
    int i;

    if (!entry) return 4;
    if (flags & 2) {
        object = FUN_0200f95c(entry->f0, a, b);
        if (!object) return 8;
    } else {
        object = FUN_0200efe0(entry->f0);
    }
    for (i = 0; i < 4; i++) {
        if (entry->f4[i] == 65535) continue;
        child = FUN_0200ecb4(entry->f4[i]);
        if (!child) return 5;
        result = FUN_0200f758(entry->f4[i], flags, a, b, &value);
        if (result) return result;
        if ((child->flags & 1) && (flags & 4)) {
            if (!FUN_0200fd4c(value, object, i, child->val, a)) return 9;
        }
        if (object && value) {
            FUN_0206a324(object, i, value);
        }
    }
    if (out) *out = object;
    return 0;
}
