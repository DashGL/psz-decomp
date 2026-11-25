// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x56, exact bytes and relocation targets.
typedef struct { unsigned char bytes[4]; } Key_0204f400;
// FUN_0204f400 @ 0x0204f400 (inventory code 0x56, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 39.
 * Return contract corrected: final 4fa34 scalar pointer survives epilogue.
 */
extern int FUN_0204dbc4(void *,int);extern void FUN_020458ac(int,void *);extern void FUN_02045aac(int,void *);extern void *FUN_0204fa34(int,void *);
void *FUN_0204f400(void *unused,int id,unsigned char *p){if(FUN_0204dbc4(p,17)){Key_0204f400 a=*(Key_0204f400 *)p;FUN_020458ac(id,&a);}else{Key_0204f400 b=*(Key_0204f400 *)p;FUN_02045aac(id,&b);}return FUN_0204fa34(id,p);}

/* Four-byte key and full-body proof: notes/reference/resume2-low-20261112/FUN_0204f400-proof.json. */
