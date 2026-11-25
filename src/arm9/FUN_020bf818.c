// flags: -O4,p
extern const int DAT_020f5be4[];
extern void FUN_02034e8c(void *, void *);
void FUN_020bf818(int *s, int *out) {
    switch (s[0]) {
    case 0:
        FUN_02034e8c(out, s + 1);
        break;
    case 1:
        out[0] = (s[1] + s[3]) / 2;
        out[1] = (s[2] + s[4]) / 2;
        break;
    case 2:
        FUN_02034e8c(out, s + 1);
        break;
    default:
        out[0] = DAT_020f5be4[6];
        out[1] = DAT_020f5be4[7];
        break;
    }
}
