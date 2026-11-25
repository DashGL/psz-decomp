//cpp
// flags: -O4,p
extern "C" {
extern int FUN_020855bc(int);
extern void FUN_02036094(void *);
extern void FUN_020360a4(void *, int, int, int);
extern void FUN_020bce3c(void *);
}
inline bool isType1(int x) { return FUN_020855bc(x) == 1; }
inline bool isType3(int x) { return FUN_020855bc(x) == 3; }
struct Message {
    unsigned int w0;
    int w1;
    unsigned char b8;
    unsigned char b9;
    unsigned char ba;
    unsigned char bb;
    unsigned int w3;
    Message() {
        FUN_02036094(this);
        w1 = -1;
        b8 = 0;
        b9 = 0;
        ba = 0;
        bb = 0;
        w3 = 0;
    }
};
extern "C" void FUN_0204e01c(int from, unsigned int id, unsigned int type, int value, int duration) {
    if (isType1(from) || isType3(from)) {
        unsigned int mag = (value < 0) ? (unsigned int)(-value) : (unsigned int)value;
        unsigned int time = (mag * 10 + 1800) << 12;
        bool valid = true;
        Message m;
        FUN_020360a4(&m, 2, 14, 16);
        if (type <= 1) {
            m.b8 = (unsigned char)type;
        } else {
            valid = false;
        }
        int level;
        if (value > 0) {
            level = (value - 1) / 5 + 1;
        } else {
            level = (value + 1) / 5 - 1;
        }
        m.b9 = (unsigned char)level;
        if (duration < 0) {
            m.w3 = time;
        } else {
            m.w3 = (unsigned int)duration;
        }
        if (valid) {
            m.w1 = (int)id;
            FUN_020bce3c(&m);
        }
    }
}
