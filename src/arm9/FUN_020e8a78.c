// flags: -O4,s
extern void FUN_020e4a2c(unsigned int,unsigned int);
unsigned int FUN_020e8a78(unsigned int status,unsigned int detail){unsigned int result=status,code=status;if(!status)return 0;switch(status){case 1:code=9;detail=~0u;break;case 2:case 5:code=0;detail=0;result=0;break;case 3:code=6;detail=0xfffffff6u;break;case 4:code=6;detail=0xffffffe2u;break;case 6:code=6;detail=0xffffffbau;break;case 7:code=6;detail=0xffffffb0u;break;}if(code)FUN_020e4a2c(code,detail-87000);return result;}
