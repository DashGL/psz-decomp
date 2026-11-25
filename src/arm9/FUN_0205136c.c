// flags: -O4,s
enum { E0 = 0, E1 = 1 };

typedef struct {
    unsigned char pad[6];
    signed char flags;
    unsigned char pad2;
} Entry;

typedef struct {
    Entry *entries;
    int *count;
    unsigned char pad[0x4c - 8];
    int active;
    unsigned char pad2[0x64 - 0x50];
    int locked;
} Obj;

int FUN_0205136c(Obj *s, int index, unsigned int shift) {
    if (index >= 0 && index < *s->count) {
        int flags = s->entries[index].flags;
        if ((flags & (1 << shift)) ? E1 : E0) {
            if (s->active == index) {
                if (s->locked == 0) return 1;
                return 0;
            }
            return 1;
        }
    }
    return 0;
}
