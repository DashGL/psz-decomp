// flags: -O4,s
typedef struct {
    unsigned int x, y, z;
} Vec;

struct Rec_0203b9b0 {
    unsigned int unk0;
    unsigned int unk4;
    struct {
        unsigned char val;
        unsigned char pad[3];
        int amt;
    } slots[2];
};

extern void FUN_0207f934(void *, void *);
extern void FUN_0207f960(void *, void *);
extern int FUN_02085880(unsigned int);
extern void FUN_0203666c(void *);
extern void FUN_020345f0(Vec *, void *);
extern void *FUN_02046d94(void *, int, int);
extern void FUN_0207f528(void *, int);

int FUN_0203b9b0(unsigned char *s, int type, int value, int amount) {
    if (type >= 0 && type < 2) {
        if (value > 0 && value <= 5) {
            if (amount > 0) {
                struct Rec_0203b9b0 r;
                FUN_0207f934(s + 0x158, &r);
                r.slots[type].val = (unsigned char)value;
                r.slots[type].amt = amount;
                FUN_0207f960(s + 0x158, &r);
                if (FUN_02085880(*(unsigned int *)(s + 0xfc))) {
                    unsigned int effect[25];
                    Vec v;
                    int flag;
                    FUN_0203666c(effect);
                    FUN_020345f0(&v, s + 0x9c);
                    *(Vec *)((unsigned char *)effect + 0x20) = v;
                    *(unsigned short *)((unsigned char *)effect + 0x3a) = *(unsigned short *)(s + 0xc0);
                    effect[22] = *(unsigned int *)(s + 0xfc);
                    effect[21] = 29;
                    flag = 0;
                    if (type == 1) {
                        flag = 1;
                    }
                    FUN_02046d94(effect, value, flag);
                }
                return 1;
            }
        } else {
            FUN_0207f528(s + 0x158, type);
            return 1;
        }
    }
    return 0;
}
