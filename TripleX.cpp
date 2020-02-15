#include <iostream>

void PrintIntroduction(int Difficulty)
{
    //Breif Synopsis of Story
    std::cout << "\n\nWelcome. This is TripleX. \nA Highly Evolved Security Software. \nYour organization Has been comprimised by a set of Canadian Hackers. \nThey Have set up a complicated encryption code to take your files and have begun to expose your database. \nCrack the code and free yourselves and save the database. My time is running out. Save yourself while you can. 32fj weflHF#TF !!ERROR!!\n\n\n                                          -The Ravager.";
    std::cout << "\n\n\n ";
    std::cout << "   ||||||||||||||||||||||||||||||" << std::endl;
    std::cout << "    ||||----------------------||||" << std::endl;
    std::cout << "    ||||*                    *||||" << std::endl;
    std::cout << "    ||||*                    *||||" << std::endl;
    std::cout << "    ||||*      TripleX       *||||" << std::endl;
    std::cout << "    ||||*                    *||||" << std::endl;
	std::cout << "    ||||*    ___________     *||||" << std::endl;
	std::cout << "    ||||*                    *||||" << std::endl;
	std::cout << "    ||||----------------------||||" << std::endl;
	std::cout << "    ||||||||||||||||||||||||||||||" << std::endl;
    std::cout << "|||||||||||||||||||||||||||||||||||||||" << std::endl;
	std::cout << "|||||||||||||||||||||||||||||||_____|||" << std::endl;
	std::cout << "|||||||||||||||||||||||||||||//     \\\\||" << std::endl;
    std::cout << "||||---------------------|||||| (*) ||||" << std::endl;
    std::cout << "|||||||||||||||||||||||||||||\\\\_____//||" << std::endl;
    std::cout << "\n... ... ...\nYou contemplate with yourself. A prompt appears onscreen. \n\'Triple X, Security Level " << Difficulty << ", Please Enter the Code\'\nEnter the Code to continue.\n";
    return;
}

bool PlayGame(int Difficulty)
{
    std::cout << "\n\n\nTriple X, Security Level " << Difficulty << ", Please Enter the Code \nEnter the Code to continue.\n";
    const int CodeA = 3;
    const int CodeB = 7;
    const int CodeC = 12;
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //Print CodeSum and CodeProduct to the terminal.
    std::cout << "\nX There are three numbers in the code";
    std::cout << "\nX The codes add up to: " << CodeSum;
    std::cout << "\nX The codes multiply to: " << CodeProduct << std::endl;
    //Store Player Guess
    int GuessA, GuessB, GuessC;
    std::cout << "\nEnter Guess: ";
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //Check if the players guess is correct
    if(GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "Congratulations! You've broken through the encryption and saved your orgnization!";
        return true;
    }else 
    {
        std::cout << "!!ERROR!! INVALID INPUT\nYou've failed to crack the code in time. Your files have been encrypted for ransom and the database has been exposed.";
        return false;
    }
}

int main()
{
    int LevelDifficulty = 1;
    PrintIntroduction(LevelDifficulty);
    while(true)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();//Clears Errors
        std::cin.ignore();//Discards Buffer
        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }
    return 0;
}

