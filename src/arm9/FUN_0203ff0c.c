// flags: -O4,s
void *FUN_0203ff0c(char *self, int key) {
    if (key != -1) {
        char *record = *(char **)(self + 4);
        int count = *(int *)(self + 8);
        int i;
        for (i = 0; i < count; i++, record += 52) {
            int value = *(unsigned int *)(record + 16) ? ***(signed char ***)(record + 8) : -1;
            if (key == value) return record;
        }
    }
    return 0;
}
