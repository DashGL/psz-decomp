// flags: -O4,s
extern int FUN_02073198(void), FUN_020731d8(void), FUN_020854f8(int), FUN_0207f4b4(void *);
extern void FUN_02036094(void *), FUN_0207f3fc(void *), FUN_020360a4(void *, int, int, int);
extern void FUN_0207f418(void *), FUN_02032838(void *, void *), FUN_020bce3c(void *);
enum { E0 = 0, E1 = 1 };
struct Msg {
    unsigned int f0;
    unsigned int f4;
    signed char f8;
    signed char f9;
    unsigned short fa;
    unsigned int fc;
    unsigned int f10;
    unsigned int f14;
};
void FUN_0204f738(signed char *s) {
    struct Msg msg;
    int valid = 0;
    int id = FUN_020854f8(FUN_02073198());
    int eligible;
    if (s[4] == id) eligible = (id == s[1]) ? E1 : E0; else eligible = E1;
    if (FUN_0207f4b4(s + 16)) valid = 1;
    if (eligible && valid) {
        int id2 = FUN_020854f8(FUN_020731d8());
        if (id2 == id) {
        FUN_02036094(&msg);
        msg.f4 = 0;
        msg.f8 = -1;
        msg.f9 = 0;
        msg.fa = 0;
        msg.fc = 0;
        msg.f10 = 0;
        FUN_0207f3fc(&msg.f14);
        FUN_020360a4(&msg, 3, 4, 24);
        FUN_0207f418(&msg.f14);
        msg.f8 = s[4];
        msg.fa = *(unsigned short *)(s + 6);
        msg.fc = *(unsigned int *)(s + 8);
        msg.f10 = *(unsigned int *)(s + 12);
        FUN_02032838(&msg.f14, s + 16);
        FUN_020bce3c(&msg);
    }
    }
}
