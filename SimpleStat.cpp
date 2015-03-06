//this is a project that comes directly from my text book.
//I will later use this as a way to practice headers

#include<iostream>
#include<windows.h>
using namespace std;

class SimpleStat
{
      private:
              int largest;
              int sum;
              int count;
              
              bool isNewLargest(int);
      public:
             
             SimpleStat();
             bool addNumber(int);
             double getAverage();
             
             int getLargest()
             {  return largest;}
             
             int getCount()
             {  return count;  }
             
};

//implimentation

SimpleStat::SimpleStat()
{
     largest = sum = count = 0;
}
bool SimpleStat::addNumber(int num)
{
     bool goodNum = true;
     if(num >= 0)
     {
            sum+= num;
            count++;
            if(isNewLargest(num))
                                 largest = num;
     }
     else
     goodNum = false;
     return goodNum;
}

bool SimpleStat::isNewLargest(int num)
{
     if(num > largest)
     return true;
     else
     return false;
}

double SimpleStat::getAverage()
{
       if(count>0)
           return static_cast<double>(sum)/count;
       else
           return 0;
}

//program

int main()
    {
          int num;
          SimpleStat statHelper;
          
          cout<<"Please enter the set of non-negative integer \n";
          cout<<"values you want to average. Separate the with \n";
          cout<<"spaces and enter -1 after the last value. \n\n";
          
          cin>> num;
          while (num>=0)
          {
                statHelper.addNumber(num);
                cin>>num;
          }
          cout<<"\nYou entered "<<statHelper.getCount()<<" values. \n";
          cout<<"the largest value was " << statHelper.getLargest() << endl;
          cout<< "The average value was " << statHelper.getAverage() <<endl;
          
          system("pause");
          return 0;
          
}      
