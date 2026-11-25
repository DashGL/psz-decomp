// flags: -O4,p
typedef struct {
    char *entries;
    unsigned char offsets[20];
} Table;

extern char *DAT_0211a500[];
extern int FUN_0203a820(void *, int);

void *FUN_020845a8(unsigned char *desc) {
    char *root = DAT_0211a500[3];
    if (root) {
        Table *p = *(Table **)(root + 12);
        if (p) {
            if (FUN_0203a820(desc, 1)) {
                int a = desc[1];
                int b = desc[3];
                if (a < 4 && b < 4) {
                    int idx = b + 4 * a;
                    int base = ((volatile Table *)p)->offsets[idx];
                    int n = base + *(volatile unsigned char *)(desc + 2);
                    if (n < p->offsets[idx + 1]) {
                        return p->entries + 16 * n;
                    }
                }
            }
            return 0;
        }
    }
    return 0;
}
