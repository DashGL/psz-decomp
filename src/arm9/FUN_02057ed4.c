// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned char u8;
extern void (*DAT_020f95b8)(void *, void *, u32);
extern void FUN_02065510(u32, void *, u32);
#define EMIT(index) value=context[(index)];output[4*(index)]=value>>24;output[4*(index)+1]=value>>16;output[4*(index)+2]=value>>8;output[4*(index)+3]=value;
void FUN_02057ed4(u32 *context, u8 *output) {
    int count = (int)context[7], word = count >> 2;
    u32 *block = context + 8, value;
    u8 *bytes;
    if (!(count & 3)) block[word] = 0;
    bytes = (u8 *)(context + 8);
    bytes[count++] = 128;
    while (count & 3) bytes[count++] = 0;
    word++;
    if ((int)context[7] >= 56) {
        while (word < 16) { block[word] = 0; word++; }
        DAT_020f95b8(context, block, 64);
        word = 0;
    }
    while (word < 14) { block[word] = 0; word++; }
    value = context[5];
    bytes[63] = value; bytes[62] = value >> 8; bytes[61] = value >> 16; bytes[60] = value >> 24;
    value = context[6];
    bytes[59] = value; bytes[58] = value >> 8; bytes[57] = value >> 16; bytes[56] = value >> 24;
    DAT_020f95b8(context, block, 64);
    EMIT(0) EMIT(1) EMIT(2) EMIT(3) EMIT(4)
    context[7] = 0;
    FUN_02065510(0, &context, 4);
}
