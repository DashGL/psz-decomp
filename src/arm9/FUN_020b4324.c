// flags: -O4,s
typedef struct {
    int pad[4];
    int count;
} GlobalHeader;
typedef struct {
    void *ptr;
    unsigned char pad[0x20];
    unsigned char tag;
    unsigned char pad2[3];
} GlobalEntry;
extern GlobalHeader DAT_0211aa74;
extern GlobalEntry DAT_0211aaa4[];
void *FUN_020b4324(unsigned char *self) {
    void *result = 0;
    int i = 0;
    int count = DAT_0211aa74.count;
    for (; i < count; i++) {
        if (self[12] == DAT_0211aaa4[i].tag) {
            result = DAT_0211aaa4[i].ptr;
            break;
        }
    }
    return result;
}
