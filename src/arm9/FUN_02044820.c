// flags: -O4,s
int FUN_02044820(char *s, int key) { if (key != -1) { int count = *(int *)(s + 0xa4), i; for (i = 0; i < count; i++) { int v = *(int *)(*(char **)(s + 0xa0) + 52 * i); if (v == key) return i; } } return -1; }
