// FUN_overlay_12__021347ac @ 0x021347ac (0x64, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch28.json; original draft retained for referenced provenance.
// FUN_overlay_12__021347ac @ 0x021347ac (thumb)
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete CFG/pools and concrete helper ABI reviewed. */
extern int FUN_020662b4(char *,unsigned,const char *,...);extern void *FUN_020ba894(unsigned),*FUN_020bc2dc(void *,void *,int);extern int FUN_020bc418(void *,void *,void *);void *FUN_overlay_12__021347ac(int *s,int kind){char path[24];void *p;s[0]=0;s[1]=kind;s[2]=0;s[3]=0;s[4]=0;s[5]=0;s[6]=0;s[7]=0;if(kind>=0&&kind<=6){FUN_020662b4(path,24,(const char *)0x0213e9d4,kind+1);p=FUN_020ba894(132);if(p)p=FUN_020bc2dc(p,(void *)0x0213e9ec,0);s[4]=(int)p;if(p){FUN_020bc418(p,path,0);s[0]=1;}}return s;}
