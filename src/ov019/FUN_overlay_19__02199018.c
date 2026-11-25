// FUN_overlay_19__02199018 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_19__02199018 @ 0x02199018
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int D_020ed0a0[];
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Construct effect state, initialize handles, and copy position and direction inputs.
 * Field identities remain provisional.
 */
typedef struct {int x,y,z;} V;
extern void *FUN_overlay_19__02198c5c(void *);
int *FUN_overlay_19__02199018(int *p,V *position,unsigned short direction,int value) {FUN_overlay_19__02198c5c(p);p[0]=0x0219d318;p[12]=-1;p[13]=-1;p[14]=-1;p[15]=*D_020ed0a0;p[16]=*D_020ed0a0;p[17]=0;*(V *)(p+3)=*position;p[4]=0;*(unsigned short *)(p+6)=direction;p[17]=value;return p;}
