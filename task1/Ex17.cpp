#include "stdafx.h"
#include "Ex17.h"

unsigned short sizeL = sizeof(long)*8;

long AbsOfDifference ( long firstNum, long secondNum )	//
{
	long result=firstNum-secondNum;
	bool signe=((result&(1<<(sizeL-1)))==0);//if + 1;if - 0
	result=signe*result + !signe*(~result+1);
	return result;
}
void BitPrint ( long number )	//Print 
{
	cout << "Number: "<< number <<endl;
	for(int i=sizeL-1;0<=i;i--)
	{
		if((number&(1<<i))==0)cout <<'0';
		else cout <<'1';
	}
	cout << endl;
}