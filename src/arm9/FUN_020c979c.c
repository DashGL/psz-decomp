// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x130, exact bytes and relocation targets.
// flags: -O4,p
struct Nodec979c {
    char pad[0x1c];
    int f1c;
    struct Nodec979c *f20;
};
extern const char DAT_020fcf7c[];
extern const char DAT_020fd0b4[];
extern const char DAT_020fd0ac[];
extern const char DAT_020fcecc[];
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern int FUN_020cc950(void *);
extern void FUN_020c7864(int);
extern int FUN_020ce808(void *, struct Nodec979c **, int);
extern int FUN_020c9500(void *);
extern int FUN_020cf07c(void *);
extern int FUN_020d157c(void *);
extern void FUN_020ce474(void *, struct Nodec979c *);
extern void FUN_020ce7d0(void *, struct Nodec979c *);
extern int FUN_020cba44(void *, int);
extern void FUN_020ccaa0(void *, int);
extern void FUN_020c9344(void *);

int FUN_020c979c(void **self, int wait_flag) {
    int status = 0;
    int *inner = (int *)*self;
    struct Nodec979c *p;
    int wait_loop;
    int res;

    if ((unsigned int)inner[0x7d] > 5) {
        FUN_02000edc(DAT_020fcf7c, DAT_020fd0ac, DAT_020fcecc, 0x1de);
    }
    if (inner[0x7d] == 1) {
        do {
            status = FUN_020cc950(self);
            wait_loop = (status == 0 && wait_flag != 0 && inner[0x7d] == 1);
            if (wait_loop) {
                FUN_020c7864(10);
            }
        } while (wait_loop);
        if (status != 0) {
            if (FUN_020ce808(self, &p, 1) != 0) {
                p->f1c = 4;
            } else {
                FUN_02000edc(DAT_020fd0b4, DAT_020fd0ac, DAT_020fcecc, 0x204);
            }
        }
    }
    if (inner[0x7d] == 3 || inner[0x7d] == 2 || inner[0x7d] == 5) {
        if (status == 0) {
            status = FUN_020c9500(self);
        }
        if (status == 0) {
            status = FUN_020cf07c(self);
        }
    }
    if (status == 0) {
        status = FUN_020d157c(self);
    }
    p = (struct Nodec979c *)inner[0x171];
    while (p != 0) {
        if (p->f1c != 0) {
            FUN_020ce474(self, p);
            struct Nodec979c *cur = p;
            p = p->f20;
            FUN_020ce7d0(self, cur);
        } else {
            p = p->f20;
        }
    }
    res = FUN_020cba44(self, wait_flag);
    if (res != 0) {
        return res;
    }
    if (inner[0x16f] != 0) {
        FUN_020ccaa0(self, 0);
        FUN_020c9344(self);
    }
    return status;
}
