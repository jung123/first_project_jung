#include <iostream>
using namespace std;

int first_func(int, int);
int second_func(char, char);

int main(){
	printf("default !! \n");
	return 0;
}

int first_func(int, int){
	int wnd = 10;
	printf(" master !!\n");
	printf("version 2.0 !! \n");
	return 0;
}
int second_func(char, char){
	int wnd = 110;
	printf("test version 1.0 !!\n");
	printf("test version 2.0 !! \n");
	return 0;
}
