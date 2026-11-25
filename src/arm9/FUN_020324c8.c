// FUN_020324c8 @ 0x020324c8 (0x84, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_020324c8 @ 0x020324c8 (inventory code 0x7a, thumb)
// check: 2.0/sp2p3 target=0x84 candidate=0x84 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 119.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b119/020324c8.txt.
 */
extern void FUN_0207f3fc(void *),FUN_0206d178(void *),FUN_0206d0b8(void *),FUN_020324b0(void *);extern void *FUN_020ba894(unsigned int),*FUN_020828d0(void *);char *FUN_020324c8(char *s){void *p;*(unsigned int *)s=0;*(unsigned short *)(s+4)=0;*(unsigned int *)(s+8)=0;FUN_0207f3fc(s+12);FUN_0207f3fc(s+16);FUN_0207f3fc(s+20);FUN_0207f3fc(s+24);*(unsigned int *)(s+28)=~0u;*(unsigned int *)(s+32)=~0u;FUN_0206d178(s+36);FUN_0206d0b8(s+56);FUN_0206d178(s+64);FUN_0206d0b8(s+84);*(unsigned int *)(s+104)=0;*(unsigned int *)(s+108)=0;FUN_020324b0(s+108);*(void **)0x02108c64=s;p=FUN_020ba894(1272);if(p)p=FUN_020828d0(p);*(void **)s=p;return s;}
