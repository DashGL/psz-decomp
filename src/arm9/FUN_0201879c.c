// flags: -O4,p -noThumb
void FUN_0201879c(unsigned int base) {
    unsigned int p = base + *(unsigned short *)(base + 12);
    int i;
    unsigned int type, x;
    for (i = 0; i < *(unsigned short *)(base + 14); i++) {
        type = *(unsigned int *)p;
        switch (type) {
        case 0x46494e46:
            *(unsigned int *)(p + 16) += base;
            x = *(unsigned int *)(p + 20);
            if (x) *(unsigned int *)(p + 20) = x + base;
            x = *(unsigned int *)(p + 24);
            if (x) *(unsigned int *)(p + 24) = x + base;
            break;
        case 0x43574448:
            x = *(unsigned int *)(p + 12);
            if (x) *(unsigned int *)(p + 12) = x + base;
            break;
        case 0x434d4150:
            x = *(unsigned int *)(p + 16);
            if (x) *(unsigned int *)(p + 16) = x + base;
            break;
        case 0x43474c50:
            break;
        }
        p += *(unsigned int *)(p + 4);
    }
}
