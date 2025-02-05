#include <iostream>
#include <vector>
#include "function.h"
#include <locale> 

using namespace std;

#define INTEGER

int main() {
    
    setlocale(LC_ALL, "ru"); 

    vector<int> intArray;
    int size = 10;

    FILL_ARRAY(intArray, size);
    cout << "Массив: ";
    SHOW_ARRAY(intArray);
    cout << "Минимальный элемент: " << MIN_ELEMENT(intArray) << endl;
    cout << "Максимальный элемент: " << MAX_ELEMENT(intArray) << endl;

    SORT_ARRAY(intArray);
    cout << "Отсортированный массив: ";
    SHOW_ARRAY(intArray);

    EDIT_ARRAY(intArray, 0, 999);
    cout << "Отредактированный массив: ";
    SHOW_ARRAY(intArray);


#undef INTEGER
#define CHAR
    vector<char> charArray;
    size = 10;


    FILL_ARRAY(charArray, size);
    cout << "Массив: ";
    SHOW_ARRAY(charArray);
    cout << "Минимальный элемент: " << MIN_ELEMENT(charArray) << endl;
    cout << "Максимальный элемент: " << MAX_ELEMENT(charArray) << endl;

    SORT_ARRAY(charArray);
    cout << "Отсортированный массив: ";
    SHOW_ARRAY(charArray);

    EDIT_ARRAY(charArray, 0, 'Z');
    cout << "Отредактированный массив: ";
    SHOW_ARRAY(charArray);


#undef CHAR
#define DOUBLE

    vector<double> doubleArray;
    size = 10;
    FILL_ARRAY(doubleArray, size);
    cout << "Массив: ";
    SHOW_ARRAY(doubleArray);
    cout << "Минимальный элемент: " << MIN_ELEMENT(doubleArray) << endl;
    cout << "Максимальный элемент: " << MAX_ELEMENT(doubleArray) << endl;

    SORT_ARRAY(doubleArray);
    cout << "Отсортированный массив: ";
    SHOW_ARRAY(doubleArray);

    EDIT_ARRAY(doubleArray, 0, 123.456);
    cout << "Отредактированный массив: ";
    SHOW_ARRAY(doubleArray);

    return 0;
}
