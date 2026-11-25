// flags: -O4,s
typedef struct {
    unsigned int a;
    unsigned int b;
    unsigned int c;
} Entry3;

typedef struct {
    unsigned int a;
    unsigned int c;
} Entry2;

typedef struct {
    unsigned char pad0[0x34];
    Entry3 arr1[32];
    int count1;
    Entry2 arr2[32];
    int count2;
} State;

int FUN_overlay_12__02120310(State *s, unsigned int a, unsigned int b, unsigned int c) {
    if (b == 0) {
        if (s->count2 < 32) {
            Entry2 *e = &s->arr2[s->count2];
            e->a = a;
            e->c = c;
            s->count2++;
            return 1;
        }
    } else {
        if (s->count1 < 32) {
            Entry3 *e = &s->arr1[s->count1];
            e->a = a;
            e->b = b;
            e->c = c;
            s->count1++;
            return 1;
        }
    }
    return 0;
}
