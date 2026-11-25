// FUN_overlay_4__02122f18 @ 0x02122f18 (0x9c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch34.json; original draft retained for referenced provenance.
// FUN_overlay_4__02122f18 @ 0x02122f18 (0x9c, Thumb)
// check: vers=2.0/sp2p3 target=0x9c candidate=0x9c words=0 exact_bytes=0 bad_relocs=0
// Draw timestamp-status marker, state marker and selection cursor with original resource reloads.
typedef struct {unsigned short h[4];int xy[2];} Draw;extern void FUN_02071d0c(void *),FUN_020c32b4(void *,unsigned int);extern void *FUN_02077f3c(void);extern unsigned int FUN_02077fec(void *);
extern int FUN_020a8b1c(void *);
void FUN_overlay_4__02122f18(int *self){Draw draw;FUN_02071d0c(&draw);if(FUN_020a8b1c(self)==1){draw.h[0]=11;draw.xy[0]=0xae000;draw.xy[1]=0xfc000;FUN_020c32b4(&draw,self[29]);}else{draw.h[0]=16;draw.xy[0]=0xae000;draw.xy[1]=0xfc000;FUN_020c32b4(&draw,self[29]);}if(self[5]==1){draw.h[0]=13;draw.xy[0]=0xc5000;}else{draw.h[0]=12;draw.xy[0]=0xca000;}draw.xy[1]=0x109000;FUN_020c32b4(&draw,self[29]);draw.h[0]=4;draw.xy[0]=0xad000;draw.xy[1]=(14*(unsigned int)self[24]+250)<<12;FUN_020c32b4(&draw,self[29]);}
