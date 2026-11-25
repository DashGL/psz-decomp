// flags: -O4,p
typedef unsigned int u32;
typedef unsigned char u8;

extern const char DAT_020fdad4[];
extern const char DAT_020fdadc[];
extern const char DAT_020fdaec[];
extern const char DAT_020fdaf4[];
extern const char DAT_020fdb00[];
extern const char DAT_020fdb0c[];
extern const char DAT_020fdb18[];
extern const char DAT_020fdb24[];
extern const char DAT_020fdb30[];
extern const char DAT_020fdb64[];
extern const char DAT_020fdb74[];
extern const char DAT_020fdb7c[];
extern const char DAT_020fdb84[];
extern const char DAT_020fdb8c[];
extern const char DAT_020fdb94[];
extern const char DAT_020fdb9c[];
extern const char DAT_020fdba4[];
extern const char DAT_020fdbac[];
extern const u8 DAT_020fdc34[];
extern const u8 DAT_020fdc38[];
extern const u8 DAT_020fdc3c[];
extern const char DAT_020fdccc[];
extern const char DAT_020fdcdc[];
extern const char DAT_020fdcec[];
extern const char DAT_020fdcfc[];
extern const char DAT_020fdd14[];
extern const char DAT_020fdd28[];
extern const char DAT_020fdd3c[];
extern const u8 DAT_020eb9d8[];

extern void FUN_020d1b74(u8 **, const char *);
extern void FUN_020d183c(char *, const char *, int);
extern u32 FUN_02003c70(const char *);
extern int FUN_02005898(const char *);
extern void FUN_020c77f0(char *);
extern void FUN_020d1b84(char *, char *);
extern int FUN_020cd564(u8 **, const char *, const char *);
extern int FUN_020cd594(u8 **, const char *, const char *);
extern int FUN_020cd5c4(u8 **, u32, int);

#define CHECK_RESULT(expr) do { int __r = (expr); if (__r != 0) return __r; } while (0)
#define ERROR(msg) do { FUN_020d1b74(owner, msg); return 2; } while (0)

static inline int my_toupper(int c) {
    return (c < 0 || c >= 128) ? c : DAT_020eb9d8[c];
}

