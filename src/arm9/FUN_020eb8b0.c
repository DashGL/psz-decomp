// flags: -O4,p
// USA game static initialization; constructor calls and scalar returns retained.
extern unsigned char DAT_020fc958[];
extern unsigned char DAT_020fc988[];
extern unsigned int FUN_0208e78c(unsigned int,unsigned int,unsigned int,unsigned int);
unsigned int FUN_020eb8b0(void){return FUN_0208e78c(((unsigned int)DAT_020fc958),((unsigned int)DAT_020fc988),((unsigned int)DAT_020fc988),((unsigned int)DAT_020fc988));}
