// flags: -O4,p -noThumb -Cpp_exceptions on
//cpp
extern "C" {
extern void *FUN_020ba8a0(unsigned int);
extern void FUN_020ba8b4(void *);
extern void FUN_0200c280(void *ptr, void *end, unsigned int size, void (*dtor)(void *));

void *FUN_0200c2dc(unsigned int count, unsigned int size, unsigned int pad, void (*ctor)(void *), void (*dtor)(void *)) {
    char *ptr = (char *)FUN_020ba8a0(count * size + pad);
    if (ptr == 0) {
        return 0;
    }
    if (pad != 0) {
        *(unsigned int *)(ptr + pad - 4) = count;
        if (pad >= 8) {
            *(unsigned int *)(ptr + pad - 8) = size;
        }
    }
    if (ctor != 0) {
        char *p = ptr + pad;
        try {
            for (; count != 0; count--) {
                ctor(p);
                p += size;
            }
        } catch (...) {
            if (dtor != 0) {
                FUN_0200c280(ptr + pad, p, size, dtor);
            }
            FUN_020ba8b4(ptr);
            throw;
        }
    }
    return ptr + pad;
}
}
