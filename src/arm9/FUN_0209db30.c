// flags: -O4,s
extern void FUN_02030da8(void *, void *);
extern void FUN_0209db7c(void *, void *, int);
extern void FUN_020bce3c(void *);

enum { E0 = 0, E1 = 1 };

void FUN_0209db30(char *s) {
    if (!((**(unsigned char **)(s + 0x4c) & 1) ? E1 : E0) && !(*(unsigned int *)(s + 0x13c) & 2)) {
        int descriptor;
        int packet[3];
        FUN_02030da8(&descriptor, s);
        FUN_0209db7c(packet, &descriptor, 0);
        FUN_020bce3c(packet);
        *(unsigned int *)(s + 0x13c) |= 2;
    }
}
