#pragma once

#include "Ingredient.h"
#inclue "Equipment.h"

class Techniques{
public:
	mince(Ingredient i, size sz){
		cutHorizontal( sz );
		cutWidth( sz );
		cutHeight( sz );
		if (mode == INSTRUCTIONAL){
			displayMinceImages();
		}
	}
	
	whisk(Ingredient i){
		while(Ingredient.separate){
			Equipment::whisk.use();
		}		
	}
	
	Mode mode;
};