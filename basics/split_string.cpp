// Split String
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printVectorString(vector<string> text)
{
    for (int i = 0; i < text.size(); i++)
    {
        cout << text[i] << endl;
    }
    cout << endl;
    return;
}

void main()
{
    // IGNORE
    void printVectorString(vector<string> _input); // Declare function
    // IGNORE

    string input_string = "Sail*Boats*are*awesome"; // Test input string
    
    char separator = '*';
    vector <string> sentence;

    // Start of loop
    int length = input_string.length();

    vector<char> word;
    int index = 0;
    while (index < length)
    {
        //cout << "The current element is : " << input_string[index] << endl;
        if (input_string[index] == separator)
        {
            // Create a 'string' called 'new_word' from the 'vector<char>' named 'word'
            string new_word(word.begin(), word.end());

            // Add 'new_word' to 'output_words'
            sentence.push_back(new_word);

            // Clear contents of 'word' for next loop
            word.clear();

            // print for testing
            printVectorString(sentence);
        }
        
        else
        {
            // Adding this character into the current variable named 'word'
            word.push_back(input_string[index]);
            
            // Check if the sentence ends or we are at the last word
            if (index == length - 1)
            {
                string new_word(word.begin(), word.end());

                cout <<  "Last word has been added" << endl;

                // Add 'new_word' to 'output_words'
                sentence.push_back(new_word);

                // print for testing
                printVectorString(sentence);
            }
        }
        index++;
    }
}



