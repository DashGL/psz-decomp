// FUN_0202a6cc @ 0x0202a6cc (0x280, ARM)
// check: vers=2.0/sp2p3 target=0x280 candidate=0x27c words=999 exact_bytes=999 bad_relocs=2
// near: ndiff=999/160 size=0x280 vers=2.0/sp2p3 next="match register coloring, boolean lowering, and scheduling against saved ROM disassembly"
// flags: -noThumb
// Process a decrypted SSL record, retaining application-data ownership.
typedef unsigned char u8;typedef unsigned int u32;
extern void (*UNK_02107094)(void *);
extern int FUN_0202a200(u8 *,u8 *);
extern void FUN_020656b8(void *,int,u32),FUN_0202996c(u8 *,u8 *),FUN_02029f10(u8 *,u8 *),FUN_02029734(u8 *,u8 *),FUN_02029510(u8 *,u8 *),FUN_0202a104(u8 *,u8 *),FUN_0202a6a0(u8 *,u8 *,u32);
void FUN_0202a6cc(u8 *session,u8 *record){u8 *body; u32 state=session[1109],length,type;u32 messageLength; int messageType;
 if(state==9){UNK_02107094(record);return;}
 length=((u32)record[3]<<8)+record[4]+5;type=record[0];
 if(((u8)(state+249)<=1&&type!=21)||(type==21&&length>7)){
 length=FUN_0202a200(session,record);state=session[1109];if(state==9){UNK_02107094(record);return;}
 }
 body=record+5;length-=5;
 switch(type){
 case 20:if(!*(void **)(session+468)){session[1109]=9;break;}FUN_020656b8(session+740,0,8);session[1109]=7;break;
 case 21:if(body[0]==2)session[1109]=9;break;
 case 22:
 do{
 messageType=body[0];messageLength=((u32)body[1]<<16)+((u32)body[2]<<8)+body[3];body+=4;
 switch(messageType){
 case 1:if(session[1108]&&state==0)FUN_0202996c(session,body);break;
 case 16:FUN_02029f10(session,body);break;
 case 2:FUN_02029734(session,body);break;
 case 11:FUN_02029510(session,body);session[1452]=0;break;
 case 13:session[1452]=1;break;
 case 14:session[1109]=4;break;
 case 20:FUN_0202a104(session,body);break;
 default:session[1109]=9;break;
 }
 FUN_0202a6a0(session,body-4,messageLength+4);body+=messageLength;length-=messageLength+4;
 if(!length)break;state=session[1109];
 }while(state!=9);break;
 case 23:*(u8 **)(session+2084)=record;*(u32 *)(session+2092)=5;*(u32 *)(session+2088)=length+5;session[1110]=1;return;
 default:session[1109]=9;break;
 }
 UNK_02107094(record);
}
