// flags: -O4,s
typedef struct { char *entries; unsigned char offsets[8]; } Table;
extern char *DAT_0211a500[];
extern int FUN_0203a820(void *, int);
void *FUN_02084638(unsigned char *key) {
    char *root = DAT_0211a500[3];
    if (root) {
        Table *table = *(Table **)(root + 4);
        if (table) {
            if (FUN_0203a820(key, 3)) {
                int category = key[1];
                if (category >= 0 && category < 7) {
                    unsigned char base = table->offsets[category];
                    int index = base + key[2];
                    if (index < table->offsets[category + 1]) return table->entries + 4 * index;
                }
            }
            return 0;
        }
    }
    return 0;
}