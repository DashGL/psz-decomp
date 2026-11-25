// flags: -O4,p
typedef struct {void *callback,*context;} Pair;
typedef struct {int peer,time;char *text;} Event;
extern char UNK_020fdf1c[],UNK_020fdf2c[];
extern int FUN_020cb574(void *,int,unsigned short,void *,int *,int),FUN_020cec58(void *,void *),FUN_020c7788(int),FUN_020cb68c(void *,void *,char **,int *,int *),FUN_020cb81c(void *,Pair,void *,void *,int),FUN_020caa9c(void *,void *,char *),FUN_020caaf4(void *,void *,char *),FUN_020c83f4(int,unsigned short,int *);
extern void *FUN_020c7bcc(int);extern char *FUN_020c77cc(char *);
extern void FUN_020d1b74(void *,void *),FUN_020ca9a8(void *,int,int,void *,int,int),FUN_020d16c4(void *,void *,int,void *,char *,int),FUN_020cb744(void *,void *);
#define W(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(char **)((char *)(p)+(o)))
int FUN_020cecd0(void *owner,char *session){
 int status2;
 int status1;
 Pair first;
 char *message;
 int kind;
 int length;
 Pair second;
 char *manager=*(char **)owner;
 int result;
 Event *event;
 if(!session)return 3;
 if(W(session,0x34)){
  result=FUN_020cb574(owner,W(session,8),*(unsigned short *)(session+12),session+0x2c,&status1,1);
  if(status1||result){W(session,0)=106;return 0;}
 }
 if(!W(session,0x34)){result=FUN_020cec58(owner,session);if(result)return result;if(W(session,0)==106)return 0;}
 if(W(session,0x24)>0)W(session,0x14)=FUN_020c7788(0)+10000;
 do{
  result=FUN_020cb68c(owner,session+0x1c,&message,&kind,&length);if(result)return result;
  if(message){
   if(kind<=105){
    if(kind>=104){
     switch(kind){
     case 104:goto L104;
     case 105:goto L105;
     default:goto Ldone;
     }
    }
    if(kind<=5){
     if(kind<1)goto Ldone;
     switch(kind){
     case 1:goto L1;
     case 5:goto L5;
     default:goto Ldone;
     }
    }
    switch(kind){
    case 102:goto L102;
    default:goto Ldone;
    }
   }
   if(kind<=201){
    if(kind>=201)goto L200;
    switch(kind){
    case 200:goto L200;
    default:goto Ldone;
    }
   }
   switch(kind){
   case 202:case 203:case 204:case 205:case 206:case 207:case 208:
    goto L200;
   default:
    goto Ldone;
   }
L1:
   first=*(Pair *)(manager+0x1c0);if(!first.callback)goto Ldone;
   event=FUN_020c7bcc(12);if(!event){FUN_020d1b74(owner,UNK_020fdf1c);return 1;}
   event->peer=W(session,0x10);event->text=FUN_020c77cc(message);event->time=FUN_020c7788(0);
   result=FUN_020cb81c(owner,first,event,0,2);if(result)return result;goto Ldone;
L5:
   second=*(Pair *)(manager+0x1c8);if(!second.callback)goto Ldone;
   event=FUN_020c7bcc(12);if(!event){FUN_020d1b74(owner,UNK_020fdf1c);return 1;}
   event->peer=W(session,0x10);event->text=FUN_020c77cc(message);event->time=FUN_020c7788(0);
   result=FUN_020cb81c(owner,second,event,0,2);if(result)return result;goto Ldone;
L102:
   FUN_020ca9a8(owner,W(session,0x10),103,UNK_020fdf2c,0,0);goto Ldone;
L104:
   result=FUN_020caa9c(owner,session,message);if(result)return result;goto Ldone;
L105:
   result=FUN_020caaf4(owner,session,message);if(result)return result;goto Ldone;
L200:
   FUN_020d16c4(owner,session,kind,P(session,0x1c),message,length);
Ldone:
   FUN_020cb744(owner,session+0x1c);
  }
 }while(message);
 FUN_020c83f4(W(session,8),*(unsigned short *)(session+12),&status2);if(status2==3)W(session,0)=106;return 0;
}
