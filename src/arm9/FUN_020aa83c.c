// flags: -O4,s
//cpp
typedef struct {
    unsigned char key[4];
    int w[3];
} Record;

struct SubObj {
    virtual void v0();
    virtual void v1();
    virtual int first(Record *);
    virtual int second(Record *);
    virtual int third(Record *);
};

typedef struct {
    unsigned char pad0[0x20];
    SubObj sub;
    unsigned char pad1[0x7a - 0x24];
    unsigned char f7a;
    unsigned char pad2[0xdf8 - 0x7b];
    unsigned char t0[4];
    unsigned char t1_a;
    unsigned char t1_b;
    unsigned char t2_a;
    unsigned char t2_b;
} Actor;

extern "C" {
extern int FUN_0203b820(void *);
extern int FUN_0203b874(void *);
extern int FUN_0203a1fc(Record *);
extern void FUN_0203955c(Record *);

#define O(n) (*(int *)(out + (n)))

void FUN_020aa83c(Actor *s, char *out, int mode) {
    Record first;
    Record second;
    Record third;
    int rate = 0;
    int count = FUN_0203b820(s);
    if (!s->sub.first(&first)) {
        FUN_0203955c(&first);
    }
    if (!s->sub.second(&second)) {
        FUN_0203955c(&second);
    }
    if (!s->sub.third(&third)) {
        FUN_0203955c(&third);
    }
    O(0) = 0;
    O(4) = 3;
    O(156) = s->f7a +
             (((second.w[1] & 0x7f000000) >> 24) +
              (((second.w[0] & 0x000007f0) >> 4) +
               (((second.w[0] & 0x01fc0000) >> 18) +
                ((second.w[0] & 0x0003f800) >> 11))));
    O(160) = FUN_0203b874(s);
    O(164) = count;
    if (!FUN_0203a1fc(&second)) {
        rate = ((second.w[0] & (int)0xfe000000) >> 25) & 0x7f;
    }
    switch (mode) {
    case 35:
        O(128) = 0;
        if (count > 0 && count <= 4) {
            O(132) = s->t0[count - 1];
            O(132) = O(132) * rate / 100;
        } else {
            O(132) = 0;
        }
        O(136) = 0;
        O(28) = 3;
        O(152) = 1;
        break;
    case 36:
        O(60) = 2;
        O(64) = 5;
        O(72) = (s->t1_a + s->t1_b * rate / 100) * 30;
        O(68) = 100;
        O(76) = 1;
        O(28) = 2;
        O(152) = 2;
        break;
    case 37:
        O(80) = -count;
        O(84) = 100;
        O(92) = 1;
        O(88) = (s->t2_a + s->t2_b * rate / 100) * 30;
        O(152) = 3;
        break;
    }
}
}
