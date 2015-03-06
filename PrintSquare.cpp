//this project employs the use of the class object to repeatedly carry similarly related tasks
// the program will ask the user for dimensions of a square to be printed as well as a symbol to be
//printed.


#include<iostream>
#include<windows.h>

using namespace std;

class Square                     // the class square is defined here.
      {
      private:
              int Mindex,Nindex;                              //private variables for print function     
              char symbol;
      public:
             void setIndex(int m, int n)
                       {
                               Mindex = m;
                               Nindex = n;
                       }
             void printSquare()                            // nested for loop prints the square on screen.
                       {
                               for(int i=0;i<Mindex;i++)
                                       {
                                         for(int j=0;j<Nindex;j++)
                                           {  
                                                 cout<<symbol;
                                           }
                                         cout<<endl;
                                       }
                       }
             void setSymbol(char a)
                       {
                                 symbol = a;
                       }
      };
bool running = true;
int m,n; 
char a;     
int main()   // main function is reserved for user interaction.
{
    cout<<"hello! this program will take any keyoard symbol and print it out"<<endl;
    cout<<"in a rectangle with dimensions of your specification"<<endl<<endl<<endl; 
    system("pause");
    while(running)         // program loops until the user is done making sqaures
          {
                  
                  system("cls");
                  Square square1;
                  cout<<"enter the height of the rectangle desired: ";
                  cin>> m;
                  cout<<endl;
                  
                  cout<<"enter the width of the rectangle desired: ";
                  cin>>n;
                  cout<<endl;
                  square1.setIndex(m,n);
                  cout<<"what is the symbol you wish to print? ";
                  cin>> a;
                  square1.setSymbol(a);
                  cout<<endl<<endl<<endl<<endl;
                  square1.printSquare();
                  cout<<endl<<endl;
                  cout<<"would you like to print another square? y or n: ";
                  cin>> a;
                  
                  if(a != 'y' && a!= 'Y') running = false;
          }
return 0;          
}                 
                  
                  
                                              
                             
                                                                                                      
