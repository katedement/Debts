#include <iostream>

template <typename T>
void bubble_sort(T arr[], int l) {
    int temp; //ввели временную переменную
    for (int i = 0; i < l - 1; i++) {
        for (int j = l - 1; j > i; j--) //проход с конца, минимальный элемент переносим в начало массива, пока не щакончатся
            if (arr[j] < arr[j - 1]) {
                T temp = arr[j]; //записали во временную переменную правый (меньший) жлемент
                arr[j] = arr[j - 1]; //переместили левый (больший) элемент вправо
                arr[j - 1] = temp; //переместили влево меньший элемент
            }
    }
}

template <typename T>
void insertion_sort(T arr[], int l) {
    int i, j, key;
    for (i = 1; i < l; i++){
        key = arr[i]; //выбираем первый неотсортированный элемент
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1; //передвигаем все элементф вправо чтобы впихнуть неотсортированный элемент
        }
        arr[j + 1] = key; //вставляем неотсортированный элемент на правильное место
    }
}


template <typename T>
void selection_sort(T arr[], int l) {
    int i, j, min_position;
    for (i = 0; i < l - 1; i++) { //длина - 1 т к на последний уже не будем смотреть
        min_position = i; //считаем что самый первый элемент имеет наименьшее значение
        for (j = i + 1; j < l; j++) { //будем проверять элементы после первого
            if (arr[j] < arr[min_position]) {
                min_position = j; //нашли элемент, который меньше первого и записали его положение
            }
        }
        if (min_position != i) {
            int temp = arr[i];
            arr[i] = arr[min_position];
            arr[min_position] = temp; //поменяли местами значения
        }
            
    }
}

template <typename T>
void print_arr(T arr[], int l) {
    for (int i = 0; i < l; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


int main()
{
    //bubble
    int arr1[] = { 8, 6, 4, 2, 5, 9, 1 };
    int length1 = sizeof(arr1) / sizeof(arr1[0]);
    bubble_sort(arr1, length1);
    std::cout << "bubble sort" << std::endl;
    print_arr(arr1, length1);

    //insertion
    int arr2[] = { 34, 6, 4, 8, 2, 9, 57 };
    int length2 = sizeof(arr2) / sizeof(arr2[0]);
    insertion_sort(arr2, length2);
    std::cout << "insertion sort" << std::endl;
    print_arr(arr2, length2);

    //selection
    int arr3[] = { 5, 3, 7, 9, 44, 1 };
    int length3 = sizeof(arr3) / sizeof(arr3[0]);
    selection_sort(arr3, length3);
    std::cout << "selection array" << std::endl;
    print_arr(arr3, length3);

    return 0;
}
