// FUN_0208da98 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_0208da98 @ 0x0208da98 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Send action-six message and invoke resolved child virtual method.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208da98.txt.
 */
extern void FUN_02085380(void *),FUN_020bce3c(void *); extern void *FUN_0208555c(int); void FUN_0208da98(void *unused,int index) { unsigned short message[6]; void *p; FUN_02085380(message); message[4]=6; message[5]=index; FUN_020bce3c(message); p=FUN_0208555c(index); if(p) (*(void (***)(void *))p)[27](p); }
