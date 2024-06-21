#include <stdio.h>
#include "GameCreator.h"
#include "GC2A.h"
#include "GC2C.h"

int main() {
	GameCreator* gameCreator[3];

	for (int i = 0; i < 2; i++) {
		if (i < 1)
			gameCreator[i] = new GC2A;
		else
			gameCreator[i] = new GC2C;
	}

	for (int i = 0; i < 2; i++) {
		gameCreator[i]->Attendance();
	}

	for (int i = 0; i < 2; i++) {
		delete gameCreator[i];
	}
		
	return 0;
}