// FUN_020c3900 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020c3900 @ 0x020c3900
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Call callback at table +8 on embedded self+4 with zero and four caller arguments, including one stack argument.
 * Evidence: scratch/coverage-root/batch4/020c3900.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
void FUN_020c3900(char *self,unsigned int a,unsigned int b,unsigned int c,unsigned int d) {
    void (**table)(void *,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int)=*(void (***)(void *,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int))(self+24);
    table[2](self+4,0,a,b,c,d);
}
