//cpp
// flags: -O4,s
extern "C" void *FUN_020ba8a0(unsigned int);
struct T { unsigned short *data; int width, height; };
extern "C" T *FUN_overlay_10__0211e82c(T *p, int width, int height, unsigned short *source) {
    p->data = 0;
    p->width = width;
    p->height = height;
    unsigned int sz = (unsigned int)width * (unsigned int)height;
    p->data = (unsigned short *)FUN_020ba8a0(sz * 2);
    if (source) {
        int count = width * height;
        for (int i = 0; i < count; i++) p->data[i] = source[i];
    }
    return p;
}
