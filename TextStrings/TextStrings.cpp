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

string invert(string suma) {
    int n = suma.size();
    for (int i = 0; i < n / 2; i++) swap(suma[i], suma[n - i - 1]);
    return suma;
}

string compare(string fstring, string sstring) {
    string mayor;
    if (fstring.size() > sstring.size()) {
        mayor = fstring;
    }
    else {
        mayor = sstring;
    }
    return mayor;
}

int main()
{
    char name[100] = { 0 };
    string fstring;
    string sstring;
    cout << "digite una cadena de texto: " << endl;
    cin.getline(name, 100);
    fstring = name;
    cout << "digite una cadena de texto: " << endl;
    cin.getline(name, 100);
    sstring = name;
    string suma;
    cout << "la cadena con mas caracteres es:" << compare(fstring, sstring) << endl;
    fstring = VocalsU(fstring);
    sstring = LowerVocal(sstring);
    cout << fstring << endl;
    cout << sstring << endl;
    suma = fstring + " " + sstring;
    cout << suma << endl;
    cout << invert(suma);
    return 0;
}
