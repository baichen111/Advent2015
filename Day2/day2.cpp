#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

void showVec(vector<vector<int>> v)
{
    for (auto &c : v)
    {
        for (auto &c1 : c)
        {
            cout << c1 << " ";
        }
        cout << endl;
    }
}

int main()
{
    // read input file to a 2D-vector
    ifstream infile("input.txt");
    string line;
    vector<vector<int>> v;

    while (infile >> line)
    {
        stringstream ss(line);
        string str;
        vector<int> v1;
        while (getline(ss, str, 'x')) // delimeter 'x
        {
            v1.push_back(stoi(str));
        }
        v.push_back(v1);
    }

    // part 1
    int count = 0;
    for (auto &l : v)
    {
        sort(l.begin(), l.end());
        count += l[0] * l[1] + 2 * (l[0] * l[1] + l[1] * l[2] + l[2] * l[0]);
    }
    cout << count << endl; // 1586300

    // part 2
    int result = 0;
    for (auto &m : v)
    {
        sort(m.begin(), m.end());
        result += 2 * (m[0] + m[1]) + m[0] * m[1] * m[2];
    }
    cout << result << endl; // 3737498
    return 0;
}