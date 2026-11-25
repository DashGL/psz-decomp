// FUN_overlay_12__0212b19c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_12__0212b19c @ 0x0212b19c (code 0x54, pool extent 0x58, thumb)
// check: vers=2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * Configure scheduled owner-linked action; all stack arguments preserved.
 * Full semantics and ABI evidence: coverage-overlays-2026-11-05-batch342.md.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__0212c214(int,void *);
extern void *FUN_0209e294(void *,unsigned int,unsigned int);
extern int FUN_overlay_12__0212c224(void *,const void *);
extern void *FUN_0200c938(void *,int);
void FUN_overlay_12__0212b19c(char *self,int index,int mode,int value,void (*first)(void),void (*second)(void)) { unsigned int config[6];void *resource,*owner;
FUN_overlay_12__0212c214(*(int *)(self+0x58),self);
*(int *)(self+0x58)=-1;
resource=FUN_0209e294(self+0x5c,0,index);
FUN_0200c938(config,24);
config[1]=(unsigned int)resource;config[2]=mode;config[3]=value;config[4]=(unsigned int)first;config[5]=(unsigned int)second;
owner=*(void **)0x0213f2dc;if(!owner)owner=self;
*(int *)(self+0x58)=FUN_overlay_12__0212c224(owner,config); }
