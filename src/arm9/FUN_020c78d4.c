// flags: -O4,p
extern unsigned int FUN_020c78a4(void);
int FUN_020c78d4(int low, int high) {
    int range = high - low;
    int num;
    if (range == 0) {
        return low;
    }
    num = (int)(FUN_020c78a4() % (unsigned int)range);
    return num + low;
}
