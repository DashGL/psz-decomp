// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

typedef struct {
    u32 pack;
} FSArchive;

typedef struct {
    FSArchive *arc;
    u16 own_id;
    u16 index;
    u32 pos;
} FSDirPos;

typedef struct {
    FSArchive *arc;
    u32 file_id;
} FSFileID;

typedef struct {
    union {
        FSFileID file_id;
        FSDirPos dir_id;
    };
    u32 is_directory;
    u32 name_len;
    u8 name[128];
} FSDirEntry;

typedef struct {
    void *prev;
    void *next;
    FSArchive *arc;
    volatile u32 stat;
    u32 command;
    u32 error;
    u8 pad18[8];
    union {
        struct {
            u32 own_id;
            u32 top;
            u32 bottom;
            u32 pos;
        } file;
        struct {
            FSDirPos pos;
            u32 parent;
        } dir;
    } prop;
    union {
        struct {
            FSDirEntry *p_entry;
            u32 skip_string;
        } readdirentry;
        struct {
            u8 *buf;
            u32 buf_len;
            u16 total_len;
            u16 dir_id;
        } getpath;
    } arg;
    u8 pad3c[0xc];
} FSFile;

extern const char DAT_020f96d0[];
extern void FUN_02059cd4(FSFile *);
extern int FUN_020588ac(FSFile *, u32);
extern int FUN_0205860c(FSFile *, int);
extern void FUN_02065774(const void *, void *, u32);

static inline int FS_IsDir(const FSFile *p_file)
{
    int r = (p_file->stat & 0x20) ? 1 : 0;
    return r;
}

static inline u32 FSi_GetArchiveNameLen(const FSArchive *p_arc)
{
    u32 pack = p_arc->pack;
    if (pack <= 0xff) {
        return 1;
    } else if (pack <= 0xff00) {
        return 2;
    } else {
        return 3;
    }
}

int FUN_02058ce0(FSFile *p_file)
{
    FSArchive *p_arc = p_file->arc;
    FSDirEntry entry;
    FSFile tmp;
    u32 total;
    u8 *dst;
    u32 file_id;
    u32 pos;
    u32 num_dir;
    u32 dir_id;

    FUN_02059cd4(&tmp);
    tmp.arc = p_file->arc;

    if (FS_IsDir(p_file)) {
        dir_id = p_file->prop.dir.pos.own_id;
        file_id = 0x10000;
    } else {
        file_id = p_file->prop.file.own_id;
        if (p_file->arg.getpath.total_len != 0) {
            dir_id = p_file->arg.getpath.dir_id;
        } else {
            pos = 0;
            num_dir = 0;
            dir_id = 0x10000;
            do {
                FUN_020588ac(&tmp, pos);
                if (pos == 0) {
                    num_dir = tmp.prop.dir.parent;
                }
                tmp.arg.readdirentry.p_entry = &entry;
                tmp.arg.readdirentry.skip_string = 1;
                while (FUN_0205860c(&tmp, 3) == 0) {
                    if (!entry.is_directory && entry.file_id.file_id == file_id) {
                        dir_id = tmp.prop.dir.pos.own_id;
                        break;
                    }
                }
            } while (dir_id == 0x10000 && ++pos < num_dir);
        }
    }

    if (dir_id == 0x10000) {
        p_file->arg.getpath.total_len = 0;
        return 1;
    }

    if (p_file->arg.getpath.total_len == 0) {
        u32 cur_dir;
        u32 len = 0;
        if (p_arc->pack <= 0xff) {
            len += 1;
        } else if (p_arc->pack <= 0xff00) {
            len += 2;
        } else {
            len += 3;
        }
        len += 2;
        if (file_id != 0x10000) {
            len += entry.name_len;
        }
        cur_dir = dir_id;
        if (cur_dir != 0) {
            FUN_020588ac(&tmp, cur_dir);
            do {
                FUN_020588ac(&tmp, tmp.prop.dir.parent);
                tmp.arg.readdirentry.p_entry = &entry;
                tmp.arg.readdirentry.skip_string = 1;
                while (FUN_0205860c(&tmp, 3) == 0) {
                    if (entry.is_directory && entry.dir_id.own_id == cur_dir) {
                        len += entry.name_len + 1;
                        break;
                    }
                }
                cur_dir = tmp.prop.dir.pos.own_id;
            } while (cur_dir != 0);
        }
        p_file->arg.getpath.total_len = (u16)(len + 1);
        p_file->arg.getpath.dir_id = (u16)dir_id;
    }

    {
        dst = p_file->arg.getpath.buf;
        if (!dst) {
            return 0;
        }
        total = p_file->arg.getpath.total_len;
        if (p_file->arg.getpath.buf_len < total) {
            return 1;
        }
        {
            u32 ofs = 0;
            u32 name_len = FSi_GetArchiveNameLen(p_arc);
            FUN_02065774(p_arc, dst + ofs, name_len);
            ofs += name_len;
            FUN_02065774(DAT_020f96d0, dst + ofs, 2);
        }
        FUN_020588ac(&tmp, dir_id);
        if (file_id != 0x10000) {
            tmp.arg.readdirentry.p_entry = &entry;
            tmp.arg.readdirentry.skip_string = 0;
            while (FUN_0205860c(&tmp, 3) == 0) {
                if (!entry.is_directory && entry.file_id.file_id == file_id) {
                    break;
                }
            }
            {
                u32 n = entry.name_len + 1;
                FUN_02065774(entry.name, dst + total - n, n);
                total -= n;
            }
        } else {
            *(dst + total - 1) = 0;
            total -= 1;
        }
        if (dir_id != 0) {
            do {
                FUN_020588ac(&tmp, tmp.prop.dir.parent);
                tmp.arg.readdirentry.p_entry = &entry;
                tmp.arg.readdirentry.skip_string = 0;
                dst[total - 1] = '/';
                total -= 1;
                while (FUN_0205860c(&tmp, 3) == 0) {
                    if (entry.is_directory && entry.dir_id.own_id == dir_id) {
                        u32 n = entry.name_len;
                        FUN_02065774(entry.name, dst + total - n, n);
                        total -= n;
                        break;
                    }
                }
                dir_id = tmp.prop.dir.pos.own_id;
            } while (dir_id != 0);
        }
    }
    return 0;
}
