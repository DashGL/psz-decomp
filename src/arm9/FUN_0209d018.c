// flags: -O4,s
extern int FUN_0207f078(void *, int *, int);
int FUN_0209d018(void **self, int index) {
    int count = 0;
    if (self[1] && index >= 0 && index < 20) {
        int out = 0, bit = 2 * index, i;
        for (i = 0; i < 2; i++, bit++)
            if (FUN_0207f078(self[1], &out, bit) && out) count++;
    }
    return count;
}
