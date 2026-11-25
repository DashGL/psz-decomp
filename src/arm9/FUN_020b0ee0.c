// FUN_020b0ee0 @ 0x020b0ee0 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_020b0ee0 @ 0x020b0ee0 (inventory code 0x4c, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Build effect descriptor with position and uniform scale.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b0ee0.txt.
 */
typedef struct {int x,y,z;} V;extern void FUN_0203666c(void *),FUN_020345f0(void *,void *);extern void *FUN_02046d94(void *,int,int);void *FUN_020b0ee0(char *s,int id,void *pos,int scale){int desc[25];V position,scaling;FUN_0203666c(desc);desc[21]=id;desc[22]=*(int *)(s+44);FUN_020345f0(&position,pos);*(V *)((char *)desc+32)=position;scaling.x=scale;scaling.y=scale;scaling.z=scale;*(V *)((char *)desc+44)=scaling;return FUN_02046d94(desc,0,0);}
