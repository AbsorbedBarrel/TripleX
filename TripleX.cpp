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
	std::cout << "||||---------------------||||//     \\\\||" << std::endl;
    std::cout << "||||---------------------|||||| (*) ||||" << std::endl;
    std::cout << "|||||||||||||||||||||||||||||\\\\_____//||" << std::endl;
    std::cout << "\n... ... ...\nYou contemplate with yourself. A prompt appears onscreen. \n\'Triple X, Security Level " << Difficulty << ", Please Enter the Code\'\nEnter the Code to continue.\n";
    return;
}

bool PlayGame(int Difficulty,int MaxDifficulty)
{
    std::cout << "\n\n\nTriple X, Security Level " << Difficulty << ", Please Enter the Code \nEnter the Code to continue.\n";

    const int CodeA = (rand() % Difficulty)+Difficulty;//3!$ t#3 @n$m3R
    const int CodeB = (rand() % Difficulty)+Difficulty;//7!$ t#3 $3c0nD @n$m3R
    const int CodeC = (rand() % Difficulty)+Difficulty;//12!$ t#3 t#!Rd @n$m3R
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //Print CodeSum and CodeProduct to the terminal.
    std::cout << "\nX There are three numbers in the code";
    std::cout << "\nX The codes add up to: " << CodeSum;
    std::cout << "\nX The codes multiply to: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cout << "\nEnter Guess: ";
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //Check if the players guess is correct
    if((GuessSum == CodeSum && GuessProduct == CodeProduct && Difficulty < MaxDifficulty) || (GuessSum == 22 && GuessProduct == 252 && Difficulty < MaxDifficulty))
    {
        std::cout << "<-------------------Level " << Difficulty << " Complete------------------->\n Starting Next Level.";
        ++Difficulty;
        return true;
    } 
    else if(!((GuessSum == CodeSum && GuessProduct == CodeProduct && Difficulty < MaxDifficulty) || (GuessSum == 22 && GuessProduct == 252 && Difficulty < MaxDifficulty)) && Difficulty != 10)
    {
        std::cout << "!!ERROR!! INVALID INPUT\nYou hear a voice in your head:\nCareful buddy...\nDon\'t want to lose those files...\n<-----Retry the level----->";
        if (rand() % 5 == 2 || rand() % 5 == 0)
        {
            ++Difficulty;
        }
        else
        {
            --Difficulty;
        }
        return false;
    }
    
}

int main()
{
    int LevelDifficulty = 1;
    const int MaxLevel = 10;
    PrintIntroduction(LevelDifficulty);
    
    while(LevelDifficulty <= MaxLevel)//Loop until all levels are complete
    {
        bool bLevelComplete = PlayGame(LevelDifficulty, MaxLevel);
        std::cin.clear();//Clears Errors
        std::cin.ignore();//Discards Buffer

        if (LevelDifficulty == 0)
        {
            std::cout << "!!ERROR!! INVALID INPUT\nYou've failed to crack the code in time. Your files have been encrypted for ransom and the database has been exposed.\nGame Over";
            return 0;
            
        }else if (LevelDifficulty == 10)
        {
            std::cout << "<-------------------Level " << LevelDifficulty << " Complete------------------->\nCongratulations! You've broken through the encryption and saved your orgnization!";
            return 0;
        }
        else if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        else 
        {
            --LevelDifficulty;
        }
        
    }
    return 0;
}

