// flags: -O4,s
extern signed char DAT_0211a3c4[];
void *FUN_0203686c(char *self, unsigned int index) {
    unsigned int base = 3 * index; int selector = DAT_0211a3c4[13]; char *container = *(char **)(self + 20); char *table = *(char **)(container + 52); return table + 40 * (base + selector);
}
