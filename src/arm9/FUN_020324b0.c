// flags: -O4,s
void FUN_020324b0(char *record) {
    int i;
    *(unsigned short *)(record + 4) = 0;
    *(unsigned int *)(record + 8) = 0;
    for (i = 0; i < 4; i++) *(unsigned int *)(record + 12 + i * 4) = 0;
}
