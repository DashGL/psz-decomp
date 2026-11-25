// flags: -O4,s
struct S {
    int pad[6];
    int count;
    int pad2[5];
    int * volatile arr;
};
int FUN_02091d38(struct S *s, int *out, int *key) {
    int mid, lo, hi;
    if (!s->arr) return 0;
    lo = 0;
    hi = s->count - 2;
    while (lo <= hi) {
        int *p;
        unsigned b1;
        mid = (lo + hi) / 2;
        p = &s->arr[mid];
        b1 = (*key < p[0]);
        if (b1) {
            hi = mid - 1;
        } else {
            unsigned b2 = (*key < p[1]);
            if (b2) {
                *out = mid;
                return 1;
            }
            lo = mid + 1;
        }
    }
    return 0;
}
