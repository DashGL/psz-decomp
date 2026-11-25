// flags: -O4,p -noThumb -Cpp_exceptions on
//cpp
extern "C" {
extern void FUN_0200c57c(void);
void FUN_0200c280(void *ptr, void *end, unsigned int size, void (*dtor)(void *)) {
    try {
        while ((char *)end > (char *)ptr) {
            end = (char *)end - size;
            dtor(end);
        }
    } catch (...) {
        FUN_0200c57c();
    }
}
}
