
#include <iostream>
#include "utilities.h"
#include <cmath>

using namespace std;
void print_grades (int grades[], int size);
//void show_grades(int data[], int num_values);

int main(int argc, char * argv[]) {
    int grades[15] = { 55, 87, 93, 77, 92, 88, 67, 81, 84, 73, 81, 92, 89, 100, 62 };
    int size=sizeof(grades)/sizeof(grades[0]);
//    show_grades(grades, 15);
print_grades(grades, size);
}



//void show_grades(int data[], int num_values) {
//    for(int i=0 i<num_values;i++)
//        cout << data[i] << endl;
//    }
//}

void print_grades (int grades[],int size) {

	
	int zmin=grades[0];
	int zmax=grades[0];
	char letter_g[size];
	int i=0;
	while (i < size) {
		if (i>0) {
			zmin=min(zmin,grades[i]);
			zmax=max(zmax,grades[i]);
		}	

		if (grades[i]>89) {
			letter_g[i]='A';
		}	
			else if (grades[i] >79) {
				letter_g[i]='B';	
			}
				else if (grades[i] > 69) {
			       		letter_g[i]='C';	
				}
					else if (grades[i] > 59) {
						letter_g[i]='D';
					}
						else letter_g[i]='F';
		i++;
					
	}
cout<< "The highest grade is: \n";
cout<< zmax;

cout<< "\nThe lowest grade is: \n";
cout<< zmin;

cout<< "\nThe letter grades are: \n";
cout<< letter_g;

}


