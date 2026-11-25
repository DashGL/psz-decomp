// flags: -O4,s
struct Self02084534 {
    int pad;
    short table[68];
};
int FUN_02084534(struct Self02084534 *self, unsigned char *desc) {
    int group = desc[1];
    int kind = desc[3];
    if (group < 17 && kind < 4) {
        int index = kind + (group << 2);
        int value = self->table[index];
        value += desc[2];
        if (value < self->table[index + 1]) {
            return value;
        }
    }
    return -1;
}
