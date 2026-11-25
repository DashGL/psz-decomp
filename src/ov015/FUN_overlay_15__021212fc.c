// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// FUN_overlay_15__021212fc @ 0x021212fc
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Atomically advance shared network state seven to four when SDK reports state three.
 * Field identities remain provisional.
 */
extern int data_0213d200[];
extern unsigned int FUN_020683d4(void);
extern unsigned int FUN_020683e8(unsigned int);
extern int FUN_0202e02c(void);
int FUN_overlay_15__021212fc(void) {unsigned int irq=FUN_020683d4();if(data_0213d200[6]==7 && FUN_0202e02c()==3){data_0213d200[6]=4;FUN_020683e8(irq);return 1;}FUN_020683e8(irq);return 0;}
