// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x3a, exact bytes and relocation targets.
// FUN_020c3e54 @ 0x020c3e54
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Bounds-check indexed record, seek using base plus stride, then read 48 bytes and report positive result.
 * Evidence: scratch/coverage-root/batch1/020c3e54.txt.
 * Object identities and helper return contracts remain provisional.
 */
extern void FUN_0205a160(void *,unsigned int,int);
extern int FUN_0205a150(void *,void *,unsigned int);
int FUN_020c3e54(unsigned int *self,void *out,unsigned int index) {
    if(index<self[1]) { FUN_0205a160(self+4,self[2]+self[3]*index,0); if(FUN_0205a150(self+4,out,48)>0) return 1; return 0; }
    return 0;
}
