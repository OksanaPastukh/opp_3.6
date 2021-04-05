#pragma once
#include "D1.h"
#include "D2.h"
#include "B2.h"
class D3 : public D1, public D2, private B2
{
	int d3;
public:
	D3(int, int,int,int,int,int);
	void show_D3();
};

