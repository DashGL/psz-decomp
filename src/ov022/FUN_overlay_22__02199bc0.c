// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x5e, exact bytes and relocation targets.
// FUN_overlay_22__02199bc0 @ 0x02199bc0 (code/full extent 0x5e, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Choose eight-byte game command via
 * proximity/random choice or fallback target, then dispatch to owner.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch376.md.
 */
extern int FUN_overlay_22__021a0428(void);
extern void FUN_overlay_22__02197fe8(void *);
extern int FUN_overlay_22__0219a72c(void *,int);
extern int FUN_02035b60(int);
extern int FUN_overlay_22__0219a7e8(void);
extern void FUN_overlay_22__0219f22c(void *,void *);
void FUN_overlay_22__02199bc0(int *self) {
    signed char command[8];
    if(FUN_overlay_22__021a0428()==1){
        FUN_overlay_22__02197fe8(command);
        if(FUN_overlay_22__0219a72c(self,0x40000)!=-1){
            if(FUN_02035b60(2)==0){command[0]=10;command[1]=-1;}
            else{command[0]=11;command[1]=-1;}
        }else{{int tgt=FUN_overlay_22__0219a7e8();command[0]=4;command[1]=tgt;}}
        FUN_overlay_22__0219f22c((void *)self[1],command);
    }
}
