// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x86, exact bytes and relocation targets.
// Verified 2026-11-12: full extent 0x86, exact bytes and relocation check (leaf).
// Evidence: notes/sessions/matching-upper-continue-2026-11-12.md
// FUN_0207355c @ 0x0207355c (inventory code 0x86, thumb)
// check: 2.0/sp2p3 target=0x86 candidate=0x86 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy packed character descriptor fields and position.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207355c.txt.
 */
typedef struct {short v[10];} A;typedef struct {short v[18];} B;typedef struct {unsigned char v[8];} C;typedef struct {int x,y,z;} V;void *FUN_0207355c(unsigned char *d,unsigned char *s){*(A *)d=*(A *)s;*(B *)(d+20)=*(B *)(s+20);*(C *)(d+56)=*(C *)(s+56);d[64]=s[64];d[65]=s[65];d[66]=s[66];d[67]=s[67];*(V *)(d+68)=*(V *)(s+68);return d;}
