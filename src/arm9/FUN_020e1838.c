// FUN_020e1838 @ 0x020e1838 (0x6c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern void FUN_020e1ebc(unsigned int,unsigned int);
unsigned int FUN_020e1838(unsigned int status,unsigned int detail){unsigned int result=status,code=status;if(!status)return 0;switch(status){case 1:code=9;detail=~0u;break;case 2:case 5:code=0;detail=0;result=0;break;case 3:code=6;detail=0xfffffff6u;break;case 4:code=6;detail=0xffffffe2u;break;case 6:code=6;detail=0xffffffbau;break;case 7:code=6;detail=0xffffffb0u;break;}if(code)FUN_020e1ebc(code,detail-67000);return result;}
