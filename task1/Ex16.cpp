#include "stdafx.h"
#include "Ex16.h"

unsigned short sizeUL = sizeof(UL)*8;

UL NumberGenerator ( USI n, USI p )	//Generate num
{
	UL result=0;
	result|=1<<n;
	result-=1;
	result=result<<p;
	return result;
}
void BitPrint ( UL number )	//Print 
{
	cout << "Number: "<< number <<endl;
	for(int i=sizeUL-1;0<=i;i--)
	{
		if((number&(1<<i))==0)cout <<'0';
		else cout <<'1';
	}
	cout << endl;
}