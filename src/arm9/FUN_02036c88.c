// FUN_02036c88 @ 0x02036c88 (0xc, thumb) - ported from FUN_02059920 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Tracking update470b8 calls with index0 before attachment query705f4.
 * Load array pointer98; return first word at array+112*index, wrapping32.
 * No null/index bounds checks. Record fields beyond the pointer ???.
 * Evidence: scratch/draft-coverage/batch205/. No frozen-count/gameplay claim.
 */
void *FUN_02036c88(const char *self,unsigned int index)
{
 unsigned int base=*(const unsigned int *)(self+0x98);
 return *(void **)(base+112u*index);
}
