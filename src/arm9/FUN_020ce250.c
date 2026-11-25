// flags: -O4,p
typedef unsigned int u32;
struct Pair {
    const char *key;
    const char *value;
};
extern int FUN_020c6e0c(void *);
extern struct Pair *FUN_020c6e10(void *, int);
extern int FUN_02066274(char *, const char *, ...);
extern u32 FUN_02003c70(const char *);
extern char *FUN_02003da4(char *, const char *);
extern void *FUN_020c7bcc(u32);
extern unsigned int FUN_020d1b74(void *, const char *);
extern void FUN_020c7af0(const char *, char *, u32, int);
extern const char DAT_020fdda0[], DAT_020fdd68[], DAT_020fddac[];

#define B64LEN(len) (((len) % 3) ? ((4 - ((len) % 3)) + (((len) * 4) / 3)) : (((len) * 4) / 3))

int FUN_020ce250(unsigned char **self, char **out) {
    unsigned char *state = *self;
    char header[64];
    char *cursor;
    u32 total = 0;
    int count;
    int i;

    count = FUN_020c6e0c(*(void **)(state + 0x3b4));
    FUN_02066274(header, DAT_020fdda0, count);
    for (i = 0; i < count; i++) {
        struct Pair *pair = FUN_020c6e10(*(void **)(state + 0x3b4), i);
        const char *k = pair->key;
        u32 key_len = B64LEN(FUN_02003c70(k));
        const char *v = pair->value;
        u32 val_len = B64LEN(FUN_02003c70(v));
        total += key_len + 2 + val_len;
    }
    *out = (char *)FUN_020c7bcc(total + FUN_02003c70(header) + 1);
    if (!*out) {
        FUN_020d1b74(self, DAT_020fdd68);
        return 1;
    }
    cursor = *out + FUN_02066274(*out, header);
    for (i = 0; i < count; i++) {
        struct Pair *pair = FUN_020c6e10(*(void **)(state + 0x3b4), i);
        const char *s;
        FUN_02003da4(cursor, DAT_020fddac);
        cursor++;
        s = pair->key;
        FUN_020c7af0(s, cursor, FUN_02003c70(s), 2);
        s = pair->key;
        cursor += B64LEN(FUN_02003c70(s));
        FUN_02003da4(cursor, DAT_020fddac);
        cursor++;
        s = pair->value;
        FUN_020c7af0(s, cursor, FUN_02003c70(s), 2);
        s = pair->value;
        cursor += B64LEN(FUN_02003c70(s));
    }
    return 0;
}
