#include "VasRobot.h"
#include "Bludiste.h"
#include "Prohledavac.h"

void VasRobot::krok(Bludiste & map){
	int i= rand() % 4 + 1;
	
	if (i==1)
	map.dolu(); 
	
	if (i==2)
	map.vlevo(); 
	
	if (i==3)
	map.nahoru(); 
	
	if (i==4)
	map.vpravo();
	
}
