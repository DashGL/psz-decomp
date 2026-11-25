// flags: -O4,s
typedef struct { unsigned char bytes[4]; } Copy_020b681c;
struct Rec020b681c {
    unsigned char pad[6];
    signed char sub;
    unsigned char pad2;
    unsigned short type : 6;
    unsigned short rest : 10;
};
extern struct Rec020b681c *FUN_02084568(void *);
extern int FUN_020848e0(int, int);
int FUN_020b681c(void *self, unsigned char *desc) {
    Copy_020b681c copy = *(const Copy_020b681c *)desc;
    struct Rec020b681c *p = FUN_02084568(&copy);
    if (p && p->type == 2) {
        return FUN_020848e0(p->type, p->sub);
    }
    return 0;
}
