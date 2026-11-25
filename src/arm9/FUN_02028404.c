// flags: -O4,p -noThumb
int FUN_02028404(char *self, unsigned int command, unsigned int flags) {
    if (!self) {
        return -1;
    }
    switch (command) {
    case 3:
        return (*(signed char *)(self + 0x72) == 1) ? 0 : 4;
    case 4:
        if (flags & 4) {
            self[0x72] = 0;
        } else {
            self[0x72] = 1;
        }
        break;
    }
    return 0;
}
