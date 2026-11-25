// FUN_020179d4 @ 0x020179d4 (0x1f4, ARM)
// check: vers=2.0/sp2p3 target=0x1f4 candidate=0x1c8 words=999 exact_bytes=999 bad_relocs=0
// near: ndiff=999/125 size=0x1f4 vers=2.0/sp2p3 next="match register coloring, boolean lowering, and scheduling against saved ROM disassembly"
// flags: -noThumb
// Split a rectangular fill over tiled canvas storage.
typedef unsigned int u32;typedef unsigned char u8;
struct Canvas179d4{u8 *pixels;u32 width,height;u8 depth;u8 pad[3];u32 layout;};
extern u32 FUN_02016f34(u32,u32,u32,u32,u32,u32);extern void FUN_02017048(void *,int,int,int,int,u32,u32);
void FUN_020179d4(struct Canvas179d4 *canvas,u32 color,int x,int y,int width,int height){
 u32 depth=canvas->depth,pattern,bytes=depth*8,canvasWidth,canvasHeight,layout;u8 *pixels;
 int right=(int)((u32)x+(u32)width),bottom=(int)((u32)y+(u32)height);int startX=(int)((u32)x&~7u),startY=(int)((u32)y&~7u),endX=(int)(((u32)right+7)&~7u),endY=(int)(((u32)bottom+7)&~7u);int row,column,tileX,tileY,localY,spanY,localX,spanX;
 if(depth==4){pattern=color|(color<<4);pattern|=pattern<<8;}else pattern=color|(color<<8);pattern|=pattern<<16;
 layout=canvas->layout;canvasWidth=canvas->width;canvasHeight=canvas->height;pixels=canvas->pixels;
 for(row=startY,tileY=startY/8;row<endY;row=(int)((u32)row+8),tileY++){
 localY=row>=y?0:(int)((u32)y-(u32)row);spanY=(int)((u32)bottom-(u32)row);if(spanY>8)spanY=8;spanY-=localY;
 for(column=startX,tileX=startX/8;column<endX;column=(int)((u32)column+8),tileX++){
 u32 index=FUN_02016f34(tileX,tileY,canvasWidth,canvasHeight,layout&255,(layout>>8)&255);
 localX=column<x?(int)((u32)x-(u32)column):0;spanX=(int)((u32)right-(u32)column);if(spanX>8)spanX=8;spanX-=localX;
 FUN_02017048(pixels+index*bytes,localX,localY,spanX,spanY,pattern,depth);
 }
 }
}
