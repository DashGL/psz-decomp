// FUN_0202a430 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_0202a430 @ 0x0202a430 (0x204, ARM)
// check: vers=2.0/sp2p3 target=0x204 candidate=0x204 words=0 exact_bytes=0 bad_relocs=0
// flags: -noThumb
// Append the selected legacy record MAC, update record length, encrypt and advance sequence.
extern void FUN_0202bdd4(void *),FUN_0202be1c(void *,void *,int),FUN_0202bed4(void *,void *),FUN_0202c694(void *),FUN_0202c6e8(void *,void *,int),FUN_0202c7a0(void *,void *),FUN_020656b8(void *,int,int),FUN_0202c8ac(void *,void *,int),FUN_0202a1c4(void *);
int FUN_0202a430(unsigned char *s,unsigned char *record){unsigned char pad[48],*body=record+5;int length=(record[3]<<8)+record[4];
 switch(*(unsigned short *)(s+50)){
 case 4:
 FUN_0202bdd4(s+1020);FUN_0202be1c(s+1020,*(void **)(s+188),16);FUN_020656b8(pad,54,48);FUN_0202be1c(s+1020,pad,48);FUN_0202be1c(s+1020,s+460,8);FUN_0202be1c(s+1020,record,1);FUN_0202be1c(s+1020,record+3,length+2);FUN_0202bed4(s+1020,body+length);
 FUN_0202bdd4(s+1020);FUN_0202be1c(s+1020,*(void **)(s+188),16);FUN_020656b8(pad,92,48);FUN_0202be1c(s+1020,pad,48);FUN_0202be1c(s+1020,body+length,16);FUN_0202bed4(s+1020,body+length);length+=16;break;
 case 5:
 FUN_0202c694(s+840);FUN_0202c6e8(s+840,*(void **)(s+188),20);FUN_020656b8(pad,54,40);FUN_0202c6e8(s+840,pad,40);FUN_0202c6e8(s+840,s+460,8);FUN_0202c6e8(s+840,record,1);FUN_0202c6e8(s+840,record+3,length+2);FUN_0202c7a0(s+840,body+length);
 FUN_0202c694(s+840);FUN_0202c6e8(s+840,*(void **)(s+188),20);FUN_020656b8(pad,92,40);FUN_0202c6e8(s+840,pad,40);FUN_0202c6e8(s+840,body+length,20);FUN_0202c7a0(s+840,body+length);length+=20;break;
 }
 record[3]=(unsigned char)(length>>8);record[4]=(unsigned char)length;FUN_0202c8ac(s+200,record+5,length);FUN_0202a1c4(s+468);return length+5;
}
