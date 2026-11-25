// flags: -O4,s
typedef struct {
    const char *rows;
    int count;
} List;
typedef struct {
    List lists[3];
} Owner;
extern unsigned char DAT_0211a51c[];
extern void *FUN_02086e3c(void),*FUN_020870c4(void *),*FUN_020c4434(void *);
extern int FUN_020870e8(void *,void *),FUN_02084bf8(const void *),FUN_overlay_12__02120310(void *,int,int,int),FUN_overlay_12__021204e4(void *,int),FUN_overlay_12__02120600(void *,int);
void FUN_overlay_12__02120364(int *self,const Owner *owner)
{
    unsigned player[25];
    char *progress;
    int level;
    self[8]=0;self[9]=0;self[109]=0;self[174]=0;
    progress=(char *)FUN_020870c4(FUN_02086e3c())+3368;level=*(int *)(progress+16);
    FUN_020c4434(player);FUN_020c4434(player+4);
    if(!FUN_020870e8(FUN_02086e3c(),player))return;
    if(!FUN_02084bf8(DAT_0211a51c)){
        const List *list=&owner->lists[1];
        const char *rows=list->rows;
        if(rows){
            int count=list->count;
            int i;
            for(i=0;i<count;i++){
                const char *row=rows+i*56;
                if(level>=*(const short *)(row+40)&&level<=*(const short *)(row+42))
                    if(FUN_overlay_12__02120310(self,*(const int *)(row+36),1,*(const signed char *)(row+50)))self[8]++;
            }
        }
    }
    {
        const List *list=&owner->lists[2];
        const char *rows=list->rows;
        if(rows){
            int count=list->count;
            int i;
            for(i=0;i<count;i++){
                const char *row=rows+i*56;
                if((*(const short *)(row+40)==-1&&*(const short *)(row+42)==-1)||(level>=*(const short *)(row+40)&&level<=*(const short *)(row+42)))
                    if(FUN_overlay_12__021204e4(progress,*(const signed char *)(row+44)))
                        if(FUN_overlay_12__02120310(self,*(const int *)(row+36),2,*(const signed char *)(row+50)))self[9]++;
            }
        }
    }
    {
        const List *list=&owner->lists[0];
        const char *rows=list->rows;
        if(rows){
            int count=list->count;
            int i;
            for(i=0;i<count;i++){
                const char *row=rows+i*56;
                if(FUN_overlay_12__02120600(self,*(const int *)(row+36))||FUN_overlay_12__021204e4(progress,*(const signed char *)(row+44)))
                    FUN_overlay_12__02120310(self,*(const int *)(row+36),0,*(const signed char *)(row+50));
            }
        }
    }
}
