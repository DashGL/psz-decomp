// FUN_020bd648 @ 0x020bd648 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void FUN_020bd6cc(int);
extern void FUN_020bd6ec(int,int,int,int);
extern void FUN_020bd714(int,int);
extern void FUN_020e1140(int,void (*)(int),int,void (*)(int,int,int,int),int,void (*)(int,int),int);
void FUN_020bd648(void){FUN_020e1140(0,FUN_020bd6cc,0,FUN_020bd6ec,0,FUN_020bd714,0);}
