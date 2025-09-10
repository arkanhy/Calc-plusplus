#include <iostream>
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
    
    wipeterminal();
    
    cout << "=================== Welcome to Calc++! ==================="<< endl;
    cout << "A CLI based calculator by Arkan H. Y."<< endl;
    cout << "Ver. 1.1"<< endl;
    cout << "Please Input Mode (+,-,*,/,%) or C to close the program"<< endl;
    cin >> mode;
    
    if (mode == '+') { //Additions 
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