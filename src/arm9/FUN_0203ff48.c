// flags: -O4,s
void *FUN_0203ff48(char *self) {
    char *record = *(char **)(self + 4); int i; for (i = 0; i < *(int *)(self + 8); i++, record += 52) if (!*(unsigned int *)(record + 16)) return record; return 0;
}
