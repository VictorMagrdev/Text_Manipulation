#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;

string ToUpper(string data) {
    
    for_each(data.begin(), data.end(), [](char& c) {
        c = ::toupper(c);
        });
    string paragrahp;
    for (int i = 0; i < data.size(); i++)
    {
        paragrahp = paragrahp + data[i];
    }
    return paragrahp;
}

string LowerVocal(string data) {
    
    data = ToUpper(data);
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i] == 'A') {
            data[i] = tolower(data[i]);
        }
        if (data[i] == 'E') {
            data[i] = tolower(data[i]);
        }
        if (data[i] == 'I') {
            data[i] = tolower(data[i]);
        }
        if (data[i] == 'O') {
            data[i] = tolower(data[i]);
        }
        if (data[i] == 'U') {
            data[i] = tolower(data[i]);
        }
    }
    string paragrahp;
    for (int i = 0; i < data.size(); i++)
    {
        paragrahp = paragrahp + data[i];
    }
    data = paragrahp;
    return data;
}

string VocalsU(string text) {
    for (int i = 0; i < text.size(); i++) {
        if (text[i]== 'a') {
            text[i] = toupper(text[i]);
        }
        if (text[i] == 'e') {
            text[i] = toupper(text[i]);
        }
        if (text[i] == 'i') {
            text[i] = toupper(text[i]);
        }
        if (text[i] == 'o') {
            text[i] = toupper(text[i]);
        }
        if (text[i] == 'u') {
            text[i] = toupper(text[i]);
        }
    }
    string paragrahp;
    for (size_t i = 0; i < text.size(); i++)
    {
        paragrahp = paragrahp + text[i];
    }
    return paragrahp;
}

int main()
{
    string fstring = "hi i am victor how are you";
    string sstring = "i am a genshin impact player and a junior developer of java";
    cout << VocalsU(fstring)<<endl;
    cout << LowerVocal(sstring);
    return 0;
}
