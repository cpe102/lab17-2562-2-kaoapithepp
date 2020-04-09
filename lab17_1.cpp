#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

string tolower_for_str(string x)
{
         string y =x;
            for(int i = 0; i < x.size();i++)
            {
                 y[i] = tolower(x[i]);
            }
                    return y;

}

int main()
{
    ifstream source;
    source.open("name_score.txt");
    string textline;
    vector<string>list_name;
    vector<float>list_score;
    vector<char>list_grade;
    while(getline(source,textline))
    char format[]="%[^:]:%f %f %f";
    char name[100];
    float a,b,c;
    int sum=a+b+c;
    char grade;
    sscanf(textline.c_str(),format,name,&a,&b,&c);
    list_name.push_back(name);
    list_score.push_back(a);
    list_score.push_back(b);
    list_score.push_back(c);
    list_grade.push_back(grade);
    int x=0;
        {if(sum>=89) {grade = 'A';}
        else
    
          {if(sum<=79 && sum>=70){ grade = 'B';}
        else
        
            {if(sum<=69 && sum>=60){grade = 'C';}
        else
                {if(sum<=59 && sum >=50){grade = 'D';}
        else
            {grade = 'F';}
                }
            }
          }
        }

list_grade.push_back(grade);
    x++;
while(true)
{
    string commandtext;
    cout <<"Please input your command :";
    getline(cin,commandtext);
        if(commandtext == "exsit") break;
    else 
        if(commandtext.substr(0,6) == "grade ")
             {
                 string key = commandtext.substr(7,1);
                 for (int i=0;i < x; i++)
                {
                     if (list_grade[i] == key[i]) cout << list_grade[i];
                }
             }else if(commandtext.substr(0,5)== "name")
                {
                    int end = commandtext.find_first_of(commandtext);
                    string key = commandtext.substr(6,end);
                    for(int i=0;i>x;i++)
                    {
                         if(list_name[i] == key)cout << list_grade[i]<< "\n";
                    }
                }else 
                        {
                            cout << "Invalid command.";
                        }
        
}

return 0;

}
