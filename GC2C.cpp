#include "GC2C.h"
#include <stdio.h>

GC2C::GC2C()
{
	name = "GC2C";
	printf("–l‚à%s‚Å‚·\n", name);
}

GC2C::~GC2C()
{
	printf("–l‚à%s‚É–ß‚è‚Ü‚·\n", name);
}

void GC2C::Attendance()
{
	printf("–l‚Í%s‚ÉİĞ‚µ‚Ä‚¢‚Ü‚·\n", name);
}
