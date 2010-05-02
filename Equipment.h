#pragma once
#include "Ingredients.h"
class Saucepan{
public:
	void add(Ingredient i){
		ingredients.push_back(i);
	}
	
	void heat( TempLevel t ){
		for(item in ingredients){
			item.heat(t);
		}
	}
	
	float acid(){
		return ( sum( ingredients.acid ) );
	}
	
	float fat(){
		return ( sum( ingredients.fat ) );
	}
	
	float salt(){
		return ( sum( ingredients.salt ) );
	}
	
	vector <Ingredients> ingredients;
	float size;
};