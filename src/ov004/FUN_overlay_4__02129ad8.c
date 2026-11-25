// flags: -O4,s
unsigned int FUN_overlay_4__02129ad8(void *unused, int mode, int index) {
    unsigned short table[2][6] = {
        { 59, 60, 63, 58, 61, 62 },
        { 69, 84, 87, 68, 85, 86 },
    };
    int row;
    if (mode == 0 || mode == 1 || mode == 5) row = 0;
    else row = 1;
    return table[row][index];
}
