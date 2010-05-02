#pragma once

#define EggCount 3
#define ButterAmt 170

#include "Emulsion.h"
#include "Shallot.h"
#include "Seasonings.h"
#include "Techniques.h"
#include "BasicIngredients.h"
#include "Equipment.h"

class Bearnaise : public Emulsion{
	
	void prep(){
		Techniques::mince(shallot, 0.25 inches);
		Techniques::mince(tarragon, 0.25 inches);
		eggs.separate(yolks = true, whites = false);
		Techniques::whisk(eggs);
		butter.brown(ButterAmt);
		pan.size = 8.0;
		boiler.prep();
	}
	
	void make(){
		// add whisked egg holks 
		boiler.add( eggs, Seasonings::sugar( 1.0 ), createShallotSauce( ) ) ;
		boiler.heat( LOW_MED );
		this->fat = butter.warm( );
		this->acid = boiler.getContents( );
		emulsify( HAND, SLOW );
		// add small amount of lemon juice depending on acidity of vinegar
		boiler.add( Seasonings::LemonJuice );
		boiler.add( Seasonings::Tarragon, Seasonings::Chervil );
	}
	
	void createShallotSauce(){
		pan.add( BasicIngredients::RedWineVinegar );
		pan.heat( MEDIUM_HI );
		pan.add( BasicIngredients::blackPepper( course, 2.0 ), shallot, tarragon );
		// saute shallots until soft
		pan.saute( ); 
		pan.setHeat( MEDIUM );
		// reduce until pan is almost dry for rich sauce
		pan.reduce( 0.9 );
		pan.heat( REMOVE );
	}
	
	void helpVideo( ){
		infoMovie = "HollandaiseInstructionVideo.mov";
		infoMovie.display();
	}
	
	void displayPhotos(){
		steps.display( );
	}

 	BasicIngredients::Egg eggs[EggCount];
	BasicIngredients::Butter butter;
	Equipment::DoubleBoiler boiler;
	Equipment::Saucepan	pan;	
	Shallot shallot;
	Seasonings::Tarragon tarragon;
};