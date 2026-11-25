// FUN_0204ce08 @ 0x0204ce08 (0x9c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch22-manifest.json; original draft retained for referenced provenance.
// FUN_0204ce08 @ 0x0204ce08 (inventory code 0x98, thumb)
// check: 2.0/sp2p3 target=0x9c candidate=0x9c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 60.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b60/0204ce08.txt.
 */
extern void FUN_020c0488(void *);extern void FUN_02047798(void *,void *);
char *FUN_0204ce08(char *s){int i;*(unsigned int *)s=0x020f91c8;*(int *)(s+4)=-1;*(int *)(s+8)=0;*(int *)(s+16)=1;*(int *)(s+20)=1;*(int *)(s+48)=-1;*(int *)(s+52)=0;*(int *)(s+56)=1;*(short *)(s+60)=0;*(short *)(s+62)=0;*(int *)(s+96)=0;*(int *)(s+100)=0;*(int *)(s+196)=0;*(int *)(s+200)=0;*(int *)(s+204)=0;*(int *)(s+208)=0;*(int *)(s+212)=0;*(int *)(s+24)=0;*(int *)(s+28)=0;*(int *)(s+32)=0;*(int *)(s+36)=0;*(int *)(s+40)=0;*(int *)(s+44)=0;for(i=0;i<2;i++){*(int *)(s+64+8*i)=0;*(int *)(s+68+8*i)=0;*(int *)(s+80+4*i)=-1;*(int *)(s+88+4*i)=0;}*(int *)(s+104)=3;FUN_020c0488(s+140);FUN_02047798(s+152,s+104);*(int *)(s+148)=4096;*(int *)(s+192)=-1;return s;}
