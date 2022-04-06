#include<iostream>
#include<string>

using namespace std;
int main()
{
	string a;
	int flag = 0;

	cout<<"Enter a string: ";
	cin>>a;
	
	while(a.length() == 2){ 
		if(a[0] == 'A' && a[1] == 'B') 
		{
			flag = 1;
			break;
		}
		else if(a[0]=='B' && a[1]=='A') 
		{
			flag = 1;
			break;
		}
		else
		{
			flag = 0;
			break;
		}
	}

	if(flag == 1){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}

	return 0;
}
