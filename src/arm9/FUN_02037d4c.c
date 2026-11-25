// flags: -O4,s
enum { E0 = 0, E1 = 1 };
struct Pair37 { unsigned short key, val; };
struct Node37 { struct Node37 *next; struct Pair37 pairs[24]; int count; };
extern struct Node37 *FUN_02037dd4(void *);

int FUN_02037d4c(char *s, unsigned int value, unsigned int key) {
    struct Node37 *p = *(struct Node37 **)(s + 24);
    while (p) {
        int i, count = p->count;
        for (i = 0; i < count; i++) {
            if (key == p->pairs[i].key) goto found;
        }
        i = -1;
    found:
        if (i >= 0) {
            if ((p->pairs[i].val == 65535) ? E1 : E0) {
                p->pairs[i].val = (unsigned short)value;
                return 1;
            }
            if ((value == p->pairs[i].val) ? E1 : E0) return 1;
        }
        p = p->next;
    }
    p = FUN_02037dd4(s);
    if (p) {
        p->pairs[p->count].key = (unsigned short)key;
        p->pairs[p->count].val = (unsigned short)value;
        p->count++;
        return 1;
    }
    return 0;
}
