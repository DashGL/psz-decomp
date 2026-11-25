// FUN_overlay_4__02124bf8 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_4__02124bf8 @ 0x02124bf8 (code 0xd8, pool extent 0xdc, thumb)
// check: 2.0/sp2p3 target=0xdc candidate=0xdc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize inventory selection state, clear grouped item slots, and select the feedback mode.
 * Field identities remain provisional.
 */
extern char G_021965D0[];
extern void FUN_0200c938(void *,unsigned int);extern void FUN_0203955c(void *);extern void FUN_overlay_4__02124be8(void *);extern void FUN_020c193c(int,int,int,int,int);void *FUN_overlay_4__02124bf8(unsigned char *p){int group,i;unsigned char *entries;*(int *)p=0;*(int *)(p+4)=0;*(int *)(p+52)=0;FUN_0200c938(p+56,16);FUN_0200c938(p+76,16);*(int *)(p+92)=-1;*(int *)(p+96)=0;*(int *)(p+100)=0;*(int *)(p+104)=0;*(int *)(p+116)=-1;*(int *)(p+120)=0;*(int *)(p+124)=0;*(int *)(p+128)=0;FUN_0200c938(p+132,8);*(short *)(p+140)=0;*(int *)(p+144)=0;*(int *)(p+148)=-1;*(int *)(p+152)=0;*(int *)(p+156)=0;*(int *)(p+160)=0;*(int *)(p+184)=0;*(int *)(p+188)=0;FUN_0203955c(p+164);*(int *)(p+180)=-1;for(group=0;group<4;group++){entries=(unsigned char *)G_021965D0+group*1600;for(i=0;i<80;i++)FUN_overlay_4__02124be8(entries+i*20);*(int *)(p+56+group*4)=0;*(int *)(p+76+group*4)=0;*(short *)(p+132+group*2)=0;}FUN_020c193c(0,4,0,0,-1);return p;}
