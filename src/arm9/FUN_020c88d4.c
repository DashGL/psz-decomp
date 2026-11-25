// FUN_020c88d4 @ 0x020c88d4 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// USA runtime callback/collection helper; full ABI and extent in root batch241.
extern unsigned int FUN_020d1b74(void *,const char *);extern char DAT_020fcd80[];
int FUN_020c88d4(char **object,int index,unsigned int callback,unsigned int context){char *state;if(!object||!(state=*object))return 2;if(index<0||index>=9){FUN_020d1b74(object,DAT_020fcd80);return 2;}*(unsigned int *)(state+index*8+424)=callback;*(unsigned int *)(state+index*8+428)=context;return 0;}
