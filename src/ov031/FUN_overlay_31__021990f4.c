// flags: -O4,p
// FUN_overlay_31__021990f4 @ 0x021990f4 (code 0x9a, full extent 0xb0, thumb)
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch467.md.
 */
extern unsigned char DAT_0219a769[];
extern void * DAT_0219d0a0[];
extern unsigned DAT_0219d0a4[];
extern unsigned char DAT_0219d0a8[];
extern unsigned char DAT_0219d0b4[];
typedef struct {int x,y,z;} Vec;extern void FUN_overlay_31__0219a750(void *);extern void FUN_0200c594(void *,void *,void *);extern void FUN_02040c0c(void *,int,int,int,int);extern void FUN_overlay_31__02199880(void *);extern void FUN_overlay_31__0219a844(void *,void *,void *);
void FUN_overlay_31__021990f4(int *self) { int *owner=(int *)self[1],*state=(int *)self[2];void *manager=*DAT_0219d0a0;Vec target;if(!manager){if(!(*DAT_0219d0a4&1)){FUN_overlay_31__0219a750((void *)DAT_0219d0b4);FUN_0200c594((void *)DAT_0219d0b4,(void *)DAT_0219a769,(void *)DAT_0219d0a8);*DAT_0219d0a4|=1;}manager=(void *)DAT_0219d0b4;}((signed char *)self)[16]=((signed char *)state)[92];if(((signed char *)self)[16]!=((signed char *)owner)[220]){*(Vec *)(self+5)=*(Vec *)(owner+14);self[3]=0;self[11]=0;FUN_02040c0c(owner,owner[56],1,4096,0);FUN_overlay_31__02199880(owner);}else self[3]=3;FUN_overlay_31__0219a844(&target,manager,(char *)self+16);*(Vec *)(self+8)=target; }
