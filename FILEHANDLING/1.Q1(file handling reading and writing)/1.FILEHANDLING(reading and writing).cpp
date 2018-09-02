/*write a progrsm to read and write data from/to a file
use file name as introduction.txt*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("introduction.txt","w");
    int id;
    char name[3000];
    fscanf(stdin,"%d%s",&id,name);//u can also use scanf("%d%s",&id,name);
    fprintf(fp,"ID->%d\nNAME->%s",id,name);
    fclose(fp);
    fp=fopen("introduction.txt","r");
    fscanf(fp,"%d%s",&id,name);//READING INPUT FROM FILE
    printf("%d%s",id,name);//PRINT DATA THAT IS READ FROM THE FILE
    return 0;
}
