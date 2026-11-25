// flags: -O4,p
typedef unsigned int u32;
typedef unsigned long long u64;
typedef unsigned char u8;
typedef struct {
    u32 func;
    u32 param;
} Callback;
typedef struct {
    char *nick;
    char *uniquenick;
    char *email;
    char *firstname;
    char *lastname;
    char *homepage;
    int icquin;
    char zipcode[11];
    char countrycode[3];
    u32 longitude;
    u32 latitude;
    char place[128];
    int birthday;
    int birthmonth;
    int birthyear;
    int sex;
    int publicmask;
    char *aimname;
    int pic;
    int ooc;
    int ind;
    int inc;
    int mar;
    int ch;
    int i1;
    int o1;
    int con;
} InfoCache;
#define W(p,o) (*(u32 *)((char *)(p)+(o)))
extern const char DAT_020fda80[];
extern const char DAT_020fda88[];
extern const char DAT_020fdab8[];
extern const char DAT_020fdac4[];
extern const char DAT_020fda4c[];
extern const char DAT_020fda38[];
extern const char DAT_020fdad4[];
extern const char DAT_020fdadc[];
extern const char DAT_020fdaec[];
extern const char DAT_020fdaf4[];
extern const char DAT_020fdb00[];
extern const char DAT_020fdb0c[];
extern const char DAT_020fdb18[];
extern const char DAT_020fdb24[];
extern const char DAT_020fdb30[];
extern const char DAT_020fdb40[];
extern const char DAT_020fdb48[];
extern const char DAT_020fdb50[];
extern const char DAT_020fdb58[];
extern const char DAT_020fdb64[];
extern const char DAT_020fdb6c[];
extern const char DAT_020fdb74[];
extern const char DAT_020fdb7c[];
extern const char DAT_020fdb84[];
extern const char DAT_020fdb8c[];
extern const char DAT_020fdb94[];
extern const char DAT_020fdb9c[];
extern const char DAT_020fdba4[];
extern const char DAT_020fdbac[];
extern const char DAT_020fdbb4[];
extern const char DAT_020fdbbc[];
extern const char DAT_020fdbc4[];
extern const char DAT_020fdbcc[];
extern int FUN_020d1888(char **, char *, int);
extern void FUN_020d1b58(char **, int, const char *);
extern void FUN_020cb778(char **, int, int);
extern int FUN_020d191c(char *, const char *, char *, u32);
extern int FUN_020cf7a8(char **, int, char **);
extern int FUN_020cccd4(char **, int, int *, int *, int *);
extern char *FUN_020cf714(char **, int);
extern void FUN_020c7bec(void *);
extern char *FUN_020c77cc(char *);
extern void FUN_020cdfb8(char **, char *, InfoCache *);
extern char *FUN_020c7bcc(u32);
extern void FUN_020d1b74(char **, const char *);
extern void FUN_020ccd44(InfoCache *, char *);
extern int FUN_020cb81c(char **, Callback, char *, char *, int);
extern void FUN_020ce7d0(char **, char *);
#pragma thumb off
extern int FUN_02003f38(const char *, const char *, u32);
extern int FUN_02005898(const char *);
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern u64 FUN_02005340(const char *);
extern u32 FUN_02008718(u64);
#pragma thumb reset

#define FATAL(code, msg) do { \
    FUN_020d1b58(owner, (code), (msg)); \
    FUN_020cb778(owner, 3, 1); \
    return 3; \
} while (0)

