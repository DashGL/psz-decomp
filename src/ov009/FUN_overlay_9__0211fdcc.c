// FUN_overlay_9__0211fdcc @ 0x0211fdcc (0xac, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch31.json; original draft retained for referenced provenance.
// FUN_overlay_9__0211fdcc @ 0x0211fdcc (thumb)
// check: 2.0/sp2p3 target=0xac candidate=0xac words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full game message selection/construction and concrete helper ABI. */
typedef struct {int w[8];} Config;extern void *FUN_020c3564(void *),*FUN_020b3044(void *),*FUN_0205e070(void),*FUN_0205e0c4(void),*FUN_0205e35c(void);extern void FUN_020a4b64(void),FUN_020a5000(int),FUN_020a5034(void),FUN_0206557c(int,void *,unsigned),FUN_020c35ac(void *,int),FUN_020c35d4(void *,void *),FUN_020c38f0(void *,int),FUN_overlay_9__02120164(void *,int);void *FUN_overlay_9__0211fdcc(char *s,int mode){Config config;*(unsigned *)s=0x02121068;*(int *)(s+4)=mode;*(int *)(s+8)=0;*(int *)(s+12)=1;FUN_020c3564(s+16);*(int *)(s+76)=90;*(int *)(s+80)=0;FUN_020b3044(s+84);FUN_020a4b64();FUN_020a5000(5);FUN_020a5034();FUN_0206557c(0,FUN_0205e070(),2048);FUN_020c35ac(s+16,1);FUN_0206557c(0,FUN_0205e0c4(),2048);FUN_0206557c(0,FUN_0205e35c(),32);config=*(Config *)0x02120e58;FUN_020c35d4(s+16,&config);FUN_020c38f0(s+16,0);FUN_overlay_9__02120164(s,0);return s;}
