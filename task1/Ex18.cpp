#include "stdafx.h"
#include "Ex18.h"

bool CheckBitNumber(long x)
{
	return (x&(x<<1))==0;
}