#include <stdio.h>
 
int main()
{
    FILE *fileptr;
    int count_numeric = 0;
    char filechar[40], chr;
 
    printf("Enter file name: ");
    scanf("%s", filechar);
    fileptr = fopen(filechar, "r");
  
    chr = getc(fileptr);
    while (chr != EOF)
    {
       
        if (chr == 'n')
        {
            count_numeric = count_numeric + 1;
        }
       
        chr = getc(fileptr);
    }
    fclose(fileptr);
    printf("There are %d lines in %s  in a file\n", count_lines, filechar);
    return 0;
}
