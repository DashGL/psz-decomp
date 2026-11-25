// flags: -O4,p -noThumb

struct Node5988C {
    int f0;
    struct Node5988C *next;
};

struct Self5988C {
    unsigned char pad0[0x1c];
    unsigned int flags;
    int f20;
    struct Node5988C *list;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    int f40;
};

extern int FUN_020683d4(void);
extern int FUN_02059afc(struct Self5988C *);
extern void FUN_020585b0(struct Node5988C *, int);
extern void FUN_02059b98(struct Self5988C *);
extern void FUN_020683e8(int);

static inline int FS_IsArchiveLoaded(const volatile struct Self5988C *self) {
    return (self->flags & 2) ? 1 : 0;
}

static inline int FS_IsArchiveTableLoaded(const volatile struct Self5988C *self) {
    return (self->flags & 4) ? 1 : 0;
}

static inline int FS_SuspendArchive(struct Self5988C *self) {
    return FUN_02059afc(self);
}

int FUN_0205988c(struct Self5988C *self) {
    int irq = FUN_020683d4();
    if (FS_IsArchiveLoaded(self)) {
        if (FS_IsArchiveTableLoaded(self)) {
        }
        {
            int is_async = FS_SuspendArchive(self);
            struct Node5988C *p, *q;
            self->flags |= 0x80;
            for (p = self->list; p; p = q) {
                q = p->next;
                FUN_020585b0(p, 3);
            }
            self->list = 0;
            if (is_async) {
                FUN_02059b98(self);
            }
            self->f28 = 0;
            self->f2c = 0;
            self->f30 = 0;
            self->f34 = 0;
            self->f38 = 0;
            self->f40 = 0;
            self->f3c = 0;
            self->flags &= ~0xa2u;
        }
    }
    FUN_020683e8(irq);
    return 1;
}
