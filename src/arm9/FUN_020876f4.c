// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// FUN_020876f4 @ 0x020876f4
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release four optional global handles and zero occupied slots.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020876f4.txt.
 */
extern unsigned int data_0211a550[];
extern void FUN_02020b34(unsigned int);
void FUN_020876f4(void) { unsigned int *handles=data_0211a550; int i; for(i=0;i<4;i++) if(handles[i]) { FUN_02020b34(handles[i]); handles[i]=0; } }
