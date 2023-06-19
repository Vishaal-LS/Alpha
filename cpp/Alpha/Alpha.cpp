
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    string line = "Sail*Boats*Are*Awesome";
    
    void token_str();
    {
        vector<string> tokens;
        istringstream iss(line);
        string intermediate;
        // Tokenizing w.r.t. delimiter '*'
        while (getline(iss, intermediate, '*'))
        {
            tokens.push_back(intermediate);
        }

        for (const auto& token : tokens)
        {
            cout << "\n" << token << '\n';
        }

        return 0;
    }



}
