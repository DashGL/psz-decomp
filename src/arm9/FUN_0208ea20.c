// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// FUN_0208ea20 @ 0x0208ea20 (inventory code 0x74, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Register collision descriptor or release it with positional effect.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208ea20.txt.
 */
extern char *FUN_02030540(void *);extern void *FUN_02034b78(void);extern void FUN_020302e8(void *,void *),FUN_02033658(int,int,void *),FUN_02035144(void *,int);extern int FUN_02044c84(void *,void *,void *,unsigned short),FUN_020350d0(void *,void *),FUN_02033704(void);void FUN_0208ea20(char *s,int mode){int desc[9],b[3],a[3];void *manager;char *p;if(mode==0){p=FUN_02030540(s);if(p){FUN_020302e8(b,s);if(FUN_02044c84(desc,p+12,b,*(unsigned short *)(s+44))){manager=FUN_02034b78();if(manager)*(int *)(s+80)=FUN_020350d0(manager,desc);}}}else if(mode==1){if(!FUN_02033704()){FUN_020302e8(a,s);FUN_02033658(0,8,a);}manager=FUN_02034b78();if(manager){FUN_02035144(manager,*(int *)(s+80));*(int *)(s+80)=-1;}}}
