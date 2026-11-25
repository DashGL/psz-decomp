// flags: -O4,p
extern const unsigned int DAT_020f2dd0[][5];
unsigned int FUN_0207f774(int kind, int level) {
    if (kind == 1) { int index = level - 1; if (index >= 0 && index < 5) return DAT_020f2dd0[kind][index]; } return 4096;
}
