// flags: -O4,s
typedef struct {int v[8];} Layout;extern Layout UNK_020f4d44;extern void FUN_020c3564(void *),FUN_020c35d4(void *,void *),FUN_020c38f0(void *,int);extern int FUN_020c38c8(void *,int,int);
void *FUN_020a439c(char *s,int a,int b,int c){Layout layout;FUN_020c3564(s);*(int *)(s+60)=0;layout=UNK_020f4d44;layout.v[0]=a;layout.v[3]=b;layout.v[4]=c;*(int *)(s+60)=FUN_020c38c8(s,90,b);*(int *)(s+60)*=FUN_020c38c8(s,22,c);FUN_020c35d4(s,&layout);FUN_020c38f0(s,0);return s;}
