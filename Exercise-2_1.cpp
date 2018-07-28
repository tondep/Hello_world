#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>


using namespace std; 

int main()
{
	srand((unsigned)time(0));
	int random= rand()%100;
	int counter=1, number=0;
	while(counter<=6)
	{
		cout<< "Enter your prediction:  "<< counter<< endl;
		cin>> number;
		
		if (number==random)
		{
			cout<< "\n\n YOU HAVE WON!!!! ;)\n";
			return 0;
		}
		else
		{
			if (number< random)
				cout<<"Guess lower\n\n";
			else
				cout<< "Guess higher\n\n";
		}
		
		if (counter==5)
		{
			cout<< "\n\nYOU LOSE :(\n";
			cout<< "The super number is: "<< random<<endl;
			return 0;
			
		}
		counter++;
	}
}

