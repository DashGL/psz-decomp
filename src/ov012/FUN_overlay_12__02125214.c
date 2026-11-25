// flags: -O4,s
extern void FUN_overlay_12__02125788(void *),FUN_overlay_12__02123688(void *),FUN_overlay_12__0212576c(void *,int),FUN_overlay_12__02125430(void *),FUN_overlay_12__0212590c(void *);
extern void *FUN_overlay_12__021232b0(void),*FUN_02086e3c(void);
extern int FUN_overlay_12__021257c8(void *),FUN_overlay_12__021257e0(void *),FUN_overlay_12__02123368(void *,void *,int),FUN_overlay_12__021257f8(void *),FUN_overlay_12__02125fd8(void *),FUN_overlay_12__02125884(void *),FUN_overlay_12__021258dc(void *),FUN_02087254(void *),FUN_020872c4(void *);
extern void FUN_020c193c(int,int,int,int,int),FUN_020c2d94(int,int,int);
int FUN_overlay_12__02125214(int *self)
{
    int *child;
    FUN_overlay_12__02125788(self);
    switch(self[1]){
    case 0:
        child=(int *)self[10];if(child)child[24]|=4;
        FUN_overlay_12__02123688(FUN_overlay_12__021232b0());
        if(FUN_overlay_12__021257c8(self))FUN_overlay_12__0212576c(self,9);
        else if(FUN_overlay_12__021257e0(self)){
            FUN_overlay_12__02123368(FUN_overlay_12__021232b0(),self+12,8);
            self[16]=FUN_overlay_12__021257f8(self);FUN_overlay_12__0212576c(self,1);
        }
        break;
    case 1:
        if(self[16]>=0){
            if(self[16]==20){
                if(self[18]){FUN_020c193c(0,23,0,0,-1);FUN_overlay_12__0212576c(self,8);}
                else{FUN_overlay_12__02125430(self);FUN_overlay_12__0212576c(self,0);}
            }else FUN_overlay_12__0212576c(self,2);
            return 0;
        }else{
            FUN_overlay_12__02125430(self);
            if(self[10]&&FUN_overlay_12__02125fd8((void *)self[10])>=0)FUN_overlay_12__0212576c(self,0);
        }
        break;
    case 2:
        if(!FUN_overlay_12__02125884(self)){FUN_overlay_12__0212576c(self,3);return 0;}
        else{
            FUN_overlay_12__02125430(self);
            if(self[10]&&FUN_overlay_12__02125fd8((void *)self[10])>=0)FUN_overlay_12__0212576c(self,0);
        }
        break;
    case 3:
        if(FUN_overlay_12__021258dc(self)){
            FUN_overlay_12__0212590c(self);FUN_020c193c(0,23,0,0,-1);FUN_overlay_12__0212576c(self,4);return 0;
        }else{
            FUN_overlay_12__02125430(self);
            if(self[10]&&FUN_overlay_12__02125fd8((void *)self[10])>=0)FUN_overlay_12__0212576c(self,0);
        }
        break;
    case 4:
        if(self[10]&&FUN_overlay_12__02125fd8((void *)self[10])>=0){
            if(FUN_02087254(FUN_02086e3c()))FUN_overlay_12__0212576c(self,5);
            else FUN_overlay_12__0212576c(self,7);
        }
        break;
    case 5:
        child=(int *)self[10];
        if(child){child[24]|=4;if(!FUN_020872c4(FUN_02086e3c()))FUN_overlay_12__0212576c(self,6);}
        break;
    case 6:
        if(self[10]&&FUN_overlay_12__02125fd8((void *)self[10])>=0)FUN_overlay_12__0212576c(self,0);
        break;
    case 7:
        if(self[10]&&FUN_overlay_12__02125fd8((void *)self[10])>=0)FUN_overlay_12__0212576c(self,9);
        break;
    case 8:
        if(self[10]&&FUN_overlay_12__02125fd8((void *)self[10])>=0)FUN_overlay_12__0212576c(self,9);
        break;
    case 9:
        FUN_020c2d94(0,2,0);return 1;
    }
    return 0;
}
