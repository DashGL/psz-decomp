//cpp
// flags: -O4,s
struct Builtin {
    const char *name;
    void (*callback)(void *);
    signed char args[8];
    signed char result;
    signed char pad[3];
};

extern "C" {
extern const Builtin data_02125ff8[];
extern const char DAT_021266f0[], DAT_021266f4[], DAT_021266f8[], DAT_02126714[];
extern const char DAT_02126730[], DAT_02126734[], DAT_0212673c[], DAT_02126758[];
extern const char DAT_0212675c[], DAT_02126784[], DAT_0212678c[], DAT_02126794[];
extern const char DAT_021267b0[], DAT_021267c8[], DAT_021267e0[], DAT_02126804[];
extern const char DAT_0212680c[], DAT_02126824[], DAT_0212682c[], DAT_02126854[];
extern const char DAT_0212685c[], DAT_02126874[], DAT_0212688c[], DAT_021268a4[];

extern int FUN_overlay_17__02122828(void *);
extern int FUN_overlay_17__02123068(void *);
extern int FUN_020038ec(char *, unsigned, const char *, ...);
extern int FUN_02003e24(const char *, const char *);
extern unsigned *FUN_overlay_17__02122c28(void *);
extern unsigned *FUN_overlay_17__02124194(void *, const char *);
extern unsigned *FUN_overlay_17__02124200(void *, const char *);
extern void FUN_overlay_17__021227e0(void *, const char *);
extern void FUN_overlay_17__02122c0c(void *, const char *);
extern void FUN_overlay_17__02123df4(void *, unsigned);
extern void FUN_overlay_17__02123e28(void *, unsigned);
extern void FUN_overlay_17__02123e68(void *, const char *);
extern void FUN_overlay_17__02123f6c(void *, char *, unsigned);
extern unsigned FUN_overlay_17__02123eec(void *);
extern unsigned FUN_overlay_17__02123f20(void *);
extern char *FUN_02003dd4(char *, const char *, unsigned);
}

struct Basic {
    virtual void v0();
    virtual void v1();
    virtual void Check(int test, const char *msg);
    unsigned char pad[0xa144 - 4];
};

#define SELF ((signed char *)this)
#define TOKEN SELF[0x9d3c]
#define VALUE (*(unsigned *)(SELF + 0x9d40))
#define TEXT ((char *)SELF + 0x9d44)
#define CURSOR (*(const char **)(SELF + 0x9d18))
#define WORD(offset) (*(unsigned *)(SELF + (offset)))
#define NEXT() FUN_overlay_17__02122828(this)
#define EVAL() FUN_overlay_17__02123068(this)
#define CHECK(test, addr) this->Check((test), (addr))
#define LOOKUP() FUN_overlay_17__02124200(SELF + 0xd0, buffer)
#define CREATE() FUN_overlay_17__02124194(SELF + 0xd0, buffer)

