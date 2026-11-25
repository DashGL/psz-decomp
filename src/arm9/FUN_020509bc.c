// flags: -O4,s
typedef struct { unsigned char b[4]; } Key509;
typedef struct { unsigned short rarity : 5; unsigned short rest : 11; } Spec1;
typedef struct { unsigned char rarity : 5; unsigned char rest : 3; } Spec2;
extern unsigned char *FUN_02084568(void *);
extern Spec1 *FUN_020845a8(void *);
extern Spec2 *FUN_020845fc(void *);
extern Spec1 *FUN_02084638(void *);

unsigned int FUN_020509bc(char *s, const Key509 *item) {
    if (item->b[0] == 0) {
        if (item->b[1] == 17) return *(unsigned short *)(s + 80);
        {
            Key509 a = *item;
            unsigned char *p = FUN_02084568(&a);
            if (item->b[3] == 3 || (p && ((*(unsigned short *)(p + 10) >> 11) + 1) >= 6))
                return *(unsigned short *)(s + 80);
            return *(unsigned short *)(s + 78);
        }
    }
    if (item->b[0] == 1) {
        Key509 b = *item;
        Spec1 *p = FUN_020845a8(&b);
        if (item->b[3] == 3 || (p && (p->rarity + 1) >= 6))
            return *(unsigned short *)(s + 80);
        return *(unsigned short *)(s + 76);
    }
    if (item->b[0] == 4) return *(unsigned short *)(s + 72);
    if (item->b[0] == 2) {
        Key509 c = *item;
        Spec2 *p = FUN_020845fc(&c);
        if (item->b[3] == 3 || (p && (p->rarity + 1) >= 6))
            return *(unsigned short *)(s + 80);
        return *(unsigned short *)(s + 76);
    }
    if (item->b[0] == 3) {
        Key509 d = *item;
        Spec1 *p = FUN_02084638(&d);
        if (item->b[3] == 3 || (p && (p->rarity + 1) >= 6))
            return *(unsigned short *)(s + 80);
        return *(unsigned short *)(s + 74);
    }
    return *(unsigned short *)(s + 74);
}
