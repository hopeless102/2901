#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std; 

#ifdef INTEGER
#define FILL_ARRAY FillArrayInt
#define SHOW_ARRAY ShowArrayInt
#define MIN_ELEMENT MinElementInt
#define MAX_ELEMENT MaxElementInt
#define SORT_ARRAY SortArrayInt
#define EDIT_ARRAY EditArrayInt

void FillArrayInt(vector<int>& arr, int size);
void ShowArrayInt(const vector<int>& arr);
int MinElementInt(const vector<int>& arr);
int MaxElementInt(const vector<int>& arr);
void SortArrayInt(vector<int>& arr);
void EditArrayInt(vector<int>& arr, int index, int value);

#elif defined CHAR
#define FILL_ARRAY FillArrayChar
#define SHOW_ARRAY ShowArrayChar
#define MIN_ELEMENT MinElementChar
#define MAX_ELEMENT MaxElementChar
#define SORT_ARRAY SortArrayChar
#define EDIT_ARRAY EditArrayChar

void FillArrayChar(vector<char>& arr, int size);
void ShowArrayChar(const vector<char>& arr);
char MinElementChar(const vector<char>& arr);
char MaxElementChar(const vector<char>& arr);
void SortArrayChar(vector<char>& arr);
void EditArrayChar(vector<char>& arr, int index, char value);

#elif defined DOUBLE
#define FILL_ARRAY FillArrayDouble
#define SHOW_ARRAY ShowArrayDouble
#define MIN_ELEMENT MinElementDouble
#define MAX_ELEMENT MaxElementDouble
#define SORT_ARRAY SortArrayDouble
#define EDIT_ARRAY EditArrayDouble

void FillArrayDouble(vector<double>& arr, int size);
void ShowArrayDouble(const vector<double>& arr);
double MinElementDouble(const vector<double>& arr);
double MaxElementDouble(const vector<double>& arr);
void SortArrayDouble(vector<double>& arr);
void EditArrayDouble(vector<double>& arr, int index, double value);

#else
#error "Please define a type (INTEGER, CHAR, or DOUBLE)"
#endif

#endif 
