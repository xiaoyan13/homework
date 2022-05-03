#include<bits/stdc++.h>

using namespace std;

int const N = 1e5 + 100;

class Account
{
	private:
	unsigned int studentCounter;
	double initialBalance;
	string firstName;
	string lastName;
	public:
		Account(); 
		Account(unsigned int a,double b,string &c,string &d) 
			: studentCounter(a),initialBalance(b),firstName(c),lastName(d) {};
		~Account();
};

int main()
{
	unsigned int studentCounter = 0;
	double initialBalance = 0.0;
	
	return 0;
}
