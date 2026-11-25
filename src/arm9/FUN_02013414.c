// flags: -O4,p -noThumb
struct S_02013414 {
    unsigned char pad[0x100];
    unsigned char data[0x440];
};
extern struct S_02013414 DAT_02103794[];
void *FUN_02013414(int i) {
    return DAT_02103794[i].data;
}
