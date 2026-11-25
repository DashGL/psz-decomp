// flags: -O4,p
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

typedef struct {
    u32 callback;
    u32 param;
} GPICallback;

#define W(p,o) (*(u32 *)((u8 *)(p)+(o)))
#define H(p,o) (*(u16 *)((u8 *)(p)+(o)))

extern const char DAT_020fd108[];
extern const char DAT_020fd144[];
extern const char DAT_020fd198[];
extern const char DAT_020fd1a4[];
extern const char DAT_020fd1ac[];
extern const char DAT_020fd1b4[];
extern const char DAT_020fd1bc[];
extern const char DAT_020fd1c8[];
extern const char DAT_020fd1d4[];
extern const char DAT_020fd1dc[];
extern const char DAT_020fd1e4[];
extern const char DAT_020fd1f0[];
extern const char DAT_020fd1fc[];
extern const char DAT_020fd208[];
extern const char DAT_020fd214[];
extern const char DAT_020fd220[];
extern const char DAT_020fd22c[];

extern u32 FUN_020c7788(u32);
extern int FUN_020d191c(char *, const char *, char *, int);
extern void FUN_020d1b58(u8 **, int, const char *);
extern void FUN_020cb778(u8 **, int, int);
extern void FUN_020d1b74(u8 **, const char *);
extern u8 *FUN_020cf714(u8 **, int);
extern u8 *FUN_020c7bcc(u32);
extern void FUN_020cf9a0(u8 *);
extern void FUN_020ce0c0(void *);
extern void *FUN_020c6da8(int, int, void (*)(void *));
extern void FUN_020c7bec(void *);
extern char *FUN_020c77cc(char *);
extern int FUN_020cb81c(u8 **, GPICallback, u8 *, void *, int);

#pragma thumb off
extern int FUN_02005898(const char *);
extern void *FUN_02001540(void *, int, u32);
#pragma thumb on

#define OOM() do { FUN_020d1b74(owner, DAT_020fd144); return 1; } while (0)
#define MALFORMED() do { FUN_020d1b58(owner, 1, DAT_020fd108); FUN_020cb778(owner, 3, 1); return 3; } while (0)
#define GET(key) do { if (!FUN_020d191c(message, DAT_##key, temp, 1024)) MALFORMED(); } while (0)
#define HTONL(x) ((((u32)(x) << 24) & 0xff000000u) | ((((u32)(x) << 8) & 0x00ff0000u) | ((((u32)(x) >> 24) & 0x000000ffu) | (((u32)(x) >> 8) & 0x0000ff00u))))
#define IP(key, off) do { GET(key); W(record, off) = HTONL(FUN_02005898(temp)); } while (0)
#define STRING(key, off) do { FUN_020c7bec((void *)W(record, off)); W(record, off) = 0; GET(key); W(record, off) = (u32)FUN_020c77cc(temp); } while (0)

int FUN_020ca330(u8 **owner, char *message)
{
    int id;
    u32 time;
    u8 *state = *owner;
    u8 *profile;
    u8 *record;
    u8 *response;
    char temp[1024];
    GPICallback callback;

    time = FUN_020c7788(0);
    GET(020fd198);
    id = FUN_02005898(temp);
    profile = FUN_020cf714(owner, id);
    if (!profile) OOM();

    record = (u8 *)W(profile, 12);
    if (!record) {
        W(profile, 12) = (u32)FUN_020c7bcc(60);
        if (!W(profile, 12)) OOM();
        FUN_02001540((void *)W(profile, 12), 0, 60);
        if (W(profile, 8)) {
            W((void *)W(profile, 12), 0) = W((void *)W(profile, 8), 0);
            FUN_020cf9a0((u8 *)W(profile, 8));
            W(profile, 8) = 0;
        } else {
            W((void *)W(profile, 12), 0) = W(state, 0x5d0)++;
        }
        W((void *)W(profile, 12), 56) = (u32)FUN_020c6da8(8, 1, FUN_020ce0c0);
        record = (u8 *)W(profile, 12);
        if (!W(record, 56)) OOM();
    }

    GET(020fd1a4);
    W(record, 4) = FUN_02005898(temp);
    IP(020fd1ac, 28);
    GET(020fd1b4);
    H(record, 32) = (u16)FUN_02005898(temp);
    IP(020fd1bc, 36);
    IP(020fd1c8, 40);
    GET(020fd1d4);
    H(record, 44) = (u16)FUN_02005898(temp);
    GET(020fd1dc);
    H(record, 46) = (u16)FUN_02005898(temp);
    GET(020fd1e4);
    W(record, 24) = FUN_02005898(temp);
    STRING(020fd1f0, 8);
    STRING(020fd1fc, 12);
    STRING(020fd208, 16);
    STRING(020fd214, 20);
    GET(020fd220);
    W(record, 52) = FUN_02005898(temp);
    GET(020fd22c);
    W(record, 48) = FUN_02005898(temp);

    callback = *(GPICallback *)(state + 0x1b8);
    if (callback.callback != 0) {
        int res;
        response = FUN_020c7bcc(12);
        if (!response) OOM();
        W(response, 4) = time;
        W(response, 8) = W(record, 0);
        W(response, 0) = (u32)id;
        res = FUN_020cb81c(owner, callback, response, 0, 0);
        if (res != 0) return res;
    }
    return 0;
}
