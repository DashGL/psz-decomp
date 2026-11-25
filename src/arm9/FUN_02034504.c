// flags: -O4,s
void FUN_02034504(char *s, char *object, int index) {
    if (object) {
        unsigned valid = 0;
        do {
            if (index < 0) break;
            if (index >= 13) break;
            valid = 1;
        } while (0);
        if (valid) {
            if (((char **)(s + 0x80))[index] == object) {
                ((char **)(s + 0x80))[index] = *(char **)(object + 0xc);
            }
        }
    }
}
