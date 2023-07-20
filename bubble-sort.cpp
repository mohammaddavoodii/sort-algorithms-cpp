#include <iostream>
#include <conio.h>

using namespace std;

void show(double Array[] ,int len){
	
	int i;

	for(i=0;i<len;i++){
		cout<<"\t"<<"   "<<Array[i];
	}
	cout<<endl<<"\t"<<"-------------------------------"<<endl;
}
void bubble_sort(double Array[] ,int len){
	int i,j;
	double temp;
	bool swap=false;
	for(i=0;i<len-1;i++){
		for(j=0;j<len-1;j++){
			if (Array[j] > Array[j+1]){
				temp = Array[j];
				Array[j] = Array[j+1];
				Array[j+1] = temp;
				swap = true;
			}
			
		}
		if (swap == false){
			break;
		}
	}
	cout<<endl<<endl<<"\t"<<"Sorted Array = "<<endl;
	show(Array,len);
}

void get_data(double Array[] ,int len){
	int i=0;
	
	for (i=0;i<len;i++){
		cout<<"\t"<<"Enter Number "<<i+1<<"  =  ";
		cin>>Array[i];
	}
	cout<<endl<<endl<<"\t"<<"UnSorted Array = "<<endl;

	show(Array,len);
	bubble_sort(Array,len);
}


int main(int argc, char** argv) {

	cout<<endl<<"\t"<<"Enter count of your data = ";
	int len;
	double array[len];
	cin>>len;
	get_data(array,len);

	_getch();
	return 0;
}
