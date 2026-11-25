// FUN_overlay_29__0219a9d8 @ 0x0219a9d8 (0xfe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch2.json; original draft retained for referenced provenance.
// FUN_overlay_29__0219a9d8 @ 0x0219a9d8 (full extent 0xfe, thumb)
// check: vers=2.0/sp2p3 target=0xfe candidate=0xfe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Complete game state/effect logic. ABI and arithmetic evidence:
 * notes/sessions/coverage-overlays-2026-11-05-batch667.md. */
typedef struct Vec{int x,y,z;}Vec;extern char *FUN_02075040(void *,int);extern void FUN_02036848(Vec *,const Vec *),FUN_0204bf88(void *),FUN_02075068(void *,int),FUN_0203666c(void *),FUN_02072724(void *,int),FUN_02072750(void *,int,const Vec *);extern void *FUN_02046d94(void *,int,int);extern int FUN_02072650(void *,int,int,int);
void FUN_overlay_29__0219a9d8(char *self){int i;for(i=0;i<3;i++){char *entry=self+0xd4+i*0x18;if(*(int *)entry!=0){if(*(int *)(entry+4)!=-1){char *effect=FUN_02075040(self,*(int *)(entry+4));if(effect){Vec pos=*(Vec *)(effect+0x5c);FUN_02036848(&pos,(const Vec *)(entry+0xc));*(Vec *)(effect+0x5c)=pos;*(unsigned short *)(effect+0x6a)=(unsigned short)(*(unsigned short *)(effect+0x6a)+2304u);FUN_0204bf88(effect);if(*(int *)entry==3){int request[25],sound;FUN_02075068(self,*(int *)(entry+4));*(int *)(entry+4)=-1;FUN_0203666c(request);request[21]=40;request[22]=*(int *)(self+0xc);*(Vec *)(request+8)=pos;FUN_02046d94(request,0,0);if(*(int *)(entry+8)!=-1)FUN_02072724(self,*(int *)(entry+8));sound=FUN_02072650(self,3,0,0);*(int *)(entry+8)=sound;FUN_02072750(self,sound,&pos);}}}if(*(int *)entry==1){if(*(int *)(entry+8)!=-1){FUN_02072724(self,*(int *)(entry+8));*(int *)(entry+8)=-1;}}*(unsigned *)entry-=1u;}}}
