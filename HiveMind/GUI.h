#pragma once
#include "dependencies.h"
#include "Account.h"
#include "Worker.h"
#include "Drone.h"
#include "Hive.h"
#include "DynamicTextbutton.h"
#include "StaticTextbutton.h"
#include "ActionButton.h"

class GUI
{
public:
	GUI()
	{
		LoadFont();
		Logo();
	}
private:
	//logo sol üste
	sf::Font font;
	sf::Sprite logoSprite;

	void LoadFont();

	void Logo();
	void InfoBar();
	void Render();
	//yana info update barlarý
	
	//sað üste tarih
	//ortaya market butonlarý
		//ürünler //al-sat //ne iþe yarar
		//hive1	  //al     //arýlarýnýzý beslemek için bir kovana ihtiyacýnýz var!
		//honey	  //sat	   //arýlarýnýzýn ürettiði balý satarak para kazanýn!
		//bee	
		//kovan limit artýrýcý
		//arý boostlayýcý
};

