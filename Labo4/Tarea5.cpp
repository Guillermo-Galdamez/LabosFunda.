#include <iostream>
#include <string>

using namespace std;
 
int main(void) {
 
	std::string palabra;
    cout <<endl<<"Programa que verifica la palabra ingresada inicia y finaliza con la misma letra."<<endl;
	 cout<<"Escriba una palabra"<<endl;
     cin >> palabra;
			
	char ch = palabra.at( palabra.length() - 1 );

    if((palabra[0] == 'a' || palabra[0] == 'A') && ch == 'a'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
	}
	else if((palabra[0] == 'b' || palabra[0]== 'B') && ch == 'b'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
    }
	else if((palabra[0] == 'c' || palabra[0] == 'C') && ch == 'c'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
    }
	else if((palabra[0] == 'd' || palabra[0] == 'D') && ch == 'd'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
    }
	else if((palabra[0] == 'e'|| palabra[0] == 'E') && ch == 'e'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
    }
	else if((palabra[0] == 'f' || palabra[0] == 'F') && ch == 'f'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
    }
	else if((palabra[0] == 'g'|| palabra[0] == 'G') && ch == 'g'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
    }
	else if((palabra[0] == 'h' || palabra[0] == 'H') && ch == 'h'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
    }
	else if((palabra[0] == 'i'|| palabra[0] == 'i') && ch == 'i'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
    }
	else if((palabra[0] == 'j' || palabra[0] == 'J') && ch == 'j'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
    }
	else if((palabra[0] == 'k' || palabra[0] == 'K') && ch == 'k'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
    }
	else if((palabra[0] == 'l' || palabra[0] == 'L') && ch == 'l'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
    }
	else if((palabra[0] == 'm' || palabra[0] == 'M') && ch == 'm'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
    }
	else if((palabra[0] == 'n' || palabra[0] == 'N') && ch == 'n'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
    }
	else if((palabra[0] == 'o' || palabra[0] == 'o') && ch == 'o'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
    }
	else if((palabra[0] == 'p' || palabra[0] == 'p') && ch == 'p'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
    }
	else if((palabra[0] == 'q' || palabra[0] == 'q') && ch == 'q'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
    }
	else if((palabra[0] == 'r' || palabra[0] == 'r') && ch == 'r'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
    }
	else if((palabra[0]== 's' || palabra[0] == 's') && ch == 's'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
    }
	else if((palabra[0] == 't' || palabra[0] == 't') && ch == 't'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
    }
	else if((palabra[0] == 'u' || palabra[0] == 'u') && ch == 'u'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
    }
	else if((palabra[0] == 'v' || palabra[0] == 'v') && ch == 'v'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
    }
	else if((palabra[0] == 'w' || palabra[0] == 'w') && ch == 'w'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
    }
	else if((palabra[0] == 'x' || palabra[0] == 'x') && ch == 'x'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
    }
	else if((palabra[0] == 'y' || palabra[0] == 'y') && ch == 'y'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
    }
	else if((palabra[0] == 'z' || palabra[0] == 'z') && ch == 'z'){
        cout<<"La palabra inicia y termina con la misma letra "<<endl;
    }
	else {
		cout<<"La palabra no inicia y tampoco termina con la misma letra "<<endl;
	}
	
	
 
	return 0;
}