#include <iostream>
#include <string.h>
#include <conio.h>
#include <fstream>
#include <cstring>
#include <locale>

using namespace std;

void header()
{
	cout << "************************************************************************************" << endl;
	cout << "********************************** Меню Ресторана **********************************" << endl;
	cout << "************************************************************************************" << endl;
}


struct menu
{
	string category; //категория
	string name; //название
	float price; //цена	
};

int MenuOut(ofstream &out, menu st2file)
{	
	out << st2file.category << "  " << st2file.name << "  " << st2file.price << endl;
	 
	 return 0;
}

menu MenuIn(ifstream &in)
{
	menu stFromFile;
	
	in >> stFromFile.category >> stFromFile.name >> stFromFile.price;
	
	return stFromFile;
}


// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
int main(int argc, char* argv[])
{

	setlocale (LC_ALL, "rus");
		
		ofstream fsOut;
		fsOut.open("Struct.txt");
		
	menu borsh; // БОРЩ
	
		borsh.category = "первое";
		borsh.name = "борщ";
		borsh.price = 100;
	
	menu soup_mushrooms; // ГРИБНОЙ СУП
	
		soup_mushrooms.category = "первое";
		soup_mushrooms.name = "грибной суп";
		soup_mushrooms.price = 90;
	
	menu soup_chicken;
	
		soup_chicken.category = "первое";
		soup_chicken.name = "куриный суп";
		soup_chicken.price = 95;
	
	menu roast; // ЖАРКОЕ
	
		roast.category = "второе";
		roast.name = "жаркое";
		roast.price = 120;
	
	menu casserole; // ЗАПЕКАНКА
	
		casserole.category = "второе";
		casserole.name = "запеканка";
		casserole.price = 100;
	
	menu cutlets; // КОТЛЕТЫ
	
		cutlets.category = "второе";
		cutlets.name = "котлеты";
		cutlets.price = 90;
	
	menu apple_pie; // ЯБЛОЧНЫЙ ПИРОГ
	
		apple_pie.category = "десерт";
		apple_pie.name = "яблочный пирог";
		apple_pie.price = 110;
	
	menu ice_cream; // МОРОЖЕНОЕ
	
		ice_cream.category = "десерт";
		ice_cream.name = "мороженое";
		ice_cream.price = 50;
	
	menu cake; // ТОРТ
	
	cake.category = "десерт";
	cake.name = "торт";
	cake.price = 145;
	
	
	header();
		
	int operation = 8;	
	while (operation !=0)
	{
		cout << endl;
		cout << endl;
		cout << "Выберите действие: " <<endl;
		cout << endl;
		cout << "1. Открыть меню" <<endl;
		cout << "2. Добавить блюдо" << endl;
		cout << "3. Сохранить меню в файл" << endl;
		cout << "4. Выход";
		cout << endl;
		cout << "Выбранное действие: ";
		
		int type;
		cin >> operation;
		cout << endl;
		cout << endl;
		
		switch(operation)
		{
			case (1):
				cout << "Выберите категорию: "<< endl;
				cout << "1. Первые блюда" << endl;
				cout << "2. Второе" << endl;
				cout << "3. Десерт" << endl;
				cout << "Выбранное действие: ";
			
			cin >> type;
			cout << endl;
			cout << endl;
			
			if (type == 1)
			{
				cout << "Категория" << "    " << "Название" << "    " << "Цена" << endl;
				cout << endl;
				cout << borsh.category << "       " << borsh.name << "        " << borsh.price << endl;
				cout << soup_mushrooms.category << "       " << soup_mushrooms.name << " " << soup_mushrooms.price << endl;
				cout << soup_chicken.category << "       " << soup_chicken.name << " " << soup_chicken.price << endl;
				break;
			}
			
			else if (type == 2)
			{
				cout << "Категория" << "    " << "Название" << "    " << "Цена" << endl;
				cout << endl;
				cout << roast.category << "       " << roast.name << "      " << roast.price << endl;
				cout << casserole.category << "       " << casserole.name << "   " << casserole.price << endl;
				cout << cutlets.category << "       " << cutlets.name << "     " << cutlets.price << endl;
				break;
			}
			
			else if (type == 3)
			{
				cout << "Категория" << "    " << "Название" << "        " << "Цена" << endl;
				cout << endl;
				cout << apple_pie.category << "       " << apple_pie.name << "  " << apple_pie.price << endl;
				cout << ice_cream.category << "       " << ice_cream.name << "       " << ice_cream.price << endl;
				break;
			}
			
			case (3):
			{
				MenuOut(fsOut,borsh);
				MenuOut(fsOut,soup_mushrooms);
				MenuOut(fsOut,soup_chicken);
				MenuOut(fsOut,roast);
				MenuOut(fsOut,casserole);
				MenuOut(fsOut,cutlets);
				MenuOut(fsOut,apple_pie);
				MenuOut(fsOut,ice_cream);
			}
			
			case (2):
			{				
				menu x;
				
				string y1;
				string y2;
				string y3;
				
				cout << "Введите тип блюда (первое/второе/десерт): ";
				cin >> y1;
				cout << "Введите название: ";
				cin >> y2;
				cout << "Укажите цену: ";
				cin >> y3;
				cout << endl;
				cout << "Позиция успешно добавлена в файл!";
				
				x.category = y1;
				x.name = y2;
				x.price;
				
				
				MenuOut(fsOut, x);
				break;
			}
				
			case (4):
			{
				operation = 0;	
			}
					
				
		}
		
	}
	
	return 0;
}


