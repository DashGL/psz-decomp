// flags: -O4,p -noThumb
struct Mtx23 {
    int m[6];
};
void FUN_020149f8(const struct Mtx23 *a, const struct Mtx23 *b, struct Mtx23 *out) {
    struct Mtx23 temp;
    struct Mtx23 *d;
    if (out == b) {
        d = &temp;
    } else {
        d = out;
    }
    d->m[0] = (int)(((long long)a->m[0] * b->m[0] + (long long)a->m[1] * b->m[2]) >> 12);
    d->m[1] = (int)(((long long)a->m[0] * b->m[1] + (long long)a->m[1] * b->m[3]) >> 12);
    d->m[2] = (int)(((long long)a->m[2] * b->m[0] + (long long)a->m[3] * b->m[2]) >> 12);
    d->m[3] = (int)(((long long)a->m[2] * b->m[1] + (long long)a->m[3] * b->m[3]) >> 12);
    d->m[4] = (int)(((long long)a->m[4] * b->m[0] + (long long)a->m[5] * b->m[2]) >> 12) + b->m[4];
    d->m[5] = (int)(((long long)a->m[4] * b->m[1] + (long long)a->m[5] * b->m[3]) >> 12) + b->m[5];
    if (d == &temp) {
        *out = temp;
    }
}
