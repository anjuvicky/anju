#include<stdio.h>
void main()
{

int words(const char sentence[ ]);

int i, length=0, count=0, last=0;
length= strlen(sentence);

for (i=0, i<length, i++)
 if (sentence[i] != ' ')
 {
     if (last=0)
        count++;
     else
        last=1;
 else
     last=0;

return count;
}
getch();
}
