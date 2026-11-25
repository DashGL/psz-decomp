// flags: -O4,s
typedef struct { unsigned char b[4]; } Bytes;
typedef struct {
    unsigned short pad0 : 5;
    unsigned short val : 10;
    unsigned short pad1 : 1;
} Info;
typedef struct {
    Bytes desc;
    unsigned int word;
} Item;
extern Info *FUN_020845a8(Bytes *);

int FUN_020b6940(void *unused, Item *item) {
    int result = 0;
    if (item->desc.b[0] == 1) {
        Bytes desc = item->desc;
        Info *p = FUN_020845a8(&desc);
        if (p) {
            result += p->val;
            result += (unsigned char)(((int)(item->word & 0xfe000000u) >> 25) * 2);
        }
    }
    return result;
}
