// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
//cpp
struct Scene_02030b2c { virtual void slot0(); virtual void slot1(); virtual ~Scene_02030b2c(); unsigned char data[44]; };
extern "C" {
// Verified: full60-byte extent, exactbytes and no relocations under2.0/sp2p3.
// Scope: notes/reference/scene-family-20261113/closure-proof.json
// flags: -O4,s
void FUN_02030b2c(char *s) { if(*(void **)s) { unsigned int i; for(i=0;i<*(unsigned int *)(s+4);i++) { char *p=(*(char ***)s)[i]; if(p) { int empty=*(unsigned int *)(p+8)==0; if(empty) ((Scene_02030b2c*)p)->slot0(); } } } }

}
