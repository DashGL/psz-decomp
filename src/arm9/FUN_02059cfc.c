// flags: -noThumb
typedef unsigned int u32;
typedef struct {
    void *archive;
    unsigned short directory, pad;
    u32 position;
} Directory;
extern Directory data_02112514;
extern char *FUN_020596a4(const char *, int);
extern int FUN_020594d4(void *, int);

static inline int is_loaded(char *archive) {
    enum { E0 = 0, E1 = 1 }; return (*(u32 *)(archive + 28) & 2) ? E1 : E0;
}

int FUN_02059cfc(char *request, const unsigned char *path, u32 file, u32 directory) {
    Directory current;
    int i;
    char *archive;
    if (*path == '/' || *path == '\\') {
        current.archive = data_02112514.archive;
        current.directory = 0;
        current.position = 0;
        current.pad = 0;
        path++;
    } else {
        current = data_02112514;
        for (i = 0; i <= 3; i++) {
            if (!path[i] || path[i] == '/' || path[i] == '\\')
                break;
            if (path[i] == ':') {
                archive = FUN_020596a4((const char *)path, i);
                if (!archive)
                    return 0;
                if (!is_loaded(archive))
                    return 0;
                current.archive = archive;
                current.position = 0;
                current.pad = 0;
                current.directory = 0;
                path += i + 1;
                if (*path == '/' || *path == '\\')
                    path++;
                break;
            }
        }
    }
    *(void **)(request + 8) = current.archive;
    *(const unsigned char **)(request + 60) = path;
    *(Directory *)(request + 48) = current;
    if (directory) {
        *(u32 *)(request + 64) = 1;
        *(u32 *)(request + 68) = directory;
    } else {
        *(u32 *)(request + 64) = 0;
        *(u32 *)(request + 68) = file;
    }
    return FUN_020594d4(request, 4);
}
