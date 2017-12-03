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
	cout << "********************************** ���� ��������� **********************************" << endl;
	cout << "************************************************************************************" << endl;
}


struct menu
{
	string category; //���������
	string name; //��������
	float price; //����	
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
		
	menu borsh; // ����
	
		borsh.category = "������";
		borsh.name = "����";
		borsh.price = 100;
	
	menu soup_mushrooms; // ������� ���
	
		soup_mushrooms.category = "������";
		soup_mushrooms.name = "������� ���";
		soup_mushrooms.price = 90;
	
	menu soup_chicken;
	
		soup_chicken.category = "������";
		soup_chicken.name = "������� ���";
		soup_chicken.price = 95;
	
	menu roast; // ������
	
		roast.category = "������";
		roast.name = "������";
		roast.price = 120;
	
	menu casserole; // ���������
	
		casserole.category = "������";
		casserole.name = "���������";
		casserole.price = 100;
	
	menu cutlets; // �������
	
		cutlets.category = "������";
		cutlets.name = "�������";
		cutlets.price = 90;
	
	menu apple_pie; // �������� �����
	
		apple_pie.category = "������";
		apple_pie.name = "�������� �����";
		apple_pie.price = 110;
	
	menu ice_cream; // ���������
	
		ice_cream.category = "������";
		ice_cream.name = "���������";
		ice_cream.price = 50;
	
	menu cake; // ����
	
	cake.category = "������";
	cake.name = "����";
	cake.price = 145;
	
	
	header();
		
	int operation = 8;	
	while (operation !=0)
	{
		cout << endl;
		cout << endl;
		cout << "�������� ��������: " <<endl;
		cout << endl;
		cout << "1. ������� ����" <<endl;
		cout << "2. �������� �����" << endl;
		cout << "3. ��������� ���� � ����" << endl;
		cout << "4. �����";
		cout << endl;
		cout << "��������� ��������: ";
		
		int type;
		cin >> operation;
		cout << endl;
		cout << endl;
		
		switch(operation)
		{
			case (1):
				cout << "�������� ���������: "<< endl;
				cout << "1. ������ �����" << endl;
				cout << "2. ������" << endl;
				cout << "3. ������" << endl;
				cout << "��������� ��������: ";
			
			cin >> type;
			cout << endl;
			cout << endl;
			
			if (type == 1)
			{
				cout << "���������" << "    " << "��������" << "    " << "����" << endl;
				cout << endl;
				cout << borsh.category << "       " << borsh.name << "        " << borsh.price << endl;
				cout << soup_mushrooms.category << "       " << soup_mushrooms.name << " " << soup_mushrooms.price << endl;
				cout << soup_chicken.category << "       " << soup_chicken.name << " " << soup_chicken.price << endl;
				break;
			}
			
			else if (type == 2)
			{
				cout << "���������" << "    " << "��������" << "    " << "����" << endl;
				cout << endl;
				cout << roast.category << "       " << roast.name << "      " << roast.price << endl;
				cout << casserole.category << "       " << casserole.name << "   " << casserole.price << endl;
				cout << cutlets.category << "       " << cutlets.name << "     " << cutlets.price << endl;
				break;
			}
			
			else if (type == 3)
			{
				cout << "���������" << "    " << "��������" << "        " << "����" << endl;
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
				
				cout << "������� ��� ����� (������/������/������): ";
				cin >> y1;
				cout << "������� ��������: ";
				cin >> y2;
				cout << "������� ����: ";
				cin >> y3;
				cout << endl;
				cout << "������� ������� ��������� � ����!";
				
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


