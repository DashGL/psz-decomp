// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x78, exact bytes and relocation targets.
// Typed record evidence: notes/sessions/continue-low-20261112.md
typedef struct{unsigned char b[8];}Bytes_02038a0c;
// FUN_02038a0c @ 0x02038a0c (inventory code 0x72, thumb)
// check: 2.0/sp2p3 target=0x78 candidate=0x78 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 49.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b49/02038a0c.txt.
 */
typedef struct{unsigned int w[14];} Block;extern void *FUN_020c4450(void *,void *);
char *FUN_02038a0c(char *s,char *source,unsigned int arg){int i;*(unsigned int *)s=0x020fc770;FUN_020c4450(s+4,source);FUN_020c4450(s+20,source+16);s[36]=*(signed char *)(source+32);s[37]=*(signed char *)(source+33);s[38]=*(signed char *)(source+34);s[39]=*(signed char *)(source+35);*(Bytes_02038a0c*)(s+40)=*(const Bytes_02038a0c*)(source+36);*(Block *)(s+48)=*(Block *)(source+44);*(unsigned int *)(s+104)=arg;return s;}
