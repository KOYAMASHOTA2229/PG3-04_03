#include "GC2C.h"
#include <stdio.h>

GC2C::GC2C()
{
	name = "GC2C";
	printf("僕も%sです\n", name);
}

GC2C::~GC2C()
{
	printf("僕も%sに戻ります\n", name);
}

void GC2C::Attendance()
{
	printf("僕は%sに在籍しています\n", name);
}