int FUN_020cd8cc(u8 **owner, u32 field, const char *value)
{
    char buffer[256];
    char hash[45];
    u8 *state = *owner;
    char c;

    if (value == 0) {
        ERROR(DAT_020fdcdc);
    }

    switch (field) {
    case 0x700:
        if (value[0] == '\0') {
            ERROR(DAT_020fdcdc);
        }
        FUN_020d183c(buffer, value, 31);
        FUN_020d183c((char *)state + 0x110, buffer, 31);
        CHECK_RESULT(FUN_020cd564(owner, DAT_020fdad4, buffer));
        break;
    case 0x701:
        if (value[0] == '\0') {
            ERROR(DAT_020fdcdc);
        }
        FUN_020d183c(buffer, value, 21);
        FUN_020d183c((char *)state + 0x12f, buffer, 21);
        CHECK_RESULT(FUN_020cd564(owner, DAT_020fdadc, buffer));
        break;
    case 0x702:
        if (value[0] == '\0') {
            ERROR(DAT_020fdcdc);
        }
        FUN_020d183c(buffer, value, 51);
        FUN_020c77f0(buffer);
        FUN_020d183c((char *)state + 0x144, buffer, 51);
        CHECK_RESULT(FUN_020cd594(owner, DAT_020fdaec, buffer));
        break;
    case 0x703:
        if (value[0] == '\0') {
            ERROR(DAT_020fdcdc);
        }
        FUN_020d183c(buffer, value, 31);
        FUN_020d183c((char *)state + 0x177, buffer, 31);
        FUN_020d1b84((char *)state + 0x177, hash);
        CHECK_RESULT(FUN_020cd594(owner, DAT_020fdcec, hash));
        break;
    case 0x704:
        FUN_020d183c(buffer, value, 31);
        CHECK_RESULT(FUN_020cd564(owner, DAT_020fdaf4, buffer));
        break;
    case 0x705:
        FUN_020d183c(buffer, value, 31);
        CHECK_RESULT(FUN_020cd564(owner, DAT_020fdb00, buffer));
        break;
    case 0x707:
        FUN_020d183c(buffer, value, 76);
        CHECK_RESULT(FUN_020cd564(owner, DAT_020fdb18, buffer));
        break;
    case 0x708:
        FUN_020d183c(buffer, value, 11);
        CHECK_RESULT(FUN_020cd564(owner, DAT_020fdb24, buffer));
        break;
    case 0x709:
        if (FUN_02003c70(value) != 2) {
            ERROR(DAT_020fdcfc);
        }
        FUN_020d183c(buffer, value, 3);
        CHECK_RESULT(FUN_020cd564(owner, DAT_020fdb30, buffer));
        break;
    case 0x70b:
        c = (char)my_toupper((int)(signed char)value[0]);
        if (c == 'M') {
            __memcpy(buffer, DAT_020fdc34, 2);
        } else if (c == 'F') {
            __memcpy(buffer, DAT_020fdc38, 2);
        } else {
            __memcpy(buffer, DAT_020fdc3c, 2);
        }
        CHECK_RESULT(FUN_020cd564(owner, DAT_020fdb64, buffer));
        break;
    case 0x706:
        FUN_020d183c(buffer, value, 256);
        CHECK_RESULT(FUN_020cd564(owner, DAT_020fdb0c, buffer));
        break;
    case 0x70d:
        CHECK_RESULT(FUN_020cd5c4(owner, 0x70d, FUN_02005898(value)));
        break;
    case 0x70e:
        CHECK_RESULT(FUN_020cd5c4(owner, 0x70e, FUN_02005898(value)));
        break;
    case 0x70f:
        FUN_020d183c(buffer, value, 256);
        CHECK_RESULT(FUN_020cd564(owner, DAT_020fdd14, buffer));
        break;
    case 0x710:
        CHECK_RESULT(FUN_020cd5c4(owner, 0x710, FUN_02005898(value)));
        break;
    case 0x711:
        FUN_020d183c(buffer, value, 256);
        CHECK_RESULT(FUN_020cd564(owner, DAT_020fdd28, buffer));
        break;
    case 0x712:
        CHECK_RESULT(FUN_020cd5c4(owner, 0x712, FUN_02005898(value)));
        break;
    case 0x714:
        CHECK_RESULT(FUN_020cd5c4(owner, 0x714, FUN_02005898(value)));
        break;
    case 0x715:
        CHECK_RESULT(FUN_020cd5c4(owner, 0x715, FUN_02005898(value)));
        break;
    case 0x716:
        FUN_020d183c(buffer, value, 256);
        CHECK_RESULT(FUN_020cd564(owner, DAT_020fdd3c, buffer));
        break;
    case 0x717:
        FUN_020d183c(buffer, value, 51);
        CHECK_RESULT(FUN_020cd564(owner, DAT_020fdb74, buffer));
        break;
    case 0x718:
        FUN_020d183c(buffer, value, 256);
        CHECK_RESULT(FUN_020cd564(owner, DAT_020fdb7c, buffer));
        break;
    case 0x719:
        FUN_020d183c(buffer, value, 256);
        CHECK_RESULT(FUN_020cd564(owner, DAT_020fdb84, buffer));
        break;
    case 0x71a:
        FUN_020d183c(buffer, value, 256);
        CHECK_RESULT(FUN_020cd564(owner, DAT_020fdb8c, buffer));
        break;
    case 0x71b:
        FUN_020d183c(buffer, value, 256);
        CHECK_RESULT(FUN_020cd564(owner, DAT_020fdb94, buffer));
        break;
    case 0x71c:
        FUN_020d183c(buffer, value, 256);
        CHECK_RESULT(FUN_020cd564(owner, DAT_020fdb9c, buffer));
        break;
    case 0x71d:
        FUN_020d183c(buffer, value, 256);
        CHECK_RESULT(FUN_020cd564(owner, DAT_020fdba4, buffer));
        break;
    case 0x71e:
        FUN_020d183c(buffer, value, 256);
        CHECK_RESULT(FUN_020cd564(owner, DAT_020fdbac, buffer));
        break;
    default:
        ERROR(DAT_020fdccc);
    }

    return 0;
}
