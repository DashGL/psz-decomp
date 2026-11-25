// flags: -O4,s
extern void FUN_02030da8(void *, void *);
extern void FUN_0209d5f8(void *, void *, int);
extern void FUN_020bce3c(void *);
extern void FUN_02030808(void *, int, int);
extern int FUN_02030700(void *);

void FUN_0209d668(char *s) {
    int header;
    int packet[3];
    unsigned int flag = 1;
    if (!(**(unsigned char **)(s + 76) & 1)) {
        flag = 0;
    }
    if (!flag && !(*(int *)(s + 328) & 1)) {
        FUN_02030da8(&header, s);
        FUN_0209d5f8(packet, &header, 0);
        FUN_020bce3c(packet);
        *(int *)(s + 328) |= 1;
        if (!FUN_02030700(s + 312)) {
            FUN_02030808(s + 312, 1, 0);
        }
    }
}
