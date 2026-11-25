// FUN_overlay_20__02198e78 @ 0x02198e78 (0x90, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch5.json; original draft retained for referenced provenance.
// FUN_overlay_20__02198e78 @ 0x02198e78 (code 0x8c, full extent 0x90, thumb)
// check: vers=2.0/sp2p3 target=0x90 candidate=0x90 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete motion-path replacement and vector initialization, including six-input constructor.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch574.md.
 */
typedef struct Vec {int x,y,z;} Vec;typedef void (*Delete)(void *);
extern void *FUN_020ba894(unsigned);extern void *FUN_02091d98(void *,int,int,int,int,int);extern int FUN_02091a7c(void *,const void *,int);extern int FUN_02091aec(void *);
#define OWNER (*(char **)(self+0xd4))
#define PATH (*(void **)(OWNER+4))
void FUN_overlay_20__02198e78(char *self,const Vec *points,int count) { void *path=PATH;if(path){if(path)((Delete)(*(unsigned **)path)[1])(path);PATH=0;}
 path=FUN_020ba894(96);if(path)path=FUN_02091d98(path,1,count,16,0,0);PATH=path;
 FUN_02091a7c(PATH,points,count);FUN_02091aec(PATH);
 *(Vec *)(OWNER+0x34)=*(Vec *)(self+0x38);*(Vec *)(OWNER+0x40)=*(const Vec *)0x020fc958; }
