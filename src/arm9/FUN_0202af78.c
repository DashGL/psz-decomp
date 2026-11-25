// FUN_0202af78 @ 0x0202af78 (ARM, full extent 0x2c0)
// check: 2.0/sp2p3 target=0x2c0 candidate=0x2b8 words=999 exact_bytes=999 bad_relocs=4
// near: ndiff=999/176 size=0x2c0 vers=2.0/sp2p3 next="RSA scratch/record register allocation and odd-length serialization loop"
// flags: -O4,p -noThumb
/* USA ROM reconstruction, 2026-11-06.
 * Generate the 48-byte pre-master secret, pad and RSA-encrypt it, serialize a
 * client-key-exchange record, send/hash the handshake, and release all buffers.
 * Each allocation failure frees prior allocations and sets state byte 9.
 */
typedef unsigned int u32;typedef unsigned short u16;typedef unsigned char u8;
extern u8 UNK_020ec16c[];extern void *(*UNK_02107068)(u32);extern void (*UNK_02107094)(void *);
extern void FUN_020245b4(void *,int,int,int,void *),FUN_0202aaec(void *,int),FUN_02065774(void *,void *,u32),FUN_0202d6c4(void *,void *,int,u32),FUN_0202d0b0(void *,void *,void *,u32,void *),FUN_02028b30(u32),FUN_0202a6a0(void *,void *,int);
extern u32 FUN_02028ae4(void);
void FUN_0202af78(char *connection){
 u8 *self=*(u8 **)(connection+12);u16 *limbs,*input,*exponent,*modulus;u8 *record;int count;u8 *padded,*write;int length,i;u32 old;
 if(self[0x5ac])FUN_020245b4(UNK_020ec16c,7,0,0,connection);
 self[0]=3;self[1]=0;FUN_0202aaec(self+2,46);
 length=*(int *)(self+0x594);count=(int)((u32)length<<1)/2;
 padded=UNK_02107068(length);if(!padded){self[0x455]=9;return;}
 padded[0]=0;padded[1]=2;FUN_0202aaec(padded+2,length-51);padded[length-49]=0;FUN_02065774(self,padded+length-48,48);
 limbs=UNK_02107068((u32)count<<3);if(!limbs){UNK_02107094(padded);self[0x455]=9;return;}
 input=limbs+count;exponent=input+count;modulus=exponent+count;
 FUN_0202d6c4(input,padded,length,count);FUN_0202d6c4(exponent,self+0x598,*(int *)(self+0x5a0),count);FUN_0202d6c4(modulus,self+0x494,length,count);
 old=FUN_02028ae4();FUN_0202d0b0(limbs,input,exponent,count,modulus);FUN_02028b30(old);
 record=UNK_02107068(length+73);if(!record){UNK_02107094(padded);UNK_02107094(limbs);self[0x455]=9;return;}
 record[0]=22;record[1]=3;record[2]=0;record[3]=(length+4)>>8;record[4]=length+4;record[5]=16;record[6]=length>>16;record[7]=length>>8;record[8]=length;
 write=record+9;if(length&1){record[9]=limbs[length/2];write=record+10;}
 for(i=length/2-1;i>=0;--i){write[0]=limbs[i]>>8;write[1]=limbs[i];write+=2;}
 FUN_020245b4(record,length+9,0,0,connection);FUN_0202a6a0(self,record+5,length+4);
 UNK_02107094(record);UNK_02107094(limbs);UNK_02107094(padded);
}
