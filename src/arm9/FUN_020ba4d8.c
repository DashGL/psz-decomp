// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// Key-first equality preserves cmp r0,r1 against loaded node identity.
// FUN_020ba4d8 @ 0x020ba4d8 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Search manager linked list by word +88; process first match and return success.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; inventory code
 * extent above, literal pools resolved directly from PC-relative loads.
 */
extern void FUN_020ba730(void *);
int FUN_020ba4d8(unsigned int key) {
    char *manager=*(char **)0x0211b280;
    int found=0;
    if(manager) {
        char *node=*(char **)(manager+28);
        while(node) {
            if(key==*(unsigned int *)(node+0x88)) { FUN_020ba730(node); found=1; break; }
            node=*(char **)(node+20);
        }
    }
    return found;
}
