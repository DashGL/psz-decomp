// FUN_020c05f8 @ 0x020c05f8 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// FUN_020c05f8 @ 0x020c05f8
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset record, set byte +1 and supplied words +8/+c, choose halfword id and repack refreshed global fields.
 * Evidence: scratch/coverage-root/batch7/020c05f8.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_020c062c(void *),FUN_020c0c58(void),FUN_020c064c(void *,unsigned int,unsigned int,unsigned int);
extern unsigned int FUN_020c0598(void);
void FUN_020c05f8(char *self,unsigned int a,unsigned int b) {
    unsigned int *global=(unsigned int *)0x0211b3d8;
    FUN_020c062c(self);self[1]=1;*(unsigned int *)(self+8)=a;*(unsigned int *)(self+12)=b;
    *(unsigned short *)(self+6)=FUN_020c0598();FUN_020c0c58();FUN_020c064c(self,global[1],global[2],global[3]);
}
