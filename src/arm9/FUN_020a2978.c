// flags: -O4,s
void FUN_020a2978(char *out, signed char *in, int a, int b) {
    out[0] = 1;
    out[1] = 0;
    out[2] = 0;
    out[3] = 0;
    out[4] = in[0];
    out[5] = in[1];
    out[6] = in[2];
    out[7] = ((unsigned char *)in)[3];
    out[8] = a;
    out[9] = b;
    out[10] = 0;
    out[11] = 0;
    out[2] = 5;
    out[3] = 12;
    out[0] = 3;
}
