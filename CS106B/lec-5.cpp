// 25.12.16
// By: Aditya R Patgaonkar from CS106B
// Lecture 05 practice
// Maps etc.

#include <iostream>
#include <fstream>
#include "map.h"

using namespace std;

void ReadWordsFile(ifstream &in, Map<int> &m)
{
    while (true)
    {
        string word;
        in >> word;
        if (in.fail()) break;
        if (m.containsKey(word))
            m[word]++; // m.add(word, m.getValue(word) + 1);
        else
            m[word] = 1; // m.add(word, 1);
    }
    cout << "Number of unique words: " << m.size() << endl;
    Map<int>::iterator itr = m.iterator();
    int mostFrequent = 0; string mostFreqWord; // For most frequent word!
    while (itr.hasNext())
    {
        string keyWord = itr.next();
        if (mostFrequent < m[keyWord])
            mostFreqWord = keyWord;
    }
    cout << keyWord << " = " << m[keyWord] << endl;
    cout << "The most frequent word is : " << mostFreqWord << ":-" << m[mostFreqWord] << endl;
}

int main(void)
{
    ifstream in;
    in.open("Handout.txt");
    if (in.fail())
        return 1;
    ReadWordsFile(in, wCounts);

    Map<int> wCounts;

    return 0;
}
