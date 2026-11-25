// flags: -O4,p -noThumb
typedef unsigned int u32;
extern u32 FUN_020683d4(void);
extern void FUN_020683e8(u32);
extern void FUN_020585b0(void *, int);
extern void FUN_02066a2c(void *);
extern void FUN_02059cd4(void *);

typedef struct FSFile {
    struct FSFile *prev;
    struct FSFile *next;
    struct FSArchive *arc;
    volatile u32 stat;
    u32 command;
    u32 error;
    u32 queue[12];
} FSFile;

typedef struct FSArchive {
    u32 pad0[5];
    u32 queue[2];
    volatile u32 flag;
    u32 pad1;
    FSFile *volatile list;
    u32 pad2[11];
    void (*proc)(void *, int);
    u32 proc_flag;
} FSArchive;

static inline int is_canceling(const FSArchive *a) { return (a->flag & 0x20) ? 1 : 0; }
static inline int is_suspending(const FSArchive *a) { return (a->flag & 0x40) ? 1 : 0; }
static inline int is_suspended(const FSArchive *a) { return (a->flag & 0x08) ? 1 : 0; }
static inline int is_busy(const FSArchive *a) { return (a->flag & 0x10) ? 1 : 0; }
static inline int file_is_canceling(const FSFile *f) { return (f->stat & 0x02) ? 1 : 0; }
static inline int file_is_sync(const FSFile *f) { return (f->stat & 0x04) ? 1 : 0; }

FSFile *FUN_020591e8(FSArchive *archive) {
    u32 irq = FUN_020683d4();
    if (is_canceling(archive)) {
        FSFile *request;
        archive->flag &= ~0x20u;
        request = archive->list;
        while (request) {
            FSFile *next = request->next;
            if (file_is_canceling(request)) {
                if (archive->list == request) {
                    archive->list = next;
                }
                FUN_020585b0(request, 3);
                if (!next) {
                    next = archive->list;
                }
            }
            request = next;
        }
    }
    {
        FSFile *request;
        if (!is_suspending(archive) && !is_suspended(archive) && (request = archive->list) != 0) {
            int activate = !is_busy(archive);
            if (activate) {
                archive->flag |= 0x10;
            }
            FUN_020683e8(irq);
            if (activate && (archive->proc_flag & 0x200)) {
                archive->proc(request, 9);
            }
            irq = FUN_020683d4();
            request->stat |= 0x40;
            if (file_is_sync(request)) {
                FUN_02066a2c(request->queue);
                FUN_020683e8(irq);
                return 0;
            }
            FUN_020683e8(irq);
            return request;
        }
    }
    if (is_busy(archive)) {
        archive->flag &= ~0x10u;
        if (archive->proc_flag & 0x400) {
            FSFile temporary;
            FUN_02059cd4(&temporary);
            temporary.arc = archive;
            archive->proc(&temporary, 10);
        }
    }
    if (is_suspending(archive)) {
        archive->flag = (archive->flag & ~0x40u) | 0x08u;
        FUN_02066a2c(archive->queue);
    }
    FUN_020683e8(irq);
    return 0;
}
