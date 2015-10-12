#ifndef ERRORCHECKING_H_INCLUDED
#define ERRORCHECKING_H_INCLUDED
#include <cstring>

using namespace std;

namespace checkError
{
    // Define strings for comparison to inputted melds
    string inputStringYes = "y";
    string inputStringNo = "n";
    string tileStringPinzu = "P";
    string tileStringSouzu = "B";
    string tileStringManzu = "M";
    string tileStringZero = "0";
    string tileStringOne = "1";
    string tileStringTwo = "2";
    string tileStringThree = "3";
    string tileStringFour = "4";
    string tileStringFive = "5";
    string tileStringSix = "6";
    string tileStringSeven = "7";
    string tileStringEight = "8";
    string tileStringNine = "9";
    string tileStringEast = "E";
    string tileStringSouth = "S";
    string tileStringWest = "W";
    string tileStringNorth = "N";
    string tileStringGreen = "G";
    string tileStringRed = "R";
    string tileStringWhite = "H";
    string lengthStringOne = "0";
    string lengthStringThree = "012";
    string lengthStringFour = "0123";
    string lengthStringFive = "01234";

    int setChecking (std::string checkString)
    {
        int setPlace = 0;                                // Position in meld, starts at 0
        int setValid = 0;
        int setLengthError = 0;
        int setError = 0;
        int isTriplet = 1;                               // For those pesky length-4 melds
        int isStraight = 0;                              // If both of these are false, the meld is invalid
        int meldNumOne = 0;                              // Prevents melds like P124 and B994 from passing
        int meldNumTwo = 0;
        int meldNumThree = 0;
        
        if (checkString.length() < 3)
        {
            setLengthError = 1;                          // Melds MUST be comprised of at least three tiles
        }

        if (checkString.length() == 3 && ((checkString [0] != tileStringEast [0]) && (checkString [0] != tileStringSouth [0]) && (checkString [0] != tileStringWest [0]) && (checkString [0] != tileStringNorth[0]) && (checkString [0] != tileStringRed [0]) && (checkString [0] != tileStringGreen [0]) && (checkString [0] != tileStringWhite [0])))
        {
            setLengthError = 1;                          // If the string length is exactly 3, the meld must be a pon of honors; if it were anything else the string length would be 4 since suit must be stated
        }

        if (checkString.length() > 4 && ((checkString [0] != tileStringManzu [0]) && (checkString [0] != tileStringPinzu [0]) && (checkString [0] != tileStringSouzu [0])))
        {
            setLengthError = 1;                          // Any strings with length 5 indicate kans of normal tiles; there are only four of each tile, so having five of an honor tile is impossible
        }

        if (checkString.length() > 5)
        {
            setLengthError = 1;                          // The maximum string length for a single meld is 5: 1 to declare suit plus 4 for a kan; anything beyond that is impossible to obtain
        }

        if (setLengthError == 1)
        {
            return 1;                                    // If the meld does not satisfy the above conditions, the loop is reset and the user prompted to retry
        }

        while (setPlace < checkString.length())
            {
                if ((checkString [setPlace] != tileStringEast [0]) && (checkString [setPlace] != tileStringSouth [0]) && (checkString [setPlace] != tileStringWest [0]) && (checkString [setPlace] != tileStringNorth [0]) && (checkString [setPlace] != tileStringRed [0]) && (checkString [setPlace] != tileStringWhite [0]) && (checkString [setPlace] != tileStringGreen [0]) && (checkString [setPlace] != tileStringManzu [0]) && (checkString [setPlace] != tileStringPinzu [0]) && (checkString [setPlace] != tileStringSouzu [0]) && (checkString [setPlace] != tileStringOne [0]) && (checkString [setPlace] != tileStringTwo [0]) && (checkString [setPlace] != tileStringThree [0]) && (checkString [setPlace] != tileStringFour [0]) && (checkString [setPlace] != tileStringFive [0]) && (checkString [setPlace] != tileStringSix [0]) && (checkString [setPlace] != tileStringSeven [0]) && (checkString [setPlace] != tileStringEight [0]) && (checkString [setPlace] != tileStringNine [0]))
                    {
                        return 1;                        // If the string is not comprised of defined strings, the meld is invalid
                    }
                    setPlace ++;
            }

        if (checkString.length() == lengthStringFour.length())
        {
            if (checkString [0] == tileStringEast [0] || checkString [0] == tileStringSouth [0] || checkString [0] == tileStringWest [0] || checkString [0] == tileStringNorth [0] || checkString [0] ==tileStringGreen [0] || checkString [0] == tileStringRed [0] || checkString [0] == tileStringWhite [0])
            {
                if (checkString [0] != checkString [1] || checkString [0] != checkString [2] || checkString [0] != checkString [3])
                {
                    return 1;                            // Checks for invalid honor kans
                }
            }

            if (checkString [0] == tileStringPinzu [0] || checkString [0] == tileStringSouzu [0] || checkString [0] == tileStringManzu [0])
            {
                if (checkString [0] == checkString [1] || checkString [0] == checkString [2] || checkString [0] == checkString [3])
                {
                    return 1;                            // Makes sure PBM are only at beginning of meld
                }

                if (checkString [1] == tileStringEast [0] || checkString [1] == tileStringSouth [0] || checkString [1] == tileStringWest [0] || checkString [1] == tileStringNorth [0] || checkString [1] == tileStringGreen [0] || checkString [1] == tileStringRed [0] || checkString [1] == tileStringWhite [0] || checkString [2] == tileStringEast [0] || checkString [2] == tileStringSouth [0] || checkString [2] == tileStringWest [0] || checkString [2] == tileStringNorth [0] || checkString [2] == tileStringGreen [0] || checkString [2] == tileStringRed [0] || checkString [2] == tileStringWhite [0] || checkString [3] == tileStringEast [0] || checkString [3] == tileStringSouth [0] || checkString [3] == tileStringWest [0] || checkString [3] == tileStringNorth [0] || checkString [3] == tileStringGreen [0] || checkString [3] == tileStringRed [0] || checkString [3] == tileStringWhite [0])
                {
                    return 1;                            // Makes sure ESWN/RHG are not present
                }
                
                if (checkString [1] != checkString [2] || checkString [1] != checkString [3] || checkString [2] != checkString [3])
                {
                    isTriplet = 0;                       // If the three characters following suit indicator are not the same, the meld is not a triplet
                }
                
                if (checkString [1] != tileStringZero [0] && checkString [1] != tileStringEight [0] && checkString [1] != tileStringNine [0])
                // No sense in checking for straight if the first tile isn't 1-7, quick check for invalid straight
                {
                    meldNumOne = atoi (checkString [1]);             // There has to be a better way of doing this.
                    meldNumTwo = atoi (checkString [2]);             // Convert tile number to int for comparison
                    meldNumThree = atoi (checkString [3]);           
                    
                    if (meldNumThree == meldNumTwo + 1 && meldNumTwo == meldNumOne + 1)
                    {
                        isStraight = 1;                  // Checks if tiles numbers are consecutive
                    }
                }
                
                if (!isStraight != !isTriplet)           // XOR just in case something weird happens
                {
                    return 1;
                }
            }

            if (checkString [0] != tileStringEast [0] && checkString [0] != tileStringSouth [0] && checkString [0] != tileStringWest [0] && checkString [0] != tileStringNorth [0] && checkString [0] !=tileStringGreen [0] && checkString [0] != tileStringRed [0] && checkString [0] != tileStringWhite [0] && checkString [0] != tileStringPinzu [0] && checkString [0] != tileStringSouzu [0] && checkString [0] != tileStringManzu [0])
            {
                return 1;                                // The first character in a meld string must be an honor or indicate suit
            }
        }
        if (checkString.length() == lengthStringFive.length())      // Must be non-honor kan
        {
            if (checkString [0] == checkString [1] || checkString [0] == checkString [2] || checkString [0] == checkString [3] || checkString [0] == checkString [4])
            {
                return 1;                                // First character must indicate suit, so it can't be the same as any other character in the string - can't have five honor tiles
            }

            if (checkString [1] != checkString [2] || checkString [1] != checkString [3] || checkString [1] != checkString [4])
            {
                return 1;                                // Valid kans have four of the same tile
            }
            
            if (checkString [1] == tileStringEast [0] || checkString [1] == tileStringSouth [0] || checkString [1] == tileStringWest [0] || checkString [1] == tileStringNorth [0] || checkString [1] ==tileStringGreen [0] || checkString [1] == tileStringRed [0] || checkString [1] == tileStringWhite [0] || checkString [2] == tileStringEast [0] || checkString [2] == tileStringSouth [0] || checkString [2] == tileStringWest [0] || checkString [2] == tileStringNorth [0] || checkString [2] ==tileStringGreen [0] || checkString [2] == tileStringRed [0] || checkString [2] == tileStringWhite [0] || checkString [3] == tileStringEast [0] || checkString [3] == tileStringSouth [0] || checkString [3] == tileStringWest [0] || checkString [3] == tileStringNorth [0] || checkString [3] ==tileStringGreen [0] || checkString [3] == tileStringRed [0] || checkString [3] == tileStringWhite [0] || checkString [4] == tileStringEast [0] || checkString [4] == tileStringSouth [0] || checkString [4] == tileStringWest [0] || checkString [4] == tileStringNorth [0] || checkString [4] ==tileStringGreen [0] || checkString [4] == tileStringRed [0] || checkString [4] == tileStringWhite [0])
            {
                return 1;                                // Can't have five honor tiles
            }
        }

        if (checkString.length() == lengthStringThree.length())     // Must be honor pon
        {
            if (checkString [0] != tileStringEast [0] && checkString [0] != tileStringSouth [0] && checkString [0] != tileStringWest [0] && checkString [0] != tileStringNorth [0] && checkString [0] !=tileStringGreen [0] && checkString [0] != tileStringRed [0] && checkString [0] != tileStringWhite [0])
            {
                return 1;                                // Checking to make sure meld begins with honor tile
            }

            if (checkString [0] != checkString [1] || checkString [0] != checkString [2])
            {
                return 1;                                // Comparing known honor tile to rest of meld
            }
        }
        return 0;
    }

    int machiChecking (string checkMachi)
    {
        if (checkMachi.length() != lengthStringOne.length() || ((checkMachi [0] != tileStringZero [0]) && (checkMachi [0] != tileStringOne [0]) && (checkMachi [0] != tileStringTwo [0]) && (checkMachi [0] != tileStringThree [0])))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int inputChecking (int checkInput)
    {
        if (checkInput != 0 && checkInput != 1)
        {
            return 1;
        }

        else
        {
            return 0;
        }
    }

    int convertToInt (string convertString)
    {
        if (convertString.length() > lengthStringOne.length())
        {
            return -1;
        }

        if (convertString [0] == inputStringYes [0])
        {
            return 1;
        }

        if (convertString [0] == inputStringNo [0])
        {
            return 0;
        }

        if (convertString [0] != inputStringYes [0] && convertString [0] != inputStringNo [0])
        {
            return -1;
        }
    }
}

#endif // ERRORCHECKING_H_INCLUDED
