#include <iostream>

using namespace std;
float x,sum=0;

int main()
{
	cout<<"Enter x: ";
	cin>>x;
	sum=sum+x;
	while(x!=0){	
	cout<<"Enter x: ";
	cin>>x;
	if(x>0){
		sum=sum+x;
	}

}
	cout<<"sum = "<<sum;
	return 0;
}
