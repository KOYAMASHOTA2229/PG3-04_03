#include "GC2A.h"
#include <stdio.h>

GC2A::GC2A()
{
	name = "GC2A";
	printf("私は%sです\n", name);
}

GC2A::~GC2A()
{
	printf("%sに戻ります\n", name);
}

void GC2A::Attendance()
{
	printf("私は%sに在籍しています\n", name);
}
