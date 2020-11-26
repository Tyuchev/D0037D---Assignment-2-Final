

#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include<ios> 
using namespace std;

bool is_Sorted(int array[], int size);
string create_pal(char* word, int l);
bool is_pal(char* word, string palin, int l);
int array_rows_cols(int* p, int c, int r);
int calculate_row(int* p, int c, int t);
int calculate_column(int* p, int c, int r, int t);
int print_row(int* p, int c, int t);
void swap_sort(int* p, int asc);
void swap(int* p, int& a, int& b);
void sort_ascend(int* p);
void sort_decend(int* p);
void shrink_array(int* p, int l);
int initial(vector<string>& vec);
string insert(vector<string>& test_vector);
int search(vector<string>& vec);
int delete_item(vector<string>& vec);
int print_vector(vector<string>& vec);
int task1();
int task2();
int task3();
int task4();
int task5();
int task6();