// flags: -O4,p -noThumb
extern void FUN_0205f9cc(void);
extern void FUN_0205fa00(unsigned int, unsigned int, unsigned int);
extern void FUN_0205fa6c(void);

void FUN_02018e9c(unsigned int resource, unsigned int manage) {
    if (manage) {
        FUN_0205f9cc();
    }
    FUN_0205fa00(resource + *(unsigned int *)(resource + 56), (*(unsigned int *)(resource + 44) & 65535) * 8, *(unsigned short *)(resource + 48) * 8);
    *(unsigned short *)(resource + 50) |= 1;
    if (manage) {
        FUN_0205fa6c();
    }
}
