// flags: -O4,p -noThumb -Cpp_exceptions on
//cpp
extern "C" {
extern void FUN_0200c280(void *ptr, void *end, unsigned int size, void (*dtor)(void *));

void FUN_0200c394(void *ptr, unsigned int count, unsigned int size, void (*ctor)(void *), void (*dtor)(void *)) {
    if (ctor != 0) {
        if (dtor != 0) {
            char *p = (char *)ptr;
            try {
                for (; count != 0; count--) {
                    ctor(p);
                    p += size;
                }
            } catch (...) {
                FUN_0200c280(ptr, p, size, dtor);
                throw;
            }
        } else {
            char *p = (char *)ptr;
            for (; count != 0; count--) {
                ctor(p);
                p += size;
            }
        }
    }
}
}
