// flags: -O4,s
typedef struct {
    unsigned char a;
    unsigned char b;
    unsigned char c : 7;
    unsigned char d : 1;
} Entry;

void FUN_0208093c(char *self) {
    if (*(void **)(self + 4) && ((signed char *)self)[18] >= 0 && ((signed char *)self)[18] < 3) {
        char *table;
        signed char *desc;
        Entry *entry;
        int start, count, i = 0;
        *(int *)(self + 8) = 0;
        self[20] = 1;
        table = *(char **)(self + 4);
        desc = (signed char *)(table + 2 * ((signed char *)self)[18]);
        start = desc[0];
        entry = (Entry *)(*(char **)(table + 12) + 3 * start);
        count = desc[1];
        if (count > 0) {
            for (; i < count; i++, entry++) {
                self[12 + i] = entry->c;
            }
        }
    }
}
