// flags: -O4,s
struct Pair { unsigned short a, b; };
struct Node33 { struct Node33 *next; struct Pair pairs[24]; int count; };
extern unsigned char *FUN_02033c9c(void *, unsigned int);
extern int FUN_02050c7c(void *);
extern void FUN_02033f70(void *, unsigned int, unsigned int);
extern void *FUN_02033c6c(void *, unsigned int);
extern void FUN_02033a24(void *);
extern void FUN_02037e2c(void *);

void FUN_02033eb4(char *s) {
    struct Node33 *node = *(struct Node33 **)(s + 24);
    while (node) {
        int count = node->count;
        int i;
        for (i = 0; i < count; i++) {
            unsigned int a = node->pairs[i].a;
            unsigned int b = node->pairs[i].b;
            if (a != 65535) {
                unsigned char *p = FUN_02033c9c(s, a);
                if (p && (p[13] || FUN_02050c7c(p))) {
                    if (b != 65535) FUN_02033f70(s, b, a);
                }
            } else if (b != 65535) {
                void *p = FUN_02033c6c(s, b);
                if (p) FUN_02033a24(p);
            }
        }
        node = node->next;
    }
    FUN_02037e2c(s);
}
