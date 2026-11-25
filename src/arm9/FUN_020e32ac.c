// flags: -O4,p
// check: 2.0/sp2p3 target=0x114 candidate=0x110 words=999 exact_bytes=999 bad_relocs=2
// near: ndiff=999/69 size=0x114 vers=2.0/sp2p3 next="Thumb post-call global reloads and two-flag loop allocation"
// Resolve matching contact records and defer notifications; full helper ABI in root batch275.
typedef unsigned int U;
struct Context{U pad[5];int count;struct Rec { char b[12]; } *records;unsigned char pad28,dirty;};
struct Global{U pad[3];struct Context *context;};
extern struct Global UNK_0211de50;
#define C (UNK_0211de50.context)
extern U FUN_020dd2c8(void *),FUN_020dd270(void *),FUN_020dd2fc(void *),FUN_020dd8f0(void *,U),FUN_020dd334(void *,U);
extern void *FUN_020e1ea8(void);
extern U FUN_020dd910(void *,void *,void *),FUN_020dd83c(void *,void *);
extern int FUN_02003e24(const void *,const void *),FUN_020e2e4c(void *,int,U);
extern void FUN_020e2b28(int);
void FUN_020e32ac(void *unused,char *message){int changed=0,already=0,i,index;U value;void *owner;char text[24];
if(*(U *)message)return;
for(i=0;i<C->count;i++){
 if(FUN_020dd2c8(&C->records[i])==1){owner=FUN_020e1ea8();FUN_020dd910(owner,&C->records[i],text);if(!FUN_02003e24(text,message+142)){FUN_020dd8f0(&C->records[i],*(U *)(message+4));FUN_020dd2fc(&C->records[i]);changed=1;}}
 else if(FUN_020dd2c8(&C->records[i])==3 || FUN_020dd2c8(&C->records[i])==2){
 owner=FUN_020e1ea8();value=FUN_020dd83c(owner,&C->records[i]);if(*(U *)(message+4)==value){
 if(FUN_020dd270(&C->records[i])==1)already=1;
 else{FUN_020dd8f0(&C->records[i],*(U *)(message+4));FUN_020dd2fc(&C->records[i]);changed=1;}}}
}
if(changed){index=FUN_020e2e4c(C->records,C->count,*(U *)(message+4));if(!already){FUN_020dd334(&C->records[index],1);FUN_020e2b28(index);}C->dirty=1;}
}
