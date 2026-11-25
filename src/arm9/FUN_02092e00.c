// FUN_02092e00 @ 0x02092e00 (0xb4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch22.json; original draft retained for referenced provenance.
// FUN_02092e00 @ 0x02092e00 (inventory code 0xaa, thumb)
// check: 2.0/sp2p3 target=0xb4 candidate=0xb4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy owned child objects and embedded scene components.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02092e00.txt.
 */
typedef void (*Destroy)(void *);extern char UNK_020fafe0[],UNK_020fb010[];extern void FUN_020ba8b4(void *),FUN_020306fc(void *),FUN_02099f10(void *),FUN_0209a458(void *),FUN_020303bc(void *),FUN_020ba8ac(void *);void *FUN_02092e00(char *s){unsigned short i;void *p;*(void **)s=UNK_020fafe0;*(void **)(s+48)=UNK_020fb010;if(*(char **)(s+412)){for(i=0;i<3;i++){p=*(void **)(*(char **)(s+412)+32*i);if(p){if(p)(*(Destroy **)p)[3](p);*(void **)(*(char **)(s+412)+32*i)=0;}}if(*(void **)(s+412)){FUN_020ba8b4(*(void **)(s+412));*(void **)(s+412)=0;}}FUN_020306fc(s+364);FUN_020306fc(s+356);FUN_020306fc(s+348);FUN_020306fc(s+340);FUN_020306fc(s+332);FUN_02099f10(s+116);FUN_0209a458(s+48);FUN_020303bc(s);FUN_020ba8ac(s);return s;}
