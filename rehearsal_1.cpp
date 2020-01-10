#include <iostream>
#include <string>
using namespace std;
float g;
string name;

int main(){
	
	cout<<"What is your name?:";
	cin>>name;
	cout<<"What is your GPA?:";
	cin>>g;
	if(g>=3.5)
	{
		cout<<name<<" Inw Jrim Jrim!!!";
	}
	else{
	cout<<"Try harder,"<< name;	
	}
	return 0;
}
