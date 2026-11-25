// FUN_020a4f28 @ 0x020a4f28 (0x9e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_020a4f28 @ 0x020a4f28 (inventory code 0x9e, thumb)
// check: 2.0/sp2p3 target=0x9e candidate=0x9e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Render eligible markers and an explicitly selected marker.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a4f28.txt.
 */
extern void *FUN_020c1fc8(void);extern int FUN_020c2608(void *,int);extern void FUN_02071d0c(void *),FUN_020c32b4(void *,int);void FUN_020a4f28(char *s){int a[4],b[4],i;char *p;unsigned int flags;if(FUN_020c2608(FUN_020c1fc8(),*(int *)(s+56))){for(i=0;i<*(int *)(s+80);i++){p=*(char **)(s+76)+20*i;if(!((unsigned char)p[13]&2)){flags=*(unsigned short *)(s+84+2*i);if(!(flags&2) && (flags&4) && ((signed char *)p)[12]>=0){FUN_02071d0c(a);*(short *)a=((signed char *)p)[12];a[2]=*(int *)(p+4);a[3]=*(int *)(p+8);FUN_020c32b4(a,*(int *)(s+56));}}}i=*(int *)(s+232);if(i>=0){p=*(char **)(s+76)+20*i;FUN_02071d0c(b);*(short *)b=((signed char *)p)[12];b[2]=*(int *)(p+4);b[3]=*(int *)(p+8);FUN_020c32b4(b,*(int *)(s+56));}}}
