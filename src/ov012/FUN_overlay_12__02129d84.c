// FUN_overlay_12__02129d84 @ 0x02129d84 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__02129d84 @ 0x02129d84 (code 0x28, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from module disassembly, 2026-11-05.
 * Initialize a 12-byte message, fill sender and subject halfwords, send opcode 10.
 * Initializer takes only the output message; sender query veneer resolves to
 * 0208546c (no extra register inputs). Send wrapper accepts only this message.
 * Subject truncation to 16 bits is intentional. Field identities provisional.
 */
typedef struct { unsigned int header; short sender, subject; int opcode; } Message;
extern Message *FUN_overlay_12__02129d60(Message *);
extern int FUN_02084cc0(void *);
extern unsigned int FUN_020bce3c(Message *);
void FUN_overlay_12__02129d84(void) {
    Message message;
    FUN_overlay_12__02129d60(&message);
    message.sender = FUN_02084cc0((void *)0x0211a51c);
    message.subject = -1;
    message.opcode = 10;
    FUN_020bce3c(&message);
}
