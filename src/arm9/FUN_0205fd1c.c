// flags: -O4,p -noThumb
void FUN_0205fd1c(const unsigned char *table, unsigned char *state, const unsigned char *data, unsigned int count) {
    unsigned char value = *state;
    unsigned int i;
    for (i = 0; i < count; i++) {
        value = table[(unsigned char)(value ^ *data++)];
    }
    *state = value;
}