extern "C" void FUN_overlay_17__021230f0(Basic *self) {
    char buffer[32];
    unsigned *entry, *named;
    const Builtin *builtin;
    int value, ascending, bound, i, type;
    unsigned start;
    const char *saved;
    signed char *s = (signed char *)self;
    switch (s[0x9d3c]) {
    case -107:
        do {
            FUN_overlay_17__02122828(self);
            if (s[0x9d3c] == ':' || s[0x9d3c] == 10 || s[0x9d3c] == 0) break;
            if (s[0x9d3c] == -125) {
                FUN_020038ec(buffer, 32, DAT_021266f0, (char *)s + 0x9d44);
                FUN_overlay_17__021227e0(self, buffer);
                FUN_overlay_17__02122828(self);
            } else {
                FUN_overlay_17__02123068(self);
                FUN_020038ec(buffer, 32, DAT_021266f4, *(unsigned *)(s + 0x9d40));
                FUN_overlay_17__021227e0(self, buffer);
            }
        } while (s[0x9d3c] == ';');
        break;
    case -124:
        FUN_overlay_17__02122828(self);
        value = FUN_overlay_17__02123068(self);
        self->Check(s[0x9d3c] != -123, DAT_021266f8);
        if (!value) {
            while (s[0x9d3c] != 10 && s[0x9d3c] != 0) FUN_overlay_17__02122828(self);
        } else {
            s[0x9d3c] = 10;
        }
        break;
    case -121:
        FUN_overlay_17__02122828(self);
        self->Check(s[0x9d3c] != -127, DAT_02126714);
        FUN_02003dd4((char *)s + 0x9d44, DAT_02126730, 2);
        entry = FUN_overlay_17__02124200(s + 0xd0, (char *)s + 0x9d44);
        FUN_overlay_17__02122c0c(self, (const char *)entry[9]);
        FUN_overlay_17__02122828(self);
        break;
    case -120:
        (*(unsigned *)(s + 0x9d30))++;
        FUN_020038ec(buffer, 32, DAT_02126734, *(unsigned *)(s + 0x9d30));
        entry = FUN_overlay_17__02124194(s + 0xd0, buffer);
        FUN_overlay_17__02122828(self);
        entry[9] = (unsigned)((*(const char **)(s + 0x9d18)) - 1);
        self->Check(s[0x9d3c] != -127, DAT_0212673c);
        FUN_02003dd4((char *)s + 0x9d44, DAT_02126758, 2);
        entry = FUN_overlay_17__02124200(s + 0xd0, (char *)s + 0x9d44);
        FUN_overlay_17__02122c0c(self, (const char *)entry[9]);
        FUN_overlay_17__02122828(self);
        break;
    case -119:
        self->Check((int)(*(unsigned *)(s + 0x9d30)) <= 0, DAT_0212675c);
        FUN_020038ec(buffer, 32, DAT_02126784, *(unsigned *)(s + 0x9d30));
        (*(unsigned *)(s + 0x9d30))--;
        entry = FUN_overlay_17__02124200(s + 0xd0, buffer);
        FUN_overlay_17__02122c0c(self, (const char *)entry[9]);
        FUN_overlay_17__02122828(self);
        break;
    case -113:
        (*(unsigned *)(s + 0x9d34))++;
        FUN_020038ec(buffer, 32, DAT_0212678c, *(unsigned *)(s + 0x9d34));
        entry = FUN_overlay_17__02124194(s + 0xd0, buffer);
        entry[9] = (unsigned)((*(const char **)(s + 0x9d18)) - 1);
        FUN_overlay_17__02122828(self);
        self->Check(s[0x9d3c] != -127, DAT_02126794);
        entry = FUN_overlay_17__02122c28(self);
        self->Check(s[0x9d3c] != '=', DAT_021267b0);
        FUN_overlay_17__02122828(self);
        FUN_overlay_17__02123068(self);
        entry[9] = *(unsigned *)(s + 0x9d40);
        self->Check(s[0x9d3c] != -112, DAT_021267c8);
        FUN_overlay_17__02122828(self);
        FUN_overlay_17__02123068(self);
        if (s[0x9d3c] == -110) {
            FUN_overlay_17__02122828(self);
            FUN_overlay_17__02123068(self);
        }
        break;
    case -111:
        saved = (*(const char **)(s + 0x9d18)) - 1;
        ascending = 1;
        FUN_overlay_17__02122828(self);
        named = 0;
        if (s[0x9d3c] == -127) named = FUN_overlay_17__02122c28(self);
        self->Check((int)(*(unsigned *)(s + 0x9d34)) <= 0, DAT_021267e0);
        FUN_020038ec(buffer, 32, DAT_02126804, *(unsigned *)(s + 0x9d34));
        entry = FUN_overlay_17__02124200(s + 0xd0, buffer);
        FUN_overlay_17__02122c0c(self, (const char *)entry[9]);
        FUN_overlay_17__02122828(self);
        entry = FUN_overlay_17__02122c28(self);
        if (named && FUN_02003e24((const char *)named, (const char *)entry)) {
            FUN_overlay_17__02122c0c(self, saved);
            FUN_overlay_17__02122828(self);
            self->Check(1, DAT_0212680c);
        }
        FUN_overlay_17__02122828(self);
        FUN_overlay_17__02123068(self);
        start = *(unsigned *)(s + 0x9d40);
        FUN_overlay_17__02122828(self);
        bound = FUN_overlay_17__02123068(self);
        if ((int)start > (int)(*(unsigned *)(s + 0x9d40))) ascending = 0;
        if (s[0x9d3c] == -110) {
            FUN_overlay_17__02122828(self);
            FUN_overlay_17__02123068(self);
            entry[9] += *(unsigned *)(s + 0x9d40);
        } else {
            entry[9]++;
        }
        if ((ascending && (int)entry[9] > bound) || (!ascending && (int)entry[9] < bound)) {
            FUN_overlay_17__02122c0c(self, saved);
            FUN_overlay_17__02122828(self);
            if (s[0x9d3c] == -127) FUN_overlay_17__02122c28(self);
            (*(unsigned *)(s + 0x9d34))--;
        }
        break;
    case -106:
        (*(unsigned *)(s + 0x9d38))++;
        FUN_020038ec(buffer, 32, DAT_02126824, *(unsigned *)(s + 0x9d38));
        entry = FUN_overlay_17__02124194(s + 0xd0, buffer);
        entry[9] = (*(unsigned *)(s + 0x9d1c)) - 1;
        FUN_overlay_17__02122828(self);
        if (!FUN_overlay_17__02123068(self)) {
            while (s[0x9d3c] != -105) FUN_overlay_17__02122828(self);
            FUN_overlay_17__02122828(self);
        }
        break;
    case -105:
        self->Check((int)(*(unsigned *)(s + 0x9d38)) <= 0, DAT_0212682c);
        FUN_020038ec(buffer, 32, DAT_02126854, *(unsigned *)(s + 0x9d38));
        (*(unsigned *)(s + 0x9d38))--;
        entry = FUN_overlay_17__02124200(s + 0xd0, buffer);
        FUN_overlay_17__02122c0c(self, (const char *)entry[9]);
        s[0x9d3c] = ':';
        break;
    case -122:
        FUN_overlay_17__02122828(self);
        FUN_overlay_17__02122828(self);
        break;
    case -118:
        s[0x9d3c] = 0;
        break;
    case -127:
        entry = FUN_overlay_17__02122c28(self);
        self->Check(s[0x9d3c] != '=', DAT_0212685c);
        FUN_overlay_17__02122828(self);
        FUN_overlay_17__02123068(self);
        entry[9] = *(unsigned *)(s + 0x9d40);
        break;
    case -108:
        value = 0;
        if (*(unsigned *)(s + 0x9d40) == ~0u) {
            entry = FUN_overlay_17__02124200(s + 0xd0, (char *)s + 0x9d44);
            self->Check(!entry, DAT_02126874);
            if (entry) value = entry[9];
        } else {
            value = *(unsigned *)(s + 0x9d40);
        }
        builtin = data_02125ff8 + value;
        value = FUN_overlay_17__02122828(self);
        self->Check(value != '(', DAT_0212688c);
        for (i = 0; i < 8; i++) {
            type = builtin->args[i];
            if (!type) {
                if (i == 0) FUN_overlay_17__02122828(self);
                break;
            }
            FUN_overlay_17__02122828(self);
            FUN_overlay_17__02123068(self);
            switch (type) {
            case 'i': FUN_overlay_17__02123df4(self, *(unsigned *)(s + 0x9d40)); break;
            case 'f': FUN_overlay_17__02123e28(self, *(unsigned *)(s + 0x9d40)); break;
            case 's': FUN_overlay_17__02123e68(self, (char *)s + 0x9d44); break;
            }
        }
        self->Check(s[0x9d3c] != ')', DAT_021268a4);
        builtin->callback(self);
        switch (builtin->result) {
        case 'i': *(unsigned *)(s + 0x9d40) = FUN_overlay_17__02123eec(self); break;
        case 'f': *(unsigned *)(s + 0x9d40) = FUN_overlay_17__02123f20(self); break;
        case 's': FUN_overlay_17__02123f6c(self, (char *)s + 0x9d44, 1024); break;
        }
        FUN_overlay_17__02122828(self);
        break;
    case -104:
        s[0xa144] = 0;
        FUN_overlay_17__02122828(self);
        break;
    case -103:
        break;
    }
}
