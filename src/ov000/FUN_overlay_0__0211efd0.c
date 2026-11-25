// flags: -O4,s
extern void *FUN_020014d4(void *, const void *, unsigned int);
void FUN_overlay_0__0211efd0(unsigned int *p, const void *descriptor, unsigned long long start, unsigned long long *rng) {
    unsigned int bound;
    unsigned int random;
    FUN_020014d4(p, descriptor, 16);
    bound = p[3];
    rng[0] = rng[1] * rng[0] + rng[2];
    if (bound == 0) { random = (unsigned int)(rng[0] >> 32); } else { random = (unsigned int)(((rng[0] >> 32) * bound) >> 32); }
    start += random;
    *(unsigned long long *)(p + 4) = start;
    p[6] = 0;
    p[7] = 1;
}
