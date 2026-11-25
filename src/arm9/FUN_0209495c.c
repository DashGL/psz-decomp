// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x88, exact bytes and relocation targets.
// Native dispatch evidence: notes/sessions/matching-upper-2026-11-12-actor-interface-language.md
//cpp
// FUN_0209495c @ 0x0209495c (inventory code 0x82, thumb)
// check: 2.0/sp2p3 target=0x88 candidate=0x88 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Sum packed item modifiers and send actor action packet.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209495c.txt.
 */
struct C_0209495c {
 virtual void v0();
 virtual void v1();
 virtual void v2();
 virtual int v3(void *);
};
extern "C" {
extern char UNK_0211a5c4[];extern void FUN_0208dc58(void *,int,int,int);void FUN_0209495c(char *s,int action){int d[4],value;if(s && action!=-1 && ((C_0209495c *)(s+32))->v3(d)){if(((signed char *)s)[512]<0)s[512]=0;*(int *)(s+248)|=32;value=((d[1]&0x1fc0000)>>18)+((d[1]&0x3f800)>>11)+((d[1]&0x7f0)>>4)+((d[2]&0x7f000000)>>24);FUN_0208dc58(UNK_0211a5c4,*(int *)(s+252),action,value);}}

}
