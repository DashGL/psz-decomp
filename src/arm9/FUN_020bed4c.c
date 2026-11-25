// flags: -O4,s
typedef struct {
    unsigned int f0;
    unsigned short gen;
    unsigned short pad;
    unsigned int f8;
    int used;
    unsigned int f10;
    unsigned int f14;
} Slot_bed4c;

typedef struct {
    Slot_bed4c slots[100];
    int idx;
} S_bed4c;

int FUN_020bed4c(S_bed4c *s) {
    Slot_bed4c *slot;
    int start;
    int result = -1;
    start = s->idx;
    slot = &s->slots[start];
    do {
        unsigned int is_free = (slot->used == 0);
        if (is_free) {
            slot->gen++;
            result = s->idx | ((unsigned int)slot->gen << 16);
        }
        s->idx++;
        slot++;
        if (s->idx >= 100) {
            s->idx = 0;
            slot = &s->slots[0];
        }
    } while (result == -1 && s->idx != start);
    return result;
}
