// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// FUN_020c31ec @ 0x020c31ec
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Prepare global drawing state, set halfword bits10/11 across 128 eight-byte records if available, then update contexts.
 * Evidence: scratch/coverage-root/batch9/020c31ec.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_0201441c(void),FUN_020c3220(void);
extern char *FUN_02013414(int);
void FUN_020c31ec(void) { char *records;FUN_0201441c();records=FUN_02013414(1);if(records) { int i;for(i=0;i<128;i++) { *(unsigned short *)(records+4)=(*(unsigned short *)(records+4)&~0xc00)|0xc00;records+=8; } }FUN_020c3220(); }
