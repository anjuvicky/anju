# include <iostream>

using namespace std;

int main()
{
         int num, meven=0, modd=1;

         cout<<"ENTER NUMBER (0 TO TERMINATE):\n";

          do
        {
               cin>>num;
               
               if(num%2==0)
               {
                         if(num>meven)
                         meven=num;
               }
               else
               {
                         if(num>modd) 
                         modd=num;
               }

         }while(num);
 
          cout<<"LARGEST EVEN NUMBER IS:"<<meven<<endl;
          cout<<"LARGEST ODD NUMBER IS:"<<modd<<endl;
 
          return 0;
}
