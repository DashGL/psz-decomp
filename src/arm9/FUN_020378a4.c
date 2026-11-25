// FUN_020378a4 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020378a4 @ 0x020378a4 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Dispatch child cleanup via slot +8, reread child, clear its words +4/+8 and owner slot.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
void FUN_020378a4(void **self) {
    void *child=self[2];
    if(child) {
        void (**table)(void *)=*(void (***)(void *))child;
        table[2](child);
        ((void **)self[2])[1]=0;
        ((void **)self[2])[2]=0;
        self[2]=0;
    }
}
