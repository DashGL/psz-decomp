// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern void FUN_02030da8(void *, void *);
extern void FUN_020a2978(void *, void *, signed char, int);
extern void FUN_020bce3c(void *);
extern int FUN_0203068c(void *);

void FUN_020a3060(char *s) {
    int key;
    int packet[3];
    unsigned char flags = **(unsigned char **)(s + 76);
    if ((((flags & 8) ? E1 : E0) == 0) && (((flags & 4) ? E1 : E0) == 0) && !(*(int *)(s + 312) & 2)) {
        ++((signed char *)s)[385];
        if (((signed char *)s)[385] >= ((signed char *)s)[384]) {
            FUN_02030da8(&key, s);
            FUN_020a2978(packet, &key, (signed char)FUN_0203068c(s), 2);
            FUN_020bce3c(packet);
            *(int *)(s + 312) |= 2;
        }
    }
}
