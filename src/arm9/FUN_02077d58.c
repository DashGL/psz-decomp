// FUN_02077d58 @ 0x02077d58 (0x36, thumb) - ported from FUN_0205f8b4 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Scan all three entries in current24-byte bank. Any signed entry value3
 * or4 prevents changing index+0xd4; otherwise store requested index as-is.
 * Snapshot current index once, preserve all reads even after rejection.
 * Callerbe928 derives request from queryab7ac(0x100) then reads back index.
 * Exact bank/entry meanings remain ???. Evidence: scratch/draft-coverage/batch98/.
 */
typedef unsigned int u32;
typedef unsigned char u8;
void FUN_02077d58(void *state,u32 requested)
{
    u8 *base=state;
    u32 bank=*(u32 *)(base+0xd4);
    int allowed=1;
    int entry;
    for (entry=0;entry<3;entry++) {
        int value=*(volatile int *)(base+bank*24+(u32)entry*8+0xd8);
        if (value>=3 && value<=4) allowed=0;
    }
    if (allowed) *(u32 *)(base+0xd4)=requested;
}
