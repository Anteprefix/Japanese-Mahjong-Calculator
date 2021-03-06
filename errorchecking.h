#ifndef ERRORCHECKING_H_INCLUDED
#define ERRORCHECKING_H_INCLUDEDs
#include <stdlib.h>
#include <iostream>
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

        if (checkString.length() == 3 && ((checkString.at(0) != tileStringEast.at(0)) && (checkString.at(0) != tileStringSouth.at(0)) && (checkString.at(0) != tileStringWest.at(0)) && (checkString.at(0) != tileStringNorth.at(0)) && (checkString.at(0) != tileStringRed.at(0)) && (checkString.at(0) != tileStringGreen.at(0)) && (checkString.at(0) != tileStringWhite.at(0))))
        {
            setLengthError = 1;                          // If the string length is exactly 3, the meld must be a pon of honors; if it were anything else the string length would be 4 since suit must be stated
        }

        if (checkString.length() > 4 && ((checkString.at(0) != tileStringManzu.at(0)) && (checkString.at(0) != tileStringPinzu.at(0)) && (checkString.at(0) != tileStringSouzu.at(0))))
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
                if ((checkString.at(setPlace) != tileStringEast.at(0)) && (checkString.at(setPlace) != tileStringSouth.at(0)) && (checkString.at(setPlace) != tileStringWest.at(0)) && (checkString.at(setPlace) != tileStringNorth.at(0)) && (checkString.at(setPlace) != tileStringRed.at(0)) && (checkString.at(setPlace) != tileStringWhite.at(0)) && (checkString.at(setPlace) != tileStringGreen.at(0)) && (checkString.at(setPlace) != tileStringManzu.at(0)) && (checkString.at(setPlace) != tileStringPinzu.at(0)) && (checkString.at(setPlace) != tileStringSouzu.at(0)) && (checkString.at(setPlace) != tileStringOne.at(0)) && (checkString.at(setPlace) != tileStringTwo.at(0)) && (checkString.at(setPlace) != tileStringThree.at(0)) && (checkString.at(setPlace) != tileStringFour.at(0)) && (checkString.at(setPlace) != tileStringFive.at(0)) && (checkString.at(setPlace) != tileStringSix.at(0)) && (checkString.at(setPlace) != tileStringSeven.at(0)) && (checkString.at(setPlace) != tileStringEight.at(0)) && (checkString.at(setPlace) != tileStringNine.at(0)))
                    {
                        return 1;                        // If the string is not comprised of defined strings, the meld is invalid
                    }
                    setPlace ++;
            }

        if (checkString.length() == lengthStringFour.length())
        {
            if (checkString.at(0) == tileStringEast.at(0) || checkString.at(0) == tileStringSouth.at(0) || checkString.at(0) == tileStringWest.at(0) || checkString.at(0) == tileStringNorth.at(0) || checkString.at(0) ==tileStringGreen.at(0) || checkString.at(0) == tileStringRed.at(0) || checkString.at(0) == tileStringWhite.at(0))
            {
                if (checkString.at(0) != checkString.at(1) || checkString.at(0) != checkString.at(2) || checkString.at(0) != checkString.at(3))
                {
                    return 1;                            // Checks for invalid honor kans
                }
            }

            if (checkString.at(0) == tileStringPinzu.at(0) || checkString.at(0) == tileStringSouzu.at(0) || checkString.at(0) == tileStringManzu.at(0))
            {
                if (checkString.at(0) == checkString.at(1) || checkString.at(0) == checkString.at(2) || checkString.at(0) == checkString.at(3))
                {
                    return 1;                            // Makes sure PBM are only at beginning of meld
                }

                if (checkString.at(1) == tileStringEast.at(0) || checkString.at(1) == tileStringSouth.at(0) || checkString.at(1) == tileStringWest.at(0) || checkString.at(1) == tileStringNorth.at(0) || checkString.at(1) == tileStringGreen.at(0) || checkString.at(1) == tileStringRed.at(0) || checkString.at(1) == tileStringWhite.at(0) || checkString.at(2) == tileStringEast.at(0) || checkString.at(2) == tileStringSouth.at(0) || checkString.at(2) == tileStringWest.at(0) || checkString.at(2) == tileStringNorth.at(0) || checkString.at(2) == tileStringGreen.at(0) || checkString.at(2) == tileStringRed.at(0) || checkString.at(2) == tileStringWhite.at(0) || checkString.at(3) == tileStringEast.at(0) || checkString.at(3) == tileStringSouth.at(0) || checkString.at(3) == tileStringWest.at(0) || checkString.at(3) == tileStringNorth.at(0) || checkString.at(3) == tileStringGreen.at(0) || checkString.at(3) == tileStringRed.at(0) || checkString.at(3) == tileStringWhite.at(0))
                {
                    return 1;                            // Makes sure ESWN/RHG are not present
                }

                if (checkString.at(1) != checkString.at(2) || checkString.at(1) != checkString.at(3) || checkString.at(2) != checkString.at(3))
                {
                    isTriplet = 0;                       // If the three characters following suit indicator are not the same, the meld is not a triplet
                }

                if (checkString.at(1) != tileStringZero.at(0) && checkString.at(1) != tileStringEight.at(0) && checkString.at(1) != tileStringNine.at(0))
                // No sense in checking for straight if the first tile isn't 1-7, quick check for invalid straight
                {
                    meldNumOne = (checkString.at(1) - '0');             // There has to be a better way of doing this.
                    meldNumTwo = (checkString.at(2)) - '0';             // Convert tile number to int for comparison
                    meldNumThree = (checkString.at(3)) - '0';

                    if (meldNumThree == meldNumTwo + 1 && meldNumTwo == meldNumOne + 1)
                    {
                        isStraight = 1;                  // Checks if tiles numbers are consecutive
                    }
                }

                if (!isStraight && !isTriplet)
                {
                    return 1;
                }
            }

            if (checkString.at(0) != tileStringEast.at(0) && checkString.at(0) != tileStringSouth.at(0) && checkString.at(0) != tileStringWest.at(0) && checkString.at(0) != tileStringNorth.at(0) && checkString.at(0) !=tileStringGreen.at(0) && checkString.at(0) != tileStringRed.at(0) && checkString.at(0) != tileStringWhite.at(0) && checkString.at(0) != tileStringPinzu.at(0) && checkString.at(0) != tileStringSouzu.at(0) && checkString.at(0) != tileStringManzu.at(0))
            {
                return 1;                                // The first character in a meld string must be an honor or indicate suit
            }
        }
        if (checkString.length() == lengthStringFive.length())      // Must be non-honor kan
        {
            if (checkString.at(0) == checkString.at(1) || checkString.at(0) == checkString.at(2) || checkString.at(0) == checkString.at(3) || checkString.at(0) == checkString.at(4))
            {
                return 1;                                // First character must indicate suit, so it can't be the same as any other character in the string - can't have five honor tiles
            }

            if (checkString.at(1) != checkString.at(2) || checkString.at(1) != checkString.at(3) || checkString.at(1) != checkString.at(4))
            {
                return 1;                                // Valid kans have four of the same tile
            }

            if (checkString.at(1) == tileStringEast.at(0) || checkString.at(1) == tileStringSouth.at(0) || checkString.at(1) == tileStringWest.at(0) || checkString.at(1) == tileStringNorth.at(0) || checkString.at(1) ==tileStringGreen.at(0) || checkString.at(1) == tileStringRed.at(0) || checkString.at(1) == tileStringWhite.at(0) || checkString.at(2) == tileStringEast.at(0) || checkString.at(2) == tileStringSouth.at(0) || checkString.at(2) == tileStringWest.at(0) || checkString.at(2) == tileStringNorth.at(0) || checkString.at(2) ==tileStringGreen.at(0) || checkString.at(2) == tileStringRed.at(0) || checkString.at(2) == tileStringWhite.at(0) || checkString.at(3) == tileStringEast.at(0) || checkString.at(3) == tileStringSouth.at(0) || checkString.at(3) == tileStringWest.at(0) || checkString.at(3) == tileStringNorth.at(0) || checkString.at(3) ==tileStringGreen.at(0) || checkString.at(3) == tileStringRed.at(0) || checkString.at(3) == tileStringWhite.at(0) || checkString.at(4) == tileStringEast.at(0) || checkString.at(4) == tileStringSouth.at(0) || checkString.at(4) == tileStringWest.at(0) || checkString.at(4) == tileStringNorth.at(0) || checkString.at(4) ==tileStringGreen.at(0) || checkString.at(4) == tileStringRed.at(0) || checkString.at(4) == tileStringWhite.at(0))
            {
                return 1;                                // Can't have five honor tiles
            }
        }

        if (checkString.length() == lengthStringThree.length())     // Must be honor pon
        {
            if (checkString.at(0) != tileStringEast.at(0) && checkString.at(0) != tileStringSouth.at(0) && checkString.at(0) != tileStringWest.at(0) && checkString.at(0) != tileStringNorth.at(0) && checkString.at(0) !=tileStringGreen.at(0) && checkString.at(0) != tileStringRed.at(0) && checkString.at(0) != tileStringWhite.at(0))
            {
                return 1;                                // Checking to make sure meld begins with honor tile
            }

            if (checkString.at(0) != checkString.at(1) || checkString.at(0) != checkString.at(2))
            {
                return 1;                                // Comparing known honor tile to rest of meld
            }
        }
        return 0;
    }

    int machiChecking (string checkMachi)
    {
        if (checkMachi.length() != lengthStringOne.length() || ((checkMachi.at(0) != tileStringZero.at(0)) && (checkMachi.at(0) != tileStringOne.at(0)) && (checkMachi.at(0) != tileStringTwo.at(0)) && (checkMachi.at(0) != tileStringThree.at(0))))
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

        if (convertString.at(0) == inputStringYes.at(0))
        {
            return 1;
        }

        if (convertString.at(0) == inputStringNo.at(0))
        {
            return 0;
        }

        if (convertString.at(0) != inputStringYes.at(0) && convertString.at(0) != inputStringNo.at(0))
        {
            return -1;
        }
    }
}

#endif // ERRORCHECKING_H_INCLUDED
