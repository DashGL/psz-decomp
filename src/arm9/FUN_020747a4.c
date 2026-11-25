// flags: -O4,s
extern int FUN_020748ec(void *);
extern int FUN_02073fd8(void *);
extern void FUN_02036094(void *);
extern void FUN_020360a4(void *, int, int, int);
extern void FUN_020bce3c(void *);

typedef struct {
    unsigned int header;
    int id;
    signed char bytes[4];
} Packet;

void FUN_020747a4(char *s) {
    Packet p;
    int i;
    if (FUN_020748ec(s) == 1) {
        *(int *)(s + 0x170) += 1;
        if (*(int *)(s + 0x170) >= 30) {
            int changed;
            for (i = 0; i < 4; i++) {
                if (((signed char *)s)[0x160 + i] != ((signed char *)s)[0x164 + i]) {
                    changed = 1;
                    goto done;
                }
            }
            changed = 0;
        done:
            if (changed == 1) {
                signed char *src;
                FUN_02036094(&p);
                FUN_020360a4(&p, 6, 7, 12);
                p.id = -1;
                for (i = 0; i < 4; i++) {
                    p.bytes[i] = 0;
                }
                src = (signed char *)(s + 0x160);
                p.id = FUN_02073fd8(s);
                for (i = 0; i < 4; i++) {
                    p.bytes[i] = *src++;
                }
                FUN_020bce3c(&p);
                for (i = 0; i < 4; i++) {
                    ((signed char *)s)[0x164 + i] = ((signed char *)s)[0x160 + i];
                }
            }
            *(int *)(s + 0x170) = 0;
        }
    }
}
