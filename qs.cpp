//include library
#include<iostream>

using namespace std;

int partition(int arr[],int l,int h)
{
	//taking a pivot value
	int pt=h;
	h=h-1;
	int temp;

	//initializing an element
	int fact=1;
	
	//creating while loop
	while(fact)
	{
		//loop to check whether no.s of arrays are smaller than the pivoted value
		while( (l<=h ) && (arr[l]<=arr[pt]) )
			l+=1;

		//loop to create whether no. s of arrays are greater then the pivoted value
		while( (arr[h]>=arr[pt]) && (h>=l) )
			h-=1;

		//checking conditions
		if(h<l)
			fact=0;
		//swapping of lowest and highest values
		else
			int temp = arr[l];
			arr[l] = arr[h-1];
			arr[h-1] = temp;
	}

	//swapping pivoted value with it's just larger value
	temp = arr[pt];
	arr[pt] = arr[h-1];
	arr[h-1] = temp;

	//returning the value
	return h;
}

//create function to workout quicksort
void QS(int arr[],int l,int h)
{
	//conditions applied
	if(l<h)
	{
		//call funtion partition
		int p=partition(int arr[],int l,int h);

		//recursion
		QS(int arr[],int l,int p-1);
		QS(int arr[],int p+1,int h);
	}
}


//create main
int main()
{
	//creating array
	int arr[5]={1,5,2,4,3};

	//initializing variables for quick sorting
	int l=0;
	int h=4;

	//print the unarranged array
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	//calling function quicksort for sorting the array
	QS(int arr[],int l,int h);

	//print the sorted array
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	//terminating the program
	return 0;
}
