// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { unsigned char b[4]; } Item;
typedef struct {
    unsigned int w0;
    unsigned char b4[3];
    unsigned char b7;
    unsigned char b8[5];
    unsigned char b13;
    unsigned short h14;
} Rec;

extern void *FUN_02086e3c(void);
extern char *FUN_020870c4(void *);
extern Rec *FUN_02084568(void *);
extern Rec *FUN_020845a8(void *);
extern int FUN_02087138(void *);
extern int FUN_020848d0(int, int);
extern int FUN_0203a1a8(void *, int);

int FUN_0208b99c(void *unused, char *item) {
    char *p;
    Item c, b, a;
    int ok = 0;

    if (FUN_02087138(FUN_02086e3c()) == 1) {
        p = FUN_020870c4(FUN_02086e3c());
        FUN_020848d0((signed char)p[32], (signed char)p[34]);
        switch ((unsigned char)item[0]) {
            case 0: {
                Rec *r;
                a = *(Item *)item;
                if (FUN_0203a1a8(&a, 17)) {
                    ok = 1;
                    break;
                }
                c = *(Item *)item;
                r = FUN_02084568(&c);
                if (r) {
                    int cls, sex, race, lvl;
        cls = (signed char)p[34];
        race = (signed char)p[32];
        sex = (signed char)p[33];
        lvl = (unsigned char)p[86];
        ok = 0;
        if (((int)r->b7 <= lvl) ? E1 : E0) {
            if ((((*(volatile unsigned int *)&r->w0 >> 18) & (1 << sex)) != 0) ? E1 : E0) {
                unsigned int mask = r->w0;
                int k = FUN_020848d0(race, cls);
                if ((((mask >> 20) & (1 << k)) != 0) ? E1 : E0) ok = 1;
            }
        }
                }
                break;
            }
            case 1: {
                Rec *r;
                b = *(Item *)item;
                r = FUN_020845a8(&b);
                if (r) {
                    int cls, sex, race, lvl;
        cls = (signed char)p[34];
        race = (signed char)p[32];
        sex = (signed char)p[33];
        lvl = (unsigned char)p[86];
        ok = 0;
        if (((int)r->b13 <= lvl) ? E1 : E0) {
            if ((((*(volatile unsigned short *)&r->h14) & (1 << sex)) != 0) ? E1 : E0) {
                unsigned int mask = r->h14;
                int k = FUN_020848d0(race, cls);
                if ((((mask >> 2) & (1 << k)) != 0) ? E1 : E0) ok = 1;
            }
        }
                }
                break;
            }
            default:
                ok = 1;
                break;
        }
    }
    return ok;
}
