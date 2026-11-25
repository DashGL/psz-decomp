// flags: -O4,p
extern unsigned int FUN_020d1b74(void *, const char *);
extern int FUN_02066274(char *, const char *, ...);
extern int FUN_020cd564(void *, const char *, const char *);
extern int FUN_020cd594(void *, const char *, const char *);
extern const char DAT_020fdb0c[];
extern const char DAT_020fdb24[];
extern const char DAT_020fdb64[];
extern const char DAT_020fdb7c[];
extern const char DAT_020fdb84[];
extern const char DAT_020fdb8c[];
extern const char DAT_020fdb94[];
extern const char DAT_020fdb9c[];
extern const char DAT_020fdba4[];
extern const char DAT_020fdbac[];
extern const char DAT_020fdc1c[];
extern const char DAT_020fdc30[];
extern const char DAT_020fdc34[];
extern const char DAT_020fdc38[];
extern const char DAT_020fdc3c[];
extern const char DAT_020fdc40[];
extern const char DAT_020fdc50[];
extern const char DAT_020fdc60[];
extern const char DAT_020fdc6c[];
extern const char DAT_020fdc78[];
extern const char DAT_020fdc88[];
extern const char DAT_020fdc98[];
extern const char DAT_020fdca8[];
extern const char DAT_020fdcbc[];
extern const char DAT_020fdccc[];

#define CHECK(expr) do { int r = (expr); if (r) return r; } while (0)

int FUN_020cd5c4(void *self, unsigned int field, int value)
{
    char number[16];
    switch (field) {
    case 0x708:
        if (value < 0) {
            FUN_020d1b74(self, DAT_020fdc1c);
            return 2;
        }
        FUN_02066274(number, DAT_020fdc30, value);
        CHECK(FUN_020cd564(self, DAT_020fdb24, number));
        break;
    case 0x70b:
        switch (value) {
        case 0x500:
            CHECK(FUN_020cd564(self, DAT_020fdb64, DAT_020fdc34));
            break;
        case 0x501:
            CHECK(FUN_020cd564(self, DAT_020fdb64, DAT_020fdc38));
            break;
        case 0x502:
            CHECK(FUN_020cd564(self, DAT_020fdb64, DAT_020fdc3c));
            break;
        default:
            FUN_020d1b74(self, DAT_020fdc40);
            return 2;
        }
        break;
    case 0x706:
        FUN_02066274(number, DAT_020fdc30, value);
        CHECK(FUN_020cd564(self, DAT_020fdb0c, number));
        break;
    case 0x70c:
        FUN_02066274(number, DAT_020fdc30, value);
        CHECK(FUN_020cd594(self, DAT_020fdc50, number));
        break;
    case 0x70d:
        FUN_02066274(number, DAT_020fdc30, value);
        CHECK(FUN_020cd594(self, DAT_020fdc60, number));
        break;
    case 0x70e:
        FUN_02066274(number, DAT_020fdc30, value / 16);
        CHECK(FUN_020cd594(self, DAT_020fdc6c, number));
        break;
    case 0x710:
        FUN_02066274(number, DAT_020fdc30, value / 4);
        CHECK(FUN_020cd594(self, DAT_020fdc78, number));
        break;
    case 0x712:
        FUN_02066274(number, DAT_020fdc30, value / 4);
        CHECK(FUN_020cd594(self, DAT_020fdc88, number));
        break;
    case 0x713:
        FUN_02066274(number, DAT_020fdc30, value);
        CHECK(FUN_020cd594(self, DAT_020fdc98, number));
        break;
    case 0x714:
        FUN_02066274(number, DAT_020fdc30, value);
        CHECK(FUN_020cd594(self, DAT_020fdca8, number));
        break;
    case 0x715:
        if (value) value = 1;
        FUN_02066274(number, DAT_020fdc30, value);
        CHECK(FUN_020cd594(self, DAT_020fdcbc, number));
        break;
    case 0x718:
        FUN_02066274(number, DAT_020fdc30, value);
        CHECK(FUN_020cd564(self, DAT_020fdb7c, number));
        break;
    case 0x719:
        FUN_02066274(number, DAT_020fdc30, value);
        CHECK(FUN_020cd564(self, DAT_020fdb84, number));
        break;
    case 0x71a:
        FUN_02066274(number, DAT_020fdc30, value);
        CHECK(FUN_020cd564(self, DAT_020fdb8c, number));
        break;
    case 0x71b:
        FUN_02066274(number, DAT_020fdc30, value);
        CHECK(FUN_020cd564(self, DAT_020fdb94, number));
        break;
    case 0x71c:
        FUN_02066274(number, DAT_020fdc30, value);
        CHECK(FUN_020cd564(self, DAT_020fdb9c, number));
        break;
    case 0x71d:
        FUN_02066274(number, DAT_020fdc30, value);
        CHECK(FUN_020cd564(self, DAT_020fdba4, number));
        break;
    case 0x71e:
        FUN_02066274(number, DAT_020fdc30, value);
        CHECK(FUN_020cd564(self, DAT_020fdbac, number));
        break;
    default:
        FUN_020d1b74(self, DAT_020fdccc);
        return 2;
    }
    return 0;
}
