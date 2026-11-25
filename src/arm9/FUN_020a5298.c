// flags: -O4,s
typedef struct { unsigned char bytes[768]; } Copy_020a5298;
extern Copy_020a5298 DAT_0211a680;
extern unsigned char DAT_0211a980[4];
void FUN_020a5298(void *self, unsigned char *in) {
    DAT_0211a680 = *(const Copy_020a5298 *)in;
    DAT_0211a980[0] = in[768];
    DAT_0211a980[1] = in[769];
    DAT_0211a980[2] = in[770];
    DAT_0211a980[3] = in[771];
}
