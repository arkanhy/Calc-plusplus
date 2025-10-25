    #include <iostream>
    #include <string>
    #include <chrono>
    #include <math.h>
    #include <ctime>
    using namespace std;

    void wipeterminal(){ //clears the cli interface
        #ifdef _WIN32
        system("cls"); //for Windows
        #else
        system("clear"); //for UN*X (i use arch btw)
        #endif
    }

    void Dinput(double &val){ //Wrong input error handler
        while (true)
        {   cin >> val;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout <<"Syntax error, Invalid input. Please Only Enter Numbers\n";
            }else{
                break;  
            }   
        }   
    }

    void Cinput(char &val){
        while (true)
    {   cin >> val;
        if (cin.fail())
        {   cin.clear();
            cin.ignore(1000, '\n');
            cout <<"Syntax error, Invalid Input. Please Enter Single Letter";
        }else{
            break;
        }
    } 
}
    void Menu_title(){
        auto timenow = chrono::system_clock::to_time_t(chrono::system_clock::now()); // clock i totally didn't rip from an obscure forum
        wipeterminal();
        cout << "======================== Calc++ =========================\n";
        cout << "It's "<<ctime(&timenow);
        cout << "A CLI based calculator by Arkan H. Y."<< endl;
        cout << "Ver. 1.4\n";
    } 
    

    int main() {
        char mode,again,arithmode,scmode,fmode;
        double x,y,z;
        string title ="=================== Welcome to Calc++! ===================\n",     menu_title ="======================= Calc++ ========================\n";
        
        do{
            auto timenow = chrono::system_clock::to_time_t(chrono::system_clock::now()); // clock i totally didn't rip from an obscure forum
            wipeterminal();
        
        cout << title;
        cout << "It's "<<ctime(&timenow);
        cout << "A CLI based calculator by Arkan H. Y."<< endl;
        cout << "Ver. 1.4"<< endl;
        cout << "Please Select Mode A(Arithmatics), S(Scientific), F(Formulas), C(Close)\n";
        Cinput(mode);
        
        if (mode == 'a')
        {
            Menu_title();
            cout << "Arithmatics Mode" << endl;
            cout << "Select Operator (+,-,*,/,%)" << endl;
            Cinput(arithmode);

            if (arithmode =='+')
            {
                wipeterminal();
                cout << menu_title;
                cout << "(+) Enter Number\n";
                Dinput(x);
                cout << "+"<<endl;
                Dinput(y);
                cout << x <<" + "<< y << " = "<< x+y <<endl;
            }else if (arithmode =='-')//substraction
            {
                wipeterminal();
                cout << menu_title;
                cout <<"(-) Enter Number"<<endl;
                Dinput(x);
                cout << "-"<<endl;
                Dinput(y);
                cout << x <<" - "<< y << " = " << x-y <<endl;
            
            }else if (arithmode =='*')//multiplication
            {
                wipeterminal();
                cout << menu_title;
                cout <<"(*) Enter Number"<<endl;
                Dinput(x);
                cout << "*"<<endl;
                Dinput(y);
                cout << x <<" * "<< y << " = " << x*y <<endl;
            }else if (arithmode=='/')//division
            {
                wipeterminal();
                cout << menu_title;
                cout <<"(/) Enter Number"<<endl;
                Dinput(x);
                cout << "/"<<endl;
                Dinput(y);
                if (y==0)
                {
                    cout <<"Syntax error. Cannot Divide Zero"<<endl;
                }else
                {
                    cout << x <<" / "<< y << " = " << x/y <<endl;
                }
                   
            }else if (arithmode=='%')
            {
                wipeterminal();
                cout << menu_title;
                cout << "(%)Enter Number" <<endl;
                Dinput(x);
                cout << x << "% = " <<(x /100) <<endl;
            }else//invalid mode
            {
                wipeterminal();
                cout << "Invalid mode"<<endl;
            }

        }else if (mode=='s')//scientific
        {
            Menu_title();
            cout << "Scientific Mode" << endl;
            cout << "Select Operator (e(Exponent),r(Square Root),q(Quadratic Formula))" << endl;
            Cinput(scmode);

            if (scmode == 'q') //quadratic formula
        {
            wipeterminal();
            cout << menu_title;
            cout << "(Quadratic Formula) Enter a"<< endl;
            Dinput(x);
            cout << "Enter b" << endl;
            Dinput(y);
            cout << "Enter c" << endl;
            Dinput(z);
            double D=y*y-4*x*z;
            if (D== 0)
            {
                cout <<"Discriminant is:"<< D << " which is zero, One real solution\n";
                cout <<"Result of -, x = "<<(-y - sqrt(y * y - 4 * x * z)) / (2 *x)<<endl;

            }else if (D>0)
            {
                cout <<"Discriminant is:"<< D << " which is positive, Two real solution\n";
                cout <<"Result of -, x = "<<(-y - sqrt(y * y - 4 * x * z)) / (2 *x)<<endl;
                cout <<"Result of +, x = : "<<(-y + sqrt(y * y - 4 * x * z)) / (2 *x)<<endl;
            }else if (D<0)
            {
                cout <<"Discriminant is:"<< D << " which is negative, No real solution"<<endl;
            }else
            {
                cout <<"Syntax Error, Goodluck, you're on your own, God speed son."<<endl;
            }
    
        }else if(scmode == 'e'){ // exponent
            wipeterminal();
            cout << menu_title;
            cout << "(a^b) Enter base" <<endl;
            Dinput(x);
            cout << x << "^ Enter Exponent" <<endl;
            Dinput(y);
            cout << pow(x,y) <<endl;
        }else if (scmode=='r')
        {
            wipeterminal();
            cout << menu_title;
            cout << "(Sq. Root) Enter Number"<< endl;
            Dinput(x);
            cout<< pow(x,0.5)<<endl;
        }else if(scmode =='l'){
            wipeterminal();
            cout << menu_title;
            cout << "(Log) Enter Number" <<endl;
            Dinput(x);
            cout <<"log of " <<x<< " is "<<log(x)<<endl;
        }
        
        }else if (mode=='f' || mode=='F')//formulas
        {
            Menu_title();
            cout << "Formula Mode" << endl;
            cout << "Select Formula (b(BMI))" << endl;
            Cinput(fmode);

            if(fmode == 'b' || fmode== 'B'){ // BMI Calc
            wipeterminal();
            double w,h,b;
            cout << menu_title;
            cout << "(BMI)Enter Weight (KG)" << endl;
            Dinput(w);
            cout << "Enter Body Height (CM)" << endl;
            Dinput(h);
            b = w / ((h/100) * (h/100));
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
                                cout <<"You are Extremely Obese :o" <<endl;
                            }
            }else if (fmode == 'l' || fmode == 'L'){
            wipeterminal();
            cout<<menu_title;
            cout <<"Length Converter, Please choose what unit you would like to convert I(Inches), C(Centimeters)\n";
            cin>> mode;
            if (mode == 'l' || mode == 'I')
            {
                wipeterminal();
                cout<<menu_title;
                cout <<"Converting Inches to Centimeters. Enter Length\n";
                Dinput(x);
                cout <<"It is: "<<x*2.54<<"CM\n";

            }else if (mode == 'c' || mode == 'C')
            {
                wipeterminal();
                cout<<menu_title;
                cout<<"Converting Centimeters to Inches. Enter Length\n";
                Dinput(x);
                cout<<"It is: "<<x*0.3937<<" Inches\n";
            }
            }//more unit conversion alright?
        }
        
        
        else if (mode == 'c' || mode == 'C')
        {
            wipeterminal();
            cout <<"Thanks For Using Calc++."<<endl;
            return 0;  
        }else{cout <<endl;
        cout << "Invalid Mode"<<endl;
        }
        cout <<endl;
        cout <<"Do another Calculation? (Y/N): ";
        cin >> again;
        
        }while (again == 'y' || again == 'Y');
        wipeterminal();
        cout <<"Thanks For Using Calc++."<<endl;
        }