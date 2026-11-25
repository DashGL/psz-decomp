// FUN_0206f670 @ 0x0206f670 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206f670 @ 0x0206f670
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * When player predicate equals1, build32-byte request with copied position and y=4096, submit to manager.
 * Evidence: scratch/coverage-root/batch13/0206f670.txt.
 */
typedef struct {unsigned int x,y,z;} Vector;
extern int FUN_02085880(int);
extern void FUN_0206f558(void *);
extern void FUN_02034680(void *,const void *);
extern void *FUN_020718e0(void);
extern int FUN_020719d8(void *,void *);
void FUN_0206f670(unsigned char *self){if(FUN_02085880(*(int *)(self+0xfc))==1){Vector v=*(Vector *)(self+0x9c);unsigned int request[8];v.y=4096;FUN_0206f558(request);request[0]=5;request[5]=10;request[4]=0;FUN_02034680(request+1,&v);FUN_020719d8(FUN_020718e0(),request);}}
