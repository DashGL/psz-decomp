// FUN_0207a0c4 @ 0x0207a0c4 (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch24-manifest.json; original draft retained for referenced provenance.
// FUN_0207a0c4 @ 0x0207a0c4 (inventory code 0x5c, thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Build actor spawn descriptor with position and explicit type.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207a0c4.txt.
 */
typedef struct {int x,y,z;} Vec;extern void FUN_0203666c(void *),FUN_020472cc(void *,int),FUN_020456bc(void *,int);extern void *FUN_020475ec(void *,int);void *FUN_0207a0c4(int owner,Vec *position,int arg,int option){int d[25];FUN_0203666c(d);d[21]=14;d[22]=owner;FUN_020472cc(d,14);FUN_020456bc(d,d[21]);if(option!=-1)d[16]=option;*(Vec *)(d+8)=*position;d[17]=1;d[18]=21;d[19]=-1;d[7]|=0x8000000;return FUN_020475ec(d,arg);}
