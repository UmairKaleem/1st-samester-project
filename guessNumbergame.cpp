#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
	int secretNumber= rand()%20+1;
	int guess;
	
	cout<<"Guess the number between 1 and 20 (0r enter to quite)";
	while (1)
    {
		cin>>guess;
	
	 if (guess==-1)
		{
		cout<<"You chose to quite. Goodby!\n";
     break;
	}
	else if (guess==secretNumber)
	{
		cout<<"congratulations you have guess the secret number.\n";
		break;
	}
	else if(guess<secretNumber){
		cout<<"Too low ! try again :";
	}
	else{
		cout<<"Too high ! try again:";
	}
	}
	return 0;
}



