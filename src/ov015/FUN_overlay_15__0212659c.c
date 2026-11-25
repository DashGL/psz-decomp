// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
// FUN_overlay_15__0212659c @ 0x0212659c
// check: 2.0/sp2p3 target=0x98 candidate=0x98 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Choose keyboard cursor graphics, update its attribute, and place it from the signed selection index.
 * Field identities remain provisional.
 */
extern const unsigned short data_02139f24[];
extern const unsigned short data_02139f26[];
extern unsigned char * data_0213e7dc[];
extern void *FUN_overlay_15__0213587c(void *,int);extern void FUN_overlay_15__02135aac(int,int,void *);extern void FUN_overlay_15__02135a10(void *,int,int);extern void FUN_overlay_15__0213596c(void *,int,int,int);void FUN_overlay_15__0212659c(void) {unsigned char *p=*data_0213e7dc;int graphic,index;switch(*(signed char *)(p+289)){case 47:graphic=66;break;case 48:graphic=65;break;case 49:graphic=67;break;case 50:graphic=65;break;case 51:case 52:graphic=69;break;default:graphic=64;break;}FUN_overlay_15__02135aac(0,graphic,FUN_overlay_15__0213587c(*(void **)(p+276),0));p=*data_0213e7dc;FUN_overlay_15__02135a10(*(void **)(p+276),-1,2);p=*data_0213e7dc;index=*(signed char *)(p+289);FUN_overlay_15__0213596c(*(void **)(p+276),-1,data_02139f24[index*2],data_02139f26[index*2]);}
