// flags: -O4,s
int FUN_02073fb0(unsigned int *self) {
    int count, i; signed char *p; if (self[12] == 6) return 1; count = 0; p = (signed char *)self[11]; for (i = 0; i < 4; i++) if (p[i + 12] == 1) count++; return count;
}
