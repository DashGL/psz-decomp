// flags: -O4,s
extern void *FUN_020c1fc8(void);
extern int FUN_020c2608(void *, int);
extern unsigned char *FUN_020c2680(void *, int);
#pragma thumb off
extern unsigned char *FUN_02012914(void *, unsigned int);
#pragma thumb reset
extern unsigned short FUN_overlay_12__02131d68(const void *, unsigned short);
void FUN_overlay_12__02131cf4(const unsigned char *records, int handle, int count) {
    int i, j;
    unsigned char *resource, *cells;
    if (!records) return;
    i = 0;
    if (count <= 0) return;
    for (; i < count; i++, records += 8) {
        if (FUN_020c2608(FUN_020c1fc8(), handle)) {
            resource = FUN_020c2680(FUN_020c1fc8(), handle);
            if (resource) {
                cells = FUN_02012914(*(void **)(resource + 20), *(const unsigned short *)(records + 4));
                if (cells) {
                    for (j = 0; j < *(unsigned short *)cells; j++) {
                        unsigned char *data = *(unsigned char **)(cells + 4);
                        unsigned short value = FUN_overlay_12__02131d68(records, *(unsigned short *)(data + 6 * j + 4));
                        data = *(unsigned char **)(cells + 4);
                        *(unsigned short *)(data + 6 * j + 4) = value;
                    }
                }
            }
        }
    }
}
