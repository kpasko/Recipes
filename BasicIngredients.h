#pragma once

class Egg{
public:
	separate(bool yolks, bool whites){
		//keep whites as a function allows us to show other optional uses for parts if not used in this recipe, etc
		if (yolks) keepYolks();
		if (whites) keepWhites();
	}
	
	acidity = 0.0;
	fat = 1.4;
	pepper = 0.0;
	salt = 0.2;
};

class RedWineVinegar{
public:
	acidity = 4.0;
	fat = 0.0;
	pepper = 0.5;
	salt = 0.2;
};

class OliveOil{
public:
	acidity = 0.0;
	fat = 4.0;
	pepper = 0.1;
	salt = 0.2;
};

class BasicIngredients{
};