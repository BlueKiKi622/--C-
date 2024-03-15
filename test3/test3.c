#include <stdio.h>

int main(){
    FILE *fin,*fout;
    int count = 0,line = 0;
    if (!(fin=fopen("1.txt","r")))
    {
        printf("error!!!");
    }
    if (!(fout=fopen("2.txt","w")))
    {
        printf("error!!!");
    }
     fprintf(fout,"行号%d",line++);
    while (!feof(fin))
    {
        char ch = fgetc(fin);
        putchar(ch);
        if ((ch!=' ')&& (ch!='\n'))
        {
            count++;
        }
        fputc(ch,fout);
        if(ch=='\n'){
            fprintf(fout,"行号%d",line++);
        }   
    }
        fprintf(fout,"总个数 %d",count--);
        printf("总个数 %d",count--);

        fclose(fin);
        fclose(fout);    
}
