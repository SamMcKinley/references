#include <iostream>

using namespace std;
//Functions used
void regularTransaction(int balance1, int balance2);
void hackedTransaction(int& balance1, int& balance2);

int main()
{
	//original balances
	int balance1 = 50000;
	int balance2 = 50;
	//balances of the regular transaction
	cout << "Balance1 = " << balance1 << endl;
	cout << "Balance2 = " << balance2 << endl;
	cout << "\nRegular Transaction\n";

	regularTransaction(balance1, balance2);
	//balances of the hacked transaction
	cout << "Balance1 = " << balance1 << endl;
	cout << "Balance2 = " << balance2 << endl;
	cout << "\nHacked Transaction\n";
	hackedTransaction(balance1, balance2);
	
	cout << "Balance1 = " << balance1 << endl;
	cout << "Balance2 = " << balance2 << endl;


	return 0;
}
//Regular Transaction function
void regularTransaction(int balance1, int balance2)
{
	int temp = balance1;
	balance1 = balance2;
	balance2 = temp;
	cout << "Balance1 = " << balance1 << endl;
	cout << "Balance2 = " << balance2 << endl;
}
//Hacked transaction function
void hackedTransaction(int& balance1, int& balance2)
{
	//Swapping the values
	int temp = balance1;
	balance1 = balance2;
	balance2 = temp;
	cout << "Balance1 = " << balance1 << endl;
	cout << "Balance2 = " << balance2 << endl;
}