// FUN_020c8220 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// USA runtime callback/collection helper; full ABI and extent in root batch241.
extern char *FUN_020c7e54(void *);
int FUN_020c8220(void *object,int a,int b,int c,int d){char *state=FUN_020c7e54(object);int (*callback)(int,int,int,int,void *)=*(int (**)(int,int,int,int,void *))(state+40);if(callback)return callback(a,b,c,d,*(void **)(state+44))!=0;return 0;}
