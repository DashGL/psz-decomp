// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x62, exact bytes and relocation targets.
// Native dispatch evidence: notes/sessions/matching-upper-2026-11-12-equipment-totals-language.md
//cpp
// FUN_020b5eec @ 0x020b5eec (inventory code 0x62, thumb)
// check: 2.0/sp2p3 target=0x62 candidate=0x62 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Sum six ordered descriptor-dependent contributions.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b5eec.txt.
 */
struct C_020b5eec {
 virtual void v0();
 virtual void v1();
 virtual void v2();
 virtual void v3();
 virtual void v4();
 virtual void v5();
 virtual void *v6();
};
extern "C" {
extern int FUN_020b6940(void *,void *),FUN_020b68f8(void *,void *,void *),FUN_020b6868(void *,void *),FUN_020b681c(void *,void *),FUN_020b67d8(void *,void *),FUN_020b6800(void *,void *);int FUN_020b5eec(char *s,void *a,void *b,void *c,void *d){void *p=((C_020b5eec *)s)->v6();int v1=FUN_020b6940(s,c),v2=FUN_020b68f8(s,a,c),v3=FUN_020b6868(s,d),v4=FUN_020b681c(s,a),v5=FUN_020b67d8(s,p),v6=FUN_020b6800(s,b);return v1+(v2+(v3+(v4+(v5+v6))));}

}
