// FUN_0201cab8 @ 0x0201cab8 (0x8c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x8c candidate=0x8c words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_0201c8a0(void);
extern int FUN_0205e8c4(unsigned int *);
extern int FUN_0205e8f4(unsigned int);
extern void FUN_0205bb34(unsigned int *,unsigned int);
unsigned int FUN_0201cab8(unsigned int matrix,unsigned int vector){unsigned int temporary[16];FUN_0201c8a0();*(volatile unsigned int *)0x04000440=0;*(volatile unsigned int *)0x04000444=0;*(volatile unsigned int *)0x04000454=0;if(matrix){while(FUN_0205e8c4(temporary)){}FUN_0205bb34(temporary,matrix);}if(vector){while(FUN_0205e8f4(vector)){}}*(volatile unsigned int *)0x04000448=1;*(volatile unsigned int *)0x04000440=2;return 2;}
