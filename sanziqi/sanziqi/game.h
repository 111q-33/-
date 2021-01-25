#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
void Initbroad(char broad[ROW][COL],int row,int col);
void display(char broad[ROW][COL],int row,int col);
void player(char broad[ROW][COL], int row, int col);
void computer(char broad[ROW][COL], int row, int col);
char checkwin(char broad[ROW][COL], int row, int col);