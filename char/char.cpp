#include <iostream>
#include <conio.h>
#include <cctype>
#include <string>
using namespace std;
int main()
{   setlocale(LC_ALL,"C");
	char m, ch[20]={"I like music"};
	string str1="%20";
	int r=0;
	while(ch[r])
	{   m=ch[r];
	  	if(isspace(m))
		{cout << str1;
		cout << m;
		r++;
		}
	};
	
	
	getch();
	return 0;















}