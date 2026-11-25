// flags: -O4,s
int FUN_02075090(char *self) {
    int i; for (i = 0; i < *(int *)(self + 180); i++) { char *p = *(char **)(self + 176) + 8 * i; if (*(short *)(p + 4) & 1) return 0; } return 1;
}
