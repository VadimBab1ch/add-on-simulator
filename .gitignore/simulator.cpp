#include <iostream>
#include <cstdlib>
using namespace std;

void drill();
int count;
int num_right;

int main()
{
	cout << "How many practical exercises: ";
	cin >> count;
	
	num_right = 0;
	do{
		drill();
		count --;
	} while (count);
	cout << "You give " << num_right << " right answers.\n";
	
	return 0;
}

void drill()
{
	int count;    
	int a, b, ans;
	
	a = rand() % 100;
	b = rand() % 100;
	
	for(count = 0; count < 3; count++) {
		cout << "How many " << a << " +" << b << "? ";
		cin >> ans;
		if(ans == a+b){
			cout << "Right!\n";
			num_right ++;
			return;
		}
	}
	cout << "You used all attempts.\n";
	cout << "Answer is: " << a+b << '\n';
}
