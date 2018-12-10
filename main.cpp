#include <iostream>
#include <ctime>
using namespace std;

int main() {
//    srand((time(0)));
    const int N = 10;
    int array1[N];
//    cout << "\nСортировка вставками\n\n" << "Массив: ";
//    for (int i = 0; i < N; i++) {
//        array1[i] = rand() % 100;
//        cout << array1[i] << " ";
//    }
//
//    cout << endl;
//
//    int current; //текущий элемент
//    int previos; //предидущий элемент
//    for (int counter = 1; counter < N; counter++){
//        current = array1[counter]; //задаем переменной текущее значение массива
//        previos = counter - 1; //запоминаем индекс предидущего элемента массива
//        while(previos >= 0 && array1[previos] > current){ //пока индекс пред. != 0 и пред. элемент больше текущ.
//            array1[previos + 1] = array[previos]; //перестановка элементов массива
//            array1[previos] = current;
//            previos--;
//        }
//    }
//    cout << "Отсортированный массив: ";
//    for (int i = 0; i < N; i++)
//        cout << array1[i] << " ";
    cout << "\n\nБыстрая сортировка\n\n" << "Массив: ";
    int array2[N];
    for (int i = 0; i < N; i++) {
        array2[i] = rand() % 100;
        cout << array2[i] << " ";
    }
    int i = 0;
    int j = N - 1;
    int swap;
    int mid = (i + j) / 2;
    while (i <= j) {
        while (array2[i] < mid)
            i++;
        while (array2[j] > mid)
            j++;
        if(i <= j){
            swap = array2[i];
            array2[i] = array2[j];
            array2[j] = swap;
            i++;
            j++;
            cout << array2[i] << endl << array2[j] << endl;
        }
    }
    return 0;
}