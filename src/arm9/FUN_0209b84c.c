// flags: -O4,s
typedef struct { int v[3]; } Vec;
extern void FUN_02030da8(void *, void *);
extern void FUN_0209b680(void *, void *, int);
extern void FUN_020bce3c(void *);

void FUN_0209b84c(char *s) {
    int packet[7];
    Vec position;
    int header;
    unsigned int flag = (**(unsigned char **)(s + 76) & 2) != 0;
    if (!flag && !(*(int *)(s + 320) & 4)) {
        FUN_02030da8(&header, s);
        FUN_0209b680(packet, &header, 1);
        position = *(Vec *)(s + 28);
        packet[2] = position.v[0];
        packet[3] = position.v[1];
        packet[4] = position.v[2];
        ((char *)packet)[25] = *(signed char *)(*(char **)(s + 4) + 18);
        FUN_020bce3c(packet);
        *(int *)(s + 320) |= 4;
    }
}
