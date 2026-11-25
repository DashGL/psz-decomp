// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned char u8;
typedef struct { u32 a, b; } FileId;
typedef struct { u32 a, b, c; } Directory;
typedef struct {
    Directory dir;
    u32 is_directory;
    int length;
    u8 name[128];
} Entry;
extern int FUN_0205860c(void *, int);
extern int FUN_020588ac(void *, u32);
extern int FUN_0205879c(const u8 *, const u8 *, u32);

static inline int is_not_sep(int c) {
    int r = 0;
    if (c != 0 && c != '/' && c != '\\') r = 1;
    return r;
}

int FUN_02058afc(char *request) {
    const u8 *path = *(const u8 **)(request + 0x3c);
    int want_directory = *(int *)(request + 0x40);
    Entry entry;

    FUN_0205860c(request, 2);
    while (*path != '\0') {
        int length = 0;
        int is_directory;
        while (is_not_sep(is_directory = path[length])) {
            length++;
        }
        if (is_directory || want_directory) {
            is_directory = 1;
        }
        if (length == 0)
            return 1;
        if (*path == '.') {
            if (length == 1) {
                path += 1;
                goto next;
            }
            if ((length == 2) & (path[1] == '.')) {
                if (*(unsigned short *)(request + 0x24) != 0) {
                    FUN_020588ac(request, *(u32 *)(request + 0x2c));
                }
                path += 2;
                goto next;
            }
        }
        if (length > 127)
            return 1;
        *(Entry **)(request + 0x30) = &entry;
        *(u32 *)(request + 0x34) = 0;
        for (;;) {
            if (FUN_0205860c(request, 3) != 0)
                return 1;
            if ((u32)is_directory == entry.is_directory &&
                length == entry.length &&
                FUN_0205879c(path, entry.name, (u32)length) == 0) {
                break;
            }
        }
        if (is_directory) {
            *(Directory *)(request + 0x30) = entry.dir;
            path += length;
            FUN_0205860c(request, 2);
        } else {
            if (want_directory)
                return 1;
            **(FileId **)(request + 0x44) = *(FileId *)&entry.dir;
            return 0;
        }
next:
        path += (*path != '\0');
    }
    if (!want_directory)
        return 1;
    **(Directory **)(request + 0x44) = *(Directory *)(request + 0x20);
    return 0;
}
