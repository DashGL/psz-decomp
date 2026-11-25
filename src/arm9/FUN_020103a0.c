// flags: -O4,s -noThumb
struct SNDStream;
struct SNDHandle { struct SNDStream *p; };
extern void FUN_0201082c(struct SNDStream *, unsigned int);
static inline int attached(const struct SNDHandle *h) { return h->p != 0; }
void FUN_020103a0(struct SNDHandle *h, unsigned int duration) {
    if (!attached(h)) return;
    FUN_0201082c(h->p, duration);
}
