#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string pi = "3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982";
    string user_input, pi_wrong;
    float counter = 0;
    int percent;
    bool error = false;
    bool too_much = false;
    cout << "Wprowadz pi :" << endl;
    cin >> user_input;
    char znak = 'x';
    if(user_input.length() != pi.size())
        {
            while(pi.size() != user_input.size())
                user_input.push_back('?');
        }
    for(int i=0; i<pi.size(); i++)
        {
            if(user_input.size() > pi.size())
            {
                break;
                too_much = true;
            }
            else if(user_input[i]==pi[i])
                {
                    cout << pi[i];
                    pi_wrong.push_back(pi[i]);
                    counter++;
                }
            else
                {
                    cout << '<' << user_input[i] << "/" << pi[i] << '>';
                    error = true;
                    pi_wrong.push_back(znak);
                }
        }
        percent = (counter / pi.size()+0.01)*100;
    cout << endl;
        if(error == false && too_much == false)
            cout << "Brawo";
        else if(too_much == true)
            cout << "Za dużo cyfr";
        else
            {
                cout << "Sa bledy" << endl;
                cout << pi_wrong << endl;
                cout << "Masz " << counter << " z " << pi.size()+1 << " czyli " << percent << "%";
            }

    return 0;
}
