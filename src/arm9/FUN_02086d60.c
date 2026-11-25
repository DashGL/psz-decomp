// flags: -O4,s
extern int FUN_02035b60(int);
void FUN_02086d60(int *out, int *low, int *high) {
    int value;
    unsigned int valid = (*high > *low);
    if (valid) {
        value = *low + FUN_02035b60(*high - *low);
    } else {
        value = *(int *)low;
    }
    *out = value;
}