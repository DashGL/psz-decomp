// FUN_overlay_13__0211f01c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_13__0211f01c @ 0x0211f01c (code 0x2a, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void FUN_020a4420(void *);
extern void FUN_020b2234(void *, const void *);

void FUN_overlay_13__0211f01c(void **self)
{
    void *child;
    FUN_020a4420(self);
    child = self[1];
    if (child) {
        if (child) {
            void *(**table)(void *) = *(void *(***)(void *))child;
            table[5](child);
        }
        self[1] = 0;
    }
    FUN_020b2234(self + 2, (const void *)0x0211fa10);
    self[4] = 0;
}
