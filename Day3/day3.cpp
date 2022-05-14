#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <fstream>

using namespace std;

void showSet(set<vector<int>> s)
{
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        for (auto &v : *it)
        {
            cout << v << " ";
        }
        cout << endl;
    }
}

int main()
{
    // read input txt file
    ifstream infile("input.txt");
    string str;
    infile >> str;

    //  part1
    set<vector<int>> s;
    s.insert({0, 0});
    int x = 0, y = 0;
    for (auto &c : str)
    {

        if (c == '^')
        {
            y += 1;
        }
        else if (c == 'v')
        {
            y -= 1;
        }
        else if (c == '<')
        {
            x -= 1;
        }
        else
        {
            x += 1;
        }
        s.insert({x, y});
    }
    cout << s.size() << endl; // part1:2081

    // part2
    set<vector<int>> s1, s2;
    string str1, str2;
    for (int i = 0; i < str.size(); i += 2)
    {
        str1.push_back(str[i]);
    }
    for (int i = 1; i < str.size(); i += 2)
    {
        str2.push_back(str[i]);
    }
    // for 1
    s1.insert({0, 0});
    int x1 = 0, y1 = 0;
    for (auto &c : str1)
    {

        if (c == '^')
        {
            y1 += 1;
        }
        else if (c == 'v')
        {
            y1 -= 1;
        }
        else if (c == '<')
        {
            x1 -= 1;
        }
        else
        {
            x1 += 1;
        }
        s1.insert({x1, y1});
    }
    // for 2
    s2.insert({0, 0});
    int x2 = 0, y2 = 0;
    for (auto &c : str2)
    {

        if (c == '^')
        {
            y2 += 1;
        }
        else if (c == 'v')
        {
            y2 -= 1;
        }
        else if (c == '<')
        {
            x2 -= 1;
        }
        else
        {
            x2 += 1;
        }
        s2.insert({x2, y2});
    }

    s1.insert(s2.begin(), s2.end());
    cout << "new size:" << s1.size() << endl; // part2: 2341

    return 0;
}