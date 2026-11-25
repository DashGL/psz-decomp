// FUN_overlay_12__021279a8 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 resource destructor; concrete text table20fcb34 slot4=>c357c.
typedef struct Text Text;typedef struct Table{void *unused;void *(*destroy)(Text *);} Table;struct Text{Table *table;};
extern void *FUN_0208f068(void),*FUN_020c2b68(void *);
extern void FUN_0208efd4(void *,int),FUN_overlay_12__021279fc(void *);
extern void FUN_0200c4d4(void *,unsigned,unsigned,void *(*)(void *));
void *FUN_overlay_12__021279a8(char *self){void *manager;Text *text;
 *(unsigned *)self=0x0213dea0;manager=FUN_0208f068();if(manager&&*(int *)(self+4)>=0){FUN_0208efd4(manager,*(int *)(self+4));*(int *)(self+4)=-1;}
 text=*(Text **)(self+16);if(text){if(text)text->table->destroy(text);*(Text **)(self+16)=0;}
 FUN_overlay_12__021279fc(self);FUN_0200c4d4(self+20,2,4,FUN_020c2b68);return self;
}
