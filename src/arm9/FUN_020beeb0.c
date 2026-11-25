//cpp
// flags: -O4,s
extern "C" char *FUN_020bee50(void *, unsigned int);
extern "C" void *FUN_020beeb0(void *self, unsigned int key) {
    char *entry = FUN_020bee50(self, key);
    if (entry) {
        void *value = *(void **)(entry + 12);
        int empty = (value == 0) ? 1 : 0;
        if (!empty) {
            int active = (entry[2] != 0) ? 1 : 0;
            if (!active) return value;
        }
    }
    return 0;
}
