// array of chreters opration

#include <iostream>
#include <cstring>
using namespace std;

void create_ch_arr(int size, char *arr)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << "enter chareter :: ";
        cin >> arr[i];
    }
}

void display(int size, char *arr)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << "\n"
             << arr[i];
    }
}

// length chareter arr manualy
int char_arr_len(char *arr)
{
    int i = 1;
    while (arr[i] != '\0')
    {

        i++;
    }
    return i;
}

// reverce the chareter array
void rev_array(int size, char *arr)
{
    int i, first, last;
    char temp;
    first = 0;
    last = size - 1;
    while (first < last)
    {
        temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        first++;
        last--;
    }
}

// lower case to uper case chareter
void LowToUp(int size, char *arr)
{
    int i;
    for (i = 0; i <= size; i++)
    {
        if (arr[i] >= 97 && arr[i] <= 122)
        {
            arr[i] = arr[i] - 32;
        }
    }
}

// uper csae to lower case chareter
void UpToLow(int size, char *arr)
{
    int i;
    for (i = 0; i <= size; i++)
    {
        if (arr[i] >= 65 && arr[i] <= 97)
        {
            arr[i] = arr[i] + 32;
        }
    }
}

int main()
{
    int size;
    cout << "enter the size of chareter array" << endl;
    cin >> size;
    char *arr = new char[size];
    create_ch_arr(size, arr);
    display(size, arr);
    cout << "value of len ::" << char_arr_len(arr);

}