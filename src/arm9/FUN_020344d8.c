// flags: -O4,s
extern void FUN_0206e6c0(void *, void *);
void FUN_020344d8(char *s, void *node, int index) {
    if (node) {
        unsigned valid = 0;
        do {
            if (index < 0) break;
            if (index >= 13) break;
            valid = 1;
        } while (0);
        if (valid) {
            void **slot = ((void **)(s + 0x80)) + index;
            if (!*slot) {
                *slot = node;
            } else {
                FUN_0206e6c0(*slot, node);
            }
        }
    }
}
