// flags: -O4,s
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
#define W(p,o) (*(u32 *)((p)+(o)))
#define H(p,o) (*(u16 *)((p)+(o)))
extern const char DAT_020fd7b0[];
extern const u8 DAT_020fd7b4[];
extern const char DAT_020fd7b8[];
extern const char DAT_020fd7c0[];
extern const char DAT_020fd7c8[];
extern const char DAT_020fd7d8[];
extern const char DAT_020fd80c[];
extern const char DAT_020fd814[];
extern const char DAT_020fd820[];
extern const char DAT_020fd82c[];
extern const char DAT_020fd83c[];
extern const char DAT_020fd844[];
extern const char DAT_020fd848[];
extern const char DAT_020fd854[];
extern const char DAT_020fd860[];
extern const char DAT_020fd86c[];
extern const char DAT_020fd878[];
extern const char DAT_020fd884[];
extern const char DAT_020fd88c[];
extern const char DAT_020fd898[];
extern const char DAT_020fd8a4[];
extern const char DAT_020fd8b4[];
extern const char DAT_020fd8c4[];
extern const char DAT_020fd8cc[];
extern const char DAT_020fd8d4[];
extern const char DAT_0211cfc8[];
extern void FUN_020cbafc(char *, int);
extern u32 FUN_02003c70(const char *);
extern u32 FUN_020c7428(const char *, u32, char *);
extern int FUN_02066274(char *, const char *, ...);
extern int FUN_020cf8e8(char **, char *, char *, u32 **);
extern int FUN_020cb184(char **, char *, const char *);
extern int FUN_020cb1a0(char **, char *, u32);

int FUN_020cbee0(char **owner, char *request)
{
    char *state = *owner;
    u32 *profile;
    char material[512];
    char identity[82];
    char digest[33];
    char prefix[11];
    const char *password;
    const char *name;

    FUN_020cbafc(request + 0x80, 32);
    password = request[0x1c2] ? request + 0x1c2 : state + 0x177;
    FUN_020c7428(password, FUN_02003c70(password), request + 0xa1);
    if (W(state, 0x1a4)) {
        FUN_02066274(prefix, DAT_020fd7b0, W(state, 0x1a4));
    } else {
        __memcpy(prefix, DAT_020fd7b4, 1);
    }
    if (request[0xc2]) {
        name = request + 0xc2;
    } else if (state[0x12f]) {
        FUN_02066274(identity, DAT_020fd7b8, prefix, state + 0x12f);
        name = identity;
    } else {
        FUN_02066274(identity, DAT_020fd7c0, prefix, state + 0x110, state + 0x144);
        name = identity;
    }
    FUN_02066274(material, DAT_020fd7c8, request + 0xa1, DAT_020fd7d8, name, request + 0x80, request, request + 0xa1);
    FUN_020c7428(material, FUN_02003c70(material), digest);
    if (W(state, 0x100)) {
        FUN_020cf8e8(owner, state + 0x110, state + 0x144, &profile);
        if (profile) {
            W(state, 0x19c) = profile[1];
            W(state, 0x1a0) = profile[0];
        }
    }
    FUN_020cb184(owner, state + 0x210, DAT_020fd80c);
    FUN_020cb184(owner, state + 0x210, DAT_020fd814);
    FUN_020cb184(owner, state + 0x210, request + 0x80);
    if (request[0xc2]) {
        FUN_020cb184(owner, state + 0x210, DAT_020fd820);
        FUN_020cb184(owner, state + 0x210, request + 0xc2);
    } else if (state[0x12f]) {
        FUN_020cb184(owner, state + 0x210, DAT_020fd82c);
        FUN_020cb184(owner, state + 0x210, state + 0x12f);
    } else {
        FUN_020cb184(owner, state + 0x210, DAT_020fd83c);
        FUN_020cb184(owner, state + 0x210, state + 0x110);
        FUN_020cb184(owner, state + 0x210, DAT_020fd844);
        FUN_020cb184(owner, state + 0x210, state + 0x144);
    }
    if (W(state, 0x19c)) {
        FUN_020cb184(owner, state + 0x210, DAT_020fd848);
        FUN_020cb1a0(owner, state + 0x210, W(state, 0x19c));
    }
    if (W(state, 0x1a0)) {
        FUN_020cb184(owner, state + 0x210, DAT_020fd854);
        FUN_020cb1a0(owner, state + 0x210, W(state, 0x1a0));
    }
    FUN_020cb184(owner, state + 0x210, DAT_020fd860);
    FUN_020cb1a0(owner, state + 0x210, W(state, 0x1a4));
    FUN_020cb184(owner, state + 0x210, DAT_020fd86c);
    FUN_020cb184(owner, state + 0x210, digest);
    if (W(state, 0x10c) == 1) {
        FUN_020cb184(owner, state + 0x210, DAT_020fd878);
    }
    FUN_020cb184(owner, state + 0x210, DAT_020fd884);
    FUN_020cb1a0(owner, state + 0x210, H(state, 0x230));
    FUN_020cb184(owner, state + 0x210, DAT_020fd88c);
    FUN_020cb1a0(owner, state + 0x210, W(state, 0x608));
    FUN_020cb184(owner, state + 0x210, DAT_020fd898);
    FUN_020cb184(owner, state + 0x210, DAT_0211cfc8);
    FUN_020cb184(owner, state + 0x210, DAT_020fd8a4);
    FUN_020cb1a0(owner, state + 0x210, W(state, 0x60c));
    FUN_020cb184(owner, state + 0x210, DAT_020fd8b4);
    FUN_020cb1a0(owner, state + 0x210, 3);
    FUN_020cb184(owner, state + 0x210, DAT_020fd8c4);
    FUN_020cb1a0(owner, state + 0x210, W(state, 0x62c));
    FUN_020cb184(owner, state + 0x210, DAT_020fd8cc);
    FUN_020cb184(owner, state + 0x210, DAT_020fd8d4);
    return 0;
}
