// FUN_02070c08 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02070c08 @ 0x02070c08 (inventory code 0x4e, thumb)
// check: 2.0/sp2p3 target=0x4e candidate=0x4e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reload allocated resource when size is valid and configure resolved object.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02070c08.txt.
 */
extern int FUN_020ba288(void *);extern void FUN_020c13ec(void *,void *),FUN_020ba2d4(void *,void *),FUN_020c1ae0(void *,int);extern void *FUN_020c13c8(void *,int,int),*FUN_020ba440(void *);void FUN_02070c08(char *self,void *source){int size=FUN_020ba288(source);if(size!=-1){if(*(void **)(self+36)){FUN_020c13ec(*(void **)(self+24),*(void **)(self+36));*(void **)(self+36)=0;}*(void **)(self+36)=FUN_020c13c8(*(void **)(self+24),size,16);FUN_020ba2d4(source,*(void **)(self+36));*(void **)(self+28)=FUN_020ba440(*(void **)(self+36));}FUN_020c1ae0(**(void ***)(self+28),5);}
