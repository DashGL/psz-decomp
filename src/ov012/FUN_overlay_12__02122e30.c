// flags: -O4,s
void FUN_overlay_12__02122e30(int *s) {
    if (s[4] > 0) {
        s[4] = s[4] - 1;
    } else {
        s[4] = s[2] - 1;
    }
}
