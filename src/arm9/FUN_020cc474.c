// flags: -O4,p
typedef unsigned int u32;
typedef unsigned char u8;
typedef struct {
    u32 func;
    u32 param;
} Callback;
#define W(p,o) (*(u32 *)((char *)(p)+(o)))
extern const char DAT_020fd7a0[];
extern const char DAT_020fd7b0[];
extern const u8 DAT_020fd7b4[];
extern const char DAT_020fd7b8[];
extern const char DAT_020fd7c0[];
extern const char DAT_020fd7c8[];
extern const char DAT_020fd7d8[];
extern const char DAT_020fd814[];
extern const char DAT_020fd82c[];
extern const char DAT_020fd848[];
extern const char DAT_020fd854[];
extern const char DAT_020fd914[];
extern const char DAT_020fd91c[];
extern const char DAT_020fd924[];
extern const char DAT_020fd954[];
extern const char DAT_020fd95c[];
extern const char DAT_020fd98c[];
extern const char DAT_020fd994[];
extern const char DAT_020fd9a0[];
extern const char DAT_020fd9a8[];
extern const char DAT_020fd9b0[];
extern int FUN_020d1888(char **, char *, int);
extern int FUN_020d191c(char *, const char *, char *, int);
extern void FUN_020cf87c(char **, u32);
extern void FUN_020d1b58(char **, int, const char *);
extern void FUN_020cb778(char **, int, int);
extern int FUN_020cc280(char **, char *);
extern int FUN_020cbee0(char **, char *);
extern u32 FUN_020c7428(const char *, u32, char *);
extern char *FUN_020cf714(char **, u32);
extern char *FUN_020c7bcc(u32);
extern void FUN_020d1b74(char **, const char *);
extern void FUN_020d183c(char *, const char *, int);
extern int FUN_020cb81c(char **, Callback, char *, char *, int);
extern void FUN_020ce7d0(char **, char *);
#pragma thumb off
extern int FUN_02005898(const char *);
extern int FUN_02003f38(const char *, const char *, u32);
extern int FUN_02066274(char *, const char *, ...);
extern u32 FUN_02003c70(const char *);
extern int FUN_020015ac(const void *, const void *, u32);
extern void *FUN_02001540(void *, int, u32);
#pragma thumb reset

#define FATAL(code, msg) do { \
    FUN_020d1b58(owner, (code), (msg)); \
    FUN_020cb778(owner, 3, 1); \
    return 3; \
} while (0)

int FUN_020cc474(char **owner, char *request, char *message)
{
    char temp[512];
    char identity[82];
    char digest[33];
    char unique[21];
    char prefix[11];
    Callback cb;
    char *state = *owner;
    char *data;
    char *profile;
    char *response;
    const char *user;
    int status;

    if (FUN_020d1888(owner, message, 0)) {
        if (W(state, 0x5b8) == 262 && W(state, 0x1a0)) {
            FUN_020cf87c(owner, W(state, 0x1a0));
            W(state, 0x19c) = 0;
            W(state, 0x1a0) = 0;
        } else if (W(state, 0x5b8) == 513) {
            if (FUN_020d191c(message, DAT_020fd914, temp, 512)) {
                W(state, 0x1a0) = FUN_02005898(temp);
            }
        }
        FUN_020d1b58(owner, W(state, 0x5b8), state);
        FUN_020cb778(owner, 4, 1);
        return 4;
    }

    data = (char *)W(request, 4);
    switch (W(request, 20)) {
    case 1:
        if (FUN_02003f38(message, DAT_020fd91c, 5) != 0) {
            FATAL(1, DAT_020fd924);
        }
        if (!FUN_020d191c(message, DAT_020fd814, data, 128)) {
            FATAL(1, DAT_020fd924);
        }
        if (W(data, 0x304)) {
            status = FUN_020cc280(owner, data);
            if (status) return status;
            W(request, 20) = 3;
        } else {
            status = FUN_020cbee0(owner, data);
            if (status) return status;
            W(request, 20) = 2;
        }
        break;
    case 3:
        if (FUN_02003f38(message, DAT_020fd954, 5) != 0) {
            FATAL(1, DAT_020fd924);
        }
        if (!FUN_020d191c(message, DAT_020fd848, temp, 512)) {
            FATAL(1, DAT_020fd95c);
        }
        W(state, 0x19c) = FUN_02005898(temp);
        if (!FUN_020d191c(message, DAT_020fd854, temp, 512)) {
            FATAL(1, DAT_020fd95c);
        }
        W(state, 0x1a0) = FUN_02005898(temp);
        status = FUN_020cbee0(owner, data);
        if (status) return status;
        W(request, 20) = 2;
        break;
    case 2:
        if (FUN_02003f38(message, DAT_020fd98c, 5) != 0) {
            FATAL(1, DAT_020fd924);
        }
        if (!FUN_020d191c(message, DAT_020fd994, temp, 512)) {
            FATAL(1, DAT_020fd95c);
        }
        W(state, 0x198) = FUN_02005898(temp);
        if (!FUN_020d191c(message, DAT_020fd848, temp, 512)) {
            FATAL(1, DAT_020fd95c);
        }
        W(state, 0x19c) = FUN_02005898(temp);
        if (!FUN_020d191c(message, DAT_020fd854, temp, 512)) {
            FATAL(1, DAT_020fd95c);
        }
        W(state, 0x1a0) = FUN_02005898(temp);
        if (!FUN_020d191c(message, DAT_020fd82c, unique, 21)) {
            unique[0] = 0;
        }
        if (!FUN_020d191c(message, DAT_020fd9a0, state + 0x610, 25)) {
            state[0x610] = 0;
        }
        if (W(state, 0x1a4)) {
            FUN_02066274(prefix, DAT_020fd7b0, W(state, 0x1a4));
        } else {
            __memcpy(prefix, DAT_020fd7b4, 1);
        }
        if (data[0xc2]) {
            user = data + 0xc2;
        } else if (state[0x12f]) {
            FUN_02066274(identity, DAT_020fd7b8, prefix, state + 0x12f);
            user = identity;
        } else {
            FUN_02066274(identity, DAT_020fd7c0, prefix, state + 0x110, state + 0x144);
            user = identity;
        }
        FUN_02066274(temp, DAT_020fd7c8, data + 0xa1, DAT_020fd7d8, user, data, data + 0x80, data + 0xa1);
        FUN_020c7428(temp, FUN_02003c70(temp), digest);
        if (!FUN_020d191c(message, DAT_020fd9a8, temp, 512)) {
            FATAL(1, DAT_020fd95c);
        }
        if (FUN_020015ac(digest, temp, 32) != 0) {
            FATAL(264, DAT_020fd9b0);
        }
        if (W(state, 0x100)) {
            profile = FUN_020cf714(owner, W(state, 0x1a0));
            W(profile, 0) = W(state, 0x1a0);
            W(profile, 4) = W(state, 0x19c);
        }
        W(state, 0x1f4) = 3;
        cb = *(Callback *)(request + 12);
        if (cb.func) {
            response = FUN_020c7bcc(32);
            if (!response) {
                FUN_020d1b74(owner, DAT_020fd7a0);
                return 1;
            }
            FUN_02001540(response, 0, 32);
            W(response, 4) = W(state, 0x1a0);
            W(response, 0) = 0;
            FUN_020d183c(response + 8, unique, 21);
            status = FUN_020cb81c(owner, cb, response, request, 0);
            if (status) return status;
        }
        FUN_020ce7d0(owner, request);
        break;
    }
    return 0;
}
