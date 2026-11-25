// flags: -O2,s
typedef struct Resource Resource;
typedef struct Table {void *unused[2];void *(*surface)(Resource *);char *(*text)(Resource *,int);} Table;
struct Resource {Table *table;};
typedef struct Config {unsigned words[6];} Config;
typedef struct Key {unsigned char b[4];} Key;
extern char *DAT_overlay_12__0213f2dc;
extern const Config DAT_overlay_12__021383b4;
extern void FUN_020c3900(void *,unsigned,unsigned,unsigned,unsigned);
extern void FUN_020c3788(void *,const char *,int,int,unsigned);
extern void FUN_overlay_12__02132410(void),FUN_overlay_12__02132444(void);
extern char *FUN_02086e3c(void);extern unsigned char *FUN_020b00ac(void *,int);
extern int FUN_0203a1fc(void *),FUN_overlay_12__02134ae8(unsigned char *);
extern int FUN_overlay_12__021323b0(void *,Config *);
extern int FUN_overlay_12__02126ea8(void *,void *),FUN_overlay_12__02126cfc(void *,const void *);
extern void *FUN_02084568(void *);
void FUN_overlay_12__021268fc(char *self){
 Resource *r=*(Resource **)(self+12);void *surface=r->table->surface(r);
 char *manager;
 char *player;
 int count;
 char *inventory;
 int i;
 Config current, base;
 Key key;
 if(surface){char *text;FUN_020c3900(surface,18,177,210,10);r=*(Resource **)(self+12);text=r->table->text(r,18);FUN_020c3788(surface,text,18,177,2);}
 FUN_overlay_12__02132410();FUN_overlay_12__02132444();manager=DAT_overlay_12__0213f2dc;if(manager)*(int *)(manager+144)=0;
 inventory=FUN_02086e3c()+16;player=FUN_02086e3c();count=*(short *)(inventory+8);
 i=0;
 base=DAT_overlay_12__021383b4;
 for(;i<count;i++){unsigned char *item=FUN_020b00ac(inventory,i);if(!FUN_0203a1fc(item)&&FUN_overlay_12__02126ea8(self,item)){
 int value;key=*(const Key *)item;
 if(FUN_02084568(&key)){value=FUN_overlay_12__02126cfc(self,item);if(value){current=base;current.words[0]=i;
 current.words[1]=(i>=0&&i<*(short *)(player+12))?(*(void ***)(player+8))[i]!=0:0;
 current.words[5]=value;FUN_overlay_12__021323b0(item,&current);}}
 }}
}
