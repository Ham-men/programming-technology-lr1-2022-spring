#include <iostream>
#include "queue3.h"
#include <math.h>
using namespace std;
int main() {
	Queue_3 Myqueue; // create queue
	Queue* copyMyqueue1 = Myqueue.copy();
	Queue* copyMyqueue;
	Queue* copyMyqueue_1;
	int value='s';
	setlocale(LC_ALL, "Russian");
	system("cls");
	int n = 1;
	cout << " 1: добавить число\n 2: удалить первое число\n 3: вывести 2 очереди\n 4: Подсчет числа четных элементов, больших среднего арифметического\n 5: создать копию\n 6: слияние\n 7: выход" << endl;
	while (n != 0) {
		cout << "\nномер операции = ";
		cin >> n;
		switch (n) {
		case 1:
			// add value in queue
			cout << "\nвведите число: ";
			cin >> value;
			Myqueue.insert(value);
			break;
		case 2:
			// delete value in queue
			cout << "\nпервое число удалено. Теперь очередь выглядит так:";
			Myqueue.remove();
			Myqueue.printQueue();
			break;
		case 3:
			// print queue
			cout << "\nвывод очереди = ";
			Myqueue.printQueue();
			cout << "\nвывод копии очереди = ";
			copyMyqueue1->printQueue();
			break;
		case 4:
			// count
			cout << "\n№4 результат = ";
			Myqueue.math_operation();
			break;
		case 5:
			cout << "\nкопия создана";
			copyMyqueue1 = Myqueue.copy();
			break;
		case 6:
			cout << "\nслияние = ";
			 copyMyqueue = Myqueue.copy();
			 copyMyqueue_1 = Myqueue.copy();
			Myqueue.merge(copyMyqueue, copyMyqueue_1);
			break;
		case 7:
			//close program
			cout << "\nвыход ";
			return 0;
			break;
		default: break;
		}
	}
		
	return 0;
}