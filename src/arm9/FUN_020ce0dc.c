// FUN_020ce0dc @ 0x020ce0dc (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// USA runtime callback/collection helper; full ABI and extent in root batch241.
extern void FUN_020ce0c0(void *);extern void *FUN_020c6da8(int,int,void (*)(void *));extern unsigned int FUN_020d1b74(void *,const char *);extern char DAT_020fdd68[];
int FUN_020ce0dc(char **object){char *state=*object;*(void **)(state+948)=FUN_020c6da8(8,1,FUN_020ce0c0);if(!*(void **)(state+948)){FUN_020d1b74(object,DAT_020fdd68);return 1;}return 0;}
