// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// FUN_overlay_29__021998fc @ 0x021998fc, verified extent 0x54.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_0219bd54[];
// FUN_overlay_29__021998fc @ 0x021998fc (code 0x4e, pool extent 0x54, thumb)
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Choose the nearest eligible target or use the alternate owner mode, then store it in shared or local state.
 * Field identities remain provisional.
 */
typedef struct{int x,y,z;}Vec;
extern int FUN_020868f0(const Vec *);extern int FUN_0207f770(void *);extern int FUN_02037294(void *,const Vec *);
void FUN_overlay_29__021998fc(unsigned char *self){unsigned char *owner=*(unsigned char **)(self+4);int target=FUN_020868f0((Vec *)(owner+56));if((unsigned int)(owner+100)!=0&&FUN_0207f770(owner+100)==3){Vec position=*(Vec *)(owner+56);target=FUN_02037294(owner,&position);}if(*(int *)(owner+212)==1)*(int *)((unsigned int)DAT_0219bd54 + 4u)=target;else *(int *)(self+76)=target;}
