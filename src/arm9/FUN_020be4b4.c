// FUN_020be4b4 @ 0x020be4b4 (0x24, thumb) - ported from FUN_020aba30 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_020be4b4 @ 0x020aba30, Thumb, 0x24 bytes.
 * Resolve the handle, require a payload, then activate the slot.
 * r1 is passed through to the resolver and carries the resolved slot
 * into the activation helper; Ghidra's one-argument rendering omits both.
 */
extern unsigned char *FUN_020bee50(unsigned char *slots, unsigned int handle);
extern void FUN_020beff8(unsigned char *slots, unsigned char *slot);
void FUN_020be4b4(unsigned char *slots, unsigned int handle)
{
    unsigned char *slot = FUN_020bee50(slots, handle);
    if (slot != 0) {
        int empty = !*(int *)(slot + 0xc);
        if (empty == 0)
            FUN_020beff8(slots, slot);
    }
}
