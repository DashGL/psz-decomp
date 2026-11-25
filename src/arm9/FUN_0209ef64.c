// flags: -O4,s
unsigned int FUN_0209ef64(unsigned int object) {
    unsigned int index = 0; for (; index < 3; index++) { if (*(short *)(object + index * 4 + 0xe) == 0) break; } return index;
}
