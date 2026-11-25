// flags: -O4,p -noThumb
typedef unsigned int u32;
enum { E0 = 0, E1 = 1, E_WIDE = 0x10000 };
struct FSFile;
struct FSFileLink { struct FSFile *prev; struct FSFile *next; };
struct FSArchive {
    u32 pad0[7];
    volatile u32 flag;
    struct FSFileLink list;
    u32 pad1[11];
    void (*proc)(void *, int);
    u32 proc_flag;
};
struct FSFile {
    struct FSFileLink link;
    struct FSArchive *arc;
    volatile u32 stat;
    u32 command;
    u32 error;
    u32 queue[1];
};
extern u32 FUN_020683d4(void);
extern void FUN_020683e8(u32), FUN_020585b0(void *, int), FUN_020593fc(void *), FUN_020669dc(void *);
extern int FUN_02059490(void *);
static inline int is_suspended(struct FSArchive *a) { return (a->flag & 8) ? E1 : E0; }
static inline int is_busy(struct FSArchive *a) { return (a->flag & 16) ? E1 : E0; }
static inline int is_sync(struct FSFile *r) { return (r->stat & 4) ? E1 : E0; }
static inline void cut_from_list(struct FSFileLink *trg) {
    struct FSFile *const nx = trg->next;
    struct FSFile *const pr = trg->prev;
    if (pr) pr->link.next = nx;
    if (nx) nx->link.prev = pr;
}
static inline void append_to_list(struct FSFile *file, struct FSFileLink *list) {
    struct FSFileLink *trg = &file->link;
    cut_from_list(trg);
    while (list->next) list = &list->next->link;
    list->next = file;
    trg->prev = (struct FSFile *)list;
    trg->next = 0;
}
int FUN_020594d4(struct FSFile *request, unsigned int command) {
    struct FSArchive *archive = request->arc;
    u32 irq, mask = 1u << command;
    request->command = command;
    request->error = 2;
    request->stat |= 1;
    irq = FUN_020683d4();
    if (archive->flag & 128) {
        FUN_020585b0(request, 3);
        FUN_020683e8(irq);
        return 0;
    }
    if (mask & 0x1fc)
        request->stat |= 4;
    append_to_list(request, &archive->list);
    if (!is_suspended(archive) && !is_busy(archive)) {
        archive->flag |= 16;
        FUN_020683e8(irq);
        if (archive->proc_flag & 512)
            archive->proc(request, 9);
        {
            u32 locked = FUN_020683d4();
            request->stat |= 64;
            if (!is_sync(request)) {
                FUN_020683e8(locked);
                FUN_020593fc(request);
                return 1;
            }
            FUN_020683e8(locked);
        }
    } else {
        if (!is_sync(request)) {
            FUN_020683e8(irq);
            return 1;
        }
        do {
            FUN_020669dc(request->queue);
        } while (!(request->stat & 64));
        FUN_020683e8(irq);
    }
    return FUN_02059490(request);
}
