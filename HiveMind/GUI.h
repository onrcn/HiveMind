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
	//logo sol �ste
	sf::Font font;
	sf::Sprite logoSprite;

	void LoadFont();

	void Logo();
	void InfoBar();
	void Render();
	//yana info update barlar�
	
	//sa� �ste tarih
	//ortaya market butonlar�
		//�r�nler //al-sat //ne i�e yarar
		//hive1	  //al     //ar�lar�n�z� beslemek i�in bir kovana ihtiyac�n�z var!
		//honey	  //sat	   //ar�lar�n�z�n �retti�i bal� satarak para kazan�n!
		//bee	
		//kovan limit art�r�c�
		//ar� boostlay�c�
};

