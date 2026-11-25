// flags: -O4,s
extern void FUN_overlay_12__0212a740(int), FUN_overlay_12__02129d04(void *);
int FUN_overlay_12__02129c98(int *s) {
    if (s[16] == 1 && s[18] > 0) { int n = 0, i; for (i = 0; i < 4; i++) { if (s[19 + i]) { if (n == s[17]) { FUN_overlay_12__0212a740(i); FUN_overlay_12__02129d04(s); return 1; } n++; } } } return 0;
}
