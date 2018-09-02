/*THERE ARE 3 FILES NAMELY FILE1.TXT,FILE2.TXT,FILE3.TXT.FILES FILE1.TXT AND FILE2.TXT HAVE 10 INTEGERS STORED ALREADY.IN THE FILE FILE3.TXT THE
LEAST COMMON MULTIPLE(LCM) OF THE ITH NO. OF BOTH THE FILES IS STORED.BUT DUE TO SOME REASONS SOME ENTRIES OF FILE3.TXT GOT CORRUPTED.YOU HAVE
TO WRITE A CODE IN WHICH READS ALL THE THREE FILES TO DETERMINE IF FILE FILE3.TXT ENTERIES ARE CORRECT OR NOT.THE PROGRAM SHOULD CREATE ANOTHER
FILE FILE4.TXT TO STORE ONLY YES OR NO CORRESPONDING TO EACH PAIR FROM FILE1.TXT AND FIL2.TXT.WRITE YES IF LCM CORRECT AND NO IF WRONG*/
#include <stdio.h>
#include <math.h>
int main()
{
    FILE *f1,*f2,*f3,*f4;
    f1=fopen("file1.txt","r");
    f2=fopen("file2.txt","r");
    f3=fopen("file3.txt","r");
    f4=fopen("file4.txt","w");
    int a,b,c,i,d,j;
    for(i=0;i<10;i++)
    {
        fscanf(f1,"%d",&a);
        fscanf(f2,"%d",&b);
        fscanf(f3,"%d",&c);
        for(j=1;j<=(a*b);j++)
        {
            if(j%a==0 && j%b==0)
            {
                d=j;
                break;
            }
        }
        //printf("%d",d);
        if(d==c)
        {
            fprintf(f4,"YES\n");
        }
        else
            fprintf(f4,"NO\n");
    }

return 0;
}
