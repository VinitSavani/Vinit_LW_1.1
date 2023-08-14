#include<iostream>
using namespace std;

int main()
{
	char a,i;
	
	cout << "Enter Size of String :- ";
	cin >> a;
	
	char A[a];
	
	cout << "Enter String :- ";
	cin >> A;
	
     for(i=0;i<=a;i++)
   {
	  if(A[i]>=65&&A[i]<=90)
	    {
        	A[i]=A[i]+32;
	    }
	    else if (A[i]>=97&&A[i]<=122)
		{
	        A[i]=A[i]-32;
		}
	}
	
	cout << "Toggle Case :- " << A;
	
	return 0;
}
