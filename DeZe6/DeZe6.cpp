#include <Windows.h>
#include <iostream>
#include <random>
void Ex1();
void Ex2();
void Ex3();
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int choose;
    std::cout << "Выберите номер задания, которое хотите проверить\n";
    std::cin >> choose;
    if (choose == 1)
    {
        Ex1();
    }
    else if (choose == 2)
    {
        Ex2();
    }
    else if (choose == 3)
    {
        Ex3();
    }
    return 0;
}
void Ex1()
{
    const int size = 10;
    int arr[size];
    int max = 0, min = 0;
    for (int i = 0; i < size; i++)
    {
        arr[i] = 1 + rand() % 100;
        if (i == 0)
        {
            max = arr[i];
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\n";
    }
    std::cout << "\n-----------------------------------------\n";
    std::cout << max << "\n";
    std::cout << min << "\n";
    
}
void Ex2()
{
    int start = 0, end = 0, num = 0, sum = 0;
    const int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = 1 + rand() % 100;
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\n";
    }
    std::cout << "Введите начало диапазона\n";
    std::cin >> start;
    std::cout << "Введите начало диапазона\n";
    std::cin >> end;
    std::cout << "Введите число\n";
    std::cin >> num;
    for (int i = start-1; i < end; i++)
    {
        int n = arr[i];
        if (n < num)
        {
            sum = sum + arr[i];
        }
    }
    std::cout << "Сумма: " << sum << "\n";
}
void Ex3()
{
    int start = 0, end = 0, max = 0, min = 0;
    const int size = 12;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "Введите прибыль за " << i + 1 << " месяц\n";
        std::cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\n";
    }
    std::cout << "Введите начало диапазона\n";
    std::cin >> start;
    std::cout << "Введите начало диапазона\n";
    std::cin >> end;
    for (int i = start - 1; i < end; i++)
    {
        if (i == 0)
        {
            max = arr[i];
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    std::cout << "Максимальный доход: " << max << "\n";
    std::cout << "Минимальный доход: " << min << "\n";
}