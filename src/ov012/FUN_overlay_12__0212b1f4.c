// FUN_overlay_12__0212b1f4 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_12__0212b1f4 @ 0x0212b1f4 (code 0x4a, pool extent 0x4a, thumb)
// check: vers=2.0/sp2p3 target=0x4a candidate=0x4a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * Configure scheduled owner-linked action; all stack arguments preserved.
 * Full semantics and ABI evidence: coverage-overlays-2026-11-05-batch342.md.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__0212c214(int,void *);
extern void *FUN_0209e294(void *,unsigned int,unsigned int);
extern int FUN_overlay_12__0212c224(void *,const void *);
extern void *FUN_overlay_12__0212a380(int);
void FUN_overlay_12__0212b1f4(char *self,int subject,int index,int mode,int value,void (*first)(void),void (*second)(void)) { unsigned int config[6];void *resource=FUN_0209e294(self+0x5c,0,index);
if(resource){FUN_overlay_12__0212c214(*(int *)(self+0x58),self);*(int *)(self+0x58)=-1;
config[0]=(unsigned int)FUN_overlay_12__0212a380(subject);config[1]=(unsigned int)resource;config[2]=mode;config[3]=value;config[4]=(unsigned int)first;config[5]=(unsigned int)second;
*(int *)(self+0x58)=FUN_overlay_12__0212c224(self,config);} }
