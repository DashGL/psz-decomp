// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// check: 2.0/sp2p3 full_extent=0x68 exact_bytes=0 bad_relocs=0
// Record boundary proof: notes/sessions/matching-resume2-2026-11-12-mappings.md
// FUN_0206f750 @ 0x0206f750
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy two text fields, four signed byte fields, eight bytes and trailing56-byte word record.
 * Evidence: scratch/coverage-root/batch15/0206f750.txt.
 */
typedef struct {unsigned int word[14];} Tail;
typedef struct {unsigned char bytes[8];} Bytes_0206f750;
extern void *FUN_020c4450(void *,const void *);
void *FUN_0206f750(signed char *self,const signed char *other){FUN_020c4450(self,other);FUN_020c4450(self+16,other+16);self[32]=other[32];self[33]=other[33];self[34]=other[34];self[35]=other[35];*(Bytes_0206f750 *)(self+36)=*(const Bytes_0206f750 *)(other+36);*(Tail *)(self+44)=*(const Tail *)(other+44);return self;}
