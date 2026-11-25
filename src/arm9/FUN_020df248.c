// Parse response status, headers and body pairs, restoring temporary delimiters.
// check: 2.0/sp2p3 target=0x1cc candidate=0x1b4 words=999 exact_bytes=999 bad_relocs=8
// near: ndiff=999/115 size=0x1cc vers=2.0/sp2p3 next="saved-register lifetimes, table-local placement and shared delimiter-restoration exits"
// flags: -O4,p
typedef unsigned int U;typedef signed char C;
extern const C DAT_021004b8[],DAT_02100678[],DAT_0210067c[],DAT_02100688[],DAT_021004e8[],DAT_0210068c[],DAT_02100690[],DAT_02100694[];
struct Table {void *entries;int capacity,count;};
#pragma thumb off
extern void FUN_020656b8(void *,U,U);
extern C *FUN_02003fa8(const C *,const C *);
extern U FUN_02003c70(const C *);
extern int FUN_02003f38(const C *,const C *,U);
#pragma thumb reset
extern int FUN_020df174(void *,struct Table *,const C *,const C *);
int FUN_020df248(C *owner,int mode)
{
 struct Table table;C savedkey,savedvalue;C *input,*end,*split,*status,*cursor,*keyend,*value,*valueend;C savedstatus;
 table.capacity=32;table.entries=owner+0x1a38;table.count=0;
 FUN_020656b8(table.entries,0,256);
 input=*(C **)(owner+0x1a08);split=FUN_02003fa8(input,DAT_021004b8);if(!split)return 0;
 end=split+4+FUN_02003c70(split+4);
 cursor=FUN_02003fa8(input,DAT_02100678);if(!cursor)return 0;
 status=cursor+1;savedstatus=status[3];status[3]=0;
 if(FUN_020df174(owner,&table,DAT_0210067c,status)!=1){status[3]=savedstatus;return 0;}
 status[3]=savedstatus;
 if(mode==1||FUN_02003f38(status,DAT_02100688,3)!=0)return 1;
 cursor=FUN_02003fa8(status+4,DAT_021004e8);if(!cursor)return 0;cursor+=2;
 while(cursor[0]!=13&&cursor[1]!=10){
  keyend=FUN_02003fa8(cursor,DAT_0210068c);if(!keyend)break;
  savedkey=*keyend;value=keyend+2;*keyend=0;
  valueend=FUN_02003fa8(value,DAT_021004e8);
  if(!valueend){*keyend=savedkey;break;}
  savedvalue=*valueend;*valueend=0;
  if(FUN_020df174(owner,&table,cursor,value)!=1){*keyend=savedkey;*valueend=savedvalue;return 0;}
  cursor=value+FUN_02003c70(value)+2;*keyend=savedkey;*valueend=savedvalue;
 }
 cursor=split+4;
 while((U)cursor<(U)end){
  keyend=FUN_02003fa8(cursor,DAT_02100690);if(!keyend)break;
  savedkey=*keyend;*keyend=0;value=keyend+1;
  valueend=FUN_02003fa8(value,DAT_02100694);if(!valueend)valueend=FUN_02003fa8(value,DAT_021004e8);
  if(valueend){savedvalue=*valueend;*valueend=0;}
  if(FUN_020df174(owner,&table,cursor,value)!=1){*keyend=savedkey;if(valueend)*valueend=savedvalue;return 0;}
  cursor=value+FUN_02003c70(value)+1;*keyend=savedkey;if(valueend)*valueend=savedvalue;
 }
 return 1;
}
