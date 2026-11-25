// flags: -O4,s
extern int FUN_0207f078(void *, void *, int);
int FUN_0209d054(void **s, int category, int index) {
    int count = 0;
    if (*s && category >= 0 && category < 20 && index >= 0 && index < 4) {
        int value = 0, slot = 8 * category + 2 * index, i;
        for (i = 0; i < 2; i++, slot++)
            if (FUN_0207f078(*s, &value, slot) && value) count++;
    }
    return count;
}
