#pragma once

#include "Fat.h"
#include "Acid.h"
#include "Techiniques.h"

class Emulsion : public BasicRecipe{
public:
	emulsify( method meth, speed spd){
		while( "acid and fat are separate"){
			if( meth == BY_HAND){
				Techniques::whisk(acid, fat, spd);
			}else{
				Techniques::blend(acid, fat, meth);
			}
		}
	}
	
	void showDocumentation( ){
		BaseGastronomy.add("emulsionGastronomy.txt");
		BaseGastronomy.add(Fat::documentationFile);
		BaseGastronomy.add(Acid::documentationFile);
		BaseGastronomy.display();
	}
	
	Fat fat;
	Acid acid;
};