#ifndef ERRORCHECKING_H_INCLUDED
#define ERRORCHECKING_H_INCLUDED
#include <cstring>

using namespace std;

namespace checkError
{
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
        int setPlace = 0;
        int setValid = 0;
        int setLengthError = 0;
        int setError = 0;

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
                        return 1;
                    }
                    setPlace ++;
            }

        if (checkString.length() == lengthStringFour.length())
        {
            if (checkString [0] == tileStringEast [0] || checkString [0] == tileStringSouth [0] || checkString [0] == tileStringWest [0] || checkString [0] == tileStringNorth [0] || checkString [0] ==tileStringGreen [0] || checkString [0] == tileStringRed [0] || checkString [0] == tileStringWhite [0])
            {
                if (checkString [0] != checkString [1] || checkString [0] != checkString [2] || checkString [0] != checkString [3])
                {
                    return 1;
                }
            }

            if (checkString [0] == tileStringPinzu [0] || checkString [0] == tileStringSouzu [0] || checkString [0] == tileStringManzu [0])
            {
                if (checkString [0] == checkString [1] || checkString [0] == checkString [2] || checkString [0] == checkString [3])
                {
                    return 1;
                }

                if (checkString [1] == tileStringEast [0] || checkString [1] == tileStringSouth [0] || checkString [1] == tileStringWest [0] || checkString [1] == tileStringNorth [0] || checkString [1] == tileStringGreen [0] || checkString [1] == tileStringRed [0] || checkString [1] == tileStringWhite [0] || checkString [2] == tileStringEast [0] || checkString [2] == tileStringSouth [0] || checkString [2] == tileStringWest [0] || checkString [2] == tileStringNorth [0] || checkString [2] == tileStringGreen [0] || checkString [2] == tileStringRed [0] || checkString [2] == tileStringWhite [0] || checkString [3] == tileStringEast [0] || checkString [3] == tileStringSouth [0] || checkString [3] == tileStringWest [0] || checkString [3] == tileStringNorth [0] || checkString [3] == tileStringGreen [0] || checkString [3] == tileStringRed [0] || checkString [3] == tileStringWhite [0])
                {
                    return 1;
                }
            }

            if (checkString [0] != tileStringEast [0] && checkString [0] != tileStringSouth [0] && checkString [0] != tileStringWest [0] && checkString [0] != tileStringNorth [0] && checkString [0] !=tileStringGreen [0] && checkString [0] != tileStringRed [0] && checkString [0] != tileStringWhite [0] && checkString [0] != tileStringPinzu [0] && checkString [0] != tileStringSouzu [0] && checkString [0] != tileStringManzu [0])
            {
                return 1;
            }
        }
        if (checkString.length() == lengthStringFive.length())
        {
            if (checkString [0] == checkString [1] || checkString [0] == checkString [2] || checkString [0] == checkString [3] || checkString [0] == checkString [4])
            {
                return 1;
            }

            if (checkString [1] != checkString [2] || checkString [1] != checkString [3] || checkString [1] != checkString [4])
            {
                return 1;
            }

            if (checkString [1] == tileStringEast [0] || checkString [1] == tileStringSouth [0] || checkString [1] == tileStringWest [0] || checkString [1] == tileStringNorth [0] || checkString [1] ==tileStringGreen [0] || checkString [1] == tileStringRed [0] || checkString [1] == tileStringWhite [0] || checkString [2] == tileStringEast [0] || checkString [2] == tileStringSouth [0] || checkString [2] == tileStringWest [0] || checkString [2] == tileStringNorth [0] || checkString [2] ==tileStringGreen [0] || checkString [2] == tileStringRed [0] || checkString [2] == tileStringWhite [0] || checkString [3] == tileStringEast [0] || checkString [3] == tileStringSouth [0] || checkString [3] == tileStringWest [0] || checkString [3] == tileStringNorth [0] || checkString [3] ==tileStringGreen [0] || checkString [3] == tileStringRed [0] || checkString [3] == tileStringWhite [0] || checkString [4] == tileStringEast [0] || checkString [4] == tileStringSouth [0] || checkString [4] == tileStringWest [0] || checkString [4] == tileStringNorth [0] || checkString [4] ==tileStringGreen [0] || checkString [4] == tileStringRed [0] || checkString [4] == tileStringWhite [0])
            {
                return 1;
            }
        }

        if (checkString.length() == lengthStringThree.length())
        {
            if (checkString [0] != tileStringEast [0] && checkString [0] != tileStringSouth [0] && checkString [0] != tileStringWest [0] && checkString [0] != tileStringNorth [0] && checkString [0] !=tileStringGreen [0] && checkString [0] != tileStringRed [0] && checkString [0] != tileStringWhite [0])
            {
                return 1;
            }

            if (checkString [0] != checkString [1] || checkString [0] != checkString [2])
            {
                return 1;
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
