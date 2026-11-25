// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_02107010[];
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x68 candidate=0x68 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_020201ac(unsigned int);
extern unsigned int FUN_0202050c(unsigned int);
extern unsigned int FUN_020204c0(unsigned int);
unsigned int FUN_020205dc(unsigned int a,unsigned int b,unsigned int c,unsigned int size){unsigned int queue=((unsigned int)DAT_02107010 + 0u),entry;if(FUN_020201ac(queue))return 0;entry=FUN_0202050c(queue);*(unsigned int *)entry=a;*(unsigned int *)(entry+4)=c;*(unsigned int *)(entry+8)=b;*(unsigned int *)(entry+12)=size;FUN_020204c0(queue);*(unsigned int *)(queue+16)=*(unsigned int *)(queue+16)+*(unsigned int *)(entry+12);return 1;}
