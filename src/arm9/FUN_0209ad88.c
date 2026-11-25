// flags: -O4,s
typedef struct { unsigned short thresh, id; } Entry;
extern int FUN_0209adfc(void *, int, void *);
extern unsigned int FUN_0209ad1c(unsigned int);
extern void FUN_0209ae8c(void *, int, int);
int FUN_0209ad88(char *s, int index, void *out) {
    unsigned short *p = *(unsigned short **)(s + 8) + index;
    unsigned short *end = *(unsigned short **)(s + 12);
    unsigned int value;
    Entry *e, *eend;
    if (p < end && FUN_0209adfc(s, *p, out)) return 1;
    value = FUN_0209ad1c(50000);
    e = *(Entry **)(s + 12);
    eend = e + 255;
    for (; e < eend; e++) {
        if (value < e->thresh) {
            if (FUN_0209adfc(s, e->id, out)) return 1;
            break;
        }
    }
    if (FUN_0209adfc(s, *(unsigned short *)(s + 16), out)) return 1;
    FUN_0209ae8c(out, *(unsigned short *)(s + 18), *(unsigned short *)(s + 20));
    return 1;
}
