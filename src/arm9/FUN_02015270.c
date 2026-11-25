// flags: -O4,p -noThumb
extern unsigned int DAT_020f96e4;
extern void FUN_0206740c(unsigned int, unsigned int);
extern void FUN_02064e48(unsigned int, unsigned int, unsigned int, unsigned int);
extern void FUN_020654dc(unsigned int, unsigned int, unsigned int);

typedef struct {
    unsigned short count;
    unsigned short pad;
    unsigned short *table;
} Mapping;

void FUN_02015270(int background, unsigned int *palette, Mapping *mapping) {
    int count;
    int index;
    unsigned int stride;
    unsigned int destination;

    FUN_0206740c(palette[3], palette[2]);
    if (background <= 3) {
        destination = 0x05000000;
    } else {
        destination = 0x05000400;
    }
    if (mapping != 0) {
        switch (palette[0]) {
            case 3:
                stride = 0x20;
                break;
            case 4:
                stride = 0x200;
                break;
            default:
                stride = 0;
                break;
        }
        count = mapping->count;
        for (index = 0; index < count; index++) {
            unsigned int src = palette[3];
            unsigned int srcOff = stride * index;
            unsigned int dstOff = stride * mapping->table[index];
            unsigned int channel = DAT_020f96e4;
            if (channel != 0xffffffffu) {
                FUN_02064e48(channel, src + srcOff, destination + dstOff, stride);
            } else {
                FUN_020654dc(src + srcOff, destination + dstOff, stride);
            }
        }
    } else {
        unsigned int size = palette[2];
        unsigned int src = palette[3];
        unsigned int channel = DAT_020f96e4;
        if (channel != 0xffffffffu) {
            FUN_02064e48(channel, src, destination, size);
        } else {
            FUN_020654dc(src, destination, size);
        }
    }
}
