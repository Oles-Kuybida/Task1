// task1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "UserInterface.h"
#include "Ex16.h"
#include "Ex17.h"
#include "Ex18.h"
#include "Ex19.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Task1" << endl;
	short int key = 1;		//
	while ( key!=0 )	//This cycle allow to run diferent function many a time
	{
		cout << "Select function (Enter number between 16 and 19)" << endl;
		cout << "Enter zero to exit" << endl << endl;
		//cin.ignore();
		cin  >> key;
		if ( 16==key )
		{
			cout << "******** Task1. Ex 16 *********" << endl;
			cout << "Enter n ";
			int n=EnterINT();
			cout << "Enter p ";
			int p=EnterINT();
			UL temp=NumberGenerator(n,p);
			cout << "Result:" << endl;
			BitPrint( temp );
		}//end if 16
		if ( 17==key )
		{
			cout << "******** Task1. Ex 17 *********" << endl;
			cout << "Enter firs number ";
			long firstNum=EnterL();
			BitPrint( firstNum );
			cout << "Enter second number ";
			long secondNum=EnterL();
			BitPrint( secondNum );
			long temp=AbsOfDifference(firstNum,secondNum);
			cout << "Result:" << endl;
			BitPrint( temp );
		}//end if 17
		if ( 18==key )
		{
			cout << "******** Task1. Ex 18 *********" << endl;
			cout << "Enter number ";
			long number=EnterL();
			BitPrint( number );
			cout << "Result:";
			cout << CheckBitNumber( number );
		}//end if 18
		if ( 19==key )
		{
			cout << "******** Task1. Ex 19 *********" << endl;
			cout << "Enter number ";
			long number=EnterL();
			BitPrint( number );
			cout << "Result:" << endl;
			UL temp=SwapBitGroup( number );
			BitPrint( temp );
		}//end if 19
		cout << "\n############################" << endl;
	}
	return 0;
}

