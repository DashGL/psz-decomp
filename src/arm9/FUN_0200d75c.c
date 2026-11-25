// flags: -O4,p -noThumb
extern char DAT_02101e3c[];
extern void *FUN_02011b20(void *, void *);
extern void FUN_0200dcd0(void *, unsigned int);

void FUN_0200d75c(unsigned int value) {
    void *node = FUN_02011b20(DAT_02101e3c, 0);
    while (node) {
        void *next = FUN_02011b20(DAT_02101e3c, node);
        FUN_0200dcd0(node, value);
        node = next;
    }
}
