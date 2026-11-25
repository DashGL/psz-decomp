// flags: -O4,s
void FUN_020a13c8(char *self, unsigned int value, unsigned int index) {
    if (index < 2) {
        if (value > 32767) value = 32767; { int *arr = (int *)(self + 144); int *p = &arr[index]; int narrowed = (short)value; if (narrowed > *p) *p = narrowed; }
    }
}
