// FUN_0207803c @ 0x0207803c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch29-manifest.json; original draft retained for referenced provenance.
// FUN_0207803c @ 0x0207803c (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Build stack message with type38 and two caller words, dispatch using receiver handle.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207803c.txt.
 */
typedef struct { unsigned short type,a,b,pad; unsigned int x,y; } Message; extern void FUN_020c32b4(void *,unsigned int); void FUN_0207803c(unsigned int *self,unsigned int *source) { Message message; message.type=0; message.a=0; message.b=0; message.type=38; message.x=source[0]; message.y=source[1]; FUN_020c32b4(&message,self[1]); }
