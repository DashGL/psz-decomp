// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
//cpp
struct Heap_0203f96c { virtual ~Heap_0203f96c(); unsigned char data[28]; };
extern "C" {
// Verified pinned2.0/sp2p3 full92-byte extent and relocation targets.
// Scope: notes/reference/cache-family-20261113/ownership-proof.json
// flags: -O4,s
extern void *FUN_0208f068(void);extern void FUN_0208efd4(void *,unsigned int),FUN_0203fde0(void *),FUN_020ba8b4(void *),FUN_02074d9c(void *),FUN_0204030c(void *),FUN_02040198(void *);char *FUN_0203f96c(char *s){void *p=FUN_0208f068();if(p)FUN_0208efd4(p,*(unsigned int *)(s+36));FUN_0203fde0(s);if(*(void **)(s+4)){FUN_020ba8b4(*(void **)(s+4));*(void **)(s+4)=0;}if(*(void **)(s+12)){FUN_020ba8b4(*(void **)(s+12));*(void **)(s+12)=0;}FUN_02074d9c(s);FUN_0204030c(s);FUN_02040198(s);p=*(void **)(s+20);if(p){delete (Heap_0203f96c*)p;*(void **)(s+20)=0;}return s;}

}
