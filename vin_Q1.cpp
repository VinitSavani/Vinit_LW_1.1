#include<iostream>
using namespace std;

int main()
{
	int i,a;
	
	cout << "Enter Array Size :- ";
	cin >> a;
	
	int A[a];
	
	cout << endl;
	cout << "Enter Array's Elements :- " << endl;
	
	for(i=0;i<a;i++)
	{
		cout << "A[" <<i <<"]= " ;
		cin >> A[i];
	}
	
	cout << "All even numbers in Array is :- " << endl;
	
	for(i=0;i<a;i++)
	{
		if(A[i] % 2 == 0)
		{
			cout << A[i] << endl;
		}
	}
	
	return 0;
}
