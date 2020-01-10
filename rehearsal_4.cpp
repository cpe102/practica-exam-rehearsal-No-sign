#include <iostream>
#include <string>
using namespace std;

int i,n,x;
string k="";

string conpress(string cha)
{
	i=0;
	n=0;
	x=0;
	string re=cha;
	
	while(i<cha.size())
	{
	  
		re[n]=cha[i];
	
	
		i=i+3;
		n++;
	}
	while(x+n<cha.size()){
	
		re[cha.size()-(x+1)]=k[0];
		x++;
	}
	return re;
}

int main()
{
    string a = conpress("cpecmu");
    string b = conpress("x");
    string c = conpress("HelloWorld");
    string d = conpress("BNK48");
    string e = conpress("COMPROG261102");
    string f = conpress("A");
    string g = conpress("AB");
    string h = conpress("ABC");
    string i = conpress("ABCD");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

}
