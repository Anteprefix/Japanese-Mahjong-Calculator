#include <iostream>
#include <string.h>
#include<math.h>
using namespace std;

int main()

{
    //initiate string inputs of tiles
    string tileStringFirst;
    string tileStringSecond;
    string tileStringThird;
    string tileStringFourth;
    string tileStringPair;
    string tileStringPairOne;
    string tileStringPairTwo;
    string tileStringPairThree;
    string tileStringPairFour;
    string tileStringPairFive;
    string tileStringPairSix;
    string tileStringPairSeven;
    string tileStringPinzu = "P";
    string tileStringPinzuLower = "p";
    string tileStringSouzu = "B";
    string tileStringSouzuLower = "b";
    string tileStringManzu = "M";
    string tileStringManzuLower = "m";
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
    string tileStringEastLower = "e";
    string tileStringSouth = "S";
    string tileStringSouthLower = "s";
    string tileStringWest = "W";
    string tileStringWestLower = "w";
    string tileStringNorth = "N";
    string tileStringNorthLower = "n";
    string tileStringGreen = "G";
    string tileStringGreenLower = "g";
    string tileStringRed = "R";
    string tileStringRedLower = "r";
    string tileStringWhite = "H";
    string tileStringWhiteLower = "h";
    string lengthStringFour = "0123";
    string lengthStringFive = "01234";
    string invalidInput = "Invalid choice. Please re-enter.\n";
    string invalidMeld = "Invalid meld. Please re-enter.\n";

    //initiate binary true false variables and counter variables
    string roundWind;
    string personalWind;
    int inputInvalid = 0;
    int setPlace = 0;
    int setOneValid = 0;
    int setOneLengthValid = 0;
    int setOneLengthError = 0;
    int setOneError = 0;
    int setOneClosed = 0;
    int setTwoValid = 0;
    int setTwoLengthValid = 0;
    int setTwoLengthError = 0;
    int setTwoError = 0;
    int setTwoClosed = 0;
    int setThreeValid = 0;
    int setThreeLengthValid = 0;
    int setThreeLengthError = 0;
    int setThreeError = 0;
    int setThreeClosed = 0;
    int setFourValid = 0;
    int setFourLengthValid = 0;
    int setFourLengthError = 0;
    int setFourError = 0;
    int setFourClosed = 0;
    int machi = 0;
    int tsumo = 0;
    int closed = 0;
    int chitoitsu = 0;
    int kokushi = 0;
    int kokushiThirteenWait = 0;
    int dealer = 0;
    int bonusRoundNumber = 0;
    int riichibon = 0;
    int dora = 0;
    int riichi = 0;
    int doubleRiichi = 0;
    int ippatsu = 0;
    int rinshan = 0;
    int chankan = 0;
    int haitei = 0;
    int houtei = 0;
    int paarenchan = 0;
    int renhou = 0;
    int chiihou = 0;
    int tenhou = 0;
    int yakumanCounter = 0;
    int chuuren = 0;
    int junseiChuuren = 0;
    int suuankou = 0;
    int suuankouTanki = 0;
    int shousuushi = 0;
    int daisuushi = 0;
    int daisangen = 0;
    int suukantsu = 0;
    int daichisei = 0;
    int tsuuiisou = 0;
    int chinroutou = 0;
    int ryuuiisou = 0;
    int daisharin = 0;
    int daichikurin = 0;
    int daisuurin = 0;
    int han = 0;
    int menzenTsumo = 0;
    int pinfu = 0;
    int itsuu = 0;
    int iipeikou = 0;
    int ryanpeikou = 0;
    int sanshokuDoujun = 0;
    int toitoi = 0;
    int sanankou = 0;
    int sanshokuDoukou = 0;
    int sankantsu = 0;
    int tanyao = 0;
    int yakuhaiHatsu = 0;
    int yakuhaiChun = 0;
    int yakuhaiHaku = 0;
    int yakuhaiTon = 0;
    int yakuhaiNan = 0;
    int yakuhaiSha = 0;
    int yakuhaiPei = 0;
    int chanta = 0;
    int junchanta = 0;
    int honroutou = 0;
    int shousangen= 0;
    int honitsuPinzu = 0;
    int honitsuSouzu = 0;
    int honitsuManzu = 0;
    int chinitsuPinzu = 0;
    int chinitsuSouzu = 0;
    int chinitsuManzu = 0;
    int fu = 20;
    int chombo = 0;
    float fuFloat = 0;
    int setOneFu = 0;
    int setTwoFu = 0;
    int setThreeFu = 0;
    int setFourFu = 0;
    int basicPoints = 0;
    float basicPointsFloat = 0;
    int tsumoNondealerPoints = 0;
    int tsumoDealerPoints = 0;
    int ronPoints = 0;
    int totalPoints = 0;

    //ask for input
    cout << "Was the winning wait Ryanmen/Shanpon (0), Penchan/Kanchan (1), Tanki (2), or 9+ Sided Wait (3)?\n";
    while (inputInvalid == 0)
    {
        cin >> machi;
        if (machi.length() != 1 && ((machi [0] != tileStringZero [0]) || (machi [0] != tileStringOne [0]) || (machi [0] != tileStringTwo [0]) || (machi [0] != tileStringThree [0])))
        {
            inputInvalid = 1;
            cout << invalidInput;
        }
    }

    cout << "Was the hand fully closed?(1/0)\n";
    cin >> closed;
    cout << "Did the player tsumo? (1/0)\n";
    cin >> tsumo;
    if (machi == 2)
    {
        cout << "Was the winning hand chitoitsu? (1/0)\n";
        cin >> chitoitsu;
    }
    else
    {
        chitoitsu = 0;
    }
    if (chitoitsu)
    {
        cout << "Input the pairs of the chitoitsu:\n";
        cout << "Pair one:\n";
        cin >> tileStringPairOne;
        cout << "Pair two:\n";
        cin >> tileStringPairTwo;
        cout << "Pair three:\n";
        cin >> tileStringPairThree;
        cout << "Pair four:\n";
        cin >> tileStringPairFour;
        cout << "Pair five:\n";
        cin >> tileStringPairFive;
        cout << "Pair six:\n";
        cin >> tileStringPairSix;
        cout << "Pair seven:\n";
        cin >> tileStringPairSeven;
    }

    if (!chitoitsu)
    {
        if (machi == 3 && closed)
        {
            cout << "Was the winning hand Kokushi Musou?\n";
            cin >> kokushi;
            if (kokushi == 1)
            {
                kokushiThirteenWait = 1;
            }

        }
        if (machi == 2 && closed)
        {
            cout << "Was the winning hand Kokushi Musou? (1/0)\n";
            cin >> kokushi;
            kokushiThirteenWait = 0;
        }
        if (!kokushi)
        {
            kokushi = 0;
            kokushiThirteenWait = 0;
            cout << "List in PBMH/123456789 order.\n";
            cout << "What was the first meld?\n";
            while (!setOneValid)
            {
                setOneLengthError = 0;
                cin >> tileStringFirst;
                if (tileStringFirst.length() < 3)
                {
                    cout << invalid;                                // Melds MUST be comprised of at least three tiles
                    setOneLengthError = 1;
                }
                if (tileStringFirst.length() == 3 && ((tileStringFirst [0] != tileStringEast [0]) || (tileStringFirst [0] != tileStringSouth [0]) || (tileStringFirst [0] != tileStringWest [0]) || (tileStringFirst [0] != tileStringNorth[0]) || (tileStringFirst [0] != tileStringRed [0]) || (tileStringFirst [0] != tileStringGreen [0]) || (tileStringFirst [0] != tileStringWhite [0])))
                {
                    setOneLengthError = 1;                          // If the string length is exactly 3, the meld must be a pon of honors; if it were anything else the string length would be 4 since suit must be stated
                }
                if (tileStringFirst.length() > 4 && ((tileStringFirst [0] != tileStringManzu [0]) || (tileStringFirst [0] != tileStringPinzu [0]) || (tileStringFirst [0] == tileStringSouzu [0])))
                {
                    setOneLengthError = 1;                          // Any strings with length 5 indicate kans of normal tiles; there are only four of each tile, so having five of an honor tile is impossible
                }
                if (tileStringFirst.length() > 5)
                {
                    setOneLengthError = 1;                          // The maximum string length for a single meld is 5: 1 to declare suit plus 4 for a kan; anything beyond that is impossible to obtain
                }
                if (setOneLengthError == 1)
                {
                    cout << invalid;
                    continue;                                       // If the meld does not satisfy the above conditions, the loop is reset and the user prompted to retry
                }
                setOneLengthValid = 1;
                while (!setOneValid)
                {
                    setOneError = 0;
                    for (setPlace = 0; ((tileStringFirst [setPlace] != tileStringEast [0]) || (tileStringFirst [setPlace] != tileStringSouth [0]) || (tileStringFirst [setPlace] != tileStringWest [0]) || (tileStringFirst [setPlace] != tileStringNorth [0]) || (tileStringFirst [setPlace] != tileStringRed [0]) || (tileStringFirst [setPlace] != tileStringWhite [0]) || (tileStringFirst [setPlace] != tileStringGreen [0]) || (tileStringFirst [setPlace] != tileStringManzu [0]) || (tileStringFirst [setPlace] != tileStringPinzu [0]) || (tileStringFirst [setPlace] != tileStringSouzu [0]) || (tileStringFirst [setPlace] != tileStringOne [0]) || (tileStringFirst [setPlace] != tileStringTwo [0]) || (tileStringFirst [setPlace] != tileStringThree [0]) || (tileStringFirst [setPlace] != tileStringFour [0]) || (tileStringFirst [setPlace] != tileStringFive [0]) || (tileStringFirst [setPlace] != tileStringSix [0]) || (tileStringFirst [setPlace] != tileStringSeven [0]) || (tileStringFirst [setPlace] != tileStringEight [0]) || (tileStringFirst [setPlace] != tileStringNine [0])); setPlace++)
                    {
                        setOneError == 1;
                        cout << invalid;
                        break;
                    }
                    if (setOneError == 1)
                    {
                        break;
                    }
                    setOneValid == 1;
                }
            }
            cout << "Was it FULLY closed?\n";
            cin >> setOneClosed;
            cout << "What was the second meld?\n";
            cin >> tileStringSecond;
            cout << "Was it FULLY closed?\n";
            cin >> setTwoClosed;
            cout << "What was the third meld?\n";
            cin >> tileStringThird;
            cout << "Was it FULLY closed?\n";
            cin >> setThreeClosed;
            cout << "What was the fourth meld?\n";
            cin >> tileStringFourth;
            cout << "Was it FULLY closed?\n";
            cin >> setFourClosed;
            cout << "What was the pair?\n";
            cin >> tileStringPair;
        }
    }

    cout << "Input E/S/W/N for the next two:\n";
    cout << "Round Wind was:\n";
    cin >> roundWind;
    cout << "Personal Wind was:\n";
    cin >> personalWind;
    cout << "Input number for:\n";
    cout << "Number of bonus sticks on table:\n";
    cin >> bonusRoundNumber;
    cout << "Number of Riichi sticks on table, including any the winner put:\n";
    cin >> riichibon;
    cout << "Total dora value of hand\n";
    cin >> dora;
    cout << "Input 1 for yes, 0 for no\n";
    if (personalWind [0] == tileStringEast [0])
    {
        dealer = 1;
    }
    if (riichibon != 0)
    {
        cout << "Did the winner declare Riichi?\n";
        cin >> riichi;
    }
    else
    {
        riichi = 0;
    }

    if (riichi)
    {
        cout << "Was it declared on the first turn without interruption?\n";
        cin >> doubleRiichi;
        cout << "Did the winner win in one turn of Riichi without interruption?\n";
        cin >> ippatsu;
    }
    else
    {
        doubleRiichi = 0;
        ippatsu = 0;
    }
    if (!chitoitsu && tsumo)
    {
        cout << "Did the winner declare kan, then win on the extra draw?\n";
        cin >> rinshan;
    }
    if (!rinshan && !tsumo)
    {
        cout << "Did the winner ron off of a late kan?\n";
        cin >> chankan;
    }
    else
    {
        chankan = 0;
    }
    if (!rinshan && !chankan && tsumo)
    {
        cout << "Did the winner tsumo on the last tile?\n";
        cin >> haitei;
    }
    else
    {
        haitei = 0;
    }
    if (!rinshan && !chankan && !haitei && !tsumo)
    {
        cout << "Did the winner ron on the last tile?\n";
        cin >> houtei;
    }
    else
    {
        houtei = 0;
    }
    cout << "Is this the eighth consecutive victory for the winner?\n";
    cin >> paarenchan;
    if (!dealer && !riichi && !rinshan && !chankan && !haitei && !houtei)
        {
            if (tsumo)
            {
                cout << "Did the winner tsumo on the first draw? (Nondealer only)\n";
                cin >> chiihou;
            }

            if (!tsumo)
            {
                cout << "Did the winner ron off the first discard without interruption?\n";
                cin >> renhou;
            }

        }
    else
    {
        renhou = 0;
        chiihou = 0;
    }
    if (dealer && !riichi && !rinshan && !chankan && !haitei && !houtei && tsumo)
    {
        cout << "Did the winner tsumo on the first draw? (Dealer only)\n";
        cin >> tenhou;
    }
    else
    {
        tenhou = 0;
    }

    //Check for yakuman
    if (renhou)
    {
        yakumanCounter ++;
    }

    if (chiihou)
    {
        yakumanCounter ++;
    }

    if (tenhou)
    {
        yakumanCounter ++;
    }

    if (paarenchan)
    {
        yakumanCounter ++;
    }

    if (kokushi)
    {
        yakumanCounter ++;
        if (kokushiThirteenWait)
        {
            yakumanCounter ++;
        }
    }

    if (!kokushi && !chitoitsu)
    {
        if ((/*Check if same suit for everything*/tileStringFirst [0] == tileStringSecond [0] && tileStringFirst [0] == tileStringThird [0] && tileStringFirst [0] == tileStringFourth [0] && tileStringFirst [0] == tileStringPair [0]) && /*Check if fully closed*/(closed) && (/*Extra 1*/(tileStringFirst [1] == tileStringOne [0] && tileStringFirst [2] == tileStringOne [0] && tileStringFirst [3] == tileStringOne [0] && tileStringSecond [1] == tileStringOne [0] && tileStringSecond [2] == tileStringTwo [0] && tileStringSecond [3] == tileStringThree [0] && tileStringThird [1] == tileStringFour [0] && tileStringThird [2] == tileStringFive [0] && tileStringThird [3] == tileStringSix [0] && tileStringFourth [1] == tileStringSeven [0] && tileStringFourth [2] == tileStringEight [0] && tileStringFourth [3] == tileStringNine [0] && tileStringPair [1] == tileStringNine [0]) || /*Extra 2*/(tileStringFirst [1] == tileStringOne [0] && tileStringFirst [2] == tileStringOne [0] && tileStringFirst [3] == tileStringOne [0] && tileStringSecond [1] == tileStringThree [0] && tileStringSecond [2] == tileStringFour [0] && tileStringSecond [3] == tileStringFive [0] && tileStringThird [1] == tileStringSix [0] && tileStringThird [2] == tileStringSeven [0] && tileStringThird [3] == tileStringEight [0] && tileStringFourth [1] == tileStringNine [0] && tileStringFourth [2] == tileStringNine [0] && tileStringFourth [3] == tileStringNine [0] && tileStringPair [1] == tileStringTwo [0]) || /*Extra 3*/(tileStringFirst [1] == tileStringOne [0] && tileStringFirst [2] == tileStringTwo [0] && tileStringFirst [3] == tileStringThree [0] && tileStringSecond [1] == tileStringThree [0] && tileStringSecond [2] == tileStringFour [0] && tileStringSecond [3] == tileStringFive [0] && tileStringThird [1] == tileStringSix [0] && tileStringThird [2] == tileStringSeven [0] && tileStringThird [3] == tileStringEight [0] && tileStringFourth [1] == tileStringNine [0] && tileStringFourth [2] == tileStringNine [0] && tileStringFourth [3] == tileStringNine [0] && tileStringPair [1] == tileStringOne [0]) || /*Extra 4*/(tileStringFirst [1] == tileStringOne [0] && tileStringFirst [2] == tileStringOne [0] && tileStringFirst [3] == tileStringOne [0] && tileStringSecond [1] == tileStringTwo [0] && tileStringSecond [2] == tileStringThree [0] && tileStringSecond [3] == tileStringFour [0] && tileStringThird [1] == tileStringFour [0] && tileStringThird [2] == tileStringFive [0] && tileStringThird [3] == tileStringSix [0] && tileStringFourth [1] == tileStringSeven [0] && tileStringFourth [2] == tileStringEight [0] && tileStringFourth [3] == tileStringNine [0] && tileStringPair [1] == tileStringNine [0]) || /*Extra 5*/(tileStringFirst [1] == tileStringOne [0] && tileStringFirst [2] == tileStringOne [0] && tileStringFirst [3] == tileStringOne [0] && tileStringSecond [1] == tileStringTwo [0] && tileStringSecond [2] == tileStringThree [0] && tileStringSecond [3] == tileStringFour [0] && tileStringThird [1] == tileStringSix [0] && tileStringThird [2] == tileStringSeven [0] && tileStringThird [3] == tileStringEight [0] && tileStringFourth [1] == tileStringNine [0] && tileStringFourth [2] == tileStringNine [0] && tileStringFourth [3] == tileStringNine [0] && tileStringPair [1] == tileStringFive [0]) || /*Extra 6*/(tileStringFirst [1] == tileStringOne [0] && tileStringFirst [2] == tileStringTwo [0] && tileStringFirst [3] == tileStringThree [0] && tileStringSecond [1] == tileStringFour [0] && tileStringSecond [2] == tileStringFive [0] && tileStringSecond [3] == tileStringSix [0] && tileStringThird [1] == tileStringSix [0] && tileStringThird [2] == tileStringSeven [0] && tileStringThird [3] == tileStringEight [0] && tileStringFourth [1] == tileStringNine [0] && tileStringFourth [2] == tileStringNine [0] && tileStringFourth [3] == tileStringNine [0] && tileStringPair [1] == tileStringOne [0]) || /*Extra 7*/(tileStringFirst [1] == tileStringOne [0] && tileStringFirst [2] == tileStringOne [0] && tileStringFirst [3] == tileStringOne [0] && tileStringSecond [1] == tileStringTwo [0] && tileStringSecond [2] == tileStringThree [0] && tileStringSecond [3] == tileStringFour [0] && tileStringThird [1] == tileStringFive [0] && tileStringThird [2] == tileStringSix [0] && tileStringThird [3] == tileStringSeven [0] && tileStringFourth [1] == tileStringSeven [0] && tileStringFourth [2] == tileStringEight [0] && tileStringFourth [3] == tileStringNine [0] && tileStringPair [1] == tileStringNine [0]) || /*Extra 8*/(tileStringFirst [1] == tileStringOne [0] && tileStringFirst [2] == tileStringOne [0] && tileStringFirst [3] == tileStringOne [0] && tileStringSecond [1] == tileStringTwo [0] && tileStringSecond [2] == tileStringThree [0] && tileStringSecond [3] == tileStringFour [0] && tileStringThird [1] == tileStringFive [0] && tileStringThird [2] == tileStringSix [0] && tileStringThird [3] == tileStringSeven [0] && tileStringFourth [1] == tileStringNine [0] && tileStringFourth [2] == tileStringNine [0] && tileStringFourth [3] == tileStringNine [0] && tileStringPair [1] == tileStringEight [0]) || /*Extra 9*/(tileStringFirst [1] == tileStringOne [0] && tileStringFirst [2] == tileStringTwo [0] && tileStringFirst [3] == tileStringThree [0] && tileStringSecond [1] == tileStringFour [0] && tileStringSecond [2] == tileStringFive [0] && tileStringSecond [3] == tileStringSix [0] && tileStringThird [1] == tileStringSeven [0] && tileStringThird [2] == tileStringEight [0] && tileStringThird [3] == tileStringNine [0] && tileStringFourth [1] == tileStringNine [0] && tileStringFourth [2] == tileStringNine [0] && tileStringFourth [3] == tileStringNine [0] && tileStringPair [1] == tileStringOne [0])))
        {
            yakumanCounter ++;
            chuuren = 1;
            if (machi == 3)
            {
                yakumanCounter ++;
                junseiChuuren = 1;

            }

        }

    }

    if (!kokushi && !chitoitsu && !chuuren && closed)
    {
        if (setOneClosed && setTwoClosed && setThreeClosed && setFourClosed && tileStringFirst [1] == tileStringFirst [2] && tileStringSecond [1] == tileStringSecond [2] && tileStringThird [1] == tileStringThird [2] && tileStringFourth [1] == tileStringFourth [2])
        {
            suuankou = 1;
            yakumanCounter ++;
            if (machi = 2)
            {
                suuankouTanki = 1;
                yakumanCounter ++;
            }
        }
    }
    if (!kokushi && !chitoitsu && !chuuren)
    {
        if ((((tileStringFirst [0] == tileStringEast [0] || tileStringFirst [0] == tileStringSouth [0]) && (tileStringSecond [0] == tileStringSouth [0] || tileStringSecond [0] == tileStringWest [0]) && (tileStringThird [0] == tileStringWest [0] || tileStringThird [0] == tileStringNorth [0])) || ((tileStringSecond [0] == tileStringEast [0] || tileStringSecond [0] == tileStringSouth [0]) && (tileStringThird [0] == tileStringSouth [0] || tileStringThird == tileStringWest) && (tileStringFourth [0] == tileStringWest [0] || tileStringFourth [0] == tileStringNorth [0]))) && (tileStringPair [0] == tileStringEast [0] || tileStringPair [0] == tileStringSouth [0] || tileStringPair [0] == tileStringWest [0] || tileStringPair [0] == tileStringNorth [0]))
        {
            shousuushi = 1;
            yakumanCounter ++;
        }
    }

    if (!kokushi && !chitoitsu && !chuuren && !shousuushi)
    {
        if (tileStringFirst [0] == tileStringEast [0] && tileStringSecond [0] == tileStringSouth [0] && tileStringThird [0] == tileStringWest [0] && tileStringFourth [0] == tileStringNorth [0])
        {
            daisuushi = 1;
            yakumanCounter = yakumanCounter + 2;
        }
    }

    if (!kokushi && !chitoitsu && !chuuren)
    {
        if (tileStringSecond [0] == tileStringGreen [0] && tileStringThird [0] == tileStringRed [0] && tileStringFourth [0] == tileStringWhite [0])
        {
            daisangen = 1;
            yakumanCounter ++;
        }
    }

    if (!kokushi && !chitoitsu && !chuuren)
    {
        if (((tileStringFirst.length() == lengthStringFour.length() && (tileStringFirst [0] == tileStringEast [0] || tileStringFirst [0] == tileStringSouth [0] || tileStringFirst [0] == tileStringWest [0] || tileStringFirst [0] == tileStringNorth [0] || tileStringFirst [0] == tileStringGreen [0] || tileStringFirst [0] == tileStringRed [0] || tileStringFirst [0] == tileStringWhite [0])) || (((tileStringFirst.length() == lengthStringFive.length() && (tileStringFirst [0] == tileStringPinzu [0] || tileStringFirst [0] == tileStringSouzu [0] || tileStringFirst [0] == tileStringManzu [0]))))) && ((tileStringSecond.length() == lengthStringFour.length() && (tileStringSecond [0] == tileStringEast [0] || tileStringSecond [0] == tileStringSouth [0] || tileStringSecond [0] == tileStringWest [0] || tileStringSecond [0] == tileStringNorth [0] || tileStringSecond [0] == tileStringGreen [0] || tileStringSecond [0] == tileStringRed [0] || tileStringSecond [0] == tileStringWhite [0])) || (((tileStringSecond.length() == lengthStringFive.length() && (tileStringSecond [0] == tileStringPinzu [0] || tileStringSecond [0] == tileStringSouzu [0] || tileStringSecond [0] == tileStringManzu [0]))))) && ((tileStringThird.length() == lengthStringFour.length() && (tileStringThird [0] == tileStringEast [0] || tileStringThird [0] == tileStringSouth [0] || tileStringThird [0] == tileStringWest [0] || tileStringThird [0] == tileStringNorth [0] || tileStringThird [0] == tileStringGreen [0] || tileStringThird [0] == tileStringRed [0] || tileStringThird [0] == tileStringWhite [0])) || (((tileStringThird.length() == lengthStringFive.length() && (tileStringThird [0] == tileStringPinzu [0] || tileStringThird [0] == tileStringSouzu [0] || tileStringThird [0] == tileStringManzu [0]))))) && ((tileStringFourth.length() == lengthStringFour.length() && (tileStringFourth [0] == tileStringEast [0] || tileStringFourth [0] == tileStringSouth [0] || tileStringFourth [0] == tileStringWest [0] || tileStringFourth [0] == tileStringNorth [0] || tileStringFourth [0] == tileStringGreen [0] || tileStringFourth [0] == tileStringRed [0] || tileStringFourth [0] == tileStringWhite [0])) || (((tileStringFourth.length() == lengthStringFive.length() && (tileStringFourth [0] == tileStringPinzu [0] || tileStringFourth [0] == tileStringSouzu [0] || tileStringFourth [0] == tileStringManzu [0]))))))
        {
            suukantsu = 1;
            yakumanCounter ++;
        }
    }

    if (!kokushi && !chuuren)
    {
        if (chitoitsu)
        {
            if (tileStringPairOne [0] == tileStringEast [0] && tileStringPairTwo [0] == tileStringSouth [0] && tileStringPairThree [0] == tileStringWest [0] && tileStringPairFour [0] == tileStringNorth [0] && tileStringPairFive [0] == tileStringGreen [0] && tileStringPairSix [0] == tileStringRed [0] && tileStringPairSeven [0] == tileStringWhite [0])
            {
                tsuuiisou = 1;
                daichisei = 1;
                yakumanCounter = yakumanCounter + 2;
            }
        }

        if (!chitoitsu)
        {
            if ((tileStringFirst [0] == tileStringEast [0] || tileStringFirst [0] == tileStringSouth [0] || tileStringFirst [0] == tileStringWest [0] || tileStringFirst [0] == tileStringNorth [0] || tileStringFirst [0] == tileStringGreen [0] || tileStringFirst [0] == tileStringRed [0] || tileStringFirst [0] == tileStringWhite [0]) && (tileStringSecond [0] == tileStringEast [0] || tileStringSecond [0] == tileStringSouth [0] || tileStringSecond [0] == tileStringWest [0] || tileStringSecond [0] == tileStringNorth [0] || tileStringSecond [0] == tileStringGreen [0] || tileStringSecond [0] == tileStringRed [0] || tileStringSecond [0] == tileStringWhite [0]) && (tileStringThird [0] == tileStringEast [0] || tileStringThird [0] == tileStringSouth [0] || tileStringThird [0] == tileStringWest [0] || tileStringThird [0] == tileStringNorth [0] || tileStringThird [0] == tileStringGreen [0] || tileStringThird [0] == tileStringRed [0] || tileStringThird [0] == tileStringWhite [0]) && (tileStringFourth [0] == tileStringEast [0] || tileStringFourth [0] == tileStringSouth [0] || tileStringFourth [0] == tileStringWest [0] || tileStringFourth [0] == tileStringNorth [0] || tileStringFourth [0] == tileStringGreen [0] || tileStringFourth [0] == tileStringRed [0] || tileStringFourth [0] == tileStringWhite [0]) && (tileStringPair [0] == tileStringEast [0] || tileStringPair [0] == tileStringSouth [0] || tileStringPair [0] == tileStringWest [0] || tileStringPair [0] == tileStringNorth [0] || tileStringPair [0] == tileStringGreen [0] || tileStringPair [0] == tileStringRed [0] || tileStringPair [0] == tileStringWhite [0]))
            {
                tsuuiisou = 1;
                yakumanCounter ++;
            }
        }
    }

    if (!tsuuiisou && !kokushi && !chuuren && !chitoitsu)
    {
        if ((tileStringFirst [1] == tileStringOne [0] || tileStringFirst [1] == tileStringNine [0]) && (tileStringSecond [1] == tileStringOne [0] || tileStringSecond [1] == tileStringNine [0]) && (tileStringThird [1] == tileStringOne [0] || tileStringThird [1] == tileStringNine [0]) && (tileStringFourth [1] == tileStringOne [0] || tileStringFourth [1] == tileStringNine [0]) && (tileStringPair [1] == tileStringOne [0] || tileStringPair [1] == tileStringNine [0]) && (tileStringFirst [1] == tileStringFirst [2] && tileStringSecond [1] == tileStringSecond [2] && tileStringThird [1] == tileStringThird [2] && tileStringFourth [1] == tileStringFourth [2]))
        {
            chinroutou = 1;
            yakumanCounter ++;
        }
    }

    if (!chitoitsu && !kokushi && !chuuren && !tsuuiisou)
    {
        if ((tileStringFirst [0] == tileStringSouzu [0] && tileStringSecond [0] == tileStringSouzu [0] && tileStringThird [0] == tileStringSouzu [0] && (tileStringFourth [0] == tileStringSouzu [0] || tileStringFourth [0] == tileStringGreen [0]) && (tileStringPair [0] == tileStringSouzu [0] || tileStringPair [0] == tileStringGreen [0])) && (tileStringFirst [1] == tileStringTwo [0] || (tileStringFirst [1] == tileStringThree [0] && tileStringFirst [2] == tileStringThree [0]) || (tileStringFirst [1] == tileStringFour [0] && tileStringFirst [2] == tileStringFour [0]) || (tileStringFirst [1] == tileStringSix [0] && tileStringFirst [2] == tileStringSix [0]) || (tileStringFirst [1] == tileStringEight [0] && tileStringFirst [2] == tileStringEight [0]) || tileStringFirst [0] == tileStringGreen [0]) &&  (tileStringSecond [1] == tileStringTwo [0] || (tileStringSecond [1] == tileStringThree [0] && tileStringSecond [2] == tileStringThree [0]) || (tileStringSecond [1] == tileStringFour [0] && tileStringSecond [2] == tileStringFour [0]) || (tileStringSecond [1] == tileStringSix [0] && tileStringSecond [2] == tileStringSix [0]) || (tileStringSecond [1] == tileStringEight [0] && tileStringSecond [2] == tileStringEight [0]) || tileStringSecond [0] == tileStringGreen [0]) &&  (tileStringThird [1] == tileStringTwo [0] || (tileStringThird [1] == tileStringThree [0] && tileStringThird [2] == tileStringThree [0]) || (tileStringThird [1] == tileStringFour [0] && tileStringThird [2] == tileStringFour [0]) || (tileStringThird [1] == tileStringSix [0] && tileStringThird [2] == tileStringSix [0]) || (tileStringThird [1] == tileStringEight [0] && tileStringThird [2] == tileStringEight [0]) || tileStringThird [0] == tileStringGreen [0]) &&  (tileStringFourth [1] == tileStringTwo [0] || (tileStringFourth [1] == tileStringThree [0] && tileStringFourth [2] == tileStringThree [0]) || (tileStringFourth [1] == tileStringFour [0] && tileStringFourth [2] == tileStringFour [0]) || (tileStringFourth [1] == tileStringSix [0] && tileStringFourth [2] == tileStringSix [0]) || (tileStringFourth [1] == tileStringEight [0] && tileStringFourth [2] == tileStringEight [0]) || tileStringFourth [0] == tileStringGreen [0]) &&  (tileStringPair [1] == tileStringTwo [0] || (tileStringPair [1] == tileStringThree [0] && tileStringPair [2] == tileStringThree [0]) || (tileStringPair [1] == tileStringFour [0] && tileStringPair [2] == tileStringFour [0]) || (tileStringPair [1] == tileStringSix [0] && tileStringPair [2] == tileStringSix [0]) || (tileStringPair [1] == tileStringEight [0] && tileStringPair [2] == tileStringEight [0]) || tileStringPair [0] == tileStringGreen [0]))
        {
            ryuuiisou = 1;
            yakumanCounter ++;
        }
    }

    if (!chitoitsu && !kokushi && !chuuren && !tsuuiisou)
    {
        if (tileStringFirst [0] == tileStringSecond [0] && tileStringFirst [0] == tileStringThird [0] && tileStringFirst [0] == tileStringFourth [0] && tileStringFirst [0] == tileStringPair [0] && ((tileStringFirst [1] == tileStringTwo [0] && tileStringFirst [2] == tileStringThree [0] && tileStringSecond [1] == tileStringTwo [0] && tileStringSecond [2] == tileStringThree [0] && tileStringThird [1] == tileStringFive [0] && tileStringThird [2] == tileStringSix [0] && tileStringFourth [1] == tileStringFive [0] && tileStringFourth [2] == tileStringSix [0] && tileStringPair [1] == tileStringEight [0]) || (tileStringFirst [1] == tileStringTwo [0] && tileStringFirst [2] == tileStringThree [0] && tileStringSecond [1] == tileStringTwo [0] && tileStringSecond [2] == tileStringThree [0] && tileStringThird [1] == tileStringSix [0] && tileStringThird [2] == tileStringSeven [0] && tileStringFourth [1] == tileStringSix [0] && tileStringFourth [2] == tileStringSeven [0] && tileStringPair [1] == tileStringFive [0]) || (tileStringFirst [1] == tileStringThree [0] && tileStringFirst [2] == tileStringFour [0] && tileStringSecond [1] == tileStringThree [0] && tileStringSecond [2] == tileStringFour [0] && tileStringThird [1] == tileStringFive [0] && tileStringThird [2] == tileStringSix [0] && tileStringFourth [1] == tileStringFive [0] && tileStringFourth [2] == tileStringSix [0] && tileStringPair [1] == tileStringTwo [0])))
        {
            if (tileStringFirst [0] == tileStringPinzu [0])
            {
                daisharin = 1;
                yakumanCounter ++;
            }

            if (tileStringFirst [0] == tileStringSouzu [0])
            {
                daichikurin = 1;
                yakumanCounter ++;
            }

            if (tileStringFirst [0] == tileStringManzu [0])
            {
                daisuurin = 1;
                yakumanCounter ++;
            }
        }
    }

    if (yakumanCounter < 1)
    {
        if (riichi)
        {
            han ++;
            if (doubleRiichi)
            {
                han ++;
            }

            if (ippatsu)
            {
                han ++;
            }
        }

        if (chitoitsu)
        {
            han = han + 2;
        }

        if (tsumo && closed)
        {
            menzenTsumo = 1;
            han ++;
        }

        if (haitei)
        {
            han ++;
        }

        if (houtei)
        {
            han ++;
        }

        if (rinshan)
        {
            han ++;
        }

        if (chankan)
        {
            han ++;
        }

        if (!chitoitsu && machi == 0 && closed && tileStringFirst [1] != tileStringFirst [2] && tileStringSecond [1] != tileStringSecond [2] && tileStringThird [1] != tileStringThird [2] && tileStringFourth [1] != tileStringFourth [2]  && tileStringPair [0] != roundWind [0] && tileStringPair [0] != personalWind [0] && tileStringPair [0] != tileStringGreen [0] && tileStringPair [0] != tileStringRed [0] && tileStringPair [0] != tileStringWhite [0])
        {
            pinfu = 1;
            han ++;
        }

        if ((!chitoitsu && tileStringFirst [1] == tileStringOne [0] && tileStringFirst [2] == tileStringTwo [0] && tileStringSecond [1] == tileStringFour [0] && tileStringSecond [2] == tileStringFive [0] && tileStringThird [1] == tileStringSeven [0] && tileStringThird [2] == tileStringEight [0]) || (tileStringSecond [1] == tileStringOne [0] && tileStringSecond [2] == tileStringTwo [0] && tileStringThird [1] == tileStringFour [0] && tileStringThird [2] == tileStringFive [0] && tileStringFourth [1] == tileStringSeven [0] && tileStringFourth [2] == tileStringEight [0]))
        {
            itsuu = 1;
            if (closed)
            {
                han = han + 2;
            }

            else
            {
                han ++;
            }
        }

        if ((!chitoitsu && closed && tileStringFirst [0] == tileStringSecond [0] && tileStringFirst [1] != tileStringFirst [2] && tileStringSecond [1] != tileStringSecond [2] && tileStringFirst [1] == tileStringSecond [1]) || (tileStringSecond [0] == tileStringThird [0] && tileStringSecond [1] != tileStringSecond [2] && tileStringThird [1] != tileStringThird [2] && tileStringSecond [1] == tileStringThird [1]) || (tileStringThird [0] == tileStringFourth [0] && tileStringThird [1] != tileStringThird [2] && tileStringFourth [1] != tileStringFourth [2] && tileStringThird [1] == tileStringFourth [1]))
        {
            iipeikou = 1;
            han ++;
        }

        if (!chitoitsu && iipeikou && (tileStringFirst [0] == tileStringSecond [0] && tileStringFirst [1] != tileStringFirst [2] && tileStringSecond [1] != tileStringSecond [2] && tileStringFirst [1] == tileStringSecond [1]) && (tileStringThird [0] == tileStringFourth [0] && tileStringThird [1] != tileStringThird [2] && tileStringFourth [1] != tileStringFourth [2] && tileStringThird [1] == tileStringFourth [1]))
        {
            ryanpeikou = 1;
            han = han + 2;
        }

        if (!chitoitsu && (tileStringFirst [0] != tileStringSecond [0] && tileStringFirst [0] != tileStringThird [0] && tileStringSecond [0] != tileStringThird [0] && tileStringFirst [1] != tileStringFirst [2] && tileStringSecond [1] != tileStringSecond [2] && tileStringThird [1] != tileStringThird [2] && tileStringFirst [1] == tileStringSecond [1] && tileStringFirst [1] == tileStringThird [1]) || (tileStringSecond [0] != tileStringThird [0] && tileStringSecond [0] != tileStringFourth [0] && tileStringThird [0] != tileStringFourth [0] && tileStringSecond [1] != tileStringSecond [2] && tileStringThird [1] != tileStringThird [2] && tileStringFourth [1] != tileStringFourth [2] && tileStringSecond [1] == tileStringThird [1] && tileStringSecond [1] == tileStringFourth [1]) || (tileStringFirst [0] != tileStringThird [0] && tileStringFirst [0] != tileStringFourth [0] && tileStringThird [0] != tileStringFourth [0] && tileStringFirst [1] != tileStringFirst [2] && tileStringThird [1] != tileStringThird [2] && tileStringFourth [1] != tileStringFourth [2] && tileStringFirst [1] == tileStringThird [1] && tileStringFirst [1] == tileStringFourth [1]) || (tileStringFirst [0] != tileStringSecond [0] && tileStringFirst [0] != tileStringFourth [0] && tileStringSecond [0] != tileStringFourth [0] && tileStringFirst [1] != tileStringFirst [2] && tileStringSecond [1] != tileStringSecond [2] && tileStringFourth [1] != tileStringFourth [2] && tileStringFirst [1] == tileStringSecond [1] && tileStringFirst [1] == tileStringFourth [1]))
        {
            sanshokuDoujun = 1;
            if (closed)
            {
                han = han + 2;
            }
            else
            {
                han ++;
            }
        }

        if (!chitoitsu && tileStringFirst [1] == tileStringFirst [2] && tileStringSecond [1] == tileStringSecond [2] && tileStringThird [1] == tileStringThird [2] && tileStringFourth [1] == tileStringFourth [2])
        {
            toitoi = 1;
            han = han + 2;
        }

        if (!chitoitsu && ((tileStringFirst [1] == tileStringFirst [2] && tileStringSecond [1] == tileStringSecond [2] && tileStringThird [1] == tileStringThird [2] && setOneClosed && setTwoClosed && setThreeClosed) || (tileStringFirst [1] == tileStringFirst [2] && tileStringSecond [1] == tileStringSecond [2] && tileStringFourth [1] == tileStringFourth [2] && setOneClosed && setTwoClosed && setFourClosed) || (tileStringFirst [1] == tileStringFirst [2] && tileStringThird [1] == tileStringThird [2] && tileStringFourth [1] == tileStringFourth [2] && setOneClosed && setThreeClosed && setFourClosed) || (tileStringSecond [1] == tileStringSecond [2] && tileStringThird [1] == tileStringThird [2] && tileStringFourth [1] == tileStringFourth [2] && setTwoClosed && setThreeClosed && setFourClosed)))
        {
            sanankou = 1;
            han = han + 2;
        }

        if (!chitoitsu && ((tileStringFirst [0] == tileStringPinzu [0] && tileStringSecond [0] == tileStringSouzu [0] && tileStringThird [0] == tileStringManzu [0] && tileStringFirst [1] == tileStringFirst [2] && tileStringSecond [1] == tileStringSecond [2] && tileStringThird [1] == tileStringThird [2] && tileStringFirst [1] == tileStringSecond [1] && tileStringFirst [1] == tileStringThird [1]) || (tileStringFirst [0] == tileStringPinzu [0] && tileStringSecond [0] == tileStringSouzu [0] && tileStringFourth [0] == tileStringManzu [0] && tileStringFirst [1] == tileStringFirst [2] && tileStringSecond [1] == tileStringSecond [2] && tileStringFourth [1] == tileStringFourth [2] && tileStringFirst [1] == tileStringSecond [1] && tileStringFirst [1] == tileStringFourth [1]) || (tileStringFirst [0] == tileStringPinzu [0] && tileStringThird [0] == tileStringSouzu [0] && tileStringFourth [0] == tileStringManzu [0] && tileStringFirst [1] == tileStringFirst [2] && tileStringThird [1] == tileStringThird [2] && tileStringFourth [1] == tileStringFourth [2] && tileStringFirst [1] == tileStringThird [1] && tileStringFirst [1] == tileStringFourth [1]) || (tileStringSecond [0] == tileStringPinzu [0] && tileStringThird [0] == tileStringSouzu [0] && tileStringFourth [0] == tileStringManzu [0] && tileStringSecond [1] == tileStringSecond [2] && tileStringThird [1] == tileStringThird [2] && tileStringFourth [1] == tileStringFourth [2] && tileStringSecond [1] == tileStringThird [1] && tileStringSecond [1] == tileStringFourth [1])))
        {
            sanshokuDoukou = 1;
            han = han + 2;
        }

        if (!chitoitsu && (((((tileStringFirst [0] == tileStringPinzu [0] || tileStringFirst [0] == tileStringSouzu [0] || tileStringFirst [0] == tileStringManzu [0]) && tileStringFirst.length() == lengthStringFive.length()) || ((tileStringFirst [0] == tileStringEast [0] || tileStringFirst [0] == tileStringSouth [0] || tileStringFirst [0] == tileStringWest [0] || tileStringFirst [0] == tileStringNorth [0] || tileStringFirst [0] == tileStringGreen [0] || tileStringFirst [0] == tileStringRed [0] || tileStringFirst [0] == tileStringWhite [0]) && tileStringFirst.length() == lengthStringFour.length())) && (((tileStringSecond [0] == tileStringPinzu [0] || tileStringSecond [0] == tileStringSouzu [0] || tileStringSecond [0] == tileStringManzu [0]) && tileStringSecond.length() == lengthStringFive.length()) || ((tileStringSecond [0] == tileStringEast [0] || tileStringSecond [0] == tileStringSouth [0] || tileStringSecond [0] == tileStringWest [0] || tileStringSecond [0] == tileStringNorth [0] || tileStringSecond [0] == tileStringGreen [0] || tileStringSecond [0] == tileStringRed [0] || tileStringSecond [0] == tileStringWhite [0]) && tileStringSecond.length() == lengthStringFour.length())) && (((tileStringThird [0] == tileStringPinzu [0] || tileStringThird [0] == tileStringSouzu [0] || tileStringThird [0] == tileStringManzu [0]) && tileStringThird.length() == lengthStringFive.length()) || ((tileStringThird [0] == tileStringEast [0] || tileStringThird [0] == tileStringSouth [0] || tileStringThird [0] == tileStringWest [0] || tileStringThird [0] == tileStringNorth [0] || tileStringThird [0] == tileStringGreen [0] || tileStringThird [0] == tileStringRed [0] || tileStringThird [0] == tileStringWhite [0]) && tileStringThird.length() == lengthStringFour.length()))) || ((((tileStringFirst [0] == tileStringPinzu [0] || tileStringFirst [0] == tileStringSouzu [0] || tileStringFirst [0] == tileStringManzu [0]) && tileStringFirst.length() == lengthStringFive.length()) || ((tileStringFirst [0] == tileStringEast [0] || tileStringFirst [0] == tileStringSouth [0] || tileStringFirst [0] == tileStringWest [0] || tileStringFirst [0] == tileStringNorth [0] || tileStringFirst [0] == tileStringGreen [0] || tileStringFirst [0] == tileStringRed [0] || tileStringFirst [0] == tileStringWhite [0]) && tileStringFirst.length() == lengthStringFour.length())) && (((tileStringSecond [0] == tileStringPinzu [0] || tileStringSecond [0] == tileStringSouzu [0] || tileStringSecond [0] == tileStringManzu [0]) && tileStringSecond.length() == lengthStringFive.length()) || ((tileStringSecond [0] == tileStringEast [0] || tileStringSecond [0] == tileStringSouth [0] || tileStringSecond [0] == tileStringWest [0] || tileStringSecond [0] == tileStringNorth [0] || tileStringSecond [0] == tileStringGreen [0] || tileStringSecond [0] == tileStringRed [0] || tileStringSecond [0] == tileStringWhite [0]) && tileStringSecond.length() == lengthStringFour.length())) && (((tileStringFourth [0] == tileStringPinzu [0] || tileStringFourth [0] == tileStringSouzu [0] || tileStringFourth [0] == tileStringManzu [0]) && tileStringFourth.length() == lengthStringFive.length()) || ((tileStringFourth [0] == tileStringEast [0] || tileStringFourth [0] == tileStringSouth [0] || tileStringFourth [0] == tileStringWest [0] || tileStringFourth [0] == tileStringNorth [0] || tileStringFourth [0] == tileStringGreen [0] || tileStringFourth [0] == tileStringRed [0] || tileStringFourth [0] == tileStringWhite [0]) && tileStringFourth.length() == lengthStringFour.length()))) || ((((tileStringFirst [0] == tileStringPinzu [0] || tileStringFirst [0] == tileStringSouzu [0] || tileStringFirst [0] == tileStringManzu [0]) && tileStringFirst.length() == lengthStringFive.length()) || ((tileStringFirst [0] == tileStringEast [0] || tileStringFirst [0] == tileStringSouth [0] || tileStringFirst [0] == tileStringWest [0] || tileStringFirst [0] == tileStringNorth [0] || tileStringFirst [0] == tileStringGreen [0] || tileStringFirst [0] == tileStringRed [0] || tileStringFirst [0] == tileStringWhite [0]) && tileStringFirst.length() == lengthStringFour.length())) && (((tileStringThird [0] == tileStringPinzu [0] || tileStringThird [0] == tileStringSouzu [0] || tileStringThird [0] == tileStringManzu [0]) && tileStringThird.length() == lengthStringFive.length()) || ((tileStringThird [0] == tileStringEast [0] || tileStringThird [0] == tileStringSouth [0] || tileStringThird [0] == tileStringWest [0] || tileStringThird [0] == tileStringNorth [0] || tileStringThird [0] == tileStringGreen [0] || tileStringThird [0] == tileStringRed [0] || tileStringThird [0] == tileStringWhite [0]) && tileStringThird.length() == lengthStringFour.length())) && (((tileStringFourth [0] == tileStringPinzu [0] || tileStringFourth [0] == tileStringSouzu [0] || tileStringFourth [0] == tileStringManzu [0]) && tileStringFourth.length() == lengthStringFive.length()) || ((tileStringFourth [0] == tileStringEast [0] || tileStringFourth [0] == tileStringSouth [0] || tileStringFourth [0] == tileStringWest [0] || tileStringFourth [0] == tileStringNorth [0] || tileStringFourth [0] == tileStringGreen [0] || tileStringFourth [0] == tileStringRed [0] || tileStringFourth [0] == tileStringWhite [0]) && tileStringFourth.length() == lengthStringFour.length()))) || ((((tileStringSecond [0] == tileStringPinzu [0] || tileStringSecond [0] == tileStringSouzu [0] || tileStringSecond [0] == tileStringManzu [0]) && tileStringSecond.length() == lengthStringFive.length()) || ((tileStringSecond [0] == tileStringEast [0] || tileStringSecond [0] == tileStringSouth [0] || tileStringSecond [0] == tileStringWest [0] || tileStringSecond [0] == tileStringNorth [0] || tileStringSecond [0] == tileStringGreen [0] || tileStringSecond [0] == tileStringRed [0] || tileStringSecond [0] == tileStringWhite [0]) && tileStringSecond.length() == lengthStringFour.length())) && (((tileStringThird [0] == tileStringPinzu [0] || tileStringThird [0] == tileStringSouzu [0] || tileStringThird [0] == tileStringManzu [0]) && tileStringThird.length() == lengthStringFive.length()) || ((tileStringThird [0] == tileStringEast [0] || tileStringThird [0] == tileStringSouth [0] || tileStringThird [0] == tileStringWest [0] || tileStringThird [0] == tileStringNorth [0] || tileStringThird [0] == tileStringGreen [0] || tileStringThird [0] == tileStringRed [0] || tileStringThird [0] == tileStringWhite [0]) && tileStringThird.length() == lengthStringFour.length())) && (((tileStringFourth [0] == tileStringPinzu [0] || tileStringFourth [0] == tileStringSouzu [0] || tileStringFourth [0] == tileStringManzu [0]) && tileStringFourth.length() == lengthStringFive.length()) || ((tileStringFourth [0] == tileStringEast [0] || tileStringFourth [0] == tileStringSouth [0] || tileStringFourth [0] == tileStringWest [0] || tileStringFourth [0] == tileStringNorth [0] || tileStringFourth [0] == tileStringGreen [0] || tileStringFourth [0] == tileStringRed [0] || tileStringFourth [0] == tileStringWhite [0]) && tileStringFourth.length() == lengthStringFour.length())))))
        {
            sankantsu = 1;
            han = han + 2;
        }

        if ((tileStringPair [0] == tileStringPinzu [0] || tileStringPair [0] == tileStringSouzu [0] || tileStringPair [0] == tileStringManzu [0]) && tileStringPair [1] != tileStringNine [0] && tileStringPair [1] != tileStringOne [0] && ((tileStringFirst [0] == tileStringPinzu [0] || tileStringFirst [0] == tileStringSouzu [0] || tileStringFirst [0] == tileStringManzu [0]) && (tileStringFirst [1] != tileStringOne [0] && tileStringFirst [1] != tileStringNine [0] && tileStringFirst [2] != tileStringOne [0] && tileStringFirst [2] != tileStringNine [0] && tileStringFirst [3] != tileStringOne [0] && tileStringFirst [3] != tileStringNine [0])) && ((tileStringSecond [0] == tileStringPinzu [0] || tileStringSecond [0] == tileStringSouzu [0] || tileStringSecond [0] == tileStringManzu [0]) && (tileStringSecond [1] != tileStringOne [0] && tileStringSecond [1] != tileStringNine [0] && tileStringSecond [2] != tileStringOne [0] && tileStringSecond [2] != tileStringNine [0] && tileStringSecond [3] != tileStringOne [0] && tileStringSecond [3] != tileStringNine [0])) && ((tileStringThird [0] == tileStringPinzu [0] || tileStringThird [0] == tileStringSouzu [0] || tileStringThird [0] == tileStringManzu [0]) && (tileStringThird [1] != tileStringOne [0] && tileStringThird [1] != tileStringNine [0] && tileStringThird [2] != tileStringOne [0] && tileStringThird [2] != tileStringNine [0] && tileStringThird [3] != tileStringOne [0] && tileStringThird [3] != tileStringNine [0])) && ((tileStringFourth [0] == tileStringPinzu [0] || tileStringFourth [0] == tileStringSouzu [0] || tileStringFourth [0] == tileStringManzu [0]) && (tileStringFourth [1] != tileStringOne [0] && tileStringFourth [1] != tileStringNine [0] && tileStringFourth [2] != tileStringOne [0] && tileStringFourth [2] != tileStringNine [0] && tileStringFourth [3] != tileStringOne [0] && tileStringFourth [3] != tileStringNine [0])))
        {
            tanyao = 1;
            han ++;
        }

        //yakuhai set one
        if (!chitoitsu && tileStringFirst [0] == (tileStringGreen [0] || tileStringGreenLower [0]))
        {
            yakuhaiHatsu ++;
        }

        if (!chitoitsu && tileStringFirst [0] == tileStringRed [0])
        {
            yakuhaiChun ++;
        }

        if (!chitoitsu && tileStringFirst [0] == tileStringWhite [0])
        {
            yakuhaiHaku ++;
        }

        if (!chitoitsu && roundWind [0] == tileStringEast [0] && tileStringFirst [0] == tileStringEast [0])
        {
            yakuhaiTon ++;
        }

        if (!chitoitsu && personalWind [0] == tileStringEast [0] && tileStringFirst [0] == tileStringEast [0])
        {
            yakuhaiTon ++;
        }

        if (!chitoitsu && roundWind [0] == tileStringSouth [0] && tileStringFirst [0] == tileStringSouth [0])
        {
            yakuhaiNan ++;
        }

        if (!chitoitsu && personalWind [0] == tileStringSouth [0] && tileStringFirst [0] == tileStringSouth [0])
        {
            yakuhaiNan ++;
        }

        if (!chitoitsu && roundWind [0] == tileStringWest [0] && tileStringFirst [0] == tileStringWest [0])
        {
            yakuhaiSha ++;
        }

        if (!chitoitsu && personalWind [0] == tileStringWest [0] && tileStringFirst [0] == tileStringWest [0])
        {
            yakuhaiSha ++;
        }

        if (!chitoitsu && roundWind [0] == tileStringNorth [0] && tileStringFirst [0] == tileStringNorth [0])
        {
            yakuhaiPei ++;
        }

        if (!chitoitsu && personalWind [0] == tileStringNorth [0] && tileStringFirst [0] == tileStringNorth [0])
        {
            yakuhaiPei ++;
        }

        if (!chitoitsu && tileStringSecond [0] == tileStringGreen [0])
        {
            yakuhaiHatsu ++;
        }

        if (!chitoitsu && tileStringSecond [0] == tileStringRed [0])
        {
            yakuhaiChun ++;
        }

        if (!chitoitsu && tileStringSecond [0] == tileStringWhite [0])
        {
            yakuhaiHaku ++;
        }

        if (!chitoitsu && roundWind [0] == tileStringEast [0] && tileStringSecond [0] == tileStringEast [0])
        {
            yakuhaiTon ++;
        }

        if (!chitoitsu && personalWind [0] == tileStringEast [0] && tileStringSecond [0] == tileStringEast [0])
        {
            yakuhaiTon ++;
        }

        if (!chitoitsu && roundWind [0] == tileStringSouth [0] && tileStringSecond [0] == tileStringSouth [0])
        {
            yakuhaiNan ++;
        }

        if (!chitoitsu && personalWind [0] == tileStringSouth [0] && tileStringSecond [0] == tileStringSouth [0])
        {
            yakuhaiNan ++;
        }

        if (!chitoitsu && roundWind [0] == tileStringWest [0] && tileStringSecond [0] == tileStringWest [0])
        {
            yakuhaiSha ++;
        }

        if (!chitoitsu && personalWind [0] == tileStringWest [0] && tileStringSecond [0] == tileStringWest [0])
        {
            yakuhaiSha ++;
        }

        if (!chitoitsu && roundWind [0] == tileStringNorth [0] && tileStringSecond [0] == tileStringNorth [0])
        {
            yakuhaiPei ++;
        }

        if (!chitoitsu && personalWind [0] == tileStringNorth [0] && tileStringSecond [0] == tileStringNorth [0])
        {
            yakuhaiPei ++;
        }

        if (!chitoitsu && tileStringThird [0] == tileStringGreen [0])
        {
            yakuhaiHatsu ++;
        }

        if (!chitoitsu && tileStringThird [0] == tileStringRed [0])
        {
            yakuhaiChun ++;
        }

        if (!chitoitsu && tileStringThird [0] == tileStringWhite [0])
        {
            yakuhaiHaku ++;
        }

        if (!chitoitsu && roundWind [0] == tileStringEast [0] && tileStringThird [0] == tileStringEast [0])
        {
            yakuhaiTon ++;
        }

        if (!chitoitsu && personalWind [0] == tileStringEast [0] && tileStringThird [0] == tileStringEast [0])
        {
            yakuhaiTon ++;
        }

        if (!chitoitsu && roundWind [0] == tileStringSouth [0] && tileStringThird [0] == tileStringSouth [0])
        {
            yakuhaiNan ++;
        }

        if (!chitoitsu && personalWind [0] == tileStringSouth [0] && tileStringThird [0] == tileStringSouth [0])
        {
            yakuhaiNan ++;
        }

        if (!chitoitsu && roundWind [0] == tileStringWest [0] && tileStringThird [0] == tileStringWest [0])
        {
            yakuhaiSha ++;
        }

        if (!chitoitsu && personalWind [0] == tileStringWest [0] && tileStringThird [0] == tileStringWest [0])
        {
            yakuhaiSha ++;
        }

        if (!chitoitsu && roundWind [0] == tileStringNorth [0] && tileStringThird [0] == tileStringNorth [0])
        {
            yakuhaiPei ++;
        }

        if (!chitoitsu && personalWind [0] == tileStringNorth [0] && tileStringThird [0] == tileStringNorth [0])
        {
            yakuhaiPei ++;
        }

        if (!chitoitsu && tileStringFourth [0] == tileStringGreen [0])
        {
            yakuhaiHatsu ++;
        }

        if (!chitoitsu && tileStringFourth [0] == tileStringRed [0])
        {
            yakuhaiChun ++;
        }

        if (!chitoitsu && tileStringFourth [0] == tileStringWhite [0])
        {
            yakuhaiHaku ++;
        }

        if (!chitoitsu && roundWind [0] == tileStringEast [0] && tileStringFourth [0] == tileStringEast [0])
        {
            yakuhaiTon ++;
        }

        if (!chitoitsu && personalWind [0] == tileStringEast [0] && tileStringFourth [0] == tileStringEast [0])
        {
            yakuhaiTon ++;
        }

        if (!chitoitsu && roundWind [0] == tileStringSouth [0] && tileStringFourth [0] == tileStringSouth [0])
        {
            yakuhaiNan ++;
        }

        if (!chitoitsu && personalWind [0] == tileStringSouth [0] && tileStringFourth [0] == tileStringSouth [0])
        {
            yakuhaiNan ++;
        }

        if (!chitoitsu && roundWind [0] == tileStringWest [0] && tileStringFourth [0] == tileStringWest [0])
        {
            yakuhaiSha ++;
        }

        if (!chitoitsu && personalWind [0] == tileStringWest [0] && tileStringFourth [0] == tileStringWest [0])
        {
            yakuhaiSha ++;
        }

        if (!chitoitsu && roundWind [0] == tileStringNorth [0] && tileStringFourth [0] == tileStringNorth [0])
        {
            yakuhaiPei ++;
        }

        if (!chitoitsu && personalWind [0] == tileStringNorth [0] && tileStringFourth [0] == tileStringNorth [0])
        {
            yakuhaiPei ++;
        }

        if (!chitoitsu && (tileStringFirst [0] == tileStringEast [0] || tileStringFirst [0] == tileStringSouth [0] || tileStringFirst [0] == tileStringWest [0] || tileStringFirst [0] == tileStringNorth [0] || tileStringFirst [0] == tileStringGreen [0] || tileStringFirst [0] == tileStringRed [0] || tileStringFirst [0] == tileStringWhite [0] || tileStringFirst [1] == tileStringOne [0] || tileStringFirst [1] == tileStringNine [0] || (tileStringFirst [1] == tileStringSeven [0] && tileStringFirst [2] != tileStringFirst [1])) && (tileStringSecond [0] == tileStringEast [0] || tileStringSecond [0] == tileStringSouth [0] || tileStringSecond [0] == tileStringWest [0] || tileStringSecond [0] == tileStringNorth [0] || tileStringSecond [0] == tileStringGreen [0] || tileStringSecond [0] == tileStringRed [0] || tileStringSecond [0] == tileStringWhite [0] || tileStringSecond [1] == tileStringOne [0] || tileStringSecond [1] == tileStringNine [0] || (tileStringSecond [1] == tileStringSeven [0] && tileStringSecond [2] != tileStringSecond [1])) && (tileStringThird [0] == tileStringEast [0] || tileStringThird [0] == tileStringSouth [0] || tileStringThird [0] == tileStringWest [0] || tileStringThird [0] == tileStringNorth [0] || tileStringThird [0] == tileStringGreen [0] || tileStringThird [0] == tileStringRed [0] || tileStringThird [0] == tileStringWhite [0] || tileStringThird [1] == tileStringOne [0] || tileStringThird [1] == tileStringNine [0] || (tileStringThird [1] == tileStringSeven [0] && tileStringThird [2] != tileStringThird [1])) && (tileStringFourth [0] == tileStringEast [0] || tileStringFourth [0] == tileStringSouth [0] || tileStringFourth [0] == tileStringWest [0] || tileStringFourth [0] == tileStringNorth [0] || tileStringFourth [0] == tileStringGreen [0] || tileStringFourth [0] == tileStringRed [0] || tileStringFourth [0] == tileStringWhite [0] || tileStringFourth [1] == tileStringOne [0] || tileStringFourth [1] == tileStringNine [0] || (tileStringFourth [1] == tileStringSeven [0] && tileStringFourth [2] != tileStringFourth [1])))
        {
            chanta = 1;
        }

        if (!chitoitsu && (tileStringFirst [0] == tileStringEast [0] || tileStringFirst [0] == tileStringSouth [0] || tileStringFirst [0] == tileStringWest [0] || tileStringFirst [0] == tileStringNorth [0] || tileStringFirst [0] == tileStringGreen [0] || tileStringFirst [0] == tileStringRed [0] || tileStringFirst [0] == tileStringWhite [0] || (tileStringFirst [1] == tileStringOne [0]) || (tileStringFirst [1] == tileStringNine [0])) && (tileStringSecond [0] == tileStringEast [0] || tileStringSecond [0] == tileStringSouth [0] || tileStringSecond [0] == tileStringWest [0] || tileStringSecond [0] == tileStringNorth [0] || tileStringSecond [0] == tileStringGreen [0] || tileStringSecond [0] == tileStringRed [0] || tileStringSecond [0] == tileStringWhite [0] || (tileStringSecond [1] == tileStringOne [0]) || (tileStringSecond [1] == tileStringNine [0])) && (tileStringThird [0] == tileStringEast [0] || tileStringThird [0] == tileStringSouth [0] || tileStringThird [0] == tileStringWest [0] || tileStringThird [0] == tileStringNorth [0] || tileStringThird [0] == tileStringGreen [0] || tileStringThird [0] == tileStringRed [0] || tileStringThird [0] == tileStringWhite [0] || (tileStringThird [1] == tileStringOne [0]) || (tileStringThird [1] == tileStringNine [0])) && (tileStringFourth [0] == tileStringEast [0] || tileStringFourth [0] == tileStringSouth [0] || tileStringFourth [0] == tileStringWest [0] || tileStringFourth [0] == tileStringNorth [0] || tileStringFourth [0] == tileStringGreen [0] || tileStringFourth [0] == tileStringRed [0] || tileStringFourth [0] == tileStringWhite [0] || (tileStringFourth [1] == tileStringOne [0]) || (tileStringFourth [1] == tileStringNine [0])) && (tileStringPair [0] == tileStringEast [0] || tileStringPair [0] == tileStringSouth [0] || tileStringPair [0] == tileStringWest [0] || tileStringPair [0] == tileStringNorth [0] || tileStringPair [0] == tileStringGreen [0] || tileStringPair [0] == tileStringRed [0] || tileStringPair [0] == tileStringWhite [0] || (tileStringPair [1] == tileStringOne [0]) || (tileStringPair [1] == tileStringNine [0])))
        {
            honroutou = 1;
            chanta = 0;
        }

        if (chitoitsu && (tileStringPairOne [0] == tileStringEast [0] || tileStringPairOne [0] == tileStringSouth [0] || tileStringPairOne [0] == tileStringWest [0] || tileStringPairOne [0] == tileStringNorth [0] || tileStringPairOne [0] == tileStringGreen [0] || tileStringPairOne [0] == tileStringRed [0] || tileStringPairOne [0] == tileStringWhite [0] || (tileStringPairOne [1] == tileStringOne [0]) || (tileStringPairOne [1] == tileStringNine [0])) && (tileStringPairTwo [0] == tileStringEast [0] || tileStringPairTwo [0] == tileStringSouth [0] || tileStringPairTwo [0] == tileStringWest [0] || tileStringPairTwo [0] == tileStringNorth [0] || tileStringPairTwo [0] == tileStringGreen [0] || tileStringPairTwo [0] == tileStringRed [0] || tileStringPairTwo [0] == tileStringWhite [0] || (tileStringPairTwo [1] == tileStringOne [0]) || (tileStringPairTwo [1] == tileStringNine [0])) && (tileStringPairThree [0] == tileStringEast [0] || tileStringPairThree [0] == tileStringSouth [0] || tileStringPairThree [0] == tileStringWest [0] || tileStringPairThree [0] == tileStringNorth [0] || tileStringPairThree [0] == tileStringGreen [0] || tileStringPairThree [0] == tileStringRed [0] || tileStringPairThree [0] == tileStringWhite [0] || (tileStringPairThree [1] == tileStringOne [0]) || (tileStringPairThree [1] == tileStringNine [0])) && (tileStringPairFour [0] == tileStringEast [0] || tileStringPairFour [0] == tileStringSouth [0] || tileStringPairFour [0] == tileStringWest [0] || tileStringPairFour [0] == tileStringNorth [0] || tileStringPairFour [0] == tileStringGreen [0] || tileStringPairFour [0] == tileStringRed [0] || tileStringPairFour [0] == tileStringWhite [0] || (tileStringPairFour [1] == tileStringOne [0]) || (tileStringPairFour [1] == tileStringNine [0])) && (tileStringPairFive [0] == tileStringEast [0] || tileStringPairFive [0] == tileStringSouth [0] || tileStringPairFive [0] == tileStringWest [0] || tileStringPairFive [0] == tileStringNorth [0] || tileStringPairFive [0] == tileStringGreen [0] || tileStringPairFive [0] == tileStringRed [0] || tileStringPairFive [0] == tileStringWhite [0] || (tileStringPairFive [1] == tileStringOne [0]) || (tileStringPairFive [1] == tileStringNine [0])) && (tileStringPairSix [0] == tileStringEast [0] || tileStringPairSix [0] == tileStringSouth [0] || tileStringPairSix [0] == tileStringWest [0] || tileStringPairSix [0] == tileStringNorth [0] || tileStringPairSix [0] == tileStringGreen [0] || tileStringPairSix [0] == tileStringRed [0] || tileStringPairSix [0] == tileStringWhite [0] || (tileStringPairSix [1] == tileStringOne [0]) || (tileStringPairSix [1] == tileStringNine [0])) && (tileStringPairSeven [0] == tileStringEast [0] || tileStringPairSeven [0] == tileStringSouth [0] || tileStringPairSeven [0] == tileStringWest [0] || tileStringPairSeven [0] == tileStringNorth [0] || tileStringPairSeven [0] == tileStringGreen [0] || tileStringPairSeven [0] == tileStringRed [0] || tileStringPairSeven [0] == tileStringWhite [0] || (tileStringPairSeven [1] == tileStringOne [0]) || (tileStringPairSeven [1] == tileStringNine [0])))
        {
            honroutou = 1;
            chanta = 0;
        }

        if (!chitoitsu && (tileStringFirst [1] == tileStringFirst [0] || tileStringFirst [1] == tileStringNine [0] || (tileStringFirst [1] == tileStringSeven [0] && tileStringFirst [2] != tileStringFirst [1])) && (tileStringSecond [1] == tileStringSecond [0] || tileStringSecond [1] == tileStringNine [0] || (tileStringSecond [1] == tileStringSeven [0] && tileStringSecond [2] != tileStringSecond [1])) && (tileStringThird [1] == tileStringThird [0] || tileStringThird [1] == tileStringNine [0] || (tileStringThird [1] == tileStringSeven [0] && tileStringThird [2] != tileStringThird [1])) && (tileStringFourth [1] == tileStringFourth [0] || tileStringFourth [1] == tileStringNine [0] || (tileStringFourth [1] == tileStringSeven [0] && tileStringFourth [2] != tileStringFourth [1])))
        {
            junchanta = 1;
            chanta = 0;
        }

        if (chanta)
        {
            if (closed)
            {
                han = han + 2;
            }

            else
            {
                han ++;
            }
        }

        if (honroutou)
        {
            han = han + 2;
        }

        if (junchanta)
        {
            if (closed)
            {
                han = han + 3;
            }

            else
            {
                han = han + 2;
            }
        }

        if (!chitoitsu && (tileStringThird [0] == tileStringGreen [0] || tileStringThird [0] == tileStringRed [0] || tileStringThird [0] == tileStringWhite [0]) && (tileStringFourth [0] == tileStringGreen [0] || tileStringFourth [0] == tileStringRed [0] || tileStringFourth [0] == tileStringWhite [0]) && (tileStringPair [0] == tileStringGreen [0] || tileStringPair [0] == tileStringRed [0] || tileStringPair [0] == tileStringWhite [0]))
        {
            shousangen = 1;
            han = han + 2;
        }

        if (!chitoitsu && (tileStringFirst [0] == tileStringPinzu [0] || tileStringFirst [0] == tileStringEast [0] || tileStringFirst [0] == tileStringSouth [0] || tileStringFirst [0] == tileStringWest [0] || tileStringFirst [0] == tileStringNorth [0] || tileStringFirst [0] == tileStringGreen [0] || tileStringFirst [0] == tileStringRed [0] || tileStringFirst [0] == tileStringWhite [0]) && (tileStringSecond [0] == tileStringPinzu [0] || tileStringSecond [0] == tileStringEast [0] || tileStringSecond [0] == tileStringSouth [0] || tileStringSecond [0] == tileStringWest [0] || tileStringSecond [0] == tileStringNorth [0] || tileStringSecond [0] == tileStringGreen [0] || tileStringSecond [0] == tileStringRed [0] || tileStringSecond [0] == tileStringWhite [0]) && (tileStringThird [0] == tileStringPinzu [0] || tileStringThird [0] == tileStringEast [0] || tileStringThird [0] == tileStringSouth [0] || tileStringThird [0] == tileStringWest [0] || tileStringThird [0] == tileStringNorth [0] || tileStringThird [0] == tileStringGreen [0] || tileStringThird [0] == tileStringRed [0] || tileStringThird [0] == tileStringWhite [0]) && (tileStringFourth [0] == tileStringPinzu [0] || tileStringFourth [0] == tileStringEast [0] || tileStringFourth [0] == tileStringSouth [0] || tileStringFourth [0] == tileStringWest [0] || tileStringFourth [0] == tileStringNorth [0] || tileStringFourth [0] == tileStringGreen [0] || tileStringFourth [0] == tileStringRed [0] || tileStringFourth [0] == tileStringWhite [0]) && (tileStringPair [0] == tileStringPinzu [0] || tileStringPair [0] == tileStringEast [0] || tileStringPair [0] == tileStringSouth [0] || tileStringPair [0] == tileStringWest [0] || tileStringPair [0] == tileStringNorth [0] || tileStringPair [0] == tileStringGreen [0] || tileStringPair [0] == tileStringRed [0] || tileStringPair [0] == tileStringWhite [0]))
        {
            honitsuPinzu = 1;
        }

        if (chitoitsu && (tileStringPairOne [0] == tileStringPinzu [0] || tileStringPairOne [0] == tileStringEast [0] || tileStringPairOne [0] == tileStringSouth [0] || tileStringPairOne [0] == tileStringWest [0] || tileStringPairOne [0] == tileStringNorth [0] || tileStringPairOne [0] == tileStringGreen [0] || tileStringPairOne [0] == tileStringRed [0] || tileStringPairOne [0] == tileStringWhite [0]) && (tileStringPairTwo [0] == tileStringPinzu [0] || tileStringPairTwo [0] == tileStringEast [0] || tileStringPairTwo [0] == tileStringSouth [0] || tileStringPairTwo [0] == tileStringWest [0] || tileStringPairTwo [0] == tileStringNorth [0] || tileStringPairTwo [0] == tileStringGreen [0] || tileStringPairTwo [0] == tileStringRed [0] || tileStringPairTwo [0] == tileStringWhite [0]) && (tileStringPairThree [0] == tileStringPinzu [0] || tileStringPairThree [0] == tileStringEast [0] || tileStringPairThree [0] == tileStringSouth [0] || tileStringPairThree [0] == tileStringWest [0] || tileStringPairThree [0] == tileStringNorth [0] || tileStringPairThree [0] == tileStringGreen [0] || tileStringPairThree [0] == tileStringRed [0] || tileStringPairThree [0] == tileStringWhite [0]) && (tileStringPairFour [0] == tileStringPinzu [0] || tileStringPairFour [0] == tileStringEast [0] || tileStringPairFour [0] == tileStringSouth [0] || tileStringPairFour [0] == tileStringWest [0] || tileStringPairFour [0] == tileStringNorth [0] || tileStringPairFour [0] == tileStringGreen [0] || tileStringPairFour [0] == tileStringRed [0] || tileStringPairFour [0] == tileStringWhite [0]) && (tileStringPairFive [0] == tileStringPinzu [0] || tileStringPairFive [0] == tileStringEast [0] || tileStringPairFive [0] == tileStringSouth [0] || tileStringPairFive [0] == tileStringWest [0] || tileStringPairFive [0] == tileStringNorth [0] || tileStringPairFive [0] == tileStringGreen [0] || tileStringPairFive [0] == tileStringRed [0] || tileStringPairFive [0] == tileStringWhite [0]) && (tileStringPairSix [0] == tileStringPinzu [0] || tileStringPairSix [0] == tileStringEast [0] || tileStringPairSix [0] == tileStringSouth [0] || tileStringPairSix [0] == tileStringWest [0] || tileStringPairSix [0] == tileStringNorth [0] || tileStringPairSix [0] == tileStringGreen [0] || tileStringPairSix [0] == tileStringRed [0] || tileStringPairSix [0] == tileStringWhite [0]) && (tileStringPairSeven [0] == tileStringPinzu [0] || tileStringPairSeven [0] == tileStringEast [0] || tileStringPairSeven [0] == tileStringSouth [0] || tileStringPairSeven [0] == tileStringWest [0] || tileStringPairSeven [0] == tileStringNorth [0] || tileStringPairSeven [0] == tileStringGreen [0] || tileStringPairSeven [0] == tileStringRed [0] || tileStringPairSeven [0] == tileStringWhite [0]))
        {
            honitsuPinzu = 1;
        }

        if (!chitoitsu && (tileStringFirst [0] == tileStringSouzu [0] || tileStringFirst [0] == tileStringEast [0] || tileStringFirst [0] == tileStringSouth [0] || tileStringFirst [0] == tileStringWest [0] || tileStringFirst [0] == tileStringNorth [0] || tileStringFirst [0] == tileStringGreen [0] || tileStringFirst [0] == tileStringRed [0] || tileStringFirst [0] == tileStringWhite [0]) && (tileStringSecond [0] == tileStringSouzu [0] || tileStringSecond [0] == tileStringEast [0] || tileStringSecond [0] == tileStringSouth [0] || tileStringSecond [0] == tileStringWest [0] || tileStringSecond [0] == tileStringNorth [0] || tileStringSecond [0] == tileStringGreen [0] || tileStringSecond [0] == tileStringRed [0] || tileStringSecond [0] == tileStringWhite [0]) && (tileStringThird [0] == tileStringSouzu [0] || tileStringThird [0] == tileStringEast [0] || tileStringThird [0] == tileStringSouth [0] || tileStringThird [0] == tileStringWest [0] || tileStringThird [0] == tileStringNorth [0] || tileStringThird [0] == tileStringGreen [0] || tileStringThird [0] == tileStringRed [0] || tileStringThird [0] == tileStringWhite [0]) && (tileStringFourth [0] == tileStringSouzu [0] || tileStringFourth [0] == tileStringEast [0] || tileStringFourth [0] == tileStringSouth [0] || tileStringFourth [0] == tileStringWest [0] || tileStringFourth [0] == tileStringNorth [0] || tileStringFourth [0] == tileStringGreen [0] || tileStringFourth [0] == tileStringRed [0] || tileStringFourth [0] == tileStringWhite [0]) && (tileStringPair [0] == tileStringSouzu [0] || tileStringPair [0] == tileStringEast [0] || tileStringPair [0] == tileStringSouth [0] || tileStringPair [0] == tileStringWest [0] || tileStringPair [0] == tileStringNorth [0] || tileStringPair [0] == tileStringGreen [0] || tileStringPair [0] == tileStringRed [0] || tileStringPair [0] == tileStringWhite [0]))
        {
            honitsuSouzu = 1;
        }

        if (chitoitsu && (tileStringPairOne [0] == tileStringSouzu [0] || tileStringPairOne [0] == tileStringEast [0] || tileStringPairOne [0] == tileStringSouth [0] || tileStringPairOne [0] == tileStringWest [0] || tileStringPairOne [0] == tileStringNorth [0] || tileStringPairOne [0] == tileStringGreen [0] || tileStringPairOne [0] == tileStringRed [0] || tileStringPairOne [0] == tileStringWhite [0]) && (tileStringPairTwo [0] == tileStringSouzu [0] || tileStringPairTwo [0] == tileStringEast [0] || tileStringPairTwo [0] == tileStringSouth [0] || tileStringPairTwo [0] == tileStringWest [0] || tileStringPairTwo [0] == tileStringNorth [0] || tileStringPairTwo [0] == tileStringGreen [0] || tileStringPairTwo [0] == tileStringRed [0] || tileStringPairTwo [0] == tileStringWhite [0]) && (tileStringPairThree [0] == tileStringSouzu [0] || tileStringPairThree [0] == tileStringEast [0] || tileStringPairThree [0] == tileStringSouth [0] || tileStringPairThree [0] == tileStringWest [0] || tileStringPairThree [0] == tileStringNorth [0] || tileStringPairThree [0] == tileStringGreen [0] || tileStringPairThree [0] == tileStringRed [0] || tileStringPairThree [0] == tileStringWhite [0]) && (tileStringPairFour [0] == tileStringSouzu [0] || tileStringPairFour [0] == tileStringEast [0] || tileStringPairFour [0] == tileStringSouth [0] || tileStringPairFour [0] == tileStringWest [0] || tileStringPairFour [0] == tileStringNorth [0] || tileStringPairFour [0] == tileStringGreen [0] || tileStringPairFour [0] == tileStringRed [0] || tileStringPairFour [0] == tileStringWhite [0]) && (tileStringPairFive [0] == tileStringSouzu [0] || tileStringPairFive [0] == tileStringEast [0] || tileStringPairFive [0] == tileStringSouth [0] || tileStringPairFive [0] == tileStringWest [0] || tileStringPairFive [0] == tileStringNorth [0] || tileStringPairFive [0] == tileStringGreen [0] || tileStringPairFive [0] == tileStringRed [0] || tileStringPairFive [0] == tileStringWhite [0]) && (tileStringPairSix [0] == tileStringSouzu [0] || tileStringPairSix [0] == tileStringEast [0] || tileStringPairSix [0] == tileStringSouth [0] || tileStringPairSix [0] == tileStringWest [0] || tileStringPairSix [0] == tileStringNorth [0] || tileStringPairSix [0] == tileStringGreen [0] || tileStringPairSix [0] == tileStringRed [0] || tileStringPairSix [0] == tileStringWhite [0]) && (tileStringPairSeven [0] == tileStringSouzu [0] || tileStringPairSeven [0] == tileStringEast [0] || tileStringPairSeven [0] == tileStringSouth [0] || tileStringPairSeven [0] == tileStringWest [0] || tileStringPairSeven [0] == tileStringNorth [0] || tileStringPairSeven [0] == tileStringGreen [0] || tileStringPairSeven [0] == tileStringRed [0] || tileStringPairSeven [0] == tileStringWhite [0]))
        {
            honitsuSouzu = 1;
        }

        if (!chitoitsu && (tileStringFirst [0] == tileStringManzu [0] || tileStringFirst [0] == tileStringEast [0] || tileStringFirst [0] == tileStringSouth [0] || tileStringFirst [0] == tileStringWest [0] || tileStringFirst [0] == tileStringNorth [0] || tileStringFirst [0] == tileStringGreen [0] || tileStringFirst [0] == tileStringRed [0] || tileStringFirst [0] == tileStringWhite [0]) && (tileStringSecond [0] == tileStringManzu [0] || tileStringSecond [0] == tileStringEast [0] || tileStringSecond [0] == tileStringSouth [0] || tileStringSecond [0] == tileStringWest [0] || tileStringSecond [0] == tileStringNorth [0] || tileStringSecond [0] == tileStringGreen [0] || tileStringSecond [0] == tileStringRed [0] || tileStringSecond [0] == tileStringWhite [0]) && (tileStringThird [0] == tileStringManzu [0] || tileStringThird [0] == tileStringEast [0] || tileStringThird [0] == tileStringSouth [0] || tileStringThird [0] == tileStringWest [0] || tileStringThird [0] == tileStringNorth [0] || tileStringThird [0] == tileStringGreen [0] || tileStringThird [0] == tileStringRed [0] || tileStringThird [0] == tileStringWhite [0]) && (tileStringFourth [0] == tileStringManzu [0] || tileStringFourth [0] == tileStringEast [0] || tileStringFourth [0] == tileStringSouth [0] || tileStringFourth [0] == tileStringWest [0] || tileStringFourth [0] == tileStringNorth [0] || tileStringFourth [0] == tileStringGreen [0] || tileStringFourth [0] == tileStringRed [0] || tileStringFourth [0] == tileStringWhite [0]) && (tileStringPair [0] == tileStringManzu [0] || tileStringPair [0] == tileStringEast [0] || tileStringPair [0] == tileStringSouth [0] || tileStringPair [0] == tileStringWest [0] || tileStringPair [0] == tileStringNorth [0] || tileStringPair [0] == tileStringGreen [0] || tileStringPair [0] == tileStringRed [0] || tileStringPair [0] == tileStringWhite [0]))
        {
            honitsuManzu = 1;
        }

        if (chitoitsu && (tileStringPairOne [0] == tileStringManzu [0] || tileStringPairOne [0] == tileStringEast [0] || tileStringPairOne [0] == tileStringSouth [0] || tileStringPairOne [0] == tileStringWest [0] || tileStringPairOne [0] == tileStringNorth [0] || tileStringPairOne [0] == tileStringGreen [0] || tileStringPairOne [0] == tileStringRed [0] || tileStringPairOne [0] == tileStringWhite [0]) && (tileStringPairTwo [0] == tileStringManzu [0] || tileStringPairTwo [0] == tileStringEast [0] || tileStringPairTwo [0] == tileStringSouth [0] || tileStringPairTwo [0] == tileStringWest [0] || tileStringPairTwo [0] == tileStringNorth [0] || tileStringPairTwo [0] == tileStringGreen [0] || tileStringPairTwo [0] == tileStringRed [0] || tileStringPairTwo [0] == tileStringWhite [0]) && (tileStringPairThree [0] == tileStringManzu [0] || tileStringPairThree [0] == tileStringEast [0] || tileStringPairThree [0] == tileStringSouth [0] || tileStringPairThree [0] == tileStringWest [0] || tileStringPairThree [0] == tileStringNorth [0] || tileStringPairThree [0] == tileStringGreen [0] || tileStringPairThree [0] == tileStringRed [0] || tileStringPairThree [0] == tileStringWhite [0]) && (tileStringPairFour [0] == tileStringManzu [0] || tileStringPairFour [0] == tileStringEast [0] || tileStringPairFour [0] == tileStringSouth [0] || tileStringPairFour [0] == tileStringWest [0] || tileStringPairFour [0] == tileStringNorth [0] || tileStringPairFour [0] == tileStringGreen [0] || tileStringPairFour [0] == tileStringRed [0] || tileStringPairFour [0] == tileStringWhite [0]) && (tileStringPairFive [0] == tileStringManzu [0] || tileStringPairFive [0] == tileStringEast [0] || tileStringPairFive [0] == tileStringSouth [0] || tileStringPairFive [0] == tileStringWest [0] || tileStringPairFive [0] == tileStringNorth [0] || tileStringPairFive [0] == tileStringGreen [0] || tileStringPairFive [0] == tileStringRed [0] || tileStringPairFive [0] == tileStringWhite [0]) && (tileStringPairSix [0] == tileStringManzu [0] || tileStringPairSix [0] == tileStringEast [0] || tileStringPairSix [0] == tileStringSouth [0] || tileStringPairSix [0] == tileStringWest [0] || tileStringPairSix [0] == tileStringNorth [0] || tileStringPairSix [0] == tileStringGreen [0] || tileStringPairSix [0] == tileStringRed [0] || tileStringPairSix [0] == tileStringWhite [0]) && (tileStringPairSeven [0] == tileStringManzu [0] || tileStringPairSeven [0] == tileStringEast [0] || tileStringPairSeven [0] == tileStringSouth [0] || tileStringPairSeven [0] == tileStringWest [0] || tileStringPairSeven [0] == tileStringNorth [0] || tileStringPairSeven [0] == tileStringGreen [0] || tileStringPairSeven [0] == tileStringRed [0] || tileStringPairSeven [0] == tileStringWhite [0]))
        {
            honitsuManzu = 1;
        }

        if (!chitoitsu && tileStringFirst [0] == tileStringPinzu [0] && tileStringSecond [0] == tileStringPinzu [0] && tileStringThird [0] == tileStringPinzu [0] && tileStringFourth [0] == tileStringPinzu [0] && tileStringPair [0] == tileStringPinzu [0])
        {
            chinitsuPinzu = 1;
            honitsuPinzu = 0;
        }

        if (chitoitsu && tileStringPairOne [0] == tileStringPinzu [0] && tileStringPairTwo [0] == tileStringPinzu [0] && tileStringPairThree [0] == tileStringPinzu [0] && tileStringPairFour [0] == tileStringPinzu [0] && tileStringPairFive [0] == tileStringPinzu [0] && tileStringPairSix [0] == tileStringPinzu [0] && tileStringPairSeven [0] == tileStringPinzu [0])
        {
            chinitsuPinzu = 1;
            honitsuPinzu = 0;
        }

        if (!chitoitsu && tileStringFirst [0] == tileStringSouzu [0] && tileStringSecond [0] == tileStringSouzu [0] && tileStringThird [0] == tileStringSouzu [0] && tileStringFourth [0] == tileStringSouzu [0] && tileStringPair [0] == tileStringSouzu [0])
        {
            chinitsuSouzu = 1;
            honitsuSouzu = 0;
        }

        if (chitoitsu && tileStringPairOne [0] == tileStringSouzu [0] && tileStringPairTwo [0] == tileStringSouzu [0] && tileStringPairThree [0] == tileStringSouzu [0] && tileStringPairFour [0] == tileStringSouzu [0] && tileStringPairFive [0] == tileStringSouzu [0] && tileStringPairSix [0] == tileStringSouzu [0] && tileStringPairSeven [0] == tileStringSouzu [0])
        {
            chinitsuSouzu = 1;
            honitsuSouzu = 0;
        }

        if (!chitoitsu && tileStringFirst [0] == tileStringManzu [0] && tileStringSecond [0] == tileStringManzu [0] && tileStringThird [0] == tileStringManzu [0] && tileStringFourth [0] == tileStringManzu [0] && tileStringPair [0] == tileStringManzu [0])
        {
            chinitsuManzu = 1;
            honitsuManzu = 0;
        }

        if (chitoitsu && tileStringPairOne [0] == tileStringManzu [0] && tileStringPairTwo [0] == tileStringManzu [0] && tileStringPairThree [0] == tileStringManzu [0] && tileStringPairFour [0] == tileStringManzu [0] && tileStringPairFive [0] == tileStringManzu [0] && tileStringPairSix [0] == tileStringManzu [0] && tileStringPairSeven [0] == tileStringManzu [0])
        {
            chinitsuManzu = 1;
            honitsuManzu = 0;
        }

        if (honitsuPinzu || honitsuSouzu || honitsuManzu)
        {
            if (closed)
            {
                han = han + 3;
            }

            else
            {
                han = han + 2;
            }
        }

        if (chinitsuPinzu || chinitsuSouzu || chinitsuManzu)
        {
            if (closed)
            {
                han = han + 6;
            }

            else
            {
                han = han + 5;
            }
        }

    }

    if (yakumanCounter < 1)
    {
        han = han + dora;
        if (han < 5)
        {
            if (chitoitsu)
            {
                fu = fu + 5;
            }

            if (!chitoitsu)
            {
                if (pinfu)
                {
                    if (!tsumo)
                    {
                        fu = fu + 10;
                    }
                }

                else
                {
                    if (machi == 1 || machi == 2)
                    {
                        fu = fu + 2;
                    }

                    if (closed && !tsumo)
                    {
                        fu = fu + 10;
                    }

                    if (tsumo)
                    {
                        fu = fu + 2;
                    }

                    if (!closed && !tsumo)
                    {
                        fu = fu + 0;
                    }

                    if (tileStringPair [0] == personalWind [0])
                    {
                        fu = fu + 2;
                    }

                    if (tileStringPair [0] == roundWind [0])
                    {
                        fu = fu + 2;
                    }

                    if (tileStringFirst [1] == tileStringFirst [2])
                    {
                        setOneFu = 2;
                        if (tileStringFirst [1] == tileStringOne [0] || tileStringFirst [1] == tileStringNine [0] || tileStringFirst [0] == tileStringEast [0] || tileStringFirst [0] == tileStringSouth [0] || tileStringFirst [0] == tileStringWest [0] || tileStringFirst [0] == tileStringNorth [0] || tileStringFirst [0] == tileStringGreen [0] || tileStringFirst [0] == tileStringRed [0] || tileStringFirst [0] == tileStringWhite [0])
                        {
                            setOneFu = setOneFu * 2;
                        }

                        if (setOneClosed)
                        {
                            setOneFu = setOneFu * 2;
                        }

                        if ((tileStringFirst [0] == tileStringEast [0] || tileStringFirst [0] == tileStringSouth [0] || tileStringFirst [0] == tileStringWest [0] || tileStringFirst [0] == tileStringNorth [0] || tileStringFirst [0] == tileStringGreen [0] || tileStringFirst [0] == tileStringRed [0] || tileStringFirst [0] == tileStringWhite [0]) && tileStringFirst.length() == lengthStringFour.length())
                        {
                            setOneFu = setOneFu * 4;
                        }

                        if ((tileStringFirst [0] == tileStringPinzu [0] || tileStringFirst [0] == tileStringSouzu [0] || tileStringFirst [0] == tileStringManzu [0]) && tileStringFirst.length() == lengthStringFive.length())
                        {
                            setOneFu = setOneFu * 4;
                        }
                    }

                    if (tileStringSecond [1] == tileStringSecond [2])
                    {
                        setTwoFu = 2;
                        if (tileStringSecond [1] == tileStringOne [0] || tileStringSecond [1] == tileStringNine [0] || tileStringSecond [0] == tileStringEast [0] || tileStringSecond [0] == tileStringSouth [0] || tileStringSecond [0] == tileStringWest [0] || tileStringSecond [0] == tileStringNorth [0] || tileStringSecond [0] == tileStringGreen [0] || tileStringSecond [0] == tileStringRed [0] || tileStringSecond [0] == tileStringWhite [0])
                        {
                            setTwoFu = setTwoFu * 2;
                        }

                        if (setTwoClosed)
                        {
                            setTwoFu = setTwoFu * 2;
                        }

                        if ((tileStringSecond [0] == tileStringEast [0] || tileStringSecond [0] == tileStringSouth [0] || tileStringSecond [0] == tileStringWest [0] || tileStringSecond [0] == tileStringNorth [0] || tileStringSecond [0] == tileStringGreen [0] || tileStringSecond [0] == tileStringRed [0] || tileStringSecond [0] == tileStringWhite [0]) && tileStringSecond.length() == lengthStringFour.length())
                        {
                            setTwoFu = setTwoFu * 4;
                        }

                        if ((tileStringSecond [0] == tileStringPinzu [0] || tileStringSecond [0] == tileStringSouzu [0] || tileStringSecond [0] == tileStringManzu [0]) && tileStringSecond.length() == lengthStringFive.length())
                        {
                            setTwoFu = setTwoFu * 4;
                        }
                    }

                    if (tileStringThird [1] == tileStringThird [2])
                    {
                        setThreeFu = 2;
                        if (tileStringThird [1] == tileStringOne [0] || tileStringThird [1] == tileStringNine [0] || tileStringThird [0] == tileStringEast [0] || tileStringThird [0] == tileStringSouth [0] || tileStringThird [0] == tileStringWest [0] || tileStringThird [0] == tileStringNorth [0] || tileStringThird [0] == tileStringGreen [0] || tileStringThird [0] == tileStringRed [0] || tileStringThird [0] == tileStringWhite [0])
                        {
                            setThreeFu = setThreeFu * 2;
                        }

                        if (setThreeClosed)
                        {
                            setThreeFu = setThreeFu * 2;
                        }

                        if ((tileStringThird [0] == tileStringEast [0] || tileStringThird [0] == tileStringSouth [0] || tileStringThird [0] == tileStringWest [0] || tileStringThird [0] == tileStringNorth [0] || tileStringThird [0] == tileStringGreen [0] || tileStringThird [0] == tileStringRed [0] || tileStringThird [0] == tileStringWhite [0]) && tileStringThird.length() == lengthStringFour.length())
                        {
                            setThreeFu = setThreeFu * 4;
                        }

                        if ((tileStringThird [0] == tileStringPinzu [0] || tileStringThird [0] == tileStringSouzu [0] || tileStringThird [0] == tileStringManzu [0]) && tileStringThird.length() == lengthStringFive.length())
                        {
                            setThreeFu = setThreeFu * 4;
                        }
                    }

                    if (tileStringFourth [1] == tileStringFourth [2])
                    {
                        setFourFu = 2;
                        if (tileStringFourth [1] == tileStringOne [0] || tileStringFourth [1] == tileStringNine [0] || tileStringFourth [0] == tileStringEast [0] || tileStringFourth [0] == tileStringSouth [0] || tileStringFourth [0] == tileStringWest [0] || tileStringFourth [0] == tileStringNorth [0] || tileStringFourth [0] == tileStringGreen [0] || tileStringFourth [0] == tileStringRed [0] || tileStringFourth [0] == tileStringWhite [0])
                        {
                            setFourFu = setFourFu * 2;
                        }

                        if (setFourClosed)
                        {
                            setFourFu = setFourFu * 2;
                        }

                        if ((tileStringFourth [0] == tileStringEast [0] || tileStringFourth [0] == tileStringSouth [0] || tileStringFourth [0] == tileStringWest [0] || tileStringFourth [0] == tileStringNorth [0] || tileStringFourth [0] == tileStringGreen [0] || tileStringFourth [0] == tileStringRed [0] || tileStringFourth [0] == tileStringWhite [0]) && tileStringFourth.length() == lengthStringFour.length())
                        {
                            setFourFu = setFourFu * 4;
                        }

                        if ((tileStringFourth [0] == tileStringPinzu [0] || tileStringFourth [0] == tileStringSouzu [0] || tileStringFourth [0] == tileStringManzu [0]) && tileStringFourth.length() == lengthStringFive.length())
                        {
                            setFourFu = setFourFu * 4;
                        }
                    }
                    fuFloat = fu;

                    fu = 10 * ceil(fuFloat / 10);
                }
            }

            basicPoints = (fu * (pow(2, (2 + han))));
            if (basicPoints > 2000)
            {
                basicPoints = 2000;
            }
        }

        if (han == 5)
        {
            basicPoints = 2000;
        }

        if (han == 6 || han == 7)
        {
            basicPoints = 3000;
        }

        if (han == 8 || han == 9 || han == 10)
        {
            basicPoints = 4000;
        }

        if (han == 11 || han == 12)
        {
            basicPoints = 6000;
        }

        if (han >= 13)
        {
            basicPoints = 8000;
        }
    }

    if (yakumanCounter > 0)
    {
        if (dealer)
        {
            totalPoints = yakumanCounter * 6 * 8000;
            if (tsumo)
            {
                tsumoNondealerPoints = yakumanCounter * 2 * 8000;
            }

            else
            {
                ronPoints = totalPoints;
            }
        }

        if (!dealer)
        {
            totalPoints = yakumanCounter * 4 * 8000;
            if (tsumo)
            {
                tsumoNondealerPoints = yakumanCounter * 8000;
                tsumoDealerPoints = yakumanCounter * 2 * 8000;
            }

            else
            {
                ronPoints = totalPoints;
            }
        }
    }

    else
    {
        basicPointsFloat = basicPoints;

        if (dealer)
        {

            if (tsumo)
            {
                tsumoNondealerPoints = 100 * ceil((basicPointsFloat * 2) / 100);
                totalPoints = 3 * tsumoNondealerPoints;
            }

            else
            {
                ronPoints = 100 * ceil((basicPointsFloat * 6) / 100);
                totalPoints = ronPoints;
            }
        }

        if (!dealer)
        {
            if (tsumo)
            {
                tsumoNondealerPoints = 100 * ceil((basicPointsFloat) / 100);
                tsumoDealerPoints = 100 * ceil ((basicPointsFloat * 2) / 100);
                totalPoints = tsumoDealerPoints + (2 * tsumoNondealerPoints);
            }

            else
            {
                ronPoints = 100 * ceil((basicPointsFloat * 4) / 100);
                totalPoints = ronPoints;
            }
        }
    }

    cout << "\n";
    if (yakumanCounter > 0)
    {
        if (suuankou)
        {
            if (suuankouTanki)
            {
                cout << "Suuankou Tanki Machi:             Double Yakuman\n";
            }

            else
            {
                cout << "Suuankou:                         Yakuman\n";
            }
        }

        if (kokushi)
        {
            if (kokushiThirteenWait)
            {
                cout << "Kokushi Musou Juusanmen Machi:    Double Yakuman\n";
            }

            else
            {
                cout << "Kokushi Musou:                    Yakuman\n";
            }
        }

        if (daisangen)
        {
            cout << "Daisangen:                        Yakuman\n";
        }

        if (shousuushi)
        {
            cout << "Shousuushi:                       Yakuman\n";
        }

        if (daisuushi)
        {
            cout << "Daisuushi:                        Double Yakuman\n";
        }

        if (tsuuiisou && !daichisei)
        {
            cout << "Tsuuiisou:                         Yakuman\n";
        }

        if (daichisei)
        {
            cout << "Daichisei:                        Double Yakuman\n";
        }

        if (chinroutou)
        {
            cout << "Chinroutou:                       Yakuman\n";
        }

        if (ryuuiisou)
        {
            cout << "Ryuuiisou:                        Yakuman\n";
        }

        if (daisharin)
        {
            cout << "Daisharin:                        Yakuman\n";
        }

        if (daichikurin)
        {
            cout << "Daichikurin:                      Yakuman\n";
        }

        if (daisuurin)
        {
            cout << "Daisuurin:                        Yakuman\n";
        }

        if (chuuren)
        {
            if (junseiChuuren)
            {
                cout << "Junsei Chuuren Poutou:            Double Yakuman\n";
            }

            else
            {
                cout << "Chuuren Poutou:                   Yakuman\n";
            }
        }

        if (suukantsu)
        {
            cout << "Suukantsu:                        Yakuman\n";
        }

        if (paarenchan)
        {
            cout << "Paarenchan:                       Yakuman\n";
        }

        if (renhou)
        {
            cout << "Renhou:                           Yakuman\n";
        }

        if (chiihou)
        {
            cout << "Chiihou:                          Yakuman\n";
        }

        if (tenhou)
        {
            cout << "Tenhou:                           Yakuman\n";
        }

        if (yakumanCounter == 1)
        {
            cout << "Yakuman\n";
        }

        if (yakumanCounter == 2)
        {
            cout << "Double Yakuman\n";
        }

        if (yakumanCounter == 3)
        {
            cout << "Triple Yakuman\n";
        }

        if (yakumanCounter >= 4)
        {
            cout << yakumanCounter;
            cout << "x ";
            cout << "Yakuman\n";
        }

        if (dealer)
        {
            if (tsumo)
            {
                cout << tsumoNondealerPoints + (100 * bonusRoundNumber);
                cout <<" All\n";
            }

            else
            {
                cout << ronPoints + (300 * bonusRoundNumber);
                cout << "\n";
            }
        }

        if (!dealer)
        {
            if (tsumo)
            {
                cout << tsumoNondealerPoints + (100 * bonusRoundNumber);
                cout << "/";
                cout << tsumoDealerPoints + (100 * bonusRoundNumber);
                cout << "\n";
            }

            else
            {
                cout << ronPoints + (300 * bonusRoundNumber);
                cout << "\n";
            }
        }
    }

    if (yakumanCounter == 0)
    {
        if (riichi)
        {
            if (doubleRiichi)
            {
                cout << "Double Riichi:                    2 Han\n";
            }

            if (!doubleRiichi)
            {
                cout << "Riichi:                           1 Han\n";
            }

            if (ippatsu)
            {
                cout << "Ippatsu:                          1 Han\n";
            }
        }

        if (chitoitsu)
        {
            cout << "Chitoitsu:                        2 Han\n";
        }

        if (menzenTsumo)
        {
            cout << "Menzen Tsumo:                     1 Han\n";
        }

        if (haitei)
        {
            cout << "Haitei Raoyue:                    1 Han\n";
        }

        if (houtei)
        {
            cout << "Houtei Raoyui:                    1 Han\n";
        }

        if (rinshan)
        {
            cout << "Rinshan Kaihou:                   1 Han\n";
        }

        if (chankan)
        {
            cout << "Chankan:                          1 Han\n";
        }

        if (pinfu)
        {
            cout << "Pinfu:                            1 Han\n";
        }

        if (itsuu)
        {
            if (closed)
            {
                cout << "Itsuu:                            2 Han\n";
            }

            else
            {
                cout << "Itsuu:                            1 Han\n";
            }
        }

        if (iipeikou)
        {
            if (ryanpeikou)
            {
                cout << "Ryanpeikou:                       3 Han\n";
            }

            else
            {
                cout << "Iipeikou:                         1 Han\n";
            }
        }

        if (sanshokuDoujun)
        {
            if (closed)
            {
                cout << "Sanshoku Doujun:                  2 Han\n";
            }

            else
            {
                cout << "Sanshoku Doujun:                  1 Han\n";
            }
        }

        if (toitoi)
        {
            cout << "Toitoi:                           2 Han\n";
        }

        if (sanankou)
        {
            cout << "Sanankou:                         2 Han\n";
        }

        if (sanshokuDoukou)
        {
            cout << "Sanshoku Doukou:                  2 Han\n";
        }

        if (sankantsu)
        {
            cout << "Sankantsu:                        2 Han\n";
        }

        if (tanyao)
        {
            cout << "Tanyao:                           1 Han\n";
        }

        if (yakuhaiHatsu)
        {
            cout << "Hatsu:                            1 Han\n";
        }

        if (yakuhaiChun)
        {
            cout << "Chun:                             1 Han\n";
        }

        if (yakuhaiHaku)
        {
            cout << "Haku:                             1 Han\n";
        }

        if (chanta)
        {
            if (closed)
            {
                cout << "Chanta:                           2 Han\n";
            }

            else
            {
                cout << "Chanta:                           1 Han\n";
            }
        }

        if (junchanta)
        {
            if (closed)
            {
                cout << "Jun Chanta:                       3 Han\n";
            }

            else
            {
                cout << "Jun Chanta:                       2 Han\n";
            }
        }

        if (honroutou)
        {
            cout << "Honroutou:                        2 Han\n";
        }

        if (shousangen)
        {
            cout << "Shousangen:                       2 Han\n";
        }

        if (honitsuPinzu)
        {
            if (closed)
            {
                cout << "Pinzu Honitsu:                    3 Han\n";
            }

            else
            {
                cout << "Pinzu Honitsu:                    2 Han\n";
            }
        }

        if (honitsuSouzu)
        {
            if (closed)
            {
                cout << "Souzu Honitsu:                    3 Han\n";
            }

            else
            {
                cout << "Souzu Honitsu:                    2 Han\n";
            }
        }

        if (honitsuManzu)
        {
            if (closed)
            {
                cout << "Manzu Honitsu:                    3 Han\n";
            }

            else
            {
                cout << "Manzu Honitsu:                    2 Han\n";
            }
        }

        if (chinitsuPinzu)
        {
            if (closed)
            {
                cout << "Pinzu Chinitsu:                   6 Han\n";
            }

            else
            {
                cout << "Pinzu Chinitsu:                   5 Han\n";
            }
        }

        if (chinitsuSouzu)
        {
            if (closed)
            {
                cout << "Souzu Chinitsu:                   6 Han\n";
            }

            else
            {
                cout << "Souzu Chinitsu:                   5 Han\n";
            }
        }

        if (chinitsuManzu)
        {
            if (closed)
            {
                cout << "Manzu Chinitsu:                   6 Han\n";
            }

            else
            {
                cout << "Manzu Chinitsu:                   5 Han\n";
            }
        }

        if (dora > 0)
        {
            if (dora < 10)
            {
                cout << dora;
                cout << " Dora:                           ";
                cout << dora;
                cout << " Han\n";
            }
            if (dora > 10)
            {
                cout << dora;
                cout << " Dora:                          ";
                cout << dora;
                cout << " Han\n";
            }
        }

        cout << "\n";

        if (han == 0)
        {
            chombo = 1;
            cout << han;
            cout << " Han\n";
            cout << "Chombo Penalty: ";
            if (dealer)
            {
                cout << "4000 All\n";
            }
            if (!dealer)
            {
                cout << "2000/4000\n";
            }

        }

        if (!chombo)
        {
            if (han < 5)
            {
                cout << han;
                cout << " Han ";
                cout << fu;
                cout << " Fu\n";
            }

            if (han >= 5)
            {
                cout << han;
                cout << " Han\n";
            }

            if (basicPoints == 2000)
            {
                cout << "Mangan\n";
            }

            if (basicPoints == 3000)
            {
                cout << "Haneman\n";
            }

            if (basicPoints == 4000)
            {
                cout << "Baiman\n";
            }

            if (basicPoints == 6000)
            {
                cout << "Sanbaiman\n";
            }

            if (basicPoints == 8000)
            {
                cout << "Yakuman\n";
            }

            if (dealer)
            {
                if (tsumo)
                {
                    cout << tsumoNondealerPoints + (100 * bonusRoundNumber);
                    cout <<" All\n";
                }

                else
                {
                    cout << ronPoints + (300 * bonusRoundNumber);
                    cout << "\n";
                }
            }

            if (!dealer)
            {
                if (tsumo)
                {
                    cout << tsumoNondealerPoints + (100 * bonusRoundNumber);
                    cout << "/";
                    cout << tsumoDealerPoints + (100 * bonusRoundNumber);
                    cout << "\n";
                }

                else
                {
                    cout << ronPoints + (300 * bonusRoundNumber);
                    cout << "\n";
                }
            }
        }

    if (!chombo)
    {
        cout << "Total Points Earned: ";
        cout << totalPoints + (300 * bonusRoundNumber) + (1000 * riichibon) << "\n";
    }
    if (chombo)
    {
        cout << "No Points Earned\n";
    }

    }
}
