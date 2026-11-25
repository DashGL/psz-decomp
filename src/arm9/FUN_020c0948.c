// flags: -O4,s
extern signed char DAT_0211c644[];
int FUN_020c0948(const signed char *input, int count) {
    if (count >= 1 && count <= 3) {
        int i;
        signed char *out = DAT_0211c644;
        signed char *end = out + count;
        if (out < end) {
            for (; out < end; out++, input++) {
                *out = *input;
            }
        }
        return 1;
    }
    return 0;
}
