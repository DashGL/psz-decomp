// FUN_020b44a0 @ 0x020b44a0 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_020b44a0 @ 0x020b44a0 (inventory code 0x4e, thumb)
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy object descriptor and construct positioned effect.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b44a0.txt.
 */
typedef struct {int x,y,z;} V;extern void FUN_02039534(void *,void *),FUN_0203666c(void *);extern unsigned int FUN_020509bc(void *,void *);extern void *FUN_02046d94(void *,int,int);void FUN_020b44a0(char *s,void *item,V *pos,int category){int desc[25];void *p;FUN_02039534(s+4,item);s[24]=category;FUN_0203666c(desc);*(V *)((char *)desc+32)=*pos;p=*(void **)0x0210e240;if(p)*(unsigned short *)desc=FUN_020509bc(p,item);else *(unsigned short *)desc=65535;*(void **)(s+20)=FUN_02046d94(desc,0,0);}
