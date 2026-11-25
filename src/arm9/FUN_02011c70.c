// flags: -O4,p -noThumb
struct Node_02011c70 {
    unsigned short f0;
    unsigned short f2;
    unsigned int f4;
    unsigned int f8;
    unsigned int fc;
};
void FUN_02011c70(unsigned int *out, struct Node_02011c70 *p) {
    unsigned short n = (unsigned short)(((int)p->f2 >> 8) & 0x7f);
    out[0] = (unsigned int)p - n;
    out[1] = p->f4 + (unsigned int)(p + 1);
}
