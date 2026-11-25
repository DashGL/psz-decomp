// flags: -O4,p -noThumb
unsigned int FUN_02026a5c(unsigned int self, unsigned int *remaining, unsigned short *local, unsigned short *remote, unsigned int *address) {
    unsigned int context = *(unsigned int *)(self + 100);
    unsigned int socket = *(unsigned int *)(context + 196);
    unsigned int used = *(unsigned int *)(context + 248);
    int n = (int)(*(unsigned int *)(socket + 68) - used);
    if (n >= 0) {
        *local = *(unsigned short *)(socket + 10);
        *remote = *(unsigned short *)(socket + 24);
        *address = *(unsigned int *)(socket + 28);
        *remaining = (unsigned int)n;
        if (n == 0 && *(unsigned char *)(socket + 8) != 4) {
            return 0;
        }
    } else {
        *remaining = ~0u;
        return 0;
    }
    return *(unsigned int *)(socket + 64) + used;
}
