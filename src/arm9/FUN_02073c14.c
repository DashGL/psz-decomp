// flags: -O4,s
typedef void (*Callback)(void *);
typedef struct {
    unsigned int pad[2];
    unsigned char **tables[16];
    unsigned char counts[16];
} Global;
extern Global *DAT_0211a210;

void FUN_02073c14(unsigned char *desc) {
    Global *g = DAT_0211a210;
    if (g) {
        int group = desc[2];
        unsigned char *entry;
        if (group < 16) {
            unsigned char **table = g->tables[group];
            if (table) {
                int index = desc[3];
                if (index < (int)g->counts[group]) {
                    entry = table[index];
                    if (entry && *(Callback *)(entry + 4)) {
                        goto found;
                    }
                }
            }
        }
        entry = 0;
    found:
        if (entry) {
            (*(Callback *)(entry + 4))(desc);
        }
    }
}
