// flags: -O4,p
// USA game static initialization; constructor calls and scalar returns retained.
extern unsigned char DAT_020fc988[];
extern unsigned char DAT_020fc990[];
extern unsigned int FUN_020bc6c8(unsigned int,unsigned int,unsigned int);
unsigned int FUN_020eb8e4(void){return FUN_020bc6c8(((unsigned int)DAT_020fc990),((unsigned int)DAT_020fc988),((unsigned int)DAT_020fc988));}
