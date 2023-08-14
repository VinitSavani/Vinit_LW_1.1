#include<iostream>
using namespace std;

int main()
{
	int a = 2020;
	int b = 3030;
    int i,j=0,A[499];
    
    cout << "Leap years between from 2020 to 3030 are :- " << endl;
    
    for(i=a;i<=b;i++)
    {
    	if(i%4==0 || i%100==0 || i%400==0)
    	{
    	   A[j] = i;
    	   j++;
		}
	}
	
	for(i=0;i<j;i++)
	{
		cout << A[i] << endl;
	}
	
	return 0;
}
