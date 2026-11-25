// flags: -O4,s
extern void FUN_02035408(void *, int, int, int);
extern const short DAT_020ed83c[];
void FUN_0207a1ec(void *out, int *in, int angle) {
    int index = (angle >> 4) << 1;
    int s = DAT_020ed83c[index];
    int c = DAT_020ed83c[index + 1];
    int x = (s * 4736) >> 12;
    int z = (c * 4736) >> 12;
    FUN_02035408(out, x + in[0], in[1] + 4736, z + in[2]);
}
