// FUN_overlay_12__02126340 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0xa8 candidate=0xa8 words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 menu constructors; resource/callback closure in batch18 note.
typedef struct Resource Resource;typedef struct Table{void *unused[2];void *(*surface)(Resource *);char *(*text)(Resource *,int);} Table;struct Resource{Table *table;};
typedef struct Config {unsigned words[7];} Config;
extern void FUN_overlay_12__0212c824(unsigned),FUN_overlay_12__02131b70(unsigned),FUN_overlay_12__02133744(void *,unsigned),FUN_overlay_12__02131b10(int);
extern void FUN_overlay_12__0213248c(void *,const Config *,unsigned,unsigned,unsigned);
extern unsigned FUN_overlay_12__021262f8(void);
extern void FUN_020c3788(void *,const char *,int,int,unsigned),FUN_020c3900(void *,unsigned,unsigned,unsigned,unsigned);
extern void FUN_overlay_12__021268b4(void *,unsigned);
void *FUN_overlay_12__02126340(unsigned *p,Resource *resource){Config config;Resource *r;void *surface;char *text;
 p[0]=0x0213ddf8;p[1]=0;p[2]=0;*(Resource **)(p+3)=resource;p[4]=-1;p[5]=-1;p[6]=0;p[7]=0;*(void **)0x0213ed24=p;
 FUN_overlay_12__0212c824(0);FUN_overlay_12__02131b70(0);FUN_overlay_12__02133744(*(void **)0x0213f2fc,1);FUN_overlay_12__02131b10(6);
 config=*(const Config *)0x02138400;FUN_overlay_12__0213248c(*(void **)0x0213f2fc,&config,1,1,0);FUN_overlay_12__021262f8();
 r=*(Resource **)(p+3);surface=r->table->surface(r);if(surface){r=*(Resource **)(p+3);text=r->table->text(r,0);FUN_020c3788(surface,text,11,32,2);
 }
 FUN_overlay_12__021268b4(p,0);return p;
}
