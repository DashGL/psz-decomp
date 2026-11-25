// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x8e, exact bytes and relocation targets.
// flags: -O4,s
// FUN_overlay_3__0211e934 @ 0x0211e934 (0x8e, Thumb)
// Process cancel/confirm before independent up/down selection changes, emitting feedback only when selection changes.
extern int FUN_020bbf6c(unsigned int);extern void FUN_overlay_3__0211ec3c(void *,int),FUN_020c193c(unsigned int,unsigned int,int,unsigned int,int);
void FUN_overlay_3__0211e934(int *self){if(FUN_020bbf6c(2))FUN_overlay_3__0211ec3c(self,5);else if(FUN_020bbf6c(1)){if(self[9]==0)FUN_overlay_3__0211ec3c(self,2);else FUN_overlay_3__0211ec3c(self,5);}else{if(FUN_020bbf6c(64)){if(self[9]!=0)FUN_020c193c(0,2,0,0,-1);self[9]=0;}if(FUN_020bbf6c(128)){if(self[9]!=1)FUN_020c193c(0,2,0,0,-1);self[9]=1;}}}
