// flags: -O4,p
typedef struct {unsigned char keys[256];int count;} KeyList;
typedef struct {char buf[0x578];int len;} Buffer;
typedef int (*Count)(int,void *);typedef void (*List)(int,KeyList *,void *);
typedef void (*Scalar)(int,void *,void *);typedef void (*Row)(int,int,void *,void *);
extern char *UNK_020ffb78[];extern char UNK_020ff9a8[],UNK_020ff9b0[];
extern void FUN_020d6770(void *,void *);
#define USER (*(void **)(self+0x10c))
void FUN_020d6b08(char *self,Buffer *buffer,int mode,int keyCount,unsigned char *keys){
 KeyList all;
 unsigned short count;
 int rows,row,before1,before2,i;
 char *name;
 all.count=0;
 if(keyCount==0)return;
 if((unsigned int)(mode-1)<=1){
  if((unsigned int)(0x578-buffer->len)<2)return;
  rows=(*(Count *)(self+0x98))(mode,USER);
  count=(unsigned short)((((unsigned short)rows>>8)&0xff)|(((unsigned short)rows<<8)&0xff00));
  { int pos=buffer->len; unsigned char *d=(unsigned char *)buffer->buf+pos; unsigned char *s=(unsigned char *)&count; d[0]=s[0]; d[1]=s[1]; buffer->len+=2; }
 }else rows=1;
 if(keyCount==255){
  (*(List *)(self+0x94))(mode,&all,USER);
  for(i=0;i<all.count;++i){
   name=UNK_020ffb78[all.keys[i]];
   if(!name)name=UNK_020ff9a8;
   FUN_020d6770(buffer,name);
   if(mode==0){
    before1=buffer->len;
    (*(Scalar *)(self+0x88))(all.keys[i],buffer,USER);
    if(before1==buffer->len)FUN_020d6770(buffer,UNK_020ff9b0);
   }
  }
  if(0x578-buffer->len<1)return;
  {
   int pos=buffer->len;
   buffer->len=pos+1;
   buffer->buf[pos]=0;
  }
  keyCount=all.count;
  keys=all.keys;
  if(mode==0)return;
 }
 for(row=0;row<rows;++row){
  for(i=0;i<keyCount;++i){
   before2=buffer->len;
   if(mode==0)(*(Scalar *)(self+0x88))(keys[i],buffer,USER);
   else if(mode==1)(*(Row *)(self+0x8c))(keys[i],row,buffer,USER);
   else if(mode==2)(*(Row *)(self+0x90))(keys[i],row,buffer,USER);
   if(before2==buffer->len)FUN_020d6770(buffer,UNK_020ff9b0);
  }
 }
}
