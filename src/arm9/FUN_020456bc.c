// flags: -O4,s
struct Arr5_020456bc {
    unsigned short v[5];
};
struct Entry020456bc {
    unsigned short f0;
    unsigned short f2;
    struct Arr5_020456bc body;
};
extern const struct Entry020456bc DAT_0210b340[];
extern const struct {
    unsigned short pad[4];
    unsigned short val;
} DAT_02108dac;
extern const struct {
    unsigned short pad[29];
    unsigned short val;
} DAT_02108d6c;
void FUN_020456bc(struct Entry020456bc *out, int index) {
    out->f0 = DAT_0210b340[index].f0;
    out->f2 = DAT_0210b340[index].f2;
    out->body = DAT_0210b340[index].body;
    if (index < 11) {
        out->f2 = DAT_02108dac.val;
    } else {
        out->f2 = DAT_02108d6c.val;
    }
}
