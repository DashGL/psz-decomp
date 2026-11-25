// flags: -O4,p -noThumb
void FUN_0200d7b8(unsigned int *volatile *self) {
    if (*self != 0) {
        **self = 0;
        *self = 0;
    }
}
