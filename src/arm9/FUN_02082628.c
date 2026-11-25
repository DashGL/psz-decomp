// flags: -O4,s
typedef struct { signed char *pairs; unsigned count; } Candidates;
extern unsigned FUN_020832b4(unsigned);

unsigned FUN_02082628(void *unused, char *entries, int length, Candidates *candidates, signed char *node, int category) {
    char *neighbors[4], *entry;
    unsigned char choices[4], count, index;
    signed char *pair, *adj;
    int i, neighbor, valid;
    unsigned total = candidates->count;
    if (total == 1) return 0;
    adj = node + 16;
    for (i = 0; i < 4; i++) {
        neighbor = adj[i];
        if (neighbor >= 0 && neighbor < length)
            neighbors[i] = entries + 52 * neighbor;
        else
            neighbors[i] = 0;
    }
    count = 0;
    for (index = 0; index < total; index++) {
        valid = 1;
        pair = candidates->pairs + 2 * index;
        for (i = 0; i < 4; i++) {
            entry = neighbors[i];
            if (entry && category == *(int *)(entry + 8) && pair[0] == *(int *)(entry + 12) && pair[1] == *(int *)(entry + 16)) {
                valid = 0;
                break;
            }
        }
        if (valid && count < 4) {
            choices[count] = index;
            count++;
        }
    }
    if (count == 0)
        return FUN_020832b4(total);
    return choices[FUN_020832b4(count)];
}
