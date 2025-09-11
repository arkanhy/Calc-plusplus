#include <iostream>
#include <string>
#include <chrono>
#include <ctime>
using namespace std;

void wipeterminal(){ //clears the cli interface
    #ifdef _WIN32
    system("cls"); //for Windows
    #else
    system("clear"); //for UN*X (i use arch btw)
    #endif
}

int main() {
    char mode,again;
    double x,y;
    
    do{
        auto timenow = chrono::system_clock::to_time_t(chrono::system_clock::now()); // clock i totally didn't rip from an obscure forum
        wipeterminal();
    
    cout << "=================== Welcome to Calc++! ==================="<< endl;
    cout << "It's "<<ctime(&timenow);
    cout << "A CLI based calculator by Arkan H. Y."<< endl;
    cout << "Ver. 1.2"<< endl;
    cout << "Please Input Mode +,-,*,/,%,b(BMI Calc.) or C to close the program"<< endl;
    cin >> mode;
    
    if (mode == '+') {
        wipeterminal();
        cout << "=================== Calc++ ==================="<< endl;
        cout << "(+) Enter Number" << endl;
        cin >> x;
        cout << "+" << endl;
        cin >> y;
        cout << x << " + " << y << " = " << (x + y) << endl;
    
    
    }else if (mode == '-') { //Subraction
        wipeterminal();
        cout << "=================== Calc++ ==================="<< endl;
        cout << "(-) Enter Number" << endl;
        cin >> x;
        cout << "-" << endl;
        cin >> y;
        cout << x << " - " << y << " = " << (x - y) << endl;
    
    }else if (mode == '*') { //multiplication 
        wipeterminal();
        cout << "=================== Calc++ ==================="<< endl;
        cout << "(*) Enter Number" << endl;
        cin >> x;
        cout << "*" << endl;
        cin >> y;
        cout << x << " * " << y << " = " << (x * y) << endl;
    
    }else if(mode == '/'){ // division
        wipeterminal();
        cout << "=================== Calc++ ==================="<< endl;
        cout << "(÷) Enter Number" << endl;
        cin >> x;
        cout << "÷" << endl;
        cin >> y;
        if(y == 0){
        cout <<"Cannot divide by Zero" <<endl;
        cout <<endl;
        }else{
        cout << x << " ÷ " << y << " = " << (x / y) << endl;
        }
    
    }else if(mode == '%'){ // convert percentage to decimal
        wipeterminal();
        cout << "=================== Calc++ ==================="<< endl;
        cout << "(%)Enter Number" <<endl;
        cin >> x;
        cout << x << "% = " <<(x /100) <<endl;
    
    }else if(mode == 'b' || mode == 'B'){ // BMI Calc
        wipeterminal();
        double w, h, H, b;
        cout << "=================== Calc++ ==================="<< endl;
        cout << "(BMI)Enter Weight (KG)" << endl;
        cin >> w;
        cout << "Enter Body Height (CM)" << endl;
        cin >> h;
        H = h /100;
        b = w / (H * H);
        cout << "Your BMI is " << (b) << endl;
        if(b < 18.5){
            cout << "You Are Underweight."<< endl;
            }else if(b < 24.9){
                cout <<"You Are At Normal Weight"<< endl;
                }else if(b < 29.9){
                    cout <<"You Are Overweight" <<endl;
                    }else if(b <34.9){
                        cout <<"You are Obese" <<endl;
                        }else if(b >=35){
                            cout <<"big chungus" <<endl;  // please change l8ter, people might get mad lol
                        }
        
        


    } else if(mode == 'a'){
        wipeterminal();
        cout <<"  /\\_/\\ "<< endl;
        cout <<" (o   o)"<< endl;
        cout <<"   >-<  "<< endl;
        return 0;


    }else if (mode == 'c' || mode == 'C')
    {
        wipeterminal();
        cout <<"Thanks For Using Calc++."<<endl;
        return 0;  
    }else{cout <<endl;
    cout << "Invalid Mode"<<endl;
    }
    cout <<endl;
    cout <<"Do another Calculation? (Y/N)"<<endl;
    cin >> again;
    
    }while (again == 'y' || again == 'Y');
    wipeterminal();
    cout <<"Thanks For Using Calc++."<<endl;
    }
    
    