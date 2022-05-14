#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
void showVector(const vector<T> v)
{
    for (auto &value : v)
    {
        cout << value << endl;
    }
}

int main()
{
    ifstream infile;
    infile.open("input1.txt");
    vector<char> v;
    char c;
    while (infile >> c)
    {
        v.push_back(c);
    }
    // part 1
    int count = 0;
    for (auto &c : v)
    {
        if (c == '(')
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    cout << count << endl; // part1: 74

    // part 2
    int countbase = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (countbase < 0)
        {
            cout << i << endl; // part 2: 1795
            break;
        }
        else
        {
            if (v.at(i) == '(')
            {
                countbase++;
            }
            else
            {
                countbase--;
            }
        }
    }

    return 0;
}