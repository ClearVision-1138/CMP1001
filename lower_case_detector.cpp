#include <iostream>

bool isLower(char letter){
    if(letter >= 'a' && letter <= 'z'){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    char letter;
    std::string status;
    std::cin >> letter;

    if( isLower(letter) ){
        status = "True :)";
    }
    else{
        status = "False :(";
    }

    std::cout << status << "\n";

    return 0;
}
