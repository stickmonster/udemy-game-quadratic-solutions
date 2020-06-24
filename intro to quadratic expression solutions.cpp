// udemy unreal xxx game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>

using namespace std;

void PrintIntroduction(int Difficulty) {

    std::cout << "\n\nWork out the two numbers that add together to make the first number, and the two numbers that multiply together to make the second number: " << Difficulty<< "\n\n";
  //  std::cout << "ENTER THE CODE!!!\n\n";


}

bool PlayGame(int Difficulty) {


    PrintIntroduction(Difficulty);

    std::cout << endl;


    const int FirstCode = rand() % 3*(Difficulty+1);
    const int SecondCode = rand()% 3*(Difficulty+1);
    //const int ThirdCode = rand()% 3*(Difficulty+1);

    int CodeSum = FirstCode + SecondCode;
    //+ThirdCode;
    int CodeProduct = FirstCode * SecondCode;
        //* ThirdCode;


    std::cout << "The codes add up to " << CodeSum;
    std::cout << endl;
    std::cout << "The codes multiply to " << CodeProduct<<"\n\n";
    std::cout << endl;

    //store player guess
    int FirstNumber, SecondNumber;
    //ThirdNumber;
    std::cin >> FirstNumber >> SecondNumber;
    
   //ThirdNumber;



    int GuessSum = FirstNumber + SecondNumber;
    //+ThirdNumber;
    int GuessProduct = FirstNumber * SecondNumber;
    
   //*ThirdNumber;


    std::cout << "The codes you chose add up to " << GuessSum;
    std::cout << endl;
    std::cout << "The codes you chose multiply to " << GuessProduct;
    std::cout << endl;


    if (CodeSum == GuessSum && CodeProduct == GuessProduct) {
        std::cout << "\nWell Done! You Win!" << endl;
      
        return true;
    }
    else {
        std::cout << "\nHa, you lose! Loser!\n";

        return false;
    }
    
}


int main()
{
    srand(time(NULL));
    int LevelDifficulty= 1;
    const int MaxLevel = 9;

    while (LevelDifficulty <= MaxLevel) //loop game until all levesl completed
    {
      
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            ++LevelDifficulty;
            std::cout << "difficulty level: " << LevelDifficulty << endl;
        }

    
    }
   
    std::cout << "\nMy de My You Won The Whole Blimey Game! Well Done\n";
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
