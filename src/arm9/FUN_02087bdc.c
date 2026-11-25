// flags: -O4,s
typedef struct{int x,y,z;}Vec;typedef struct{int w[12];}Matrix;typedef struct{int w[9];}Rotation;typedef void(*Callback)(void *);
extern Matrix UNK_02105768;
extern int FUN_02047440(void *);
extern void FUN_02087d50(void *),FUN_02087f64(void *),FUN_02087f8c(void *),FUN_0206e728(void *,Callback),FUN_0206e730(void *,Callback),FUN_0206e738(void *,void *),FUN_0206e740(void *,void *),FUN_02035408(Vec *,int,int,int),FUN_02034680(Vec *,Vec *);
#pragma thumb off
extern void FUN_0201d3fc(void *,int),FUN_0205b300(Matrix *,Matrix *),FUN_0206564c(void *,void *),FUN_0205b960(Vec *,Matrix *,Vec *);
#pragma thumb on
#define W(n) (*(int *)(s+(n)))
#define P(n) (*(char **)(s+(n)))
int FUN_02087bdc(char *s){Matrix matrix;Rotation rotation;Vec temp,pos;char *model;int result,old,scale,scaled;
 result=FUN_02047440(s);
 if(W(320))return 1;
 if(!result){
  FUN_02087d50(s);
  if(P(48)){
   if(!W(260)){FUN_0206e728(P(48),FUN_02087f64);FUN_0206e738(P(48),s);FUN_0206e730(P(48),FUN_02087f8c);FUN_0206e740(P(48),s);W(260)=1;}
   if(*(void **)(P(48)+28))FUN_0201d3fc(*(void **)(P(48)+28),0);
   FUN_0205b300(&UNK_02105768,&matrix);
   FUN_0206564c(&matrix,&rotation);
   *(Rotation *)(s+112)=rotation;*(Rotation *)(P(48)+144)=*(Rotation *)(s+112);
   FUN_0205b960((Vec *)(s+300),&matrix,&temp);
   old=W(356);{int hi=old+48,lo=old-48;if(hi>temp.y&&lo<temp.y)temp.y=old;}W(356)=temp.y;
   FUN_02035408(&pos,temp.x,temp.y,temp.z);*(Vec *)(s+92)=pos;
   FUN_02034680(&temp,(Vec *)(s+300));temp.x+=W(352);
   FUN_0205b960(&temp,&matrix,&temp);
   {int z=temp.z,y=temp.y,x=temp.x;model=P(48);*(int *)(model+108)=x;*(int *)(model+112)=y;*(int *)(model+116)=z;}
   scale=W(276)+W(284);model=P(48);scaled=(scale*W(348))/128;*(int *)(model+120)=scaled;*(int *)(model+132)=scaled;*(int *)(model+124)=scale;*(int *)(model+136)=scale;*(int *)(model+128)=4096;*(int *)(model+140)=*(int *)(model+128);
  }
 }
 return result;
}
