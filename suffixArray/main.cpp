// David Hinojosa A01720601
// Sofia Sampogna A01721245

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::sort;
using std::getline;


// Gets all suffixes of a string in an array and return array sorted alphabetically 
vector<int> calculateSuffixArray(string s)
{
    // Declare string length, array with suffixes, and array with indexes
    int n = s.length();
    vector<string> suffixes;
    vector<int> suffixIndexes(n);

    // Get all string suffixes into array and sort
    for (int i = 0; i < n; i++)
    {
        suffixes.push_back(s.substr(n - i - 1, i + 1));
    }
    sort(suffixes.begin(), suffixes.end());

    // Calculate index order
    for (int i = 0; i < n; i++)
    {
        suffixIndexes[i] = n - suffixes[i].size() + 1;
    }

    return suffixIndexes;
}

// Print an int vector function
void printVector(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << "\n";
    }
    cout << "\n";
}


int main()
{
    vector<int> suffixArray;
    vector<string> texts{"banana", "TEC Monterrey", "apple", "turtle", "algorithms"};
    for (int i = 0; i < texts.size(); i++)
    {
        cout << "Word: " << texts[i] << "\n";
        suffixArray = calculateSuffixArray(texts[i]);
        printVector(suffixArray);
    }
}