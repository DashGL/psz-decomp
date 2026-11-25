// flags: -O4,s
void FUN_overlay_12__02122e54(int *s) {
    if (s[3] > 0) {
        s[3] = s[3] - 1;
    } else {
        s[3] = s[1] - 1;
    }
}
