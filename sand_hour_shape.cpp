#include <iostream>

void sandHour(int height){
    int middle_point = (height / 2.0) + 0.5;

    int line_index = height;
    for(int index = 1; index <= line_index; index++) {

        if (index <= middle_point) {
            for (int space = 1; space < index; space++) {
                std::cout << ' ';
            }
            for (int star_count = 1; star_count <= height; star_count++) {
                std::cout << "*";
            }
            std::cout << "\n";
            if (height > 1) {
                height -= 2;
            }
        } else {
            height += 2;
            for (int space = 1; space <= (line_index - index); space++) {
                std::cout << ' ';
            }
            for (int star_count = 1; star_count <= height; star_count++) {
                std::cout << "*";
            }
            std::cout << "\n";
        }
    }
}

int main() {
    int height{ };
    std::cin >> height;

    sandHour(height);

    /*
    int height;
    int space = 0;
    int star;
    int i, j;

    std::cin >> height;
    star = height;

// for is used for height
    for(i=0; i<height; i++){

// this for is for stars
        for(j=0; j<star;j++)
            std::cout<< "*";

// while the code is in the middle it decreases the stars by 2 and increases the spaces one
        if( i < (height / 2) ){
            star-=2;
            space++;
        }

// when the code reaches the middle than increases stars by 2 and decreases spaces by 1
        else{
            star+=2;
            space--;
        }

// then print space
        std::cout << std::endl;
        for(j=0; j<space; j++)
            std::cout<< " ";

    }
     */

    return 0;
}


