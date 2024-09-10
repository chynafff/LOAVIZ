
#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <string>
#include <locale.h>
#include "stdio.h"
#include <conio.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int massive[20] = { 0 }, min =	100, max = 0;//nomer 1
    for (int i = 0; i < 20; i++)
    {
        massive[i] += i - 10;
        if (massive[i] > max) max = massive[i];
        if (massive[i] < min) min = massive[i];
    }
    cout << max - min << endl;
    cout << "\n";//nomer 2
    srand(time(NULL));
    int array[20] = { 0 };
    for (int i = 0; i < 20; i++)
    {
        array[i] = rand() % 100;
        cout << array[i] <<" ";
    }
    cout << "\n";//nomer 3
    int* p;
    int size;
    cin >> size;
    p = (int*)malloc(size*sizeof(int)); //videlenie pamyat
    for (int i = 0; i < size; i++)
    {
        *(p + i) = rand() % 100-50;
		cout << "\n";
        cout << *(p + i) << endl;
    }
    cout << "\n";//nomer 4
    int matrix[10][10] = { 0 }, sum=0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            matrix[i][j] = rand() % 100;
            sum += matrix[i][j];
            cout << matrix[i][j]<<"\t";
        }
        cout << "=" << sum << " \n";
        sum = 0;
    }
    cout << "\n";//nomer 5
    setlocale(LC_ALL, "Rus");
    struct students
    {
        char Name[20];
        char Surname[20];
        char Faculty[20];
        int NomZach;
    }stud[2];
    for (int i = 0; i < 2; i++)
    {
        cout<<"¬ведите им€ студента"<<"\n";
        cin >> stud[i].Name;
        cout<<"¬ведите фамилию студента" << endl;
        cin >> stud[i].Surname;
        cout << "¬ведите факультет студента" << endl;
        cin >> stud[i].Faculty;
        cout << "¬ведите номер зачетки студента" << endl;
        cin >> stud[i].NomZach;
    }
    char name[20];
    char surname[20];
    char faculty[20];
    int nomzach = 0;
    cout << "¬ведите им€ студента дл€ поиска" << "\n";
    cin >> name;
    cout << "¬ведите фамилию студента дл€ поиска" << "\n";
    cin >> surname;
    cout << "¬ведите факультет студента дл€ поиска" << "\n";
    cin >> faculty;
    cout << "¬ведите номер зачетки студента дл€ поиска" << "\n"; 
    cin >> nomzach;
    for (int i = 0; i < 2; i++)
    {
        if(strcmp (name, stud[i].Name)==0)
            if (strcmp(surname, stud[i].Surname) == 0)
                if (strcmp(faculty, stud[i].Faculty) == 0)
                    if (nomzach == stud[i].NomZach)
                    {
                        cout << "Ќайденный студент был занесен " << i + 1;
                    }
    }
	int*s = (int*)malloc(size*sizeof(int));
    int size1;
	cin >> size1;
    for (int i = 0; i < size1; i++)
    {
			s[i]=rand() % 100;
			cout << *(s + i) << endl;
			}
    cout << "\n";
	getch();

}