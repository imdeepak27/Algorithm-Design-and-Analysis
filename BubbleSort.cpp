#include<iostream>

using namespace std;

int main()
{
	int a[50],n,i,j,temp;
	cout<<"Enter The Size Of Array : ";
	cin>>n;
	cout<<"\nEnter The Array Elements : ";

	for(i=0;i<n;++i)
		cin>>a[i];

	for(i=1;i<n;++i)
	{
		for(j=0;j<(n-i);++j)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	}

	cout<<"\nArray After Bubble Sort : ";
	for(i=0;i<n;++i)
		cout<<" "<<a[i];

	return 0;
}
