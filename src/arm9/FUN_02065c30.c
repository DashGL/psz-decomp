// flags: -O4,p -noThumb
typedef struct {
    unsigned int func;
    unsigned int enable;
    unsigned int arg;
} CallbackInfo;
extern unsigned int DAT_027e0000[];
extern CallbackInfo DAT_02118118[];
void FUN_02065c30(unsigned int intrBit, unsigned int function) {
    int i;
    CallbackInfo *info;
    for (i = 0; i < 22; i++) {
        if (intrBit & 1) {
            info = 0;
            if (i >= 8 && i <= 11) {
                info = &DAT_02118118[i - 8];
            } else if (i >= 3 && i <= 6) {
                info = &DAT_02118118[i + 1];
            } else {
                DAT_027e0000[i] = function;
            }
            if (info) {
                info->func = function;
                info->arg = 0;
                info->enable = 1;
            }
        }
        intrBit >>= 1;
    }
}
