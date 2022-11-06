#include <iostream>
#include <vector>
using  namespace std;

int find_days(int year, int month){
	int day = 0;
	vector<int> shorter_months = {4, 6, 9, 11};
	
	if (month == 2){
		day = 28;		
		if (year % 400 == 0){
			day = 29;
			if (year % 4 == 0 && year % 100 != 0){
				day = 29;
			}	
		}
	}	
	else{
		for (int x =0; x < 4; ++x){
			if (month == shorter_months[x]){
				day = 30;
				break;
			}		
		day = 31;
		}
	}
	return day;
}


int main(){
	vector<string> month_names= {"January","Feburary","March","April","May","June","July","August","September","October","November","December"};
	int values[2] = {0,0};
	cout << "Year and month: ";
	for (int x =0;x<2;++x){
		cin >> values[x];
	}
	cout << endl << "In the year "<< values[0] << ", " << month_names[values[1]-1] << " is " << find_days(values[0], values[1]) << " days long."<< endl;

}

