#include <iostream>
using namespace std;
int fizzbuzz(int i, const int n)
{
    for (i; i <= n; i++) {
        if (i % 3 == 0) {
            cout<<"Fizz";
        }
        if (i % 5 == 0) {
          cout<<"Bizz";
        }
        if (i % 5 != 0 && i % 3 != 0)
            cout<<i;
        cout<<"\n";
    }
	  return -1;
}

	int main() 
	{
		fizzbuzz(1,100);
		cout<<"\n";
		fizzbuzz(1,200);

	}

