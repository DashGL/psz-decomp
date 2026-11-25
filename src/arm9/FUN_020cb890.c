// flags: -O4,p
typedef void (*Notify)(void *,void *,void *);
typedef struct {Notify notify;void *context;char *payload;int type;} Request;
extern char UNK_020fd570[],UNK_020fd508[],UNK_020fd4cc[],UNK_020fd590[];
#pragma thumb off
extern void FUN_02000edc(void *,void *,void *,int);
#pragma thumb on
extern void FUN_020c7bec(void *),FUN_020cae6c(void *,int,int);
#define P(o) (*(void **)(data+(o)))
#define A(o) (*(void ***)(data+(o)))
#define N(o) (*(int *)(data+(o)))
void FUN_020cb890(void *owner,Request *request){
 if(!request->notify)FUN_02000edc(UNK_020fd570,UNK_020fd508,UNK_020fd4cc,110);
 if(!request->payload)FUN_02000edc(UNK_020fd590,UNK_020fd508,UNK_020fd4cc,111);
 request->notify(owner,request->payload,request->context);
 if(request->type==2){FUN_020c7bec(*(void **)(request->payload+8));*(void **)(request->payload+8)=0;}
 else if(request->type==11){FUN_020c7bec(*(void **)(request->payload+8));*(void **)(request->payload+8)=0;}
 else if(request->type==3){
  char *data=request->payload;int i;
  for(i=0;i<N(0x38);++i){FUN_020c7bec(A(0x3c)[i]);A(0x3c)[i]=0;FUN_020c7bec(A(0x40)[i]);A(0x40)[i]=0;}
  FUN_020c7bec(P(0x3c));P(0x3c)=0;FUN_020c7bec(P(0x40));P(0x40)=0;
 }else if(request->type==4){char *data=request->payload;FUN_020c7bec(P(12));P(12)=0;}
 else if(request->type==7){char *data=request->payload;if(P(16)){FUN_020c7bec(P(16));P(16)=0;}}
 else if(request->type==8){char *data=request->payload;if(P(8)){FUN_020c7bec(P(8));P(8)=0;}}
 else if(request->type==9){char *data=request->payload;int i;for(i=0;i<N(4);++i){FUN_020c7bec(A(8)[i]);A(8)[i]=0;}FUN_020c7bec(P(8));P(8)=0;}
 else if(request->type==12)FUN_020cae6c(owner,*(int *)request->payload,0);
 else if(request->type==13){char *data=request->payload;if(P(8)){FUN_020c7bec(P(8));P(8)=0;}}
 else if(request->type==14){char *data=request->payload;if(N(12)){
  int i;
  for(i=0;i<N(12);++i){FUN_020c7bec(A(4)[i]);A(4)[i]=0;FUN_020c7bec(A(8)[i]);A(8)[i]=0;}
  FUN_020c7bec(P(4));P(4)=0;FUN_020c7bec(P(8));P(8)=0;
 }}
 FUN_020c7bec(request->payload);request->payload=0;FUN_020c7bec(request);
}
