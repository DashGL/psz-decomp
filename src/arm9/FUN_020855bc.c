// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// FUN_020855bc @ 0x020855bc (inventory code 0x3c, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// Operand order index == slot identity preserves cmp r0,r2.
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Validate global player slot [0,4), stored identity and byte +95 before identity classification.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; inventory code
 * extent above, literal pools resolved directly from PC-relative loads.
 */
extern int FUN_02084d1c(int, int);
int FUN_020855bc(int index) {
    char *manager=*(char **)0x0211a52c;
    if(manager && index>=0 && index<4) {
        char *slot=manager+index*0x94;
        if(index==*(int *)(slot+0x88) && *(unsigned char *)(slot+0x95)!=1)
            return FUN_02084d1c(index,*(int *)(manager+0x254));
    }
    return 0;
}
