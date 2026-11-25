// FUN_overlay_15__02136208 @ 0x02136208 (thumb)
// flags: -O4,p
/* Draw a null-terminated wide string in fixed-width centered cells. */
#pragma thumb off
extern unsigned FUN_02016cec(void *,unsigned);extern signed char *FUN_02016d34(void *,unsigned);
#pragma thumb on
extern void FUN_overlay_15__021361dc(void *,int,int,int,unsigned short,int);
void FUN_overlay_15__02136208(void *dest,int x,int y,int style,int advance,unsigned short *text,int font){while(*text){char *fonts=*(char **)0x0213e900;void *f=fonts+font*8;unsigned glyph=FUN_02016cec(f,*text);signed char *metrics;if(glyph==65535)glyph=((unsigned short *)*(void **)f)[1];metrics=FUN_02016d34(f,glyph);FUN_overlay_15__021361dc(dest,x+((advance-metrics[2])>>1),y,style,*text,font);text++;x+=advance;}}
