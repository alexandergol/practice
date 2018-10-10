#include <iostream>

using namespace std;

int fizzbuzz(int i)
{   
        if (i % 3 == 0){
         cout<<"Fizz";
        }

        if (i % 5 == 0){
        cout<<"Bizz";
        }

        if (i % 5 != 0 && i % 3 != 0)
    
       return -1;
}

int main() 
{   
	fizzbuzz(9);
	cout<<"\n";
	fizzbuzz(10);
	cout<<"\n";
	fizzbuzz(15);
	cout<<"\n";
      return 0;
}


