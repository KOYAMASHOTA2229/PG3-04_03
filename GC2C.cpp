#include "GC2C.h"
#include <stdio.h>

GC2C::GC2C()
{
	name = "GC2C";
	printf("�l��%s�ł�\n", name);
}

GC2C::~GC2C()
{
	printf("�l��%s�ɖ߂�܂�\n", name);
}

void GC2C::Attendance()
{
	printf("�l��%s�ɍݐЂ��Ă��܂�\n", name);
}
