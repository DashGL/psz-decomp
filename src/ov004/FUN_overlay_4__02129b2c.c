// flags: -O4,s
unsigned int FUN_overlay_4__02129b2c(void *unused, int mode, int index, int subindex) {
    unsigned short table[2][2][2] = {
        { { 64, 65 }, { 66, 67 } },
        { { 88, 89 }, { 90, 91 } },
    };
    int row;
    if (mode == 0 || mode == 1 || mode == 5) row = 0;
    else row = 1;
    return table[row][index][subindex];
}
