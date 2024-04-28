#include "iostream"

using namespace std;

int main()
{
    char sentence[] = "Find Larget word in a Sentence";
    int wordCount[100];
    int words = 0;
    int size = sizeof(sentence);
    int count = 0;
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (sentence[i] == ' ' || sentence[i] == '\0')
        {
            wordCount[j] = count;
            j++;
            words++;
            count = 0;
        }
        else
        {
            count++;
        }
    }
    int Large = 0, Small;
    for (int i = 0; i < words; i++)
    {
        Large = max(wordCount[i], Large);
        Small = min(wordCount[i], Small);
    }
    cout << "Largest word of a sentence is: " << Large << endl;
    cout << "Smallest word of a sentence is: " << Small << endl;
}