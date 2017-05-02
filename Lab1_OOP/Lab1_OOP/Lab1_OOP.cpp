// Lab1_OOP.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include "Treug.h"

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	try
	{
		int treugnumber, item, changedtreugnumber, edge, treugsim;
		double percent;
		cout << "Введите кол-во треугольников ";		
		cin >> treugnumber;	


		Treug *treug = new Treug[treugnumber];
		int i = 0;
		while (i < treugnumber)
		{
			cout << "Введите длину первой стороны " << i + 1 << " треугольника";
			cin >> treug[i].edge1;
			cout << "Введите угол 1  " << i + 1 << " треугольника";
			cin >> treug[i].angle1;
			cout << "Введите угол 2 " << i + 1 << " трегольника ";
			cin >> treug[i].angle2;
			i++;

		}
		
		cout << "Выберите треугольник (1 - " << treugnumber << ") ";
		cin >> changedtreugnumber;
		while(true)
		{
			cout << "_______________________________________________________" << endl;
			cout << "Выберите номер из списка, который соответствует тому, что вы хотите сделать с треугольником" << endl;
			cout << "1. Увеличение размера стороны" << endl;
			cout << "2. Уменьшение размера стороны" << endl;
			cout<<"3. Значение сторон"<<endl;
			cout<<"4. Длины медиан"<<endl;
			cout<< "5. Подобие"<<endl;

			cin >> item;
		
		
			switch (item)
			{
			case 1:
			{
				cout << "Введите процент на который нужно увеличить ";
				cin >> percent;
			
				cout << "Новая длина: " << treug[changedtreugnumber - 1].EdgeSizeUp(percent) << endl; break;
			}
			case 2:
			{
				cout << "Введите процент на который нужно уменьшить ";			
				cin >> percent;
			
				cout << "Новая длинаа " << treug[changedtreugnumber - 1].EdgeSizeDown( percent) << endl; break;
			}
			case 3: 
				{
				cout<< "Сторона 2:"<<treug[changedtreugnumber - 1].Edge(treug[changedtreugnumber - 1].angle2)<<endl;
				cout<< "Сторона 3:"<<treug[changedtreugnumber - 1].Edge(treug[changedtreugnumber - 1].angle1)<<endl;break;
				}
			case 4:
				{
					cout<< "Медиана к стороне 1:"<<treug[changedtreugnumber - 1].Median(treug[changedtreugnumber - 1].edge1, treug[changedtreugnumber - 1].Edge(treug[changedtreugnumber - 1].angle2), treug[changedtreugnumber - 1].Edge(treug[changedtreugnumber - 1].angle1))<<endl;
					cout<< "Медиана к стороне 2:"<<treug[changedtreugnumber - 1].Median(treug[changedtreugnumber - 1].Edge(treug[changedtreugnumber - 1].angle2),treug[changedtreugnumber - 1].edge1, treug[changedtreugnumber - 1].Edge(treug[changedtreugnumber - 1].angle1))<<endl;
					cout<< "Медиана к стороне 3:"<<treug[changedtreugnumber - 1].Median(treug[changedtreugnumber - 1].Edge(treug[changedtreugnumber - 1].angle1),treug[changedtreugnumber - 1].edge1, treug[changedtreugnumber - 1].Edge(treug[changedtreugnumber - 1].angle2))<<endl;
					break;
				}
			case 5:
				{
				cout<<"Выберите треугольник, которым хотите проверить подобие:";
				cin>>treugsim;
				cout<<"Подобны?: "<<treug[changedtreugnumber - 1].similarity(treug[treugsim-1].angle1,treug[treugsim-1].angle2)<<endl;
				break;
				}
		
			default: cout << "Такой элемент не существует" << endl; break;
			}			
		}
		delete[]treug;
	}
	catch (exception const& exp)
	{
		cout << "Исключительная ситуация" << endl;
	}
	
	system("pause");
	return 0;
}

