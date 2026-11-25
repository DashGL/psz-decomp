// flags: -O4,s
typedef struct {
    int id;
    int distance;
    unsigned short category;
    unsigned short rank;
} Entry;

extern int FUN_020983f8(void *, int);
extern int FUN_020b7d2c(int, void *, int, int *, int *, int);

int FUN_02098320(char *s, Entry *out, int category, void *position, int limit) {
    int ids[3];
    int distances[3];
    int i, j, k, count, total; unsigned short index;

    for (i = 0; i < 3; i++) {
        ids[i] = -1;
        distances[i] = 0x0ffff000;
    }
    count = FUN_020b7d2c(FUN_020983f8(s, category), position, limit, ids, distances, 3);
    total = 0;
    for (index = 0; index < count; index++) {
        out[index].category = category;
        out[index].id = ids[index];
        out[index].distance = distances[index];
        out[index].rank = index;
        for (j = index - 1; j >= 0; j--) {
            if (out[j].distance >= 4096 && out[index].distance >= out[j].distance * 4) {
                out[index].rank++;
            }
        }
        for (k = 0; k < 5; k++) {
            if (*(int *)(s + 40 + 8 * k) == out[index].id) {
                if (k == category) {
                    if (out[index].rank != 0) {
                        out[index].rank--;
                    }
                } else {
                    out[index].rank += 3;
                }
            }
        }
        total++;
    }
    return total;
}
