#include <iostream>
#include <string>

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

bool PlayGame(int Difficulty,int MaxDifficulty, int Eggs)
{
    std::cout << "\n\n\nTriple X, Security Level " << Difficulty << ", Please Enter the Code \nEnter the Code to continue.\n";
    const int CodeA = rand();//3!$ t#3 @n$m3R
    const int CodeB = rand();//7!$ t#3 $3c0nD @n$m3R
    const int CodeC = rand();//12!$ t#3 t#!Rd @n$m3R
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
    if((GuessSum == CodeSum && GuessProduct == CodeProduct && Difficulty < MaxDifficulty) || (GuessSum == 22 && GuessProduct == 252))
    {
        std::cout << "<-------------------Level " << Difficulty << " Complete------------------->\n Starting Next Level.";//"Congratulations! You've broken through the encryption and saved your orgnization!" -> Will be game completion text
        return true;
    }else if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "<-------------------Level " << Difficulty << " Complete------------------->\nCongratulations! You've broken through the encryption and saved your orgnization!";
        return true;
    }
    else if(Difficulty == 0 && Eggs == 42)
    {
        std::cout << "!!ERROR!! INVALID INPUT\nYou've failed to crack the code in time. Your files have been encrypted for ransom and the database has been exposed.\nRetry Level";
        return false;
    }else
    {
        std::cout << "!!ERROR!! INVALID INPUT\nYou hear a voice in your head:\nCareful buddy...\nDon\'t want to lose those files...\n<-----Retry the level----->";
    }
    
}

int main()
{
    int LevelDifficulty = 1;
    const int MaxLevel = 10;
    int secret = 5;
    PrintIntroduction(LevelDifficulty);
    
    while(LevelDifficulty <= MaxLevel)//Loop until all levels are complete
    {
        bool bLevelComplete = PlayGame(LevelDifficulty, MaxLevel, secret);
        std::cin.clear();//Clears Errors
        std::cin.ignore();//Discards Buffer
        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }else
        {
            --LevelDifficulty;
        }
        
    }
    return 0;
}

