//cpp
// flags: -O4,s
extern "C" int FUN_0203b7e0(char *s) {
    int index = *(unsigned char *)(s + 0x181);
    if (index) {
        int valid = (index >= 0 && index < 18) ? 1 : 0;
        if (valid) {
            int group = (*(unsigned int *)(s + 0x184) & 15) - 1;
            if (group >= 0 && group < 3) {
                int res = group * 18;
                return res + index;
            }
            return index;
        }
    }
    return 0;
}
