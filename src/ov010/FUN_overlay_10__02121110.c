// FUN_overlay_10__02121110 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_10__02121110 @ 0x02121110 (code 0x2c, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void FUN_overlay_10__021220bc(void *);
extern void FUN_020b2234(void *, const void *);

void FUN_overlay_10__02121110(void **self)
{
    void *child;
    FUN_overlay_10__021220bc(self[0]);
    child = self[1];
    if (child) {
        if (child) {
            void *(**table)(void *) = *(void *(***)(void *))child;
            table[5](child);
        }
        self[1] = 0;
    }
    FUN_020b2234(self + 2, (const void *)0x0212234c);
    self[4] = 0;
}
