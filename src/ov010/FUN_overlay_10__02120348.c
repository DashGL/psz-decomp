// flags: -O4,p
// FUN_overlay_10__02120348 @ 0x02120348 (thumb)
extern unsigned char DAT_02122be0[];
extern unsigned char DAT_02122bfc[];
extern void *FUN_overlay_10__0211fc88(void *,int),*FUN_020af01c(void *,int,int),*FUN_overlay_10__02121ad4(void),*FUN_020c1154(int);
extern void FUN_overlay_10__02121ca0(void *,int),FUN_overlay_10__021203e8(void *);
void *FUN_overlay_10__02120348(char *self,int index){
    void *panel;signed char *record;
    FUN_overlay_10__0211fc88(self,2);FUN_020af01c(self+144,2,1);
    *(unsigned *)self=((unsigned int)DAT_02122be0);*(unsigned *)(self+144)=((unsigned int)DAT_02122bfc);
    *(int *)(self+160)=index;*(unsigned *)(self+164)=0;*(unsigned *)(self+168)=2;*(unsigned *)(self+172)=0;
    panel=FUN_overlay_10__02121ad4();if(panel)FUN_overlay_10__02121ca0(panel,*(int *)(self+160));
    record=FUN_020c1154(index);if(record && record[0]!=0)*(unsigned *)(self+168)=1;
    FUN_overlay_10__021203e8(self);return self;
}
