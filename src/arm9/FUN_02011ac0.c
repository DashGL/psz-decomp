// FUN_02011ac0 @ 0x02011ac0 (0x60, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch43-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived resource and list helper.
void FUN_02011ac0(char *list,char *node){unsigned int offset=*(unsigned short *)(list+10);char **link=(char **)(node+offset);char *prev=link[0],*next;if(!prev)*(char **)list=link[1];else *(char **)(prev+offset+4)=link[1];next=link[1];if(!next)*(char **)(list+4)=link[0];else *(char **)(next+*(unsigned short *)(list+10))=link[0];link[0]=0;link[1]=0;(*(unsigned short *)(list+8))--;}
