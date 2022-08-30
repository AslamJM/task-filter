#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

int getCount()
{
    int count = 0;
    string word;
    ifstream file("words.txt");

    while (getline(file, word))
    {
        count++;
    }
    return count;
}

string cleanWord(string word)
{
    for (int i = 0, len = word.size(); i < len; i++)
    {
        if (ispunct(word[i]))
        {
            word.erase(i--, 1);
            len = word.size();
        }
    }
    return word;
}

string *task1Filter()
{
    int wordCount = getCount();
    string *words = new string[wordCount];
    ifstream file("words.txt");
    string line;
    int count = 0;

    while (getline(file, line))
    {
        string cleaned = cleanWord(line);
        words[count] = cleaned;
        count++;
    }
    return words;
}

void map2()
{
    string *words = task1Filter();

    ofstream file3("word-03.txt");
    ofstream file4("word-04.txt");
    ofstream file5("word-05.txt");
    ofstream file6("word-06.txt");
    ofstream file7("word-07.txt");
    ofstream file8("word-08.txt");
    ofstream file9("word-09.txt");
    ofstream file10("word-10.txt");
    ofstream file11("word-11.txt");
    ofstream file12("word-12.txt");
    ofstream file13("word-13.txt");
    ofstream file14("word-14.txt");
    ofstream file15("word-15.txt");

    for (int i = 0; i < words->length(); i++)
    {
        int wordLength = words[i].size();
        switch (wordLength)
        {
        case 3:
            file3 << words[i] + "\n";
            break;
        case 4:
            file4 << words[i] + "\n";
            break;
        case 5:
            file5 << words[i] + "\n";
            break;
        case 6:
            file6 << words[i] + "\n";
            break;
        case 7:
            file7 << words[i] + "\n";
            break;
        case 8:
            file8 << words[i] + "\n";
            break;
        case 9:
            file9 << words[i] + "\n";
            break;
        case 10:
            file10 << words[i] + "\n";
            break;
        case 11:
            file11 << words[i] + "\n";
            break;
        case 12:
            file12 << words[i] + "\n";
            break;
        case 13:
            file13 << words[i] + "\n";
            break;
        case 14:
            file14 << words[i] + "\n";
            break;
        case 15:
            file15 << words[i] + "\n";
            break;
        }
    }
}
bool sortMethod(string a, string b)
{
    return a[2] < b[2];
};

void sortBy3()
{
    vector<string> words;
}

int main()
{
    map2();
    return 0;
}