#include "GC2A.h"
#include <stdio.h>

GC2A::GC2A()
{
	name = "GC2A";
	printf("����%s�ł�\n", name);
}

GC2A::~GC2A()
{
	printf("%s�ɖ߂�܂�\n", name);
}

void GC2A::Attendance()
{
	printf("����%s�ɍݐЂ��Ă��܂�\n", name);
}
