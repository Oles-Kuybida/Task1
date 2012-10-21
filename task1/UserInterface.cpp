#include "stdafx.h"
#include "UserInterface.h"

#define SYMBOL_QUANTITY 12

long EnterL ( void )	
{
	char str[SYMBOL_QUANTITY];
	bool goodNum=false;
	short int len;
	while(!goodNum)
	{
		goodNum=true;
		cout << "Enter long number" << endl;
		cin.ignore();
		cin.get(str,SYMBOL_QUANTITY);
		len=strlen(str);
		int i;
		if ( '-'==str[0] )i=1;	//is the number positive
		else i=0;
		for (i;i<len;i++ )	//is all symbol digit
		{
			if ( str[i]<'0' || str[i]>'9' )
			{
				cout << "You can enter only digits" << endl;
				goodNum=false;
				break;
			}
		}//for end
	}//while end
	return strtoul(str,NULL,0);
}
unsigned long EnterUL ( void )	
{
	char str[SYMBOL_QUANTITY-1];
	bool goodNum=false;
	short int len;
	while(!goodNum)
	{
		goodNum=true;
		cout << "Enter ul number" << endl;
		cin.ignore();
		cin.get(str,SYMBOL_QUANTITY-1);
		len=strlen(str);
		if ( '-'==str[0] )		//is the number positive
		{
			cout << "You must enter positive number" << endl;
			goodNum=false;
			continue;
		}
		for (int i=0;i<len;i++ )	//is all symbol digit
		{
			if ( str[i]<'0' || str[i]>'9' )
			{
				cout << "You can enter only digits" << endl;
				goodNum=false;
				break;
			}
		}//for end
	}//while end
	return strtoul(str,NULL,0);
}
int	EnterINT  ( void )
{
	char str[SYMBOL_QUANTITY];
	bool goodNum=false;
	short int len;
	while(!goodNum)
	{
		goodNum=true;
		cout << "Enter int number" << endl;
		cin.ignore();
		cin.get(str,SYMBOL_QUANTITY-1);
		len=strlen(str);
		for (int i=0;i<len;i++ )	//is all symbol digit
		{
			if ( str[i]<'0' || str[i]>'9' )
			{
				cout << "You can enter only digits" << endl;
				goodNum=false;
				break;
			}
		}//for end
	}//while end
	return atoi(str);
	return 0;
}