// flags: -O4,p
// USA owned-buffer and collection helpers; root batch242 retains ABI and extents.
extern void *DAT_0211d744;extern int FUN_020c6e0c(void *);extern char *FUN_020c6e10(void *,int);char *FUN_020d5774(int key){int i;if(!DAT_0211d744)return 0;for(i=0;i<FUN_020c6e0c(DAT_0211d744);i++){char *p=FUN_020c6e10(DAT_0211d744,i);if(*(int *)(p+8)==key)return p;}return 0;}
