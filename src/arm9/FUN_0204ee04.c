// flags: -O4,s -lang c++
struct Key4 { unsigned char b[4]; };
struct Sub1 {
    char pad[0x38];
    unsigned short max1;
    unsigned short max2;
};
struct Sub2 {
    unsigned short cur1;
    unsigned short cur2;
};
struct Msg {
    int pad0;
    unsigned char slot;
    unsigned char zero;
    unsigned short pad6;
    short amount;
    short other;
};
struct Actor {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual int GetType();
};

extern "C" {
void *FUN_02084638(Key4 *);
Actor *FUN_0208555c(int);
int FUN_0203ae60(void *);
int FUN_0204ef14(void *, int);
int FUN_0204ef7c(void *, int);
void FUN_0204e4e0(Msg *);
void FUN_020bce3c(Msg *);
}

static inline bool is_type1(Actor *s) { return s->GetType() == 1; }
static inline bool is_type3(Actor *s) { return s->GetType() == 3; }

extern "C" void FUN_0204ee04(int slot, Key4 *key) {
    Msg message;
    Key4 copy = *key;
    void *spec = FUN_02084638(&copy);
    if (!spec) return;
    int limit, amount, current, othercurrent, otherlimit, other;
    Actor *s;
    s = FUN_0208555c(slot);
    if (!s || FUN_0203ae60(s)) return;
    limit=0; amount=0; current=0; othercurrent=0; otherlimit=0; other=0;
    if (is_type1(s)) {
        Sub2 *p2 = (Sub2 *)((char *)s + 0x14e);
        Sub1 *p1 = (Sub1 *)((char *)s + 0x24);
        limit = p1->max1;
        amount = (short)FUN_0204ef14(spec, limit);
        otherlimit = p1->max2;
        current = p2->cur1;
        other = (short)FUN_0204ef7c(spec, otherlimit);
        othercurrent = p2->cur2;
    } else if (is_type3(s)) {
        Sub2 *p2 = (Sub2 *)((char *)s + 0x14e);
        Sub1 *p1 = (Sub1 *)((char *)s + 0x24);
        limit = p1->max1;
        amount = (short)FUN_0204ef14(spec, limit);
        otherlimit = p1->max2;
        current = p2->cur1;
        other = (short)FUN_0204ef7c(spec, otherlimit);
        othercurrent = p2->cur2;
    }
    if ((amount > 0 && current < limit) || (other > 0 && othercurrent < otherlimit)) {
        FUN_0204e4e0(&message);
        message.slot = (unsigned char)slot;
        message.zero = 0;
        message.amount = (short)amount;
        message.other = (short)other;
        FUN_020bce3c(&message);
    }
}
