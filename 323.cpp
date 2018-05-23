#include<iostream.h> 
#include<conio.h> 
void main ( ) 
{ 
      int n, a[50], i, s; 
      float av; 
      clrscr(); 
      cout<<"\n Enter the Value of n : "; 
      cin>>n; 
      cout<<"\n Enter the Different "<<n<<" Values : "; 
      for (i = 0; i < n; i++) 
         { 
               cin>>a[i]; 
         } 
               s=0; 
                for(i=0; i<n; i++) 
                    { 
                          s=s+a[i]; 
                    } 
                          cout<<"\nSum of  " <<n <<" Value is : " <<s; 
                          av=(float)s/n; 
                          cout<<"\nAverage of "<<n <<" Value is : "<<av; 
                          getche(); 
} 
