// flags: -O4,p -noThumb
extern unsigned short DAT_021184d0;
void FUN_02067cfc(int bit) {
    DAT_021184d0 &= ~(1 << bit);
}
