//include library
#include<iostream>

using namespace std;

//create function to workout quicksort
void QS(int arr[],int l,int h)
{
	//conditions applied if only one element is left
	if(l<1)
	{
		int p=1,temp;
		for(int i=h-1;i>=l;i--)
		{
			if(arr[i]>arr[p])
			{
				temp=arr[i];
				for(int j=i;j<p;j++)
				{
					arr[j]=arr[j+1];
				}
				arr[p]=temp;
				p--;
			}
		}
		//recursion
		QS(int arr[],int l,int p-1);
		QS(int arr[],int p+1,int h);
	}
}


//create main
int main()
{
	//creating array
	int n;
	
	//ask for size of array
	cout<<"Enter the sie of array ";
	cin>>n;
	
	//declaring the array
	int arr[n];
	
	//ask for input in the array
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the "<<i+1<<" th element ";
		cin>>arr[i];
	}

	//print the unarranged array
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	//calling function quicksort for sorting the array
	QS(arr[],0,n-1);

	//print the sorted array
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	//terminating the program
	return 0;
}
