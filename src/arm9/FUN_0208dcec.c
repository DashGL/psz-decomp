// FUN_0208dcec @ 0x0208dcec (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_0208dcec @ 0x0208dcec (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct and dispatch message carrying two identifiers.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208dcec.txt.
 */
extern void FUN_0208dcc4(void *),FUN_020bce3c(void *); void FUN_0208dcec(void *unused,unsigned int a,unsigned int b) { unsigned int message[4]; FUN_0208dcc4(message); message[1]=a; message[2]=b; ((char *)message)[12]=0; ((char *)message)[13]=0; FUN_020bce3c(message); }
