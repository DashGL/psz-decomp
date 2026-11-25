// flags: -O4,s
void FUN_0209c6b8(signed char *s) {
    int i = 0; for (; i < 7; i++) if (s[i] >= 2) { s[i]--; if (s[i] <= 2) s[i] = 0; } { int r, c; for (r = 0; r < 4; r++) for (c = 0; c < 27; c++) { signed char *p = s + 28 * r + c; if (p[8] >= 2) { p[8]--; if (p[8] <= 2) p[8] = 0; } } }
}
