#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
   /* 
    string str;
    cout << "Введите строку:";
    cin >> str;
    reverse(str.begin(), str.end());
    cout << "\n" << str << endl;
    */

    /*
    string line;
    int count = 0;
    char searchKey;
    cout << "Введите строку: ";
    getline(cin, line);
    cout << "Введите символ:";
    cin >> searchKey;
    for (unsigned int i = 0; i < line.length(); i++)
        if (line[i] == searchKey)
            count++;
    cout << "Строка имеет " << count << " символов "  << searchKey << endl;
    */


    /*
    char arr[] = "";
    cout << "Введите строку:";
    cin >> arr;
    cout << "Изначальная строка:\n" << arr << endl;
    cout << "Строка в верхнем регистре:\n";
    for (int x = 0; x < strlen(arr); x++)
        putchar(toupper(arr[x]));

    return 0;
     */


    string line;
    char searchKey;
    cout << "Введите строку: ";
    getline(cin, line);
    for (unsigned int i = 0; i < line.length(); i++)
        if (((line[i] == '.') || (line[i] == '!') || (line[i] == '?')))
            line.replace(i + 1, 1, "\n");


    cout << line;

}