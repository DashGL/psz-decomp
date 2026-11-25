// flags: -O4,s
extern void FUN_02072c20(void *, int, int);
void FUN_02072d28(volatile int *self) {
    int state = self[2];
    if (state != -1) {
        if (state == 0 || state == 10 || state == 2) {
            self[3] = self[2];
        } else {
            self[3] = 0;
        }
        FUN_02072c20((void *)self, -1, 0);
        self[5] = 0;
        self[4] = 0;
    }
}
