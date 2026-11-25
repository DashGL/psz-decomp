// flags: -O4,s
extern int FUN_020baa40(void *), FUN_020baa54(void *, void *, int);
int FUN_020baab4(char *s, void *out, int max) {
    int total = 0, available = FUN_020baa40(s), pos; if (available > max) available = max; pos = *(int *)(s + 12); while (available > 0) { int len; pos %= *(int *)(s + 8); len = 4 * (*(unsigned char **)(s + 4))[pos]; if (len <= 0 || len > available) break; total += len; available -= len; pos += len; } if (total > 0) return FUN_020baa54(s, out, total); return 0;
}
