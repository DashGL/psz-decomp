// flags: -O4,p -noThumb
struct SNDStream { unsigned char pad[0x110]; int b0:1, b1:1, b2:1, b3:1; };
struct SNDHandle { struct SNDStream *p; };
static inline int attached(const struct SNDHandle *h) { return h->p != 0; }
void FUN_02010358(struct SNDHandle *h) {
    if (!attached(h)) return;
    h->p->b2 = 1;
}
