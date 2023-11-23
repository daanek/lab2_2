#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//обработка исключений в первой и во второй git
// git one commit
int slova(string a, string word)
{     



    int k = 0;
    string b;
    a += ' ';
    for (int i = 0; i < a.length(); i++)
    {
        b += a[i];
        if (a[i] == ' ')
        {
           
            b.pop_back();
            if (b != "")
                if (b == word)
                    k++;
            b = "";
        }
    }
    return k;
    system("pause");
}
int main()
{
    string buf, rezult, word;
    ifstream f("test.txt");
    int a;
    cout << "input word" << endl;
    getline(cin, word);
    while (!f.eof())
    {
        getline(f, buf);
        for (int i = 0; i < buf.size(); i++)
        {
            rezult += buf[i];
            if (buf[i] == '.')
            {
                rezult.pop_back();

                a = slova(rezult, word);

                rezult.append(".");
                cout << rezult << " (" << a << ") ";
                rezult = "";
            }
        }
            rezult.append("\n");
    }  



    return 1;
}