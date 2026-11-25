// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc0, exact bytes and relocation targets.
// FUN_0204df5c @ 0x0204df5c (inventory code 0xa8, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 171.
 */
extern void FUN_0204e2c0(int,int,int),FUN_0204e3a8(int,int),FUN_0204e438(int,int,int),FUN_0204e50c(int,int),FUN_0204e01c(int,int,int,int,int),FUN_0204e0d8(int,int,int,int);void FUN_0204df5c(int source,int target,int kind,int amount){switch(kind){case 11:FUN_0204e2c0(source,source,amount);break;case 12:FUN_0204e3a8(source,amount);break;case 13:FUN_0204e438(source,source,amount);break;case 14:FUN_0204e50c(source,amount);break;case 15:FUN_0204e01c(source,source,0,amount,-1);break;case 16:FUN_0204e0d8(source,0,amount,0);break;case 17:FUN_0204e01c(source,source,1,amount,-1);break;case 18:FUN_0204e0d8(source,1,amount,0);break;case 19:FUN_0204e01c(source,target,0,0u-(unsigned int)amount,-1);break;case 20:FUN_0204e0d8(source,0,0u-(unsigned int)amount,0);break;case 21:FUN_0204e01c(source,target,1,0u-(unsigned int)amount,-1);break;case 22:FUN_0204e0d8(source,1,0u-(unsigned int)amount,0);break;}}

/* Full bytes, relocation and three-argument call evidence: notes/reference/resume2-low-20261112/FUN_0204df5c-proof.json. */
