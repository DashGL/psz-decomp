// flags: -O4,s
typedef struct {
    int x, y, z;
} Vector;
extern int FUN_0203d364(void *, Vector *);
extern void FUN_02035408(Vector *, int, int, int);
extern unsigned int FUN_02070810(void *, Vector *);
void FUN_0203dfa8(char *s) {
    Vector v, w;
    if (FUN_0203d364(s, &v) == 1 && *(unsigned char *)(s + 508) == 2) {
        int current, delta, target;
        FUN_02035408(&w, v.x, v.y, v.z);
        *(unsigned short *)(s + 194) = FUN_02070810(s, &w);
        current = *(unsigned short *)(s + 192);
        target = *(unsigned short *)(s + 194);
        delta = target - current;
        if (delta > 32768) delta = -(65536 - delta);
        else if (delta < -32768) delta += 65536;
        if (delta > 128 || delta < -128) *(unsigned short *)(s + 192) = current + (delta >> 3);
        else *(unsigned short *)(s + 192) = target;
        *(unsigned short *)(s + 318) = *(unsigned short *)(s + 192);
    }
}
