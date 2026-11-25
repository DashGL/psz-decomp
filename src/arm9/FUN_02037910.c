// flags: -O4,p
void FUN_02037910(unsigned int *self, void *child) {
    unsigned int ok = (self[11] & 1) ? 1 : 0;
    if (ok == 0) {
        ((void **)self)[3] = child;
    }
}
