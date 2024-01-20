#include<iostream>
#include<cstdio>
#include<algorithm>
#include<conio.h>
#include<windows.h>
using namespace std;
void Start();
void Archive(){
	system("cls");
	while(1){
		printf("Archives:\n");
		printf("1:Empty\n");
		printf("2.Empty\n");
		printf("3.Empty\n");
		if(_kbhit()){
			char _C = _getch();
			if(_C >= '1' && _C <= '3'){
				/*
				  code here
				*/
				printf("The operation was successful!");
				Sleep(1000);
				Start();
			}else{
				printf("Invalid action!");
				Sleep(1000);
			}
		}
		Sleep(100);
		system("cls");
	}
}
void Start(){
	system("cls");
	while(1){
		printf("Test");
		printf("\n1.Archives 2.___ 3.___ \n");
		if(_kbhit()){
			char _C = _getch();
			if(_C == '1'){
				Archive();
			}else if(_C == '2'){
				
			}else if(_C == '3'){
				
			}else{
				printf("Invalid action!");
				Sleep(500);
			}
		}
		Sleep(100);
		system("cls");
	}
}
int main(){
	Start();
	return 0;
}
