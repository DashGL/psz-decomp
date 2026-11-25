// flags: -O4,p -noThumb -Cpp_exceptions on
//cpp
extern "C" {
extern void FUN_0200c57c(void);

void FUN_0200c4d4(void *ptr, unsigned int count, unsigned int size, void (*dtor)(void *)) {
    if (dtor != 0) {
        char *p = (char *)ptr + count * size;
        try {
            for (; count != 0; count--) {
                p -= size;
                dtor(p);
            }
        } catch (...) {
            FUN_0200c57c();
        }
    }
}
}
