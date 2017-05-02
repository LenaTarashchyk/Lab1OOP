// Lab1_OOP.cpp: ���������� ����� ����� ��� ����������� ����������.
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
		cout << "������� ���-�� ������������� ";		
		cin >> treugnumber;	


		Treug *treug = new Treug[treugnumber];
		int i = 0;
		while (i < treugnumber)
		{
			cout << "������� ����� ������ ������� " << i + 1 << " ������������";
			cin >> treug[i].edge1;
			cout << "������� ���� 1  " << i + 1 << " ������������";
			cin >> treug[i].angle1;
			cout << "������� ���� 2 " << i + 1 << " ����������� ";
			cin >> treug[i].angle2;
			i++;

		}
		
		cout << "�������� ����������� (1 - " << treugnumber << ") ";
		cin >> changedtreugnumber;
		while(true)
		{
			cout << "_______________________________________________________" << endl;
			cout << "�������� ����� �� ������, ������� ������������� ����, ��� �� ������ ������� � �������������" << endl;
			cout << "1. ���������� ������� �������" << endl;
			cout << "2. ���������� ������� �������" << endl;
			cout<<"3. �������� ������"<<endl;
			cout<<"4. ����� ������"<<endl;
			cout<< "5. �������"<<endl;

			cin >> item;
		
		
			switch (item)
			{
			case 1:
			{
				cout << "������� ������� �� ������� ����� ��������� ";
				cin >> percent;
			
				cout << "����� �����: " << treug[changedtreugnumber - 1].EdgeSizeUp(percent) << endl; break;
			}
			case 2:
			{
				cout << "������� ������� �� ������� ����� ��������� ";			
				cin >> percent;
			
				cout << "����� ������ " << treug[changedtreugnumber - 1].EdgeSizeDown( percent) << endl; break;
			}
			case 3: 
				{
				cout<< "������� 2:"<<treug[changedtreugnumber - 1].Edge(treug[changedtreugnumber - 1].angle2)<<endl;
				cout<< "������� 3:"<<treug[changedtreugnumber - 1].Edge(treug[changedtreugnumber - 1].angle1)<<endl;break;
				}
			case 4:
				{
					cout<< "������� � ������� 1:"<<treug[changedtreugnumber - 1].Median(treug[changedtreugnumber - 1].edge1, treug[changedtreugnumber - 1].Edge(treug[changedtreugnumber - 1].angle2), treug[changedtreugnumber - 1].Edge(treug[changedtreugnumber - 1].angle1))<<endl;
					cout<< "������� � ������� 2:"<<treug[changedtreugnumber - 1].Median(treug[changedtreugnumber - 1].Edge(treug[changedtreugnumber - 1].angle2),treug[changedtreugnumber - 1].edge1, treug[changedtreugnumber - 1].Edge(treug[changedtreugnumber - 1].angle1))<<endl;
					cout<< "������� � ������� 3:"<<treug[changedtreugnumber - 1].Median(treug[changedtreugnumber - 1].Edge(treug[changedtreugnumber - 1].angle1),treug[changedtreugnumber - 1].edge1, treug[changedtreugnumber - 1].Edge(treug[changedtreugnumber - 1].angle2))<<endl;
					break;
				}
			case 5:
				{
				cout<<"�������� �����������, ������� ������ ��������� �������:";
				cin>>treugsim;
				cout<<"�������?: "<<treug[changedtreugnumber - 1].similarity(treug[treugsim-1].angle1,treug[treugsim-1].angle2)<<endl;
				break;
				}
		
			default: cout << "����� ������� �� ����������" << endl; break;
			}			
		}
		delete[]treug;
	}
	catch (exception const& exp)
	{
		cout << "�������������� ��������" << endl;
	}
	
	system("pause");
	return 0;
}

