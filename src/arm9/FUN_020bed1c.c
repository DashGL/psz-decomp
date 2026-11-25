// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// FUN_020bed1c @ 0x020bed1c (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Mark handle record and decrement active count.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bed1c.txt.
 */
// Logical-not assigned to an int, then explicit ==0, retains the ROM
// branchy empty select; a direct !=0 guard incorrectly contracts it.
extern char *FUN_020bee50(void *,unsigned int);
void FUN_020bed1c(char *self,unsigned int handle) {
 char *p=FUN_020bee50(self,handle);
 if(p) {
  int empty= !*(int *)(p+12);
  if(empty==0) { p[2]=1; --*(int *)(self+2404); }
 }
}
