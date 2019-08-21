#include <iostream>
#include <iomanip>
void checkNum(int,int,bool &check);
using namespace std;
int main ()
{
	bool check = true ;
	int r , number , count =  0;
	srand(time(NULL));
	r = rand()%10+1;

	cout << "#### Welcome to guessing number game ###" << endl;
	cout << "Secret number has been chosen" << endl << endl;
	do
	{
		count += 1 ;
		cout << "Guess the number (1 to 10) : ";
		cin >> number ;
		checkNum(r , number , check);
		cout << endl << endl;
	}while(check);

	cout << "The secret number is " << r << endl;
	cout << "You made " << count << " guess" << endl << endl;

	return(0);
}

void checkNum(int ran , int num , bool &check)
{
	if (ran > num) cout << "The secret number is higher" ;
	if (ran < num) cout << "The secret numbrt is lower " ;
	if (ran == num)
	{
		cout << "Congratulations!" ;
		check = false;
	}
}