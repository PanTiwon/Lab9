#include<iostream>
using namespace std;

int printO(int x,int y){
	if ( x > 0 && y > 0)
	{
	for (size_t i = 0; i < x; i++)
	{
		for (int i = 0; i < y; i++)
		{
			cout << "O";
		}
		cout << "\n";
	}
	}else
	cout << "Invalid input";
	return 0;
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
