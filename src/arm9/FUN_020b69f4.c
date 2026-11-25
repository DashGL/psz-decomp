// flags: -O4,s
typedef struct { unsigned char b[4]; } Key;
extern void *FUN_020845fc(void *);
extern int FUN_020b68bc(void *, int), FUN_020b68d8(void *, int);
int FUN_020b69f4(void *unused, char *items) {
    int total = 0;
    unsigned int i;
    int j;
    for (i = 0; i < 5; i++) {
        Key header = *(Key *)(items + 16 * i);
        void *p = FUN_020845fc(&header);
        if (p) for (j = 0; j < 3; j++) if (FUN_020b68bc(p, j) == 3) total += FUN_020b68d8(p, j);
    }
    return total;
}