#define NUMBER(key, field, missing) do { \
    if (!FUN_020d191c(message, DAT_##key, temp, 64)) \
        info.field = (missing); \
    else \
        info.field = FUN_02005898(temp); \
} while (0)

int FUN_020ccf44(char **owner, char *request, char *message)
{
    char temp[64];
    char nick[31];
    char uniquenick[21];
    char email[51];
    char firstname[31];
    char lastname[31];
    char aimname[51];
    char *profile;
    Callback cb;
    char *state = *owner;
    char *node;
    char *response;
    int id;
    int status;
    int cache;

    if (FUN_020d1888(owner, message, 1)) {
        return 4;
    }
    if (FUN_02003f38(message, DAT_020fda80, 4) != 0) {
        FATAL(1, DAT_020fda88);
    }
    if (!FUN_020d191c(message, DAT_020fdab8, temp, 64)) {
        FATAL(1, DAT_020fda88);
    }
    id = FUN_02005898(temp);
    if (id <= 0) {
        FUN_02000edc(DAT_020fdac4, DAT_020fda4c, DAT_020fda38, 346);
    }
    FUN_020cf7a8(owner, id, &profile);

    {
    InfoCache info = {0};
    char homepage[76];
    info.nick = nick;
    info.uniquenick = uniquenick;
    info.email = email;
    info.firstname = firstname;
    info.lastname = lastname;
    info.homepage = homepage;
    info.aimname = aimname;

    if (!FUN_020d191c(message, DAT_020fdad4, info.nick, 31)) info.nick[0] = 0;
    if (!FUN_020d191c(message, DAT_020fdadc, info.uniquenick, 21)) info.uniquenick[0] = 0;
    if (!FUN_020d191c(message, DAT_020fdaec, info.email, 51)) info.email[0] = 0;
    if (!FUN_020d191c(message, DAT_020fdaf4, info.firstname, 31)) info.firstname[0] = 0;
    if (!FUN_020d191c(message, DAT_020fdb00, info.lastname, 31)) info.lastname[0] = 0;
    NUMBER(020fdb0c, icquin, -1);
    if (!FUN_020d191c(message, DAT_020fdb18, info.homepage, 76)) info.homepage[0] = 0;
    if (!FUN_020d191c(message, DAT_020fdb24, info.zipcode, 11)) info.zipcode[0] = 0;
    if (!FUN_020d191c(message, DAT_020fdb30, info.countrycode, 3)) info.countrycode[0] = 0;
    if (!FUN_020d191c(message, DAT_020fdb40, temp, 64)) info.longitude = 0;
    else info.longitude = FUN_02008718(FUN_02005340(temp));
    if (!FUN_020d191c(message, DAT_020fdb48, temp, 64)) info.latitude = 0;
    else info.latitude = FUN_02008718(FUN_02005340(temp));
    if (!FUN_020d191c(message, DAT_020fdb50, info.place, 128)) info.place[0] = 0;
    if (!FUN_020d191c(message, DAT_020fdb58, temp, 64)) {
        info.birthday = 0;
        info.birthmonth = 0;
        info.birthyear = 0;
    } else {
        status = FUN_020cccd4(owner, FUN_02005898(temp), &info.birthday, &info.birthmonth, &info.birthyear);
        if (status) return status;
    }
    if (!FUN_020d191c(message, DAT_020fdb64, temp, 64)) info.sex = 1282;
    else if (temp[0] == '0') info.sex = 1280;
    else if (temp[0] == '1') info.sex = 1281;
    else info.sex = 1282;
    NUMBER(020fdb6c, publicmask, -1);
    if (!FUN_020d191c(message, DAT_020fdb74, info.aimname, 51)) info.aimname[0] = 0;
    NUMBER(020fdb7c, pic, 0);
    NUMBER(020fdb84, ooc, 0);
    NUMBER(020fdb8c, ind, 0);
    NUMBER(020fdb94, inc, 0);
    NUMBER(020fdb9c, mar, 0);
    NUMBER(020fdba4, ch, 0);
    NUMBER(020fdbac, i1, 0);
    NUMBER(020fdbb4, o1, 0);
    NUMBER(020fdbbc, con, 0);

    if (!FUN_020d191c(message, DAT_020fdbc4, temp, 64)) {
        FATAL(1, DAT_020fda88);
    }

    cache = W(state, 0x100);
    for (node = (char *)W(state, 0x5d4); node != 0; node = (char *)W(node, 0x4c)) {
        if (W(node, 16) == (u32)id && W(node, 0) == 101) {
            if (!profile) {
                profile = FUN_020cf714(owner, id);
            }
            W(node, 0) = 102;
            cache = 1;
        }
    }
    if (!profile && W(state, 0x100)) {
        profile = FUN_020cf714(owner, id);
    }
    if (cache) {
        FUN_020c7bec((void *)W(profile, 28));
        W(profile, 28) = 0;
        W(profile, 28) = (u32)FUN_020c77cc(temp);
    }
    if (W(state, 0x100)) {
        FUN_020cdfb8(owner, profile, &info);
    }
    cb = *(Callback *)(request + 12);
    if (cb.func) {
        response = FUN_020c7bcc(516);
        if (!response) {
            FUN_020d1b74(owner, DAT_020fdbcc);
            return 1;
        }
        FUN_020ccd44(&info, response);
        W(response, 0) = 0;
        W(response, 4) = id;
        status = FUN_020cb81c(owner, cb, response, request, 0);
        if (status) return status;
    }
    FUN_020ce7d0(owner, request);
    }
    return 0;
}
