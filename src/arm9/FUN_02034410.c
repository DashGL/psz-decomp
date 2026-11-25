// FUN_02034410 @ 0x02034410 (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch17-manifest.json; original draft retained for referenced provenance.
// FUN_02034410 @ 0x02034410 (inventory code 0x54, thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 114.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b114/02034410.txt.
 */
extern void FUN_020c6948(void *),FUN_02033b7c(void *);void FUN_02034410(char *s){int i;void *p;FUN_020c6948(s+184);p=((void **)(s+64))[*(unsigned int *)(s+100)];if(p)((void (*)(void *))(*(void ***)p)[3])(p);p=((void **)(s+64))[*(unsigned int *)(s+100)];if(p)((void (*)(void *))(*(void ***)p)[0])(p);for(i=0;i<*(unsigned short *)(s+16);i++)FUN_02033b7c(*(char **)(s+4)+28*i);p=*(void **)(s+32);if(p)FUN_02034410(p);}
