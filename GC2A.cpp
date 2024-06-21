#include "GC2A.h"
#include <stdio.h>

GC2A::GC2A()
{
	name = "GC2A";
	printf("„‚Í%s‚Å‚·\n", name);
}

GC2A::~GC2A()
{
	printf("%s‚É–ß‚è‚Ü‚·\n", name);
}

void GC2A::Attendance()
{
	printf("„‚Í%s‚ÉİĞ‚µ‚Ä‚¢‚Ü‚·\n", name);
}
