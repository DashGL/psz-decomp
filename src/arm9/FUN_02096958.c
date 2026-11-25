// flags: -O4,s
int FUN_02096958(char *self, int *out) {
    int count = 0, i;
    for (i = 0; i < 5; i++) {
        if (*(unsigned short *)(self + 36) & (1u << i)) {
            if (out) out[count] = i;
            count++;
            if (count >= 3) break;
        }
    }
    return count;
}
