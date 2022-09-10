#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::string;

#include "trie.h"

int main()
{
    trie myTrie;
    int n;
    string data;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        myTrie.insert(data);
    }
    cout << "============";
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> data;
        if (myTrie.search(data))
        {
            cout << "Word is in trie\n";
        }
        else
        {
            cout << "Word is not in trie\n";
        }
    }
}