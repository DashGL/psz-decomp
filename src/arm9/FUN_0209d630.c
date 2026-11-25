// flags: -O4,p
typedef struct { unsigned long long s, m, c; } R;
unsigned int FUN_0209d630(R *r, unsigned int max) {
    unsigned long long v;
    r->s = r->m * r->s + r->c;
    if (max == 0) {
        v = r->s;
    } else {
        v = (r->s >> 32) * (unsigned long long)max;
    }
    return (unsigned int)(v >> 32);
}
