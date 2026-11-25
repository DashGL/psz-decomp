// flags: -O4,s -noThumb
struct SNDStream { unsigned char pad[0x158]; unsigned int field_158; };
struct SNDHandle { struct SNDStream *p; };
static inline int attached(const struct SNDHandle *h) { return h->p != 0; }
void FUN_020103bc(struct SNDHandle *h, unsigned int value) {
    if (!attached(h)) return;
    h->p->field_158 = value;
}
