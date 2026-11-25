//cpp
// flags: -O4,p
struct Vec {
    union {
        struct { int x, y, z; };
        int v[3];
    };
};
extern int DAT_020fc988;
extern Vec DAT_020fc958;
extern "C" void FUN_02036348(Vec *, const Vec *, const Vec *);
extern "C" void FUN_02036368(Vec *);
extern "C" void FUN_02037390(int *, const Vec *);
extern "C" unsigned short FUN_0205cc08(int);
extern "C" int FUN_0205c86c(const Vec *);
extern "C" void FUN_overlay_20__021990b0(void *, unsigned short);

extern "C" void FUN_overlay_20__0219cb98(char *self) {
    char *owner = *(char **)(self + 4);
    Vec *ownerPos = (Vec *)(owner + 0x38);
    Vec horizontal;
    Vec pitchDifference;
    Vec difference;
    int mag1;
    int mag2;
    FUN_02036348(&difference, ownerPos, (Vec *)(self + 0x34));
    horizontal = difference;
    horizontal.y = 0;
    FUN_02036368(&horizontal);
    FUN_02037390(&mag1, &horizontal);
    if ((mag1 != DAT_020fc988) ? 1 : 0) {
        unsigned short angle = FUN_0205cc08(horizontal.z);
        if (horizontal.x < 0) {
            angle = (unsigned short)(0x10000 - angle);
        }
        *(unsigned short *)(owner + 0x44) = angle;
    }
    FUN_02036348(&pitchDifference, ownerPos, (Vec *)(self + 0x34));
    horizontal = DAT_020fc958;
    horizontal.y = pitchDifference.y;
    pitchDifference.y = 0;
    horizontal.z = FUN_0205c86c(&pitchDifference);
    FUN_02036368(&horizontal);
    FUN_02037390(&mag2, &horizontal);
    if ((mag2 != DAT_020fc988) ? 1 : 0) {
        unsigned short angle = FUN_0205cc08(horizontal.z);
        if (horizontal.y > 0) {
            angle = (unsigned short)(0x10000 - angle);
        }
        FUN_overlay_20__021990b0(owner, angle);
    }
    *(Vec *)(self + 0x34) = *ownerPos;
}
