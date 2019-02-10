#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "print the number : " << "\n";
	cin >> n;
	

	while(n != 1){

		if(n % 2 == 1){
			n = 3*n + 1;
			cout << "answer is " << n << "\n";
		
		}else if(n % 2 != 1){
			n = n/2;
			cout << "answer is " << n << "\n";
		}
	}
	return 0;
}
