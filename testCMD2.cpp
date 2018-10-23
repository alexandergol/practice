#include <iostream>

#include <string>


using namespace std;


    int fizzbuzz(int i)
{
        if (i % 3 == 0){
            cout<<"Fizz";
        }

        if (i % 5 == 0){
           cout<<"Buzz";
        }

        if (i % 5 != 0 && i % 3 != 0)

	  return 0;
		}

	string st1;

	int main( int argc, char** argv)

{
	    for (int i = 0; i < argc; i++) {
	      st1=argv[i];}

	    if(st1 !=  "fizzbuzz")
          cout<<"Nothing to do"<<endl;



	    else if (st1 == "fizzbuzz"){

		fizzbuzz(9);
		cout<<"\n";
		fizzbuzz(10);
		cout<<"\n";
		fizzbuzz(15);
		cout<<"\n";
	}

      return 0;
}

