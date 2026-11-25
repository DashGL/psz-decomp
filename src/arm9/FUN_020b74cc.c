// FUN_020b74cc @ 0x020b74cc (0x22, thumb) - ported from FUN_020a4b54 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: initialize20-byte gameplay state record.
 * Collection reseta4da8 calls this20 times on banked9dae8's state-change
 * path. Clear word0,bytes10/11,halfword12; then interleave four halfword
 * zeros at4..a with byteff atc..f. Exact field roles ???.
 * Evidence: scratch/draft-coverage/batch53/020a4b54-disassemble.txt.
 */
typedef unsigned int u32;
void FUN_020b74cc(u32 record)
{
    int i=0;
    *(u32 *)record=0;
    *(unsigned char *)(record+0x10)=0;
    *(unsigned char *)(record+0x11)=0;
    *(unsigned short *)(record+0x12)=0;
    do {
        *(unsigned short *)(record+4+i*2)=0;
        *(char *)(record+0xc+i)=-1;
        i++;
    } while(i<4);
}
