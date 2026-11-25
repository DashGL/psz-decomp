// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// FUN_02041474 @ 0x02041474
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int FUN_020424b4(void *,int);
int FUN_02041474(char *s,int index) {char *p=*(char **)(s+0xb8)+280*index;int value;if(*(int *)(p+12)==-1)return 0;if(!*(void **)p)return 0;value=FUN_020424b4(*(void **)(*(char **)(s+0x98)+112*(*(int *)(p+8))),0);value+=*(int *)(p+28);return value>=*(int *)(p+16);}
