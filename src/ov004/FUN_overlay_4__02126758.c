// FUN_overlay_4__02126758 @ 0x02126758 (0xe4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch39.json; original draft retained for referenced provenance.
// FUN_overlay_4__02126758 @ 0x02126758 (0xe4, Thumb)
// check: vers=2.0/sp2p3 target=0xe4 candidate=0xe4 words=0 exact_bytes=0 bad_relocs=0
// Advance indicator timer and draw three markers using selected and opposite column coordinates.
typedef struct {unsigned short h[4];int xy[2];} Draw;extern int data_0212d918[];extern void FUN_02071d0c(Draw *),FUN_020c32b4(Draw *,int);
void FUN_overlay_4__02126758(int *self){int positions[2],which;Draw d;self[38]--;if(self[39]!=4&&self[38]<0){self[38]=0;self[39]=4;}positions[0]=data_0212d918[13];positions[1]=data_0212d918[14];which=self[31]==1;FUN_02071d0c(&d);d.h[0]=18;d.xy[0]=positions[which];d.xy[1]=self[39]==2?0x115000:0x119000;FUN_020c32b4(&d,self[37]);d.h[0]=19;d.xy[1]=self[39]==3?0x132000:0x12e000;FUN_020c32b4(&d,self[37]);d.h[0]=23;d.xy[0]=positions[!which];d.xy[1]=0x124000;FUN_020c32b4(&d,self[37]);}
