// flags: -O4,p
extern unsigned int *DAT_0211dcbc;
void FUN_020e170c(unsigned int value) {
    DAT_0211dcbc[10] = DAT_0211dcbc[9];
    DAT_0211dcbc[9] = value;
}
