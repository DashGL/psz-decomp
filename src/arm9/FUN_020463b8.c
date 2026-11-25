// flags: -O4,s
typedef struct {
    signed char a;
    signed char b;
    short c;
    unsigned int d;
} Record;

extern Record DAT_0210ad40[][6];
extern Record DAT_0210b040[][6];

Record FUN_020463b8(int alternate, unsigned int a, unsigned int b, unsigned int c) {
    Record value = DAT_0210ad40[a][b * 2 + c];
    if (alternate == 1) {
        value.a = DAT_0210b040[a][b * 2 + c].a;
        value.b = DAT_0210b040[a][b * 2 + c].b;
        value.c = DAT_0210b040[a][b * 2 + c].c;
        value.d = DAT_0210b040[a][b * 2 + c].d;
    }
    return value;
}
