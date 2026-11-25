// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_10__02122084 @ 0x02122084 (code 0x1a, pool extent 0x20, thumb)
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Dispatch seven concrete pointer-return factories with one forwarded word; slot six ignores the word.
 * Field identities remain provisional.
 */
typedef void *(*Factory)(unsigned int);
extern Factory D_02122400[];
void *FUN_overlay_10__02122084(int index,unsigned int value) {if(index<7){Factory factory=D_02122400[index];if(factory)return factory(value);}return 0;}
