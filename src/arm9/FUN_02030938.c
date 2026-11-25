// flags: -O4,s
extern unsigned char DAT_02108c50[];
struct Table { char *base; int count; int kind; int check_kind; };
void *FUN_02030938(struct Table *s, signed char *key) {
    int invalid = 0;
    char *base = s->base;
    int index;
    unsigned int column;
    if (base == 0) invalid = 1;
    if (s->check_kind != 0) {
        int kind = s->kind;
        if (kind < 0 || key[1] != kind) invalid = 1;
    }
    index = key[2];
    if (index < 0 || index >= s->count) invalid = 1;
    column = (unsigned char)key[3];
    if (column >= 41) invalid = 1;
    if (invalid != 0) {
        DAT_02108c50[0] = 0;
        return (void *)0x02108c50;
    }
    return base + (column + 41 * index);
}
