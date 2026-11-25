// FUN_0203196c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_0203196c @ 0x0203196c (inventory code 0xa2, thumb)
// check: 2.0/sp2p3 target=0xbc candidate=0xbc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 224.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b224/0203196c.txt.
 */
typedef struct{unsigned char b[4];} Key;
extern void *FUN_020718e0(void),*FUN_02096488(void),*FUN_0209f170(void),*FUN_0204f3b8(void);extern unsigned int FUN_0208546c(void);
extern void FUN_020719c0(void *),FUN_02034540(void *),FUN_020316e8(void *,void *),FUN_02085fe0(unsigned int,void *),FUN_02096a8c(void *),FUN_0209f1dc(void *),FUN_02042884(void *),FUN_02030f7c(void *),FUN_02034cdc(void *),FUN_020415f8(void *),FUN_02032a64(void *);
extern void FUN_020852c8(void),FUN_0203352c(void),FUN_0204f358(void);
#define G(a) (*(char **)(a))
void FUN_0203196c(void){Key key;char *manager,*selected;FUN_020719c0(FUN_020718e0());manager=G(0x02108c84);if(manager){selected=((char **)(manager+64))[*(unsigned int *)(manager+100)];if(selected)((void (*)(void *))(*(void ***)selected)[16])(selected);*(unsigned int *)(manager+36)&=~1u;FUN_02034540(manager);}FUN_020316e8(&key,G(0x02108c64)+16);FUN_02085fe0(FUN_0208546c(),&key);FUN_020852c8();FUN_02096a8c(FUN_02096488());FUN_0209f1dc(FUN_0209f170());FUN_02042884(G(0x02108d68));if(G(0x02108c58))FUN_02030f7c(G(0x02108c58));FUN_0203352c();FUN_0204f3b8();FUN_0204f358();if(G(0x02108cf0))FUN_02034cdc(G(0x02108cf0));if(G(0x02108d64))FUN_020415f8(G(0x02108d64));FUN_02032a64(G(0x02108c64));}
