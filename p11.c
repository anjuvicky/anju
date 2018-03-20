#include <stdio.h> 
   
int main() {  
    int day;
   
    printf("Enter Day Number (1 = Monday ..... 7 = Sunday)\n");  
    scanf("%d", &day);  _
  
    switch(day){
        case 1 : printf("yes");
            break;
        case 2 : printf("yes");
            break;
        case 3 : printf("yes");
            break;
        case 4 : printf("yes");
            break;
        case 5 : printf("yes");
            break;
        case 6 : printf("yes");
            break;
        case 7 : printf("no");
            break;
        default: printf("Invalid Input !!!!\n");          
    }
  
    return 0;  
}
