// flags: -O4,s
struct S999 {
    char pad[36];
    int f24;
    int arr[5];
    char *tbl;
};
int FUN_020999ec(struct S999 *s,char *out,int index){
    int i,offset;
    if(index>=0 && index<5 && s->tbl){
        offset=24*index;
        *(int *)(out+4)=*(int *)(s->tbl+offset+20);
        *(short *)(out+12)=(*(unsigned short *)(s->tbl+offset)*7168)>>12;
        *(short *)(out+14)=*(unsigned short *)(s->tbl+offset+2);
        *(short *)(out+16)=*(unsigned short *)(s->tbl+offset+4);
        *(short *)(out+18)=(*(unsigned short *)(s->tbl+offset+6)*5120)>>12;
        *(short *)(out+20)=*(unsigned short *)(s->tbl+offset+8);
        *(short *)(out+22)=*(unsigned short *)(s->tbl+offset+10);
        *(short *)(out+24)=*(unsigned short *)(s->tbl+offset+12);
        *(short *)(out+26)=*(unsigned short *)(s->tbl+offset+14);
        out[28]=*(unsigned char *)(s->tbl+offset+16);
        out[42]=s->f24;
        for(i=0;i<11;i++)out[43+i]=s->arr[index];
        return 1;
    }
    return 0;
}
