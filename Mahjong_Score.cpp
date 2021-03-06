#include <iostream>
#include <string.h>
#include <math.h>
#include "errorchecking.h"
using namespace std;

int main()

{
    //initiate string inputs of tiles
    string machi;
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
    string lengthStringFour = "0123";
    string lengthStringFive = "01234";
    string invalidInput = "Invalid choice. Please re-enter.\n";
    string invalidMeld = "Invalid meld. Please re-enter.\n";

    string pause;

    //initiate binary true false variables and counter variables
    string roundWind;
    string personalWind;

    int setOneClosed = 0;
    string setOneClosedString;
    int setTwoClosed = 0;
    string setTwoClosedString;
    int setThreeClosed = 0;
    string setThreeClosedString;
    int setFourClosed = 0;
    string setFourClosedString;
    int tsumo = 0;
    string tsumoString;
    int closed = 0;
    string closedString;
    int chitoitsu = 0;
    string chitoitsuString;
    int kokushi = 0;
    string kokushiString;
    int kokushiThirteenWait = 0;
    int dealer = 0;
    string dealerString;
    int bonusRoundNumber = 0;
    string bonusRoundNumberString;
    int riichibon = 0;
    string riichibonString;
    int dora = 0;
    string doraString;
    int riichi = 0;
    string riichiString;
    int doubleRiichi = 0;
    string doubleRiichiString;
    int ippatsu = 0;
    string ippatsuString;
    int rinshan = 0;
    string rinshanString;
    int chankan = 0;
    string chankanString;
    int haitei = 0;
    string haiteiString;
    int houtei = 0;
    string houteiString;
    int paarenchan = 0;
    string paarenchanString;
    int renhou = 0;
    string renhouString;
    int chiihou = 0;
    string chiihouString;
    int tenhou = 0;
    string tenhouString;
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
    int yakuHan = 0;
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
    cin >> machi;
    while (checkError::machiChecking(machi) == 1)
    {
        cout << invalidInput;
        cin >> machi;
    }

    cout << "Was the hand fully closed? (y/n)\n";
    cin >> closedString;
    closed = checkError::convertToInt(closedString);
    while (checkError::inputChecking(closed) == 1)
    {
        cout << invalidInput;
        cin >> closedString;
        closed = checkError::convertToInt(closedString);
    }

    cout << "Did the player tsumo? (y/n)\n";
    cin >> tsumoString;
    tsumo = checkError::convertToInt(tsumoString);
    while (checkError::inputChecking(tsumo) == 1)
    {
        cout << invalidInput;
        cin >> tsumoString;
        tsumo = checkError::convertToInt(tsumoString);
    }

    if (machi.at(0) == tileStringTwo.at(0) && closed)
    {

        cout << "Was the winning hand chitoitsu? (y/n)\n";
        cin >> chitoitsuString;
        chitoitsu = checkError::convertToInt(chitoitsuString);
        while (checkError::inputChecking(chitoitsu) == 1)
        {
            cout << invalidInput;
            cin >> chitoitsuString;
            chitoitsu = checkError::convertToInt(chitoitsuString);
        }

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
        if (machi.at(0) == tileStringThree.at(0) && closed)
        {
            cout << "Was the winning hand Kokushi Musou?(y/n)\n";
            cin >> kokushiString;
            kokushi = checkError::convertToInt(kokushiString);
            while (checkError::inputChecking(kokushi) == 1)
            {
                cout << invalidInput;
                cin >> kokushiString;
                kokushi = checkError::convertToInt(kokushiString);
            }
            if (kokushi == 1)
            {
                kokushiThirteenWait = 1;
            }

        }
        if (machi.at(0) == tileStringTwo.at(0) && closed)
        {
            cout << "Was the winning hand Kokushi Musou? (y/n)\n";
            cin >> kokushiString;
            kokushi = checkError::convertToInt(kokushiString);
            while (checkError::inputChecking(kokushi) == 1)
            {
                cout << invalidInput;
                cin >> kokushiString;
                kokushi = checkError::convertToInt(kokushiString);
            }
            kokushiThirteenWait = 0;
        }
        if (!kokushi)
        {
            kokushi = 0;
            kokushiThirteenWait = 0;
            cout << "List in PBMH/123456789 order.\n";
            cout << "What was the first meld?\n";
            cin >> tileStringFirst;

            while (checkError::setChecking(tileStringFirst) == 1)
            {
                std::cout << invalidMeld;
                cin >> tileStringFirst;
            }

            if (!(tsumo && closed) && (tileStringFirst.at(1) == tileStringFirst.at(2))) {
                cout << "Was it FULLY closed? (y/n)\n";
                cin >> setOneClosedString;
                setOneClosed = checkError::convertToInt(setOneClosedString);
                while (checkError::inputChecking(setOneClosed) == 1)
                {
                    cout << invalidInput;
                    cin >> setOneClosedString;
                    setOneClosed = checkError::convertToInt(setOneClosedString);
                }
            }
            else {
                setOneClosed = 1;
            }



            cout << "What was the second meld?\n";
            cin >> tileStringSecond;

            while (checkError::setChecking(tileStringSecond) == 1)
            {
                std::cout << invalidMeld;
                cin >> tileStringSecond;
            }
            if (!(tsumo && closed) && (tileStringSecond.at(1) == tileStringSecond.at(2))) {
                cout << "Was it FULLY closed? (y/n)\n";
                cin >> setTwoClosedString;
                setTwoClosed = checkError::convertToInt(setTwoClosedString);
                while (checkError::inputChecking(setTwoClosed) == 1)
                {
                    cout << invalidInput;
                    cin >> setTwoClosedString;
                    setOneClosed = checkError::convertToInt(setOneClosedString);
                }
            }
            else {
                setTwoClosed = 1;
            }
            cout << "What was the third meld?\n";
            cin >> tileStringThird;

            while (checkError::setChecking(tileStringThird) == 1)
            {
                std::cout << invalidMeld;
                cin >> tileStringThird;
            }


            if (!(tsumo && closed) && (tileStringThird.at(1) == tileStringThird.at(2))) {
                cout << "Was it FULLY closed? (y/n)\n";
                cin >> setThreeClosedString;
                setThreeClosed = checkError::convertToInt(setThreeClosedString);
                while (checkError::inputChecking(setThreeClosed) == 1)
                {
                    cout << invalidInput;
                    cin >> setThreeClosedString;
                    setThreeClosed = checkError::convertToInt(setThreeClosedString);
                }
            }
            else {
                setThreeClosed = 1;
            }



            cout << "What was the fourth meld?\n";
            cin >> tileStringFourth;

            while (checkError::setChecking(tileStringFourth) == 1)
            {
                std::cout << invalidMeld;
                cin >> tileStringFourth;
            }
            if (!(tsumo && closed) && (tileStringFourth.at(1) == tileStringFourth.at(2))) {
                cout << "Was it FULLY closed? (y/n)\n";
                cin >> setFourClosedString;
                setFourClosed = checkError::convertToInt(setFourClosedString);
                while (checkError::inputChecking(setFourClosed) == 1)
                {
                    cout << invalidInput;
                    cin >> setFourClosedString;
                    setFourClosed = checkError::convertToInt(setFourClosedString);
                }
            }
            else {
                setFourClosed = 1;
            }

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
    cout << "Input y for yes, n for no\n";
    if (personalWind.at(0) == tileStringEast.at(0))
    {
        dealer = 1;
    }
    if (riichibon != 0)
    {
        cout << "Did the winner declare Riichi?\n";
        cin >> riichiString;
        riichi = checkError::convertToInt(riichiString);
        while (checkError::inputChecking(riichi) == 1)
        {
            cout << invalidInput;
            cin >> riichiString;
            riichi = checkError::convertToInt(riichiString);
        }
    }
    else
    {
        riichi = 0;
    }

    if (riichi)
    {
        cout << "Was it declared on the first turn without interruption?\n";
        cin >> doubleRiichiString;
        doubleRiichi = checkError::convertToInt(doubleRiichiString);
        while (checkError::inputChecking(doubleRiichi) == 1)
        {
            cout << invalidInput;
            cin >> doubleRiichiString;
            doubleRiichi = checkError::convertToInt(doubleRiichiString);
        }
        cout << "Did the winner win in one turn of Riichi without interruption?\n";
        cin >> ippatsuString;
        ippatsu = checkError::convertToInt(ippatsuString);
        while (checkError::inputChecking(ippatsu) == 1)
        {
            cout << invalidInput;
            cin >> ippatsuString;
            ippatsu = checkError::convertToInt(ippatsuString);
        }
    }
    else
    {
        doubleRiichi = 0;
        ippatsu = 0;
    }
    if (!chitoitsu && !kokushi && tsumo && ((tileStringFirst.length() == lengthStringFour.length() && (tileStringFirst.at(0) == tileStringEast.at(0) || tileStringFirst.at(0) ==  tileStringSouth.at(0) || tileStringFirst.at(0) ==  tileStringWest.at(0) || tileStringFirst.at(0) ==  tileStringNorth.at(0) || tileStringFirst.at(0) ==  tileStringGreen.at(0) || tileStringFirst.at(0) ==  tileStringRed.at(0) || tileStringFirst.at(0) == tileStringWhite.at(0))) || (tileStringFirst.length() == lengthStringFive.length() && (tileStringFirst.at(0) == tileStringPinzu.at(0) || tileStringFirst.at(0) == tileStringSouzu.at(0) || tileStringFirst.at(0) ==  tileStringManzu.at(0))) || (tileStringSecond.length() == lengthStringFour.length() && (tileStringSecond.at(0) == tileStringEast.at(0) || tileStringSecond.at(0) ==  tileStringSouth.at(0) || tileStringSecond.at(0) ==  tileStringWest.at(0) || tileStringSecond.at(0) ==  tileStringNorth.at(0) || tileStringSecond.at(0) ==  tileStringGreen.at(0) || tileStringSecond.at(0) ==  tileStringRed.at(0) || tileStringSecond.at(0) == tileStringWhite.at(0))) || (tileStringSecond.length() == lengthStringFive.length() && (tileStringSecond.at(0) == tileStringPinzu.at(0) || tileStringSecond.at(0) == tileStringSouzu.at(0) || tileStringSecond.at(0) ==  tileStringManzu.at(0))) || (tileStringThird.length() == lengthStringFour.length() && (tileStringThird.at(0) == tileStringEast.at(0) || tileStringThird.at(0) ==  tileStringSouth.at(0) || tileStringThird.at(0) ==  tileStringWest.at(0) || tileStringThird.at(0) ==  tileStringNorth.at(0) || tileStringThird.at(0) ==  tileStringGreen.at(0) || tileStringThird.at(0) ==  tileStringRed.at(0) || tileStringThird.at(0) == tileStringWhite.at(0))) || (tileStringThird.length() == lengthStringFive.length() && (tileStringThird.at(0) == tileStringPinzu.at(0) || tileStringThird.at(0) == tileStringSouzu.at(0) || tileStringThird.at(0) ==  tileStringManzu.at(0))) || (tileStringFourth.length() == lengthStringFour.length() && (tileStringFourth.at(0) == tileStringEast.at(0) || tileStringFourth.at(0) ==  tileStringSouth.at(0) || tileStringFourth.at(0) ==  tileStringWest.at(0) || tileStringFourth.at(0) ==  tileStringNorth.at(0) || tileStringFourth.at(0) ==  tileStringGreen.at(0) || tileStringFourth.at(0) ==  tileStringRed.at(0) || tileStringFourth.at(0) == tileStringWhite.at(0))) || (tileStringFourth.length() == lengthStringFive.length() && (tileStringFourth.at(0) == tileStringPinzu.at(0) || tileStringFourth.at(0) == tileStringSouzu.at(0) || tileStringFourth.at(0) ==  tileStringManzu.at(0)))))
    {
        cout << "Did the winner declare kan, then win on the extra draw?\n";
        cin >> rinshanString;
        rinshan = checkError::convertToInt(rinshanString);
        while (checkError::inputChecking(rinshan) == 1)
        {
            cout << invalidInput;
            cin >> rinshanString;
            rinshan = checkError::convertToInt(rinshanString);
        }
    }
    if (!rinshan && !tsumo)
    {
        cout << "Did the winner ron off of a late kan?\n";
        cin >> chankanString;
        chankan = checkError::convertToInt(chankanString);
        while (checkError::inputChecking(chankan) == 1)
        {
            cout << invalidInput;
            cin >> chankanString;
            chankan = checkError::convertToInt(chankanString);
        }
    }
    else
    {
        chankan = 0;
    }
    if (!rinshan && !chankan && tsumo && (!ippatsu && !doubleRiichi))
    {
        cout << "Did the winner tsumo on the last tile?\n";
        cin >> haiteiString;
        haitei = checkError::convertToInt(haiteiString);
        while (checkError::inputChecking(haitei) == 1)
        {
            cout << invalidInput;
            cin >> haiteiString;
            haitei = checkError::convertToInt(haiteiString);
        }
    }
    else
    {
        haitei = 0;
    }
    if (!rinshan && !chankan && !haitei && !tsumo && (!ippatsu && !doubleRiichi))
    {
        cout << "Did the winner ron on the last tile?\n";
        cin >> houteiString;
        houtei = checkError::convertToInt(houteiString);
        while (checkError::inputChecking(houtei) == 1)
        {
            cout << invalidInput;
            cin >> houteiString;
            houtei = checkError::convertToInt(houteiString);
        }
    }
    else
    {
        houtei = 0;
    }
    cout << "Is this the eighth consecutive victory for the winner?\n";
    cin >> paarenchanString;
    paarenchan = checkError::convertToInt(paarenchanString);
    while (checkError::inputChecking(paarenchan) == 1)
    {
        cout << invalidInput;
        cin >> paarenchanString;
        paarenchan = checkError::convertToInt(paarenchanString);
    }
    if (!dealer && !riichi && !rinshan && !chankan && !haitei && !houtei && closed && !((tileStringFirst.length() == lengthStringFour.length() && (tileStringFirst.at(0) == tileStringEast.at(0) || tileStringFirst.at(0) ==  tileStringSouth.at(0) || tileStringFirst.at(0) ==  tileStringWest.at(0) || tileStringFirst.at(0) ==  tileStringNorth.at(0) || tileStringFirst.at(0) ==  tileStringGreen.at(0) || tileStringFirst.at(0) ==  tileStringRed.at(0) || tileStringFirst.at(0) == tileStringWhite.at(0))) || (tileStringFirst.length() == lengthStringFive.length() && (tileStringFirst.at(0) == tileStringPinzu.at(0) || tileStringFirst.at(0) == tileStringSouzu.at(0) || tileStringFirst.at(0) ==  tileStringManzu.at(0))) || (tileStringSecond.length() == lengthStringFour.length() && (tileStringSecond.at(0) == tileStringEast.at(0) || tileStringSecond.at(0) ==  tileStringSouth.at(0) || tileStringSecond.at(0) ==  tileStringWest.at(0) || tileStringSecond.at(0) ==  tileStringNorth.at(0) || tileStringSecond.at(0) ==  tileStringGreen.at(0) || tileStringSecond.at(0) ==  tileStringRed.at(0) || tileStringSecond.at(0) == tileStringWhite.at(0))) || (tileStringSecond.length() == lengthStringFive.length() && (tileStringSecond.at(0) == tileStringPinzu.at(0) || tileStringSecond.at(0) == tileStringSouzu.at(0) || tileStringSecond.at(0) ==  tileStringManzu.at(0))) || (tileStringThird.length() == lengthStringFour.length() && (tileStringThird.at(0) == tileStringEast.at(0) || tileStringThird.at(0) ==  tileStringSouth.at(0) || tileStringThird.at(0) ==  tileStringWest.at(0) || tileStringThird.at(0) ==  tileStringNorth.at(0) || tileStringThird.at(0) ==  tileStringGreen.at(0) || tileStringThird.at(0) ==  tileStringRed.at(0) || tileStringThird.at(0) == tileStringWhite.at(0))) || (tileStringThird.length() == lengthStringFive.length() && (tileStringThird.at(0) == tileStringPinzu.at(0) || tileStringThird.at(0) == tileStringSouzu.at(0) || tileStringThird.at(0) ==  tileStringManzu.at(0))) || (tileStringFourth.length() == lengthStringFour.length() && (tileStringFourth.at(0) == tileStringEast.at(0) || tileStringFourth.at(0) ==  tileStringSouth.at(0) || tileStringFourth.at(0) ==  tileStringWest.at(0) || tileStringFourth.at(0) ==  tileStringNorth.at(0) || tileStringFourth.at(0) ==  tileStringGreen.at(0) || tileStringFourth.at(0) ==  tileStringRed.at(0) || tileStringFourth.at(0) == tileStringWhite.at(0))) || (tileStringFourth.length() == lengthStringFive.length() && (tileStringFourth.at(0) == tileStringPinzu.at(0) || tileStringFourth.at(0) == tileStringSouzu.at(0) || tileStringFourth.at(0) ==  tileStringManzu.at(0)))))
        {
            if (tsumo)
            {
                cout << "Did the winner tsumo on the first draw? (Nondealer only)\n";
                cin >> chiihouString;
                chiihou = checkError::convertToInt(chiihouString);
                while (checkError::inputChecking(chiihou) == 1)
                {
                    cout << invalidInput;
                    cin >> chiihouString;
                    chiihou = checkError::convertToInt(chiihouString);
                }
            }

            if (!tsumo)
            {
                cout << "Did the winner ron off the first discard without interruption?\n";
                cin >> renhouString;
                renhou = checkError::convertToInt(renhouString);
                while (checkError::inputChecking(renhou) == 1)
                {
                    cout << invalidInput;
                    cin >> renhouString;
                    renhou = checkError::convertToInt(renhouString);
                }
            }

        }
    else
    {
        renhou = 0;
        chiihou = 0;
    }
    if (dealer && !riichi && !rinshan && !chankan && !haitei && !houtei && tsumo && closed && !((tileStringFirst.length() == lengthStringFour.length() && (tileStringFirst.at(0) == tileStringEast.at(0) || tileStringFirst.at(0) ==  tileStringSouth.at(0) || tileStringFirst.at(0) ==  tileStringWest.at(0) || tileStringFirst.at(0) ==  tileStringNorth.at(0) || tileStringFirst.at(0) ==  tileStringGreen.at(0) || tileStringFirst.at(0) ==  tileStringRed.at(0) || tileStringFirst.at(0) == tileStringWhite.at(0))) || (tileStringFirst.length() == lengthStringFive.length() && (tileStringFirst.at(0) == tileStringPinzu.at(0) || tileStringFirst.at(0) == tileStringSouzu.at(0) || tileStringFirst.at(0) ==  tileStringManzu.at(0))) || (tileStringSecond.length() == lengthStringFour.length() && (tileStringSecond.at(0) == tileStringEast.at(0) || tileStringSecond.at(0) ==  tileStringSouth.at(0) || tileStringSecond.at(0) ==  tileStringWest.at(0) || tileStringSecond.at(0) ==  tileStringNorth.at(0) || tileStringSecond.at(0) ==  tileStringGreen.at(0) || tileStringSecond.at(0) ==  tileStringRed.at(0) || tileStringSecond.at(0) == tileStringWhite.at(0))) || (tileStringSecond.length() == lengthStringFive.length() && (tileStringSecond.at(0) == tileStringPinzu.at(0) || tileStringSecond.at(0) == tileStringSouzu.at(0) || tileStringSecond.at(0) ==  tileStringManzu.at(0))) || (tileStringThird.length() == lengthStringFour.length() && (tileStringThird.at(0) == tileStringEast.at(0) || tileStringThird.at(0) ==  tileStringSouth.at(0) || tileStringThird.at(0) ==  tileStringWest.at(0) || tileStringThird.at(0) ==  tileStringNorth.at(0) || tileStringThird.at(0) ==  tileStringGreen.at(0) || tileStringThird.at(0) ==  tileStringRed.at(0) || tileStringThird.at(0) == tileStringWhite.at(0))) || (tileStringThird.length() == lengthStringFive.length() && (tileStringThird.at(0) == tileStringPinzu.at(0) || tileStringThird.at(0) == tileStringSouzu.at(0) || tileStringThird.at(0) ==  tileStringManzu.at(0))) || (tileStringFourth.length() == lengthStringFour.length() && (tileStringFourth.at(0) == tileStringEast.at(0) || tileStringFourth.at(0) ==  tileStringSouth.at(0) || tileStringFourth.at(0) ==  tileStringWest.at(0) || tileStringFourth.at(0) ==  tileStringNorth.at(0) || tileStringFourth.at(0) ==  tileStringGreen.at(0) || tileStringFourth.at(0) ==  tileStringRed.at(0) || tileStringFourth.at(0) == tileStringWhite.at(0))) || (tileStringFourth.length() == lengthStringFive.length() && (tileStringFourth.at(0) == tileStringPinzu.at(0) || tileStringFourth.at(0) == tileStringSouzu.at(0) || tileStringFourth.at(0) ==  tileStringManzu.at(0)))))
    {
        cout << "Did the winner tsumo on the first draw? (Dealer only)\n";
        cin >> tenhouString;
        tenhou = checkError::convertToInt(tenhouString);
        while (checkError::inputChecking(tenhou) == 1)
        {
            cout << invalidInput;
            cin >> tenhouString;
            tenhou = checkError::convertToInt(tenhouString);
        }
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
        if ((/*Check if same suit for everything*/tileStringFirst.at(0) == tileStringSecond.at(0) && tileStringFirst.at(0) == tileStringThird.at(0) && tileStringFirst.at(0) == tileStringFourth.at(0) && tileStringFirst.at(0) == tileStringPair.at(0)) && /*Check if fully closed*/(closed) && (/*Extra 1*/(tileStringFirst.at(1) == tileStringOne.at(0) && tileStringFirst.at(2) == tileStringOne.at(0) && tileStringFirst.at(3) == tileStringOne.at(0) && tileStringSecond.at(1) == tileStringOne.at(0) && tileStringSecond.at(2) == tileStringTwo.at(0) && tileStringSecond.at(3) == tileStringThree.at(0) && tileStringThird.at(1) == tileStringFour.at(0) && tileStringThird.at(2) == tileStringFive.at(0) && tileStringThird.at(3) == tileStringSix.at(0) && tileStringFourth.at(1) == tileStringSeven.at(0) && tileStringFourth.at(2) == tileStringEight.at(0) && tileStringFourth.at(3) == tileStringNine.at(0) && tileStringPair.at(1) == tileStringNine.at(0)) || /*Extra 2*/(tileStringFirst.at(1) == tileStringOne.at(0) && tileStringFirst.at(2) == tileStringOne.at(0) && tileStringFirst.at(3) == tileStringOne.at(0) && tileStringSecond.at(1) == tileStringThree.at(0) && tileStringSecond.at(2) == tileStringFour.at(0) && tileStringSecond.at(3) == tileStringFive.at(0) && tileStringThird.at(1) == tileStringSix.at(0) && tileStringThird.at(2) == tileStringSeven.at(0) && tileStringThird.at(3) == tileStringEight.at(0) && tileStringFourth.at(1) == tileStringNine.at(0) && tileStringFourth.at(2) == tileStringNine.at(0) && tileStringFourth.at(3) == tileStringNine.at(0) && tileStringPair.at(1) == tileStringTwo.at(0)) || /*Extra 3*/(tileStringFirst.at(1) == tileStringOne.at(0) && tileStringFirst.at(2) == tileStringTwo.at(0) && tileStringFirst.at(3) == tileStringThree.at(0) && tileStringSecond.at(1) == tileStringThree.at(0) && tileStringSecond.at(2) == tileStringFour.at(0) && tileStringSecond.at(3) == tileStringFive.at(0) && tileStringThird.at(1) == tileStringSix.at(0) && tileStringThird.at(2) == tileStringSeven.at(0) && tileStringThird.at(3) == tileStringEight.at(0) && tileStringFourth.at(1) == tileStringNine.at(0) && tileStringFourth.at(2) == tileStringNine.at(0) && tileStringFourth.at(3) == tileStringNine.at(0) && tileStringPair.at(1) == tileStringOne.at(0)) || /*Extra 4*/(tileStringFirst.at(1) == tileStringOne.at(0) && tileStringFirst.at(2) == tileStringOne.at(0) && tileStringFirst.at(3) == tileStringOne.at(0) && tileStringSecond.at(1) == tileStringTwo.at(0) && tileStringSecond.at(2) == tileStringThree.at(0) && tileStringSecond.at(3) == tileStringFour.at(0) && tileStringThird.at(1) == tileStringFour.at(0) && tileStringThird.at(2) == tileStringFive.at(0) && tileStringThird.at(3) == tileStringSix.at(0) && tileStringFourth.at(1) == tileStringSeven.at(0) && tileStringFourth.at(2) == tileStringEight.at(0) && tileStringFourth.at(3) == tileStringNine.at(0) && tileStringPair.at(1) == tileStringNine.at(0)) || /*Extra 5*/(tileStringFirst.at(1) == tileStringOne.at(0) && tileStringFirst.at(2) == tileStringOne.at(0) && tileStringFirst.at(3) == tileStringOne.at(0) && tileStringSecond.at(1) == tileStringTwo.at(0) && tileStringSecond.at(2) == tileStringThree.at(0) && tileStringSecond.at(3) == tileStringFour.at(0) && tileStringThird.at(1) == tileStringSix.at(0) && tileStringThird.at(2) == tileStringSeven.at(0) && tileStringThird.at(3) == tileStringEight.at(0) && tileStringFourth.at(1) == tileStringNine.at(0) && tileStringFourth.at(2) == tileStringNine.at(0) && tileStringFourth.at(3) == tileStringNine.at(0) && tileStringPair.at(1) == tileStringFive.at(0)) || /*Extra 6*/(tileStringFirst.at(1) == tileStringOne.at(0) && tileStringFirst.at(2) == tileStringTwo.at(0) && tileStringFirst.at(3) == tileStringThree.at(0) && tileStringSecond.at(1) == tileStringFour.at(0) && tileStringSecond.at(2) == tileStringFive.at(0) && tileStringSecond.at(3) == tileStringSix.at(0) && tileStringThird.at(1) == tileStringSix.at(0) && tileStringThird.at(2) == tileStringSeven.at(0) && tileStringThird.at(3) == tileStringEight.at(0) && tileStringFourth.at(1) == tileStringNine.at(0) && tileStringFourth.at(2) == tileStringNine.at(0) && tileStringFourth.at(3) == tileStringNine.at(0) && tileStringPair.at(1) == tileStringOne.at(0)) || /*Extra 7*/(tileStringFirst.at(1) == tileStringOne.at(0) && tileStringFirst.at(2) == tileStringOne.at(0) && tileStringFirst.at(3) == tileStringOne.at(0) && tileStringSecond.at(1) == tileStringTwo.at(0) && tileStringSecond.at(2) == tileStringThree.at(0) && tileStringSecond.at(3) == tileStringFour.at(0) && tileStringThird.at(1) == tileStringFive.at(0) && tileStringThird.at(2) == tileStringSix.at(0) && tileStringThird.at(3) == tileStringSeven.at(0) && tileStringFourth.at(1) == tileStringSeven.at(0) && tileStringFourth.at(2) == tileStringEight.at(0) && tileStringFourth.at(3) == tileStringNine.at(0) && tileStringPair.at(1) == tileStringNine.at(0)) || /*Extra 8*/(tileStringFirst.at(1) == tileStringOne.at(0) && tileStringFirst.at(2) == tileStringOne.at(0) && tileStringFirst.at(3) == tileStringOne.at(0) && tileStringSecond.at(1) == tileStringTwo.at(0) && tileStringSecond.at(2) == tileStringThree.at(0) && tileStringSecond.at(3) == tileStringFour.at(0) && tileStringThird.at(1) == tileStringFive.at(0) && tileStringThird.at(2) == tileStringSix.at(0) && tileStringThird.at(3) == tileStringSeven.at(0) && tileStringFourth.at(1) == tileStringNine.at(0) && tileStringFourth.at(2) == tileStringNine.at(0) && tileStringFourth.at(3) == tileStringNine.at(0) && tileStringPair.at(1) == tileStringEight.at(0)) || /*Extra 9*/(tileStringFirst.at(1) == tileStringOne.at(0) && tileStringFirst.at(2) == tileStringTwo.at(0) && tileStringFirst.at(3) == tileStringThree.at(0) && tileStringSecond.at(1) == tileStringFour.at(0) && tileStringSecond.at(2) == tileStringFive.at(0) && tileStringSecond.at(3) == tileStringSix.at(0) && tileStringThird.at(1) == tileStringSeven.at(0) && tileStringThird.at(2) == tileStringEight.at(0) && tileStringThird.at(3) == tileStringNine.at(0) && tileStringFourth.at(1) == tileStringNine.at(0) && tileStringFourth.at(2) == tileStringNine.at(0) && tileStringFourth.at(3) == tileStringNine.at(0) && tileStringPair.at(1) == tileStringOne.at(0))))
        {
            yakumanCounter ++;
            chuuren = 1;
            if (machi.at(0) == tileStringThree.at(0))
            {
                yakumanCounter ++;
                junseiChuuren = 1;

            }

        }

    }

    if (!kokushi && !chitoitsu && !chuuren && closed)
    {
        if (setOneClosed && setTwoClosed && setThreeClosed && setFourClosed && tileStringFirst.at(1) == tileStringFirst.at(2) && tileStringSecond.at(1) == tileStringSecond.at(2) && tileStringThird.at(1) == tileStringThird.at(2) && tileStringFourth.at(1) == tileStringFourth.at(2))
        {
            suuankou = 1;
            yakumanCounter ++;
            if (machi.at(0) = tileStringTwo.at(0))
            {
                suuankouTanki = 1;
                yakumanCounter ++;
            }
        }
    }
    if (!kokushi && !chitoitsu && !chuuren)
    {
        if ((((tileStringFirst.at(0) == tileStringEast.at(0) || tileStringFirst.at(0) == tileStringSouth.at(0)) && (tileStringSecond.at(0) == tileStringSouth.at(0) || tileStringSecond.at(0) == tileStringWest.at(0)) && (tileStringThird.at(0) == tileStringWest.at(0) || tileStringThird.at(0) == tileStringNorth.at(0))) || ((tileStringSecond.at(0) == tileStringEast.at(0) || tileStringSecond.at(0) == tileStringSouth.at(0)) && (tileStringThird.at(0) == tileStringSouth.at(0) || tileStringThird == tileStringWest) && (tileStringFourth.at(0) == tileStringWest.at(0) || tileStringFourth.at(0) == tileStringNorth.at(0)))) && (tileStringPair.at(0) == tileStringEast.at(0) || tileStringPair.at(0) == tileStringSouth.at(0) || tileStringPair.at(0) == tileStringWest.at(0) || tileStringPair.at(0) == tileStringNorth.at(0)))
        {
            shousuushi = 1;
            yakumanCounter ++;
        }
    }

    if (!kokushi && !chitoitsu && !chuuren && !shousuushi)
    {
        if (tileStringFirst.at(0) == tileStringEast.at(0) && tileStringSecond.at(0) == tileStringSouth.at(0) && tileStringThird.at(0) == tileStringWest.at(0) && tileStringFourth.at(0) == tileStringNorth.at(0))
        {
            daisuushi = 1;
            yakumanCounter = yakumanCounter + 2;
        }
    }

    if (!kokushi && !chitoitsu && !chuuren)
    {
        if (tileStringSecond.at(0) == tileStringGreen.at(0) && tileStringThird.at(0) == tileStringRed.at(0) && tileStringFourth.at(0) == tileStringWhite.at(0))
        {
            daisangen = 1;
            yakumanCounter ++;
        }
    }

    if (!kokushi && !chitoitsu && !chuuren)
    {
        if (((tileStringFirst.length() == lengthStringFour.length() && (tileStringFirst.at(0) == tileStringEast.at(0) || tileStringFirst.at(0) == tileStringSouth.at(0) || tileStringFirst.at(0) == tileStringWest.at(0) || tileStringFirst.at(0) == tileStringNorth.at(0) || tileStringFirst.at(0) == tileStringGreen.at(0) || tileStringFirst.at(0) == tileStringRed.at(0) || tileStringFirst.at(0) == tileStringWhite.at(0))) || (((tileStringFirst.length() == lengthStringFive.length() && (tileStringFirst.at(0) == tileStringPinzu.at(0) || tileStringFirst.at(0) == tileStringSouzu.at(0) || tileStringFirst.at(0) == tileStringManzu.at(0)))))) && ((tileStringSecond.length() == lengthStringFour.length() && (tileStringSecond.at(0) == tileStringEast.at(0) || tileStringSecond.at(0) == tileStringSouth.at(0) || tileStringSecond.at(0) == tileStringWest.at(0) || tileStringSecond.at(0) == tileStringNorth.at(0) || tileStringSecond.at(0) == tileStringGreen.at(0) || tileStringSecond.at(0) == tileStringRed.at(0) || tileStringSecond.at(0) == tileStringWhite.at(0))) || (((tileStringSecond.length() == lengthStringFive.length() && (tileStringSecond.at(0) == tileStringPinzu.at(0) || tileStringSecond.at(0) == tileStringSouzu.at(0) || tileStringSecond.at(0) == tileStringManzu.at(0)))))) && ((tileStringThird.length() == lengthStringFour.length() && (tileStringThird.at(0) == tileStringEast.at(0) || tileStringThird.at(0) == tileStringSouth.at(0) || tileStringThird.at(0) == tileStringWest.at(0) || tileStringThird.at(0) == tileStringNorth.at(0) || tileStringThird.at(0) == tileStringGreen.at(0) || tileStringThird.at(0) == tileStringRed.at(0) || tileStringThird.at(0) == tileStringWhite.at(0))) || (((tileStringThird.length() == lengthStringFive.length() && (tileStringThird.at(0) == tileStringPinzu.at(0) || tileStringThird.at(0) == tileStringSouzu.at(0) || tileStringThird.at(0) == tileStringManzu.at(0)))))) && ((tileStringFourth.length() == lengthStringFour.length() && (tileStringFourth.at(0) == tileStringEast.at(0) || tileStringFourth.at(0) == tileStringSouth.at(0) || tileStringFourth.at(0) == tileStringWest.at(0) || tileStringFourth.at(0) == tileStringNorth.at(0) || tileStringFourth.at(0) == tileStringGreen.at(0) || tileStringFourth.at(0) == tileStringRed.at(0) || tileStringFourth.at(0) == tileStringWhite.at(0))) || (((tileStringFourth.length() == lengthStringFive.length() && (tileStringFourth.at(0) == tileStringPinzu.at(0) || tileStringFourth.at(0) == tileStringSouzu.at(0) || tileStringFourth.at(0) == tileStringManzu.at(0)))))))
        {
            suukantsu = 1;
            yakumanCounter ++;
        }
    }

    if (!kokushi && !chuuren)
    {
        if (chitoitsu)
        {
            if (tileStringPairOne.at(0) == tileStringEast.at(0) && tileStringPairTwo.at(0) == tileStringSouth.at(0) && tileStringPairThree.at(0) == tileStringWest.at(0) && tileStringPairFour.at(0) == tileStringNorth.at(0) && tileStringPairFive.at(0) == tileStringGreen.at(0) && tileStringPairSix.at(0) == tileStringRed.at(0) && tileStringPairSeven.at(0) == tileStringWhite.at(0))
            {
                tsuuiisou = 1;
                daichisei = 1;
                yakumanCounter = yakumanCounter + 2;
            }
        }

        if (!chitoitsu)
        {
            if ((tileStringFirst.at(0) == tileStringEast.at(0) || tileStringFirst.at(0) == tileStringSouth.at(0) || tileStringFirst.at(0) == tileStringWest.at(0) || tileStringFirst.at(0) == tileStringNorth.at(0) || tileStringFirst.at(0) == tileStringGreen.at(0) || tileStringFirst.at(0) == tileStringRed.at(0) || tileStringFirst.at(0) == tileStringWhite.at(0)) && (tileStringSecond.at(0) == tileStringEast.at(0) || tileStringSecond.at(0) == tileStringSouth.at(0) || tileStringSecond.at(0) == tileStringWest.at(0) || tileStringSecond.at(0) == tileStringNorth.at(0) || tileStringSecond.at(0) == tileStringGreen.at(0) || tileStringSecond.at(0) == tileStringRed.at(0) || tileStringSecond.at(0) == tileStringWhite.at(0)) && (tileStringThird.at(0) == tileStringEast.at(0) || tileStringThird.at(0) == tileStringSouth.at(0) || tileStringThird.at(0) == tileStringWest.at(0) || tileStringThird.at(0) == tileStringNorth.at(0) || tileStringThird.at(0) == tileStringGreen.at(0) || tileStringThird.at(0) == tileStringRed.at(0) || tileStringThird.at(0) == tileStringWhite.at(0)) && (tileStringFourth.at(0) == tileStringEast.at(0) || tileStringFourth.at(0) == tileStringSouth.at(0) || tileStringFourth.at(0) == tileStringWest.at(0) || tileStringFourth.at(0) == tileStringNorth.at(0) || tileStringFourth.at(0) == tileStringGreen.at(0) || tileStringFourth.at(0) == tileStringRed.at(0) || tileStringFourth.at(0) == tileStringWhite.at(0)) && (tileStringPair.at(0) == tileStringEast.at(0) || tileStringPair.at(0) == tileStringSouth.at(0) || tileStringPair.at(0) == tileStringWest.at(0) || tileStringPair.at(0) == tileStringNorth.at(0) || tileStringPair.at(0) == tileStringGreen.at(0) || tileStringPair.at(0) == tileStringRed.at(0) || tileStringPair.at(0) == tileStringWhite.at(0)))
            {
                tsuuiisou = 1;
                yakumanCounter ++;
            }
        }
    }

    if (!tsuuiisou && !kokushi && !chuuren && !chitoitsu)
    {
        if ((tileStringFirst.at(1) == tileStringOne.at(0) || tileStringFirst.at(1) == tileStringNine.at(0)) && (tileStringSecond.at(1) == tileStringOne.at(0) || tileStringSecond.at(1) == tileStringNine.at(0)) && (tileStringThird.at(1) == tileStringOne.at(0) || tileStringThird.at(1) == tileStringNine.at(0)) && (tileStringFourth.at(1) == tileStringOne.at(0) || tileStringFourth.at(1) == tileStringNine.at(0)) && (tileStringPair.at(1) == tileStringOne.at(0) || tileStringPair.at(1) == tileStringNine.at(0)) && (tileStringFirst.at(1) == tileStringFirst.at(2) && tileStringSecond.at(1) == tileStringSecond.at(2) && tileStringThird.at(1) == tileStringThird.at(2) && tileStringFourth.at(1) == tileStringFourth.at(2)))
        {
            chinroutou = 1;
            yakumanCounter ++;
        }
    }

    if (!chitoitsu && !kokushi && !chuuren && !tsuuiisou)
    {
        if ((tileStringFirst.at(0) == tileStringSouzu.at(0) && tileStringSecond.at(0) == tileStringSouzu.at(0) && tileStringThird.at(0) == tileStringSouzu.at(0) && (tileStringFourth.at(0) == tileStringSouzu.at(0) || tileStringFourth.at(0) == tileStringGreen.at(0)) && (tileStringPair.at(0) == tileStringSouzu.at(0) || tileStringPair.at(0) == tileStringGreen.at(0))) && (tileStringFirst.at(1) == tileStringTwo.at(0) || (tileStringFirst.at(1) == tileStringThree.at(0) && tileStringFirst.at(2) == tileStringThree.at(0)) || (tileStringFirst.at(1) == tileStringFour.at(0) && tileStringFirst.at(2) == tileStringFour.at(0)) || (tileStringFirst.at(1) == tileStringSix.at(0) && tileStringFirst.at(2) == tileStringSix.at(0)) || (tileStringFirst.at(1) == tileStringEight.at(0) && tileStringFirst.at(2) == tileStringEight.at(0)) || tileStringFirst.at(0) == tileStringGreen.at(0)) &&  (tileStringSecond.at(1) == tileStringTwo.at(0) || (tileStringSecond.at(1) == tileStringThree.at(0) && tileStringSecond.at(2) == tileStringThree.at(0)) || (tileStringSecond.at(1) == tileStringFour.at(0) && tileStringSecond.at(2) == tileStringFour.at(0)) || (tileStringSecond.at(1) == tileStringSix.at(0) && tileStringSecond.at(2) == tileStringSix.at(0)) || (tileStringSecond.at(1) == tileStringEight.at(0) && tileStringSecond.at(2) == tileStringEight.at(0)) || tileStringSecond.at(0) == tileStringGreen.at(0)) &&  (tileStringThird.at(1) == tileStringTwo.at(0) || (tileStringThird.at(1) == tileStringThree.at(0) && tileStringThird.at(2) == tileStringThree.at(0)) || (tileStringThird.at(1) == tileStringFour.at(0) && tileStringThird.at(2) == tileStringFour.at(0)) || (tileStringThird.at(1) == tileStringSix.at(0) && tileStringThird.at(2) == tileStringSix.at(0)) || (tileStringThird.at(1) == tileStringEight.at(0) && tileStringThird.at(2) == tileStringEight.at(0)) || tileStringThird.at(0) == tileStringGreen.at(0)) &&  (tileStringFourth.at(1) == tileStringTwo.at(0) || (tileStringFourth.at(1) == tileStringThree.at(0) && tileStringFourth.at(2) == tileStringThree.at(0)) || (tileStringFourth.at(1) == tileStringFour.at(0) && tileStringFourth.at(2) == tileStringFour.at(0)) || (tileStringFourth.at(1) == tileStringSix.at(0) && tileStringFourth.at(2) == tileStringSix.at(0)) || (tileStringFourth.at(1) == tileStringEight.at(0) && tileStringFourth.at(2) == tileStringEight.at(0)) || tileStringFourth.at(0) == tileStringGreen.at(0)) &&  (tileStringPair.at(1) == tileStringTwo.at(0) || (tileStringPair.at(1) == tileStringThree.at(0) && tileStringPair.at(2) == tileStringThree.at(0)) || (tileStringPair.at(1) == tileStringFour.at(0) && tileStringPair.at(2) == tileStringFour.at(0)) || (tileStringPair.at(1) == tileStringSix.at(0) && tileStringPair.at(2) == tileStringSix.at(0)) || (tileStringPair.at(1) == tileStringEight.at(0) && tileStringPair.at(2) == tileStringEight.at(0)) || tileStringPair.at(0) == tileStringGreen.at(0)))
        {
            ryuuiisou = 1;
            yakumanCounter ++;
        }
    }

    if (!chitoitsu && !kokushi && !chuuren && !tsuuiisou)
    {
        if (tileStringFirst.at(0) == tileStringSecond.at(0) && tileStringFirst.at(0) == tileStringThird.at(0) && tileStringFirst.at(0) == tileStringFourth.at(0) && tileStringFirst.at(0) == tileStringPair.at(0) && ((tileStringFirst.at(1) == tileStringTwo.at(0) && tileStringFirst.at(2) == tileStringThree.at(0) && tileStringSecond.at(1) == tileStringTwo.at(0) && tileStringSecond.at(2) == tileStringThree.at(0) && tileStringThird.at(1) == tileStringFive.at(0) && tileStringThird.at(2) == tileStringSix.at(0) && tileStringFourth.at(1) == tileStringFive.at(0) && tileStringFourth.at(2) == tileStringSix.at(0) && tileStringPair.at(1) == tileStringEight.at(0)) || (tileStringFirst.at(1) == tileStringTwo.at(0) && tileStringFirst.at(2) == tileStringThree.at(0) && tileStringSecond.at(1) == tileStringTwo.at(0) && tileStringSecond.at(2) == tileStringThree.at(0) && tileStringThird.at(1) == tileStringSix.at(0) && tileStringThird.at(2) == tileStringSeven.at(0) && tileStringFourth.at(1) == tileStringSix.at(0) && tileStringFourth.at(2) == tileStringSeven.at(0) && tileStringPair.at(1) == tileStringFive.at(0)) || (tileStringFirst.at(1) == tileStringThree.at(0) && tileStringFirst.at(2) == tileStringFour.at(0) && tileStringSecond.at(1) == tileStringThree.at(0) && tileStringSecond.at(2) == tileStringFour.at(0) && tileStringThird.at(1) == tileStringFive.at(0) && tileStringThird.at(2) == tileStringSix.at(0) && tileStringFourth.at(1) == tileStringFive.at(0) && tileStringFourth.at(2) == tileStringSix.at(0) && tileStringPair.at(1) == tileStringTwo.at(0))))
        {
            if (tileStringFirst.at(0) == tileStringPinzu.at(0))
            {
                daisharin = 1;
                yakumanCounter ++;
            }

            if (tileStringFirst.at(0) == tileStringSouzu.at(0))
            {
                daichikurin = 1;
                yakumanCounter ++;
            }

            if (tileStringFirst.at(0) == tileStringManzu.at(0))
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
            yakuHan ++;
            if (doubleRiichi)
            {
                yakuHan ++;
            }

            if (ippatsu)
            {
                yakuHan ++;
            }
        }

        if (chitoitsu)
        {
            yakuHan = yakuHan + 2;
        }

        if (tsumo && closed)
        {
            menzenTsumo = 1;
            yakuHan ++;
        }

        if (haitei)
        {
            yakuHan ++;
        }

        if (houtei)
        {
            yakuHan ++;
        }

        if (rinshan)
        {
            yakuHan ++;
        }

        if (chankan)
        {
            yakuHan ++;
        }

        if (!chitoitsu && machi.at(0) == tileStringZero.at(0) && closed && tileStringFirst.at(1) != tileStringFirst.at(2) && tileStringSecond.at(1) != tileStringSecond.at(2) && tileStringThird.at(1) != tileStringThird.at(2) && tileStringFourth.at(1) != tileStringFourth.at(2)  && tileStringPair.at(0) != roundWind.at(0) && tileStringPair.at(0) != personalWind.at(0) && tileStringPair.at(0) != tileStringGreen.at(0) && tileStringPair.at(0) != tileStringRed.at(0) && tileStringPair.at(0) != tileStringWhite.at(0))
        {
            pinfu = 1;
            yakuHan ++;
        }

        if ((!chitoitsu && tileStringFirst.at(1) == tileStringOne.at(0) && tileStringFirst.at(2) == tileStringTwo.at(0) && tileStringSecond.at(1) == tileStringFour.at(0) && tileStringSecond.at(2) == tileStringFive.at(0) && tileStringThird.at(1) == tileStringSeven.at(0) && tileStringThird.at(2) == tileStringEight.at(0)) || (tileStringSecond.at(1) == tileStringOne.at(0) && tileStringSecond.at(2) == tileStringTwo.at(0) && tileStringThird.at(1) == tileStringFour.at(0) && tileStringThird.at(2) == tileStringFive.at(0) && tileStringFourth.at(1) == tileStringSeven.at(0) && tileStringFourth.at(2) == tileStringEight.at(0)))
        {
            itsuu = 1;
            if (closed)
            {
                yakuHan = yakuHan + 2;
            }

            else
            {
                yakuHan ++;
            }
        }

        if (!chitoitsu && closed && ((tileStringFirst.at(0) == tileStringSecond.at(0) && tileStringFirst.at(1) != tileStringFirst.at(2) && tileStringSecond.at(1) != tileStringSecond.at(2) && tileStringFirst.at(1) == tileStringSecond.at(1)) || (tileStringSecond.at(0) == tileStringThird.at(0) && tileStringSecond.at(1) != tileStringSecond.at(2) && tileStringThird.at(1) != tileStringThird.at(2) && tileStringSecond.at(1) == tileStringThird.at(1)) || (tileStringThird.at(0) == tileStringFourth.at(0) && tileStringThird.at(1) != tileStringThird.at(2) && tileStringFourth.at(1) != tileStringFourth.at(2) && tileStringThird.at(1) == tileStringFourth.at(1))))
        {
            iipeikou = 1;
            yakuHan ++;
        }

        if (!chitoitsu && iipeikou && closed && (tileStringFirst.at(0) == tileStringSecond.at(0) && tileStringFirst.at(1) != tileStringFirst.at(2) && tileStringSecond.at(1) != tileStringSecond.at(2) && tileStringFirst.at(1) == tileStringSecond.at(1)) && (tileStringThird.at(0) == tileStringFourth.at(0) && tileStringThird.at(1) != tileStringThird.at(2) && tileStringFourth.at(1) != tileStringFourth.at(2) && tileStringThird.at(1) == tileStringFourth.at(1)))
        {
            ryanpeikou = 1;
            yakuHan = yakuHan + 2;
        }

        if (!chitoitsu && (tileStringFirst.at(0) != tileStringSecond.at(0) && tileStringFirst.at(0) != tileStringThird.at(0) && tileStringSecond.at(0) != tileStringThird.at(0) && tileStringFirst.at(1) != tileStringFirst.at(2) && tileStringSecond.at(1) != tileStringSecond.at(2) && tileStringThird.at(1) != tileStringThird.at(2) && tileStringFirst.at(1) == tileStringSecond.at(1) && tileStringFirst.at(1) == tileStringThird.at(1)) || (tileStringSecond.at(0) != tileStringThird.at(0) && tileStringSecond.at(0) != tileStringFourth.at(0) && tileStringThird.at(0) != tileStringFourth.at(0) && tileStringSecond.at(1) != tileStringSecond.at(2) && tileStringThird.at(1) != tileStringThird.at(2) && tileStringFourth.at(1) != tileStringFourth.at(2) && tileStringSecond.at(1) == tileStringThird.at(1) && tileStringSecond.at(1) == tileStringFourth.at(1)) || (tileStringFirst.at(0) != tileStringThird.at(0) && tileStringFirst.at(0) != tileStringFourth.at(0) && tileStringThird.at(0) != tileStringFourth.at(0) && tileStringFirst.at(1) != tileStringFirst.at(2) && tileStringThird.at(1) != tileStringThird.at(2) && tileStringFourth.at(1) != tileStringFourth.at(2) && tileStringFirst.at(1) == tileStringThird.at(1) && tileStringFirst.at(1) == tileStringFourth.at(1)) || (tileStringFirst.at(0) != tileStringSecond.at(0) && tileStringFirst.at(0) != tileStringFourth.at(0) && tileStringSecond.at(0) != tileStringFourth.at(0) && tileStringFirst.at(1) != tileStringFirst.at(2) && tileStringSecond.at(1) != tileStringSecond.at(2) && tileStringFourth.at(1) != tileStringFourth.at(2) && tileStringFirst.at(1) == tileStringSecond.at(1) && tileStringFirst.at(1) == tileStringFourth.at(1)))
        {
            sanshokuDoujun = 1;
            if (closed)
            {
                yakuHan = yakuHan + 2;
            }
            else
            {
                yakuHan ++;
            }
        }

        if (!chitoitsu && tileStringFirst.at(1) == tileStringFirst.at(2) && tileStringSecond.at(1) == tileStringSecond.at(2) && tileStringThird.at(1) == tileStringThird.at(2) && tileStringFourth.at(1) == tileStringFourth.at(2))
        {
            toitoi = 1;
            yakuHan = yakuHan + 2;
        }

        if (!chitoitsu && ((tileStringFirst.at(1) == tileStringFirst.at(2) && tileStringSecond.at(1) == tileStringSecond.at(2) && tileStringThird.at(1) == tileStringThird.at(2) && setOneClosed && setTwoClosed && setThreeClosed) || (tileStringFirst.at(1) == tileStringFirst.at(2) && tileStringSecond.at(1) == tileStringSecond.at(2) && tileStringFourth.at(1) == tileStringFourth.at(2) && setOneClosed && setTwoClosed && setFourClosed) || (tileStringFirst.at(1) == tileStringFirst.at(2) && tileStringThird.at(1) == tileStringThird.at(2) && tileStringFourth.at(1) == tileStringFourth.at(2) && setOneClosed && setThreeClosed && setFourClosed) || (tileStringSecond.at(1) == tileStringSecond.at(2) && tileStringThird.at(1) == tileStringThird.at(2) && tileStringFourth.at(1) == tileStringFourth.at(2) && setTwoClosed && setThreeClosed && setFourClosed)))
        {
            sanankou = 1;
            yakuHan = yakuHan + 2;
        }

        if (!chitoitsu && ((tileStringFirst.at(0) == tileStringPinzu.at(0) && tileStringSecond.at(0) == tileStringSouzu.at(0) && tileStringThird.at(0) == tileStringManzu.at(0) && tileStringFirst.at(1) == tileStringFirst.at(2) && tileStringSecond.at(1) == tileStringSecond.at(2) && tileStringThird.at(1) == tileStringThird.at(2) && tileStringFirst.at(1) == tileStringSecond.at(1) && tileStringFirst.at(1) == tileStringThird.at(1)) || (tileStringFirst.at(0) == tileStringPinzu.at(0) && tileStringSecond.at(0) == tileStringSouzu.at(0) && tileStringFourth.at(0) == tileStringManzu.at(0) && tileStringFirst.at(1) == tileStringFirst.at(2) && tileStringSecond.at(1) == tileStringSecond.at(2) && tileStringFourth.at(1) == tileStringFourth.at(2) && tileStringFirst.at(1) == tileStringSecond.at(1) && tileStringFirst.at(1) == tileStringFourth.at(1)) || (tileStringFirst.at(0) == tileStringPinzu.at(0) && tileStringThird.at(0) == tileStringSouzu.at(0) && tileStringFourth.at(0) == tileStringManzu.at(0) && tileStringFirst.at(1) == tileStringFirst.at(2) && tileStringThird.at(1) == tileStringThird.at(2) && tileStringFourth.at(1) == tileStringFourth.at(2) && tileStringFirst.at(1) == tileStringThird.at(1) && tileStringFirst.at(1) == tileStringFourth.at(1)) || (tileStringSecond.at(0) == tileStringPinzu.at(0) && tileStringThird.at(0) == tileStringSouzu.at(0) && tileStringFourth.at(0) == tileStringManzu.at(0) && tileStringSecond.at(1) == tileStringSecond.at(2) && tileStringThird.at(1) == tileStringThird.at(2) && tileStringFourth.at(1) == tileStringFourth.at(2) && tileStringSecond.at(1) == tileStringThird.at(1) && tileStringSecond.at(1) == tileStringFourth.at(1))))
        {
            sanshokuDoukou = 1;
            yakuHan = yakuHan + 2;
        }

        if (!chitoitsu && (((((tileStringFirst.at(0) == tileStringPinzu.at(0) || tileStringFirst.at(0) == tileStringSouzu.at(0) || tileStringFirst.at(0) == tileStringManzu.at(0)) && tileStringFirst.length() == lengthStringFive.length()) || ((tileStringFirst.at(0) == tileStringEast.at(0) || tileStringFirst.at(0) == tileStringSouth.at(0) || tileStringFirst.at(0) == tileStringWest.at(0) || tileStringFirst.at(0) == tileStringNorth.at(0) || tileStringFirst.at(0) == tileStringGreen.at(0) || tileStringFirst.at(0) == tileStringRed.at(0) || tileStringFirst.at(0) == tileStringWhite.at(0)) && tileStringFirst.length() == lengthStringFour.length())) && (((tileStringSecond.at(0) == tileStringPinzu.at(0) || tileStringSecond.at(0) == tileStringSouzu.at(0) || tileStringSecond.at(0) == tileStringManzu.at(0)) && tileStringSecond.length() == lengthStringFive.length()) || ((tileStringSecond.at(0) == tileStringEast.at(0) || tileStringSecond.at(0) == tileStringSouth.at(0) || tileStringSecond.at(0) == tileStringWest.at(0) || tileStringSecond.at(0) == tileStringNorth.at(0) || tileStringSecond.at(0) == tileStringGreen.at(0) || tileStringSecond.at(0) == tileStringRed.at(0) || tileStringSecond.at(0) == tileStringWhite.at(0)) && tileStringSecond.length() == lengthStringFour.length())) && (((tileStringThird.at(0) == tileStringPinzu.at(0) || tileStringThird.at(0) == tileStringSouzu.at(0) || tileStringThird.at(0) == tileStringManzu.at(0)) && tileStringThird.length() == lengthStringFive.length()) || ((tileStringThird.at(0) == tileStringEast.at(0) || tileStringThird.at(0) == tileStringSouth.at(0) || tileStringThird.at(0) == tileStringWest.at(0) || tileStringThird.at(0) == tileStringNorth.at(0) || tileStringThird.at(0) == tileStringGreen.at(0) || tileStringThird.at(0) == tileStringRed.at(0) || tileStringThird.at(0) == tileStringWhite.at(0)) && tileStringThird.length() == lengthStringFour.length()))) || ((((tileStringFirst.at(0) == tileStringPinzu.at(0) || tileStringFirst.at(0) == tileStringSouzu.at(0) || tileStringFirst.at(0) == tileStringManzu.at(0)) && tileStringFirst.length() == lengthStringFive.length()) || ((tileStringFirst.at(0) == tileStringEast.at(0) || tileStringFirst.at(0) == tileStringSouth.at(0) || tileStringFirst.at(0) == tileStringWest.at(0) || tileStringFirst.at(0) == tileStringNorth.at(0) || tileStringFirst.at(0) == tileStringGreen.at(0) || tileStringFirst.at(0) == tileStringRed.at(0) || tileStringFirst.at(0) == tileStringWhite.at(0)) && tileStringFirst.length() == lengthStringFour.length())) && (((tileStringSecond.at(0) == tileStringPinzu.at(0) || tileStringSecond.at(0) == tileStringSouzu.at(0) || tileStringSecond.at(0) == tileStringManzu.at(0)) && tileStringSecond.length() == lengthStringFive.length()) || ((tileStringSecond.at(0) == tileStringEast.at(0) || tileStringSecond.at(0) == tileStringSouth.at(0) || tileStringSecond.at(0) == tileStringWest.at(0) || tileStringSecond.at(0) == tileStringNorth.at(0) || tileStringSecond.at(0) == tileStringGreen.at(0) || tileStringSecond.at(0) == tileStringRed.at(0) || tileStringSecond.at(0) == tileStringWhite.at(0)) && tileStringSecond.length() == lengthStringFour.length())) && (((tileStringFourth.at(0) == tileStringPinzu.at(0) || tileStringFourth.at(0) == tileStringSouzu.at(0) || tileStringFourth.at(0) == tileStringManzu.at(0)) && tileStringFourth.length() == lengthStringFive.length()) || ((tileStringFourth.at(0) == tileStringEast.at(0) || tileStringFourth.at(0) == tileStringSouth.at(0) || tileStringFourth.at(0) == tileStringWest.at(0) || tileStringFourth.at(0) == tileStringNorth.at(0) || tileStringFourth.at(0) == tileStringGreen.at(0) || tileStringFourth.at(0) == tileStringRed.at(0) || tileStringFourth.at(0) == tileStringWhite.at(0)) && tileStringFourth.length() == lengthStringFour.length()))) || ((((tileStringFirst.at(0) == tileStringPinzu.at(0) || tileStringFirst.at(0) == tileStringSouzu.at(0) || tileStringFirst.at(0) == tileStringManzu.at(0)) && tileStringFirst.length() == lengthStringFive.length()) || ((tileStringFirst.at(0) == tileStringEast.at(0) || tileStringFirst.at(0) == tileStringSouth.at(0) || tileStringFirst.at(0) == tileStringWest.at(0) || tileStringFirst.at(0) == tileStringNorth.at(0) || tileStringFirst.at(0) == tileStringGreen.at(0) || tileStringFirst.at(0) == tileStringRed.at(0) || tileStringFirst.at(0) == tileStringWhite.at(0)) && tileStringFirst.length() == lengthStringFour.length())) && (((tileStringThird.at(0) == tileStringPinzu.at(0) || tileStringThird.at(0) == tileStringSouzu.at(0) || tileStringThird.at(0) == tileStringManzu.at(0)) && tileStringThird.length() == lengthStringFive.length()) || ((tileStringThird.at(0) == tileStringEast.at(0) || tileStringThird.at(0) == tileStringSouth.at(0) || tileStringThird.at(0) == tileStringWest.at(0) || tileStringThird.at(0) == tileStringNorth.at(0) || tileStringThird.at(0) == tileStringGreen.at(0) || tileStringThird.at(0) == tileStringRed.at(0) || tileStringThird.at(0) == tileStringWhite.at(0)) && tileStringThird.length() == lengthStringFour.length())) && (((tileStringFourth.at(0) == tileStringPinzu.at(0) || tileStringFourth.at(0) == tileStringSouzu.at(0) || tileStringFourth.at(0) == tileStringManzu.at(0)) && tileStringFourth.length() == lengthStringFive.length()) || ((tileStringFourth.at(0) == tileStringEast.at(0) || tileStringFourth.at(0) == tileStringSouth.at(0) || tileStringFourth.at(0) == tileStringWest.at(0) || tileStringFourth.at(0) == tileStringNorth.at(0) || tileStringFourth.at(0) == tileStringGreen.at(0) || tileStringFourth.at(0) == tileStringRed.at(0) || tileStringFourth.at(0) == tileStringWhite.at(0)) && tileStringFourth.length() == lengthStringFour.length()))) || ((((tileStringSecond.at(0) == tileStringPinzu.at(0) || tileStringSecond.at(0) == tileStringSouzu.at(0) || tileStringSecond.at(0) == tileStringManzu.at(0)) && tileStringSecond.length() == lengthStringFive.length()) || ((tileStringSecond.at(0) == tileStringEast.at(0) || tileStringSecond.at(0) == tileStringSouth.at(0) || tileStringSecond.at(0) == tileStringWest.at(0) || tileStringSecond.at(0) == tileStringNorth.at(0) || tileStringSecond.at(0) == tileStringGreen.at(0) || tileStringSecond.at(0) == tileStringRed.at(0) || tileStringSecond.at(0) == tileStringWhite.at(0)) && tileStringSecond.length() == lengthStringFour.length())) && (((tileStringThird.at(0) == tileStringPinzu.at(0) || tileStringThird.at(0) == tileStringSouzu.at(0) || tileStringThird.at(0) == tileStringManzu.at(0)) && tileStringThird.length() == lengthStringFive.length()) || ((tileStringThird.at(0) == tileStringEast.at(0) || tileStringThird.at(0) == tileStringSouth.at(0) || tileStringThird.at(0) == tileStringWest.at(0) || tileStringThird.at(0) == tileStringNorth.at(0) || tileStringThird.at(0) == tileStringGreen.at(0) || tileStringThird.at(0) == tileStringRed.at(0) || tileStringThird.at(0) == tileStringWhite.at(0)) && tileStringThird.length() == lengthStringFour.length())) && (((tileStringFourth.at(0) == tileStringPinzu.at(0) || tileStringFourth.at(0) == tileStringSouzu.at(0) || tileStringFourth.at(0) == tileStringManzu.at(0)) && tileStringFourth.length() == lengthStringFive.length()) || ((tileStringFourth.at(0) == tileStringEast.at(0) || tileStringFourth.at(0) == tileStringSouth.at(0) || tileStringFourth.at(0) == tileStringWest.at(0) || tileStringFourth.at(0) == tileStringNorth.at(0) || tileStringFourth.at(0) == tileStringGreen.at(0) || tileStringFourth.at(0) == tileStringRed.at(0) || tileStringFourth.at(0) == tileStringWhite.at(0)) && tileStringFourth.length() == lengthStringFour.length())))))
        {
            sankantsu = 1;
            yakuHan = yakuHan + 2;
        }

        if (!chitoitsu && ((tileStringPair.at(0) == tileStringPinzu.at(0) || tileStringPair.at(0) ==  tileStringSouzu.at(0) || tileStringPair.at(0) == tileStringManzu.at(0)) && (tileStringPair.at(1) != tileStringOne.at(0) && tileStringPair.at(1) != tileStringNine.at(0))) && (tileStringFirst.at(0) == tileStringPinzu.at(0) || tileStringFirst.at(0) == tileStringSouzu.at(0) || tileStringFirst.at(0) == tileStringManzu.at(0)) && (tileStringFirst.at(1) != tileStringOne.at(0) && tileStringFirst.at(3) != tileStringNine.at(0)) && (tileStringSecond.at(0) == tileStringPinzu.at(0) || tileStringSecond.at(0) ==  tileStringSouzu.at(0) || tileStringSecond.at(0) == tileStringManzu.at(0)) && (tileStringSecond.at(1) != tileStringOne.at(0) && tileStringSecond.at(3) != tileStringNine.at(0)) && (tileStringThird.at(0) == tileStringPinzu.at(0) || tileStringThird.at(0) == tileStringSouzu.at(0) || tileStringThird.at(0) == tileStringManzu.at(0)) && (tileStringThird.at(1) != tileStringOne.at(0) && tileStringThird.at(3) != tileStringNine.at(0)) && (tileStringFourth.at(0) == tileStringPinzu.at(0) || tileStringFourth.at(0) == tileStringSouzu.at(0) || tileStringFourth.at(0) == tileStringManzu.at(0)) && (tileStringFourth.at(1) != tileStringOne.at(0) && tileStringFourth.at(3) != tileStringNine.at(0)))
        {
            tanyao = 1;
            yakuHan ++;
        }

        if (chitoitsu && ((tileStringPairOne.at(0) == tileStringPinzu.at(0) || tileStringPairOne.at(0) == tileStringSouzu.at(0) || tileStringPairOne.at(0) == tileStringManzu.at(0)) && (tileStringPairOne.at(1) != tileStringOne.at(0) && tileStringPairOne.at(1) != tileStringNine.at(0))) && ((tileStringPairTwo.at(0) == tileStringPinzu.at(0) || tileStringPairTwo.at(0) == tileStringSouzu.at(0) || tileStringPairTwo.at(0) == tileStringManzu.at(0)) && (tileStringPairTwo.at(1) != tileStringOne.at(0) && tileStringPairTwo.at(1) != tileStringNine.at(0))) && ((tileStringPairThree.at(0) == tileStringPinzu.at(0) || tileStringPairThree.at(0) == tileStringSouzu.at(0) || tileStringPairThree.at(0) == tileStringManzu.at(0)) && (tileStringPairThree.at(1) != tileStringOne.at(0) && tileStringPairThree.at(1) != tileStringNine.at(0))) && ((tileStringPairFour.at(0) == tileStringPinzu.at(0) || tileStringPairFour.at(0) == tileStringSouzu.at(0) || tileStringPairFour.at(0) == tileStringManzu.at(0)) && (tileStringPairFour.at(1) != tileStringOne.at(0) && tileStringPairFour.at(1) != tileStringNine.at(0))) && ((tileStringPairFive.at(0) == tileStringPinzu.at(0) || tileStringPairFive.at(0) == tileStringSouzu.at(0) || tileStringPairFive.at(0) == tileStringManzu.at(0)) && (tileStringPairFive.at(1) != tileStringOne.at(0) && tileStringPairFive.at(1) != tileStringNine.at(0))) && ((tileStringPairSix.at(0) == tileStringPinzu.at(0) || tileStringPairSix.at(0) == tileStringSouzu.at(0) || tileStringPairSix.at(0) == tileStringManzu.at(0)) && (tileStringPairSix.at(1) != tileStringOne.at(0) && tileStringPairSix.at(1) != tileStringNine.at(0))) && ((tileStringPairSeven.at(0) == tileStringPinzu.at(0) || tileStringPairSeven.at(0) == tileStringSouzu.at(0) || tileStringPairSeven.at(0) == tileStringManzu.at(0)) && (tileStringPairSeven.at(1) != tileStringOne.at(0) && tileStringPairSeven.at(1) != tileStringNine.at(0))))
        {
            tanyao = 1;
            yakuHan ++;
        }

        //yakuhai set one
        if (!chitoitsu && tileStringFirst.at(0) == tileStringGreen.at(0))
        {
            yakuhaiHatsu ++;
        }

        if (!chitoitsu && tileStringFirst.at(0) == tileStringRed.at(0))
        {
            yakuhaiChun ++;
        }

        if (!chitoitsu && tileStringFirst.at(0) == tileStringWhite.at(0))
        {
            yakuhaiHaku ++;
        }

        if (!chitoitsu && roundWind.at(0) == tileStringEast.at(0) && tileStringFirst.at(0) == tileStringEast.at(0))
        {
            yakuhaiTon ++;
        }

        if (!chitoitsu && personalWind.at(0) == tileStringEast.at(0) && tileStringFirst.at(0) == tileStringEast.at(0))
        {
            yakuhaiTon ++;
        }

        if (!chitoitsu && roundWind.at(0) == tileStringSouth.at(0) && tileStringFirst.at(0) == tileStringSouth.at(0))
        {
            yakuhaiNan ++;
        }

        if (!chitoitsu && personalWind.at(0) == tileStringSouth.at(0) && tileStringFirst.at(0) == tileStringSouth.at(0))
        {
            yakuhaiNan ++;
        }

        if (!chitoitsu && roundWind.at(0) == tileStringWest.at(0) && tileStringFirst.at(0) == tileStringWest.at(0))
        {
            yakuhaiSha ++;
        }

        if (!chitoitsu && personalWind.at(0) == tileStringWest.at(0) && tileStringFirst.at(0) == tileStringWest.at(0))
        {
            yakuhaiSha ++;
        }

        if (!chitoitsu && roundWind.at(0) == tileStringNorth.at(0) && tileStringFirst.at(0) == tileStringNorth.at(0))
        {
            yakuhaiPei ++;
        }

        if (!chitoitsu && personalWind.at(0) == tileStringNorth.at(0) && tileStringFirst.at(0) == tileStringNorth.at(0))
        {
            yakuhaiPei ++;
        }

        if (!chitoitsu && tileStringSecond.at(0) == tileStringGreen.at(0))
        {
            yakuhaiHatsu ++;
        }

        if (!chitoitsu && tileStringSecond.at(0) == tileStringRed.at(0))
        {
            yakuhaiChun ++;
        }

        if (!chitoitsu && tileStringSecond.at(0) == tileStringWhite.at(0))
        {
            yakuhaiHaku ++;
        }

        if (!chitoitsu && roundWind.at(0) == tileStringEast.at(0) && tileStringSecond.at(0) == tileStringEast.at(0))
        {
            yakuhaiTon ++;
        }

        if (!chitoitsu && personalWind.at(0) == tileStringEast.at(0) && tileStringSecond.at(0) == tileStringEast.at(0))
        {
            yakuhaiTon ++;
        }

        if (!chitoitsu && roundWind.at(0) == tileStringSouth.at(0) && tileStringSecond.at(0) == tileStringSouth.at(0))
        {
            yakuhaiNan ++;
        }

        if (!chitoitsu && personalWind.at(0) == tileStringSouth.at(0) && tileStringSecond.at(0) == tileStringSouth.at(0))
        {
            yakuhaiNan ++;
        }

        if (!chitoitsu && roundWind.at(0) == tileStringWest.at(0) && tileStringSecond.at(0) == tileStringWest.at(0))
        {
            yakuhaiSha ++;
        }

        if (!chitoitsu && personalWind.at(0) == tileStringWest.at(0) && tileStringSecond.at(0) == tileStringWest.at(0))
        {
            yakuhaiSha ++;
        }

        if (!chitoitsu && roundWind.at(0) == tileStringNorth.at(0) && tileStringSecond.at(0) == tileStringNorth.at(0))
        {
            yakuhaiPei ++;
        }

        if (!chitoitsu && personalWind.at(0) == tileStringNorth.at(0) && tileStringSecond.at(0) == tileStringNorth.at(0))
        {
            yakuhaiPei ++;
        }

        if (!chitoitsu && tileStringThird.at(0) == tileStringGreen.at(0))
        {
            yakuhaiHatsu ++;
        }

        if (!chitoitsu && tileStringThird.at(0) == tileStringRed.at(0))
        {
            yakuhaiChun ++;
        }

        if (!chitoitsu && tileStringThird.at(0) == tileStringWhite.at(0))
        {
            yakuhaiHaku ++;
        }

        if (!chitoitsu && roundWind.at(0) == tileStringEast.at(0) && tileStringThird.at(0) == tileStringEast.at(0))
        {
            yakuhaiTon ++;
        }

        if (!chitoitsu && personalWind.at(0) == tileStringEast.at(0) && tileStringThird.at(0) == tileStringEast.at(0))
        {
            yakuhaiTon ++;
        }

        if (!chitoitsu && roundWind.at(0) == tileStringSouth.at(0) && tileStringThird.at(0) == tileStringSouth.at(0))
        {
            yakuhaiNan ++;
        }

        if (!chitoitsu && personalWind.at(0) == tileStringSouth.at(0) && tileStringThird.at(0) == tileStringSouth.at(0))
        {
            yakuhaiNan ++;
        }

        if (!chitoitsu && roundWind.at(0) == tileStringWest.at(0) && tileStringThird.at(0) == tileStringWest.at(0))
        {
            yakuhaiSha ++;
        }

        if (!chitoitsu && personalWind.at(0) == tileStringWest.at(0) && tileStringThird.at(0) == tileStringWest.at(0))
        {
            yakuhaiSha ++;
        }

        if (!chitoitsu && roundWind.at(0) == tileStringNorth.at(0) && tileStringThird.at(0) == tileStringNorth.at(0))
        {
            yakuhaiPei ++;
        }

        if (!chitoitsu && personalWind.at(0) == tileStringNorth.at(0) && tileStringThird.at(0) == tileStringNorth.at(0))
        {
            yakuhaiPei ++;
        }

        if (!chitoitsu && tileStringFourth.at(0) == tileStringGreen.at(0))
        {
            yakuhaiHatsu ++;
        }

        if (!chitoitsu && tileStringFourth.at(0) == tileStringRed.at(0))
        {
            yakuhaiChun ++;
        }

        if (!chitoitsu && tileStringFourth.at(0) == tileStringWhite.at(0))
        {
            yakuhaiHaku ++;
        }

        if (!chitoitsu && roundWind.at(0) == tileStringEast.at(0) && tileStringFourth.at(0) == tileStringEast.at(0))
        {
            yakuhaiTon ++;
        }

        if (!chitoitsu && personalWind.at(0) == tileStringEast.at(0) && tileStringFourth.at(0) == tileStringEast.at(0))
        {
            yakuhaiTon ++;
        }

        if (!chitoitsu && roundWind.at(0) == tileStringSouth.at(0) && tileStringFourth.at(0) == tileStringSouth.at(0))
        {
            yakuhaiNan ++;
        }

        if (!chitoitsu && personalWind.at(0) == tileStringSouth.at(0) && tileStringFourth.at(0) == tileStringSouth.at(0))
        {
            yakuhaiNan ++;
        }

        if (!chitoitsu && roundWind.at(0) == tileStringWest.at(0) && tileStringFourth.at(0) == tileStringWest.at(0))
        {
            yakuhaiSha ++;
        }

        if (!chitoitsu && personalWind.at(0) == tileStringWest.at(0) && tileStringFourth.at(0) == tileStringWest.at(0))
        {
            yakuhaiSha ++;
        }

        if (!chitoitsu && roundWind.at(0) == tileStringNorth.at(0) && tileStringFourth.at(0) == tileStringNorth.at(0))
        {
            yakuhaiPei ++;
        }

        if (!chitoitsu && personalWind.at(0) == tileStringNorth.at(0) && tileStringFourth.at(0) == tileStringNorth.at(0))
        {
            yakuhaiPei ++;
        }

        if (!chitoitsu && (tileStringFirst.at(0) == tileStringEast.at(0) || tileStringFirst.at(0) == tileStringSouth.at(0) || tileStringFirst.at(0) == tileStringWest.at(0) || tileStringFirst.at(0) == tileStringNorth.at(0) || tileStringFirst.at(0) == tileStringGreen.at(0) || tileStringFirst.at(0) == tileStringRed.at(0) || tileStringFirst.at(0) == tileStringWhite.at(0) || tileStringFirst.at(1) == tileStringOne.at(0) || tileStringFirst.at(1) == tileStringNine.at(0) || (tileStringFirst.at(1) == tileStringSeven.at(0) && tileStringFirst.at(2) != tileStringFirst.at(1))) && (tileStringSecond.at(0) == tileStringEast.at(0) || tileStringSecond.at(0) == tileStringSouth.at(0) || tileStringSecond.at(0) == tileStringWest.at(0) || tileStringSecond.at(0) == tileStringNorth.at(0) || tileStringSecond.at(0) == tileStringGreen.at(0) || tileStringSecond.at(0) == tileStringRed.at(0) || tileStringSecond.at(0) == tileStringWhite.at(0) || tileStringSecond.at(1) == tileStringOne.at(0) || tileStringSecond.at(1) == tileStringNine.at(0) || (tileStringSecond.at(1) == tileStringSeven.at(0) && tileStringSecond.at(2) != tileStringSecond.at(1))) && (tileStringThird.at(0) == tileStringEast.at(0) || tileStringThird.at(0) == tileStringSouth.at(0) || tileStringThird.at(0) == tileStringWest.at(0) || tileStringThird.at(0) == tileStringNorth.at(0) || tileStringThird.at(0) == tileStringGreen.at(0) || tileStringThird.at(0) == tileStringRed.at(0) || tileStringThird.at(0) == tileStringWhite.at(0) || tileStringThird.at(1) == tileStringOne.at(0) || tileStringThird.at(1) == tileStringNine.at(0) || (tileStringThird.at(1) == tileStringSeven.at(0) && tileStringThird.at(2) != tileStringThird.at(1))) && (tileStringFourth.at(0) == tileStringEast.at(0) || tileStringFourth.at(0) == tileStringSouth.at(0) || tileStringFourth.at(0) == tileStringWest.at(0) || tileStringFourth.at(0) == tileStringNorth.at(0) || tileStringFourth.at(0) == tileStringGreen.at(0) || tileStringFourth.at(0) == tileStringRed.at(0) || tileStringFourth.at(0) == tileStringWhite.at(0) || tileStringFourth.at(1) == tileStringOne.at(0) || tileStringFourth.at(1) == tileStringNine.at(0) || (tileStringFourth.at(1) == tileStringSeven.at(0) && tileStringFourth.at(2) != tileStringFourth.at(1))) && (tileStringPair.at(0) == tileStringEast.at(0) || tileStringPair.at(0) == tileStringSouth.at(0) || tileStringPair.at(0) == tileStringWest.at(0) || tileStringPair.at(0) == tileStringNorth.at(0) || tileStringPair.at(1) == tileStringOne.at(0) || tileStringPair.at(1) == tileStringNine.at(0)))
        {
            chanta = 1;
        }

        if (!chitoitsu && (tileStringFirst.at(0) == tileStringEast.at(0) || tileStringFirst.at(0) == tileStringSouth.at(0) || tileStringFirst.at(0) == tileStringWest.at(0) || tileStringFirst.at(0) == tileStringNorth.at(0) || tileStringFirst.at(0) == tileStringGreen.at(0) || tileStringFirst.at(0) == tileStringRed.at(0) || tileStringFirst.at(0) == tileStringWhite.at(0) || (tileStringFirst.at(1) == tileStringOne.at(0)) || (tileStringFirst.at(1) == tileStringNine.at(0))) && (tileStringSecond.at(0) == tileStringEast.at(0) || tileStringSecond.at(0) == tileStringSouth.at(0) || tileStringSecond.at(0) == tileStringWest.at(0) || tileStringSecond.at(0) == tileStringNorth.at(0) || tileStringSecond.at(0) == tileStringGreen.at(0) || tileStringSecond.at(0) == tileStringRed.at(0) || tileStringSecond.at(0) == tileStringWhite.at(0) || (tileStringSecond.at(1) == tileStringOne.at(0)) || (tileStringSecond.at(1) == tileStringNine.at(0))) && (tileStringThird.at(0) == tileStringEast.at(0) || tileStringThird.at(0) == tileStringSouth.at(0) || tileStringThird.at(0) == tileStringWest.at(0) || tileStringThird.at(0) == tileStringNorth.at(0) || tileStringThird.at(0) == tileStringGreen.at(0) || tileStringThird.at(0) == tileStringRed.at(0) || tileStringThird.at(0) == tileStringWhite.at(0) || (tileStringThird.at(1) == tileStringOne.at(0)) || (tileStringThird.at(1) == tileStringNine.at(0))) && (tileStringFourth.at(0) == tileStringEast.at(0) || tileStringFourth.at(0) == tileStringSouth.at(0) || tileStringFourth.at(0) == tileStringWest.at(0) || tileStringFourth.at(0) == tileStringNorth.at(0) || tileStringFourth.at(0) == tileStringGreen.at(0) || tileStringFourth.at(0) == tileStringRed.at(0) || tileStringFourth.at(0) == tileStringWhite.at(0) || (tileStringFourth.at(1) == tileStringOne.at(0)) || (tileStringFourth.at(1) == tileStringNine.at(0))) && (tileStringPair.at(0) == tileStringEast.at(0) || tileStringPair.at(0) == tileStringSouth.at(0) || tileStringPair.at(0) == tileStringWest.at(0) || tileStringPair.at(0) == tileStringNorth.at(0) || tileStringPair.at(0) == tileStringGreen.at(0) || tileStringPair.at(0) == tileStringRed.at(0) || tileStringPair.at(0) == tileStringWhite.at(0) || (tileStringPair.at(1) == tileStringOne.at(0)) || (tileStringPair.at(1) == tileStringNine.at(0))))
        {
            honroutou = 1;
            chanta = 0;
        }

        if (chitoitsu && (tileStringPairOne.at(0) == tileStringEast.at(0) || tileStringPairOne.at(0) == tileStringSouth.at(0) || tileStringPairOne.at(0) == tileStringWest.at(0) || tileStringPairOne.at(0) == tileStringNorth.at(0) || tileStringPairOne.at(0) == tileStringGreen.at(0) || tileStringPairOne.at(0) == tileStringRed.at(0) || tileStringPairOne.at(0) == tileStringWhite.at(0) || (tileStringPairOne.at(1) == tileStringOne.at(0)) || (tileStringPairOne.at(1) == tileStringNine.at(0))) && (tileStringPairTwo.at(0) == tileStringEast.at(0) || tileStringPairTwo.at(0) == tileStringSouth.at(0) || tileStringPairTwo.at(0) == tileStringWest.at(0) || tileStringPairTwo.at(0) == tileStringNorth.at(0) || tileStringPairTwo.at(0) == tileStringGreen.at(0) || tileStringPairTwo.at(0) == tileStringRed.at(0) || tileStringPairTwo.at(0) == tileStringWhite.at(0) || (tileStringPairTwo.at(1) == tileStringOne.at(0)) || (tileStringPairTwo.at(1) == tileStringNine.at(0))) && (tileStringPairThree.at(0) == tileStringEast.at(0) || tileStringPairThree.at(0) == tileStringSouth.at(0) || tileStringPairThree.at(0) == tileStringWest.at(0) || tileStringPairThree.at(0) == tileStringNorth.at(0) || tileStringPairThree.at(0) == tileStringGreen.at(0) || tileStringPairThree.at(0) == tileStringRed.at(0) || tileStringPairThree.at(0) == tileStringWhite.at(0) || (tileStringPairThree.at(1) == tileStringOne.at(0)) || (tileStringPairThree.at(1) == tileStringNine.at(0))) && (tileStringPairFour.at(0) == tileStringEast.at(0) || tileStringPairFour.at(0) == tileStringSouth.at(0) || tileStringPairFour.at(0) == tileStringWest.at(0) || tileStringPairFour.at(0) == tileStringNorth.at(0) || tileStringPairFour.at(0) == tileStringGreen.at(0) || tileStringPairFour.at(0) == tileStringRed.at(0) || tileStringPairFour.at(0) == tileStringWhite.at(0) || (tileStringPairFour.at(1) == tileStringOne.at(0)) || (tileStringPairFour.at(1) == tileStringNine.at(0))) && (tileStringPairFive.at(0) == tileStringEast.at(0) || tileStringPairFive.at(0) == tileStringSouth.at(0) || tileStringPairFive.at(0) == tileStringWest.at(0) || tileStringPairFive.at(0) == tileStringNorth.at(0) || tileStringPairFive.at(0) == tileStringGreen.at(0) || tileStringPairFive.at(0) == tileStringRed.at(0) || tileStringPairFive.at(0) == tileStringWhite.at(0) || (tileStringPairFive.at(1) == tileStringOne.at(0)) || (tileStringPairFive.at(1) == tileStringNine.at(0))) && (tileStringPairSix.at(0) == tileStringEast.at(0) || tileStringPairSix.at(0) == tileStringSouth.at(0) || tileStringPairSix.at(0) == tileStringWest.at(0) || tileStringPairSix.at(0) == tileStringNorth.at(0) || tileStringPairSix.at(0) == tileStringGreen.at(0) || tileStringPairSix.at(0) == tileStringRed.at(0) || tileStringPairSix.at(0) == tileStringWhite.at(0) || (tileStringPairSix.at(1) == tileStringOne.at(0)) || (tileStringPairSix.at(1) == tileStringNine.at(0))) && (tileStringPairSeven.at(0) == tileStringEast.at(0) || tileStringPairSeven.at(0) == tileStringSouth.at(0) || tileStringPairSeven.at(0) == tileStringWest.at(0) || tileStringPairSeven.at(0) == tileStringNorth.at(0) || tileStringPairSeven.at(0) == tileStringGreen.at(0) || tileStringPairSeven.at(0) == tileStringRed.at(0) || tileStringPairSeven.at(0) == tileStringWhite.at(0) || (tileStringPairSeven.at(1) == tileStringOne.at(0)) || (tileStringPairSeven.at(1) == tileStringNine.at(0))))
        {
            honroutou = 1;
            chanta = 0;
        }

        if (!chitoitsu && !honroutou && chanta && (tileStringFirst.at(1) != tileStringEast.at(0) && tileStringFirst.at(1) != tileStringSouth.at(0) && tileStringFirst.at(1) != tileStringWest.at(0) && tileStringFirst.at(1) != tileStringNorth.at(0) && tileStringFirst.at(1) != tileStringGreen.at(0) && tileStringFirst.at(1) != tileStringRed.at(0) && tileStringFirst.at(1) != tileStringWhite.at(0)) && (tileStringSecond.at(1) != tileStringEast.at(0) && tileStringSecond.at(1) != tileStringSouth.at(0) && tileStringSecond.at(1) != tileStringWest.at(0) && tileStringSecond.at(1) != tileStringNorth.at(0) && tileStringSecond.at(1) != tileStringGreen.at(0) && tileStringSecond.at(1) != tileStringRed.at(0) && tileStringSecond.at(1) != tileStringWhite.at(0)) && (tileStringThird.at(1) != tileStringEast.at(0) && tileStringThird.at(1) != tileStringSouth.at(0) && tileStringThird.at(1) != tileStringWest.at(0) && tileStringThird.at(1) != tileStringNorth.at(0) && tileStringThird.at(1) != tileStringGreen.at(0) && tileStringThird.at(1) != tileStringRed.at(0) && tileStringThird.at(1) != tileStringWhite.at(0)) && (tileStringFourth.at(1) != tileStringEast.at(0) && tileStringFourth.at(1) != tileStringSouth.at(0) && tileStringFourth.at(1) != tileStringWest.at(0) && tileStringFourth.at(1) != tileStringNorth.at(0) && tileStringFourth.at(1) != tileStringGreen.at(0) && tileStringFourth.at(1) != tileStringRed.at(0) && tileStringFourth.at(1) != tileStringWhite.at(0)))
        {
            junchanta = 1;
            chanta = 0;
        }

        yakuHan = yakuHan + yakuhaiTon + yakuhaiNan + yakuhaiSha + yakuhaiPei + yakuhaiHatsu + yakuhaiChun + yakuhaiHaku;

        if (chanta)
        {
            if (closed)
            {
                yakuHan = yakuHan + 2;
            }

            else
            {
                yakuHan ++;
            }
        }

        if (honroutou)
        {
            yakuHan = yakuHan + 2;
        }

        if (junchanta)
        {
            if (closed)
            {
                yakuHan = yakuHan + 3;
            }

            else
            {
                yakuHan = yakuHan + 2;
            }
        }

        if (!chitoitsu && (tileStringThird.at(0) == tileStringGreen.at(0) || tileStringThird.at(0) == tileStringRed.at(0) || tileStringThird.at(0) == tileStringWhite.at(0)) && (tileStringFourth.at(0) == tileStringGreen.at(0) || tileStringFourth.at(0) == tileStringRed.at(0) || tileStringFourth.at(0) == tileStringWhite.at(0)) && (tileStringPair.at(0) == tileStringGreen.at(0) || tileStringPair.at(0) == tileStringRed.at(0) || tileStringPair.at(0) == tileStringWhite.at(0)))
        {
            shousangen = 1;
            yakuHan = yakuHan + 2;
        }

        if (!chitoitsu && (tileStringFirst.at(0) == tileStringPinzu.at(0) || tileStringFirst.at(0) == tileStringEast.at(0) || tileStringFirst.at(0) == tileStringSouth.at(0) || tileStringFirst.at(0) == tileStringWest.at(0) || tileStringFirst.at(0) == tileStringNorth.at(0) || tileStringFirst.at(0) == tileStringGreen.at(0) || tileStringFirst.at(0) == tileStringRed.at(0) || tileStringFirst.at(0) == tileStringWhite.at(0)) && (tileStringSecond.at(0) == tileStringPinzu.at(0) || tileStringSecond.at(0) == tileStringEast.at(0) || tileStringSecond.at(0) == tileStringSouth.at(0) || tileStringSecond.at(0) == tileStringWest.at(0) || tileStringSecond.at(0) == tileStringNorth.at(0) || tileStringSecond.at(0) == tileStringGreen.at(0) || tileStringSecond.at(0) == tileStringRed.at(0) || tileStringSecond.at(0) == tileStringWhite.at(0)) && (tileStringThird.at(0) == tileStringPinzu.at(0) || tileStringThird.at(0) == tileStringEast.at(0) || tileStringThird.at(0) == tileStringSouth.at(0) || tileStringThird.at(0) == tileStringWest.at(0) || tileStringThird.at(0) == tileStringNorth.at(0) || tileStringThird.at(0) == tileStringGreen.at(0) || tileStringThird.at(0) == tileStringRed.at(0) || tileStringThird.at(0) == tileStringWhite.at(0)) && (tileStringFourth.at(0) == tileStringPinzu.at(0) || tileStringFourth.at(0) == tileStringEast.at(0) || tileStringFourth.at(0) == tileStringSouth.at(0) || tileStringFourth.at(0) == tileStringWest.at(0) || tileStringFourth.at(0) == tileStringNorth.at(0) || tileStringFourth.at(0) == tileStringGreen.at(0) || tileStringFourth.at(0) == tileStringRed.at(0) || tileStringFourth.at(0) == tileStringWhite.at(0)) && (tileStringPair.at(0) == tileStringPinzu.at(0) || tileStringPair.at(0) == tileStringEast.at(0) || tileStringPair.at(0) == tileStringSouth.at(0) || tileStringPair.at(0) == tileStringWest.at(0) || tileStringPair.at(0) == tileStringNorth.at(0) || tileStringPair.at(0) == tileStringGreen.at(0) || tileStringPair.at(0) == tileStringRed.at(0) || tileStringPair.at(0) == tileStringWhite.at(0)))
        {
            honitsuPinzu = 1;
        }

        if (chitoitsu && (tileStringPairOne.at(0) == tileStringPinzu.at(0) || tileStringPairOne.at(0) == tileStringEast.at(0) || tileStringPairOne.at(0) == tileStringSouth.at(0) || tileStringPairOne.at(0) == tileStringWest.at(0) || tileStringPairOne.at(0) == tileStringNorth.at(0) || tileStringPairOne.at(0) == tileStringGreen.at(0) || tileStringPairOne.at(0) == tileStringRed.at(0) || tileStringPairOne.at(0) == tileStringWhite.at(0)) && (tileStringPairTwo.at(0) == tileStringPinzu.at(0) || tileStringPairTwo.at(0) == tileStringEast.at(0) || tileStringPairTwo.at(0) == tileStringSouth.at(0) || tileStringPairTwo.at(0) == tileStringWest.at(0) || tileStringPairTwo.at(0) == tileStringNorth.at(0) || tileStringPairTwo.at(0) == tileStringGreen.at(0) || tileStringPairTwo.at(0) == tileStringRed.at(0) || tileStringPairTwo.at(0) == tileStringWhite.at(0)) && (tileStringPairThree.at(0) == tileStringPinzu.at(0) || tileStringPairThree.at(0) == tileStringEast.at(0) || tileStringPairThree.at(0) == tileStringSouth.at(0) || tileStringPairThree.at(0) == tileStringWest.at(0) || tileStringPairThree.at(0) == tileStringNorth.at(0) || tileStringPairThree.at(0) == tileStringGreen.at(0) || tileStringPairThree.at(0) == tileStringRed.at(0) || tileStringPairThree.at(0) == tileStringWhite.at(0)) && (tileStringPairFour.at(0) == tileStringPinzu.at(0) || tileStringPairFour.at(0) == tileStringEast.at(0) || tileStringPairFour.at(0) == tileStringSouth.at(0) || tileStringPairFour.at(0) == tileStringWest.at(0) || tileStringPairFour.at(0) == tileStringNorth.at(0) || tileStringPairFour.at(0) == tileStringGreen.at(0) || tileStringPairFour.at(0) == tileStringRed.at(0) || tileStringPairFour.at(0) == tileStringWhite.at(0)) && (tileStringPairFive.at(0) == tileStringPinzu.at(0) || tileStringPairFive.at(0) == tileStringEast.at(0) || tileStringPairFive.at(0) == tileStringSouth.at(0) || tileStringPairFive.at(0) == tileStringWest.at(0) || tileStringPairFive.at(0) == tileStringNorth.at(0) || tileStringPairFive.at(0) == tileStringGreen.at(0) || tileStringPairFive.at(0) == tileStringRed.at(0) || tileStringPairFive.at(0) == tileStringWhite.at(0)) && (tileStringPairSix.at(0) == tileStringPinzu.at(0) || tileStringPairSix.at(0) == tileStringEast.at(0) || tileStringPairSix.at(0) == tileStringSouth.at(0) || tileStringPairSix.at(0) == tileStringWest.at(0) || tileStringPairSix.at(0) == tileStringNorth.at(0) || tileStringPairSix.at(0) == tileStringGreen.at(0) || tileStringPairSix.at(0) == tileStringRed.at(0) || tileStringPairSix.at(0) == tileStringWhite.at(0)) && (tileStringPairSeven.at(0) == tileStringPinzu.at(0) || tileStringPairSeven.at(0) == tileStringEast.at(0) || tileStringPairSeven.at(0) == tileStringSouth.at(0) || tileStringPairSeven.at(0) == tileStringWest.at(0) || tileStringPairSeven.at(0) == tileStringNorth.at(0) || tileStringPairSeven.at(0) == tileStringGreen.at(0) || tileStringPairSeven.at(0) == tileStringRed.at(0) || tileStringPairSeven.at(0) == tileStringWhite.at(0)))
        {
            honitsuPinzu = 1;
        }

        if (!chitoitsu && (tileStringFirst.at(0) == tileStringSouzu.at(0) || tileStringFirst.at(0) == tileStringEast.at(0) || tileStringFirst.at(0) == tileStringSouth.at(0) || tileStringFirst.at(0) == tileStringWest.at(0) || tileStringFirst.at(0) == tileStringNorth.at(0) || tileStringFirst.at(0) == tileStringGreen.at(0) || tileStringFirst.at(0) == tileStringRed.at(0) || tileStringFirst.at(0) == tileStringWhite.at(0)) && (tileStringSecond.at(0) == tileStringSouzu.at(0) || tileStringSecond.at(0) == tileStringEast.at(0) || tileStringSecond.at(0) == tileStringSouth.at(0) || tileStringSecond.at(0) == tileStringWest.at(0) || tileStringSecond.at(0) == tileStringNorth.at(0) || tileStringSecond.at(0) == tileStringGreen.at(0) || tileStringSecond.at(0) == tileStringRed.at(0) || tileStringSecond.at(0) == tileStringWhite.at(0)) && (tileStringThird.at(0) == tileStringSouzu.at(0) || tileStringThird.at(0) == tileStringEast.at(0) || tileStringThird.at(0) == tileStringSouth.at(0) || tileStringThird.at(0) == tileStringWest.at(0) || tileStringThird.at(0) == tileStringNorth.at(0) || tileStringThird.at(0) == tileStringGreen.at(0) || tileStringThird.at(0) == tileStringRed.at(0) || tileStringThird.at(0) == tileStringWhite.at(0)) && (tileStringFourth.at(0) == tileStringSouzu.at(0) || tileStringFourth.at(0) == tileStringEast.at(0) || tileStringFourth.at(0) == tileStringSouth.at(0) || tileStringFourth.at(0) == tileStringWest.at(0) || tileStringFourth.at(0) == tileStringNorth.at(0) || tileStringFourth.at(0) == tileStringGreen.at(0) || tileStringFourth.at(0) == tileStringRed.at(0) || tileStringFourth.at(0) == tileStringWhite.at(0)) && (tileStringPair.at(0) == tileStringSouzu.at(0) || tileStringPair.at(0) == tileStringEast.at(0) || tileStringPair.at(0) == tileStringSouth.at(0) || tileStringPair.at(0) == tileStringWest.at(0) || tileStringPair.at(0) == tileStringNorth.at(0) || tileStringPair.at(0) == tileStringGreen.at(0) || tileStringPair.at(0) == tileStringRed.at(0) || tileStringPair.at(0) == tileStringWhite.at(0)))
        {
            honitsuSouzu = 1;
        }

        if (chitoitsu && (tileStringPairOne.at(0) == tileStringSouzu.at(0) || tileStringPairOne.at(0) == tileStringEast.at(0) || tileStringPairOne.at(0) == tileStringSouth.at(0) || tileStringPairOne.at(0) == tileStringWest.at(0) || tileStringPairOne.at(0) == tileStringNorth.at(0) || tileStringPairOne.at(0) == tileStringGreen.at(0) || tileStringPairOne.at(0) == tileStringRed.at(0) || tileStringPairOne.at(0) == tileStringWhite.at(0)) && (tileStringPairTwo.at(0) == tileStringSouzu.at(0) || tileStringPairTwo.at(0) == tileStringEast.at(0) || tileStringPairTwo.at(0) == tileStringSouth.at(0) || tileStringPairTwo.at(0) == tileStringWest.at(0) || tileStringPairTwo.at(0) == tileStringNorth.at(0) || tileStringPairTwo.at(0) == tileStringGreen.at(0) || tileStringPairTwo.at(0) == tileStringRed.at(0) || tileStringPairTwo.at(0) == tileStringWhite.at(0)) && (tileStringPairThree.at(0) == tileStringSouzu.at(0) || tileStringPairThree.at(0) == tileStringEast.at(0) || tileStringPairThree.at(0) == tileStringSouth.at(0) || tileStringPairThree.at(0) == tileStringWest.at(0) || tileStringPairThree.at(0) == tileStringNorth.at(0) || tileStringPairThree.at(0) == tileStringGreen.at(0) || tileStringPairThree.at(0) == tileStringRed.at(0) || tileStringPairThree.at(0) == tileStringWhite.at(0)) && (tileStringPairFour.at(0) == tileStringSouzu.at(0) || tileStringPairFour.at(0) == tileStringEast.at(0) || tileStringPairFour.at(0) == tileStringSouth.at(0) || tileStringPairFour.at(0) == tileStringWest.at(0) || tileStringPairFour.at(0) == tileStringNorth.at(0) || tileStringPairFour.at(0) == tileStringGreen.at(0) || tileStringPairFour.at(0) == tileStringRed.at(0) || tileStringPairFour.at(0) == tileStringWhite.at(0)) && (tileStringPairFive.at(0) == tileStringSouzu.at(0) || tileStringPairFive.at(0) == tileStringEast.at(0) || tileStringPairFive.at(0) == tileStringSouth.at(0) || tileStringPairFive.at(0) == tileStringWest.at(0) || tileStringPairFive.at(0) == tileStringNorth.at(0) || tileStringPairFive.at(0) == tileStringGreen.at(0) || tileStringPairFive.at(0) == tileStringRed.at(0) || tileStringPairFive.at(0) == tileStringWhite.at(0)) && (tileStringPairSix.at(0) == tileStringSouzu.at(0) || tileStringPairSix.at(0) == tileStringEast.at(0) || tileStringPairSix.at(0) == tileStringSouth.at(0) || tileStringPairSix.at(0) == tileStringWest.at(0) || tileStringPairSix.at(0) == tileStringNorth.at(0) || tileStringPairSix.at(0) == tileStringGreen.at(0) || tileStringPairSix.at(0) == tileStringRed.at(0) || tileStringPairSix.at(0) == tileStringWhite.at(0)) && (tileStringPairSeven.at(0) == tileStringSouzu.at(0) || tileStringPairSeven.at(0) == tileStringEast.at(0) || tileStringPairSeven.at(0) == tileStringSouth.at(0) || tileStringPairSeven.at(0) == tileStringWest.at(0) || tileStringPairSeven.at(0) == tileStringNorth.at(0) || tileStringPairSeven.at(0) == tileStringGreen.at(0) || tileStringPairSeven.at(0) == tileStringRed.at(0) || tileStringPairSeven.at(0) == tileStringWhite.at(0)))
        {
            honitsuSouzu = 1;
        }

        if (!chitoitsu && (tileStringFirst.at(0) == tileStringManzu.at(0) || tileStringFirst.at(0) == tileStringEast.at(0) || tileStringFirst.at(0) == tileStringSouth.at(0) || tileStringFirst.at(0) == tileStringWest.at(0) || tileStringFirst.at(0) == tileStringNorth.at(0) || tileStringFirst.at(0) == tileStringGreen.at(0) || tileStringFirst.at(0) == tileStringRed.at(0) || tileStringFirst.at(0) == tileStringWhite.at(0)) && (tileStringSecond.at(0) == tileStringManzu.at(0) || tileStringSecond.at(0) == tileStringEast.at(0) || tileStringSecond.at(0) == tileStringSouth.at(0) || tileStringSecond.at(0) == tileStringWest.at(0) || tileStringSecond.at(0) == tileStringNorth.at(0) || tileStringSecond.at(0) == tileStringGreen.at(0) || tileStringSecond.at(0) == tileStringRed.at(0) || tileStringSecond.at(0) == tileStringWhite.at(0)) && (tileStringThird.at(0) == tileStringManzu.at(0) || tileStringThird.at(0) == tileStringEast.at(0) || tileStringThird.at(0) == tileStringSouth.at(0) || tileStringThird.at(0) == tileStringWest.at(0) || tileStringThird.at(0) == tileStringNorth.at(0) || tileStringThird.at(0) == tileStringGreen.at(0) || tileStringThird.at(0) == tileStringRed.at(0) || tileStringThird.at(0) == tileStringWhite.at(0)) && (tileStringFourth.at(0) == tileStringManzu.at(0) || tileStringFourth.at(0) == tileStringEast.at(0) || tileStringFourth.at(0) == tileStringSouth.at(0) || tileStringFourth.at(0) == tileStringWest.at(0) || tileStringFourth.at(0) == tileStringNorth.at(0) || tileStringFourth.at(0) == tileStringGreen.at(0) || tileStringFourth.at(0) == tileStringRed.at(0) || tileStringFourth.at(0) == tileStringWhite.at(0)) && (tileStringPair.at(0) == tileStringManzu.at(0) || tileStringPair.at(0) == tileStringEast.at(0) || tileStringPair.at(0) == tileStringSouth.at(0) || tileStringPair.at(0) == tileStringWest.at(0) || tileStringPair.at(0) == tileStringNorth.at(0) || tileStringPair.at(0) == tileStringGreen.at(0) || tileStringPair.at(0) == tileStringRed.at(0) || tileStringPair.at(0) == tileStringWhite.at(0)))
        {
            honitsuManzu = 1;
        }

        if (chitoitsu && (tileStringPairOne.at(0) == tileStringManzu.at(0) || tileStringPairOne.at(0) == tileStringEast.at(0) || tileStringPairOne.at(0) == tileStringSouth.at(0) || tileStringPairOne.at(0) == tileStringWest.at(0) || tileStringPairOne.at(0) == tileStringNorth.at(0) || tileStringPairOne.at(0) == tileStringGreen.at(0) || tileStringPairOne.at(0) == tileStringRed.at(0) || tileStringPairOne.at(0) == tileStringWhite.at(0)) && (tileStringPairTwo.at(0) == tileStringManzu.at(0) || tileStringPairTwo.at(0) == tileStringEast.at(0) || tileStringPairTwo.at(0) == tileStringSouth.at(0) || tileStringPairTwo.at(0) == tileStringWest.at(0) || tileStringPairTwo.at(0) == tileStringNorth.at(0) || tileStringPairTwo.at(0) == tileStringGreen.at(0) || tileStringPairTwo.at(0) == tileStringRed.at(0) || tileStringPairTwo.at(0) == tileStringWhite.at(0)) && (tileStringPairThree.at(0) == tileStringManzu.at(0) || tileStringPairThree.at(0) == tileStringEast.at(0) || tileStringPairThree.at(0) == tileStringSouth.at(0) || tileStringPairThree.at(0) == tileStringWest.at(0) || tileStringPairThree.at(0) == tileStringNorth.at(0) || tileStringPairThree.at(0) == tileStringGreen.at(0) || tileStringPairThree.at(0) == tileStringRed.at(0) || tileStringPairThree.at(0) == tileStringWhite.at(0)) && (tileStringPairFour.at(0) == tileStringManzu.at(0) || tileStringPairFour.at(0) == tileStringEast.at(0) || tileStringPairFour.at(0) == tileStringSouth.at(0) || tileStringPairFour.at(0) == tileStringWest.at(0) || tileStringPairFour.at(0) == tileStringNorth.at(0) || tileStringPairFour.at(0) == tileStringGreen.at(0) || tileStringPairFour.at(0) == tileStringRed.at(0) || tileStringPairFour.at(0) == tileStringWhite.at(0)) && (tileStringPairFive.at(0) == tileStringManzu.at(0) || tileStringPairFive.at(0) == tileStringEast.at(0) || tileStringPairFive.at(0) == tileStringSouth.at(0) || tileStringPairFive.at(0) == tileStringWest.at(0) || tileStringPairFive.at(0) == tileStringNorth.at(0) || tileStringPairFive.at(0) == tileStringGreen.at(0) || tileStringPairFive.at(0) == tileStringRed.at(0) || tileStringPairFive.at(0) == tileStringWhite.at(0)) && (tileStringPairSix.at(0) == tileStringManzu.at(0) || tileStringPairSix.at(0) == tileStringEast.at(0) || tileStringPairSix.at(0) == tileStringSouth.at(0) || tileStringPairSix.at(0) == tileStringWest.at(0) || tileStringPairSix.at(0) == tileStringNorth.at(0) || tileStringPairSix.at(0) == tileStringGreen.at(0) || tileStringPairSix.at(0) == tileStringRed.at(0) || tileStringPairSix.at(0) == tileStringWhite.at(0)) && (tileStringPairSeven.at(0) == tileStringManzu.at(0) || tileStringPairSeven.at(0) == tileStringEast.at(0) || tileStringPairSeven.at(0) == tileStringSouth.at(0) || tileStringPairSeven.at(0) == tileStringWest.at(0) || tileStringPairSeven.at(0) == tileStringNorth.at(0) || tileStringPairSeven.at(0) == tileStringGreen.at(0) || tileStringPairSeven.at(0) == tileStringRed.at(0) || tileStringPairSeven.at(0) == tileStringWhite.at(0)))
        {
            honitsuManzu = 1;
        }

        if (!chitoitsu && tileStringFirst.at(0) == tileStringPinzu.at(0) && tileStringSecond.at(0) == tileStringPinzu.at(0) && tileStringThird.at(0) == tileStringPinzu.at(0) && tileStringFourth.at(0) == tileStringPinzu.at(0) && tileStringPair.at(0) == tileStringPinzu.at(0))
        {
            chinitsuPinzu = 1;
            honitsuPinzu = 0;
        }

        if (chitoitsu && tileStringPairOne.at(0) == tileStringPinzu.at(0) && tileStringPairTwo.at(0) == tileStringPinzu.at(0) && tileStringPairThree.at(0) == tileStringPinzu.at(0) && tileStringPairFour.at(0) == tileStringPinzu.at(0) && tileStringPairFive.at(0) == tileStringPinzu.at(0) && tileStringPairSix.at(0) == tileStringPinzu.at(0) && tileStringPairSeven.at(0) == tileStringPinzu.at(0))
        {
            chinitsuPinzu = 1;
            honitsuPinzu = 0;
        }

        if (!chitoitsu && tileStringFirst.at(0) == tileStringSouzu.at(0) && tileStringSecond.at(0) == tileStringSouzu.at(0) && tileStringThird.at(0) == tileStringSouzu.at(0) && tileStringFourth.at(0) == tileStringSouzu.at(0) && tileStringPair.at(0) == tileStringSouzu.at(0))
        {
            chinitsuSouzu = 1;
            honitsuSouzu = 0;
        }

        if (chitoitsu && tileStringPairOne.at(0) == tileStringSouzu.at(0) && tileStringPairTwo.at(0) == tileStringSouzu.at(0) && tileStringPairThree.at(0) == tileStringSouzu.at(0) && tileStringPairFour.at(0) == tileStringSouzu.at(0) && tileStringPairFive.at(0) == tileStringSouzu.at(0) && tileStringPairSix.at(0) == tileStringSouzu.at(0) && tileStringPairSeven.at(0) == tileStringSouzu.at(0))
        {
            chinitsuSouzu = 1;
            honitsuSouzu = 0;
        }

        if (!chitoitsu && tileStringFirst.at(0) == tileStringManzu.at(0) && tileStringSecond.at(0) == tileStringManzu.at(0) && tileStringThird.at(0) == tileStringManzu.at(0) && tileStringFourth.at(0) == tileStringManzu.at(0) && tileStringPair.at(0) == tileStringManzu.at(0))
        {
            chinitsuManzu = 1;
            honitsuManzu = 0;
        }

        if (chitoitsu && tileStringPairOne.at(0) == tileStringManzu.at(0) && tileStringPairTwo.at(0) == tileStringManzu.at(0) && tileStringPairThree.at(0) == tileStringManzu.at(0) && tileStringPairFour.at(0) == tileStringManzu.at(0) && tileStringPairFive.at(0) == tileStringManzu.at(0) && tileStringPairSix.at(0) == tileStringManzu.at(0) && tileStringPairSeven.at(0) == tileStringManzu.at(0))
        {
            chinitsuManzu = 1;
            honitsuManzu = 0;
        }

        if (honitsuPinzu || honitsuSouzu || honitsuManzu)
        {
            if (closed)
            {
                yakuHan = yakuHan + 3;
            }

            else
            {
                yakuHan = yakuHan + 2;
            }
        }

        if (chinitsuPinzu || chinitsuSouzu || chinitsuManzu)
        {
            if (closed)
            {
                yakuHan = yakuHan + 6;
            }

            else
            {
                yakuHan = yakuHan + 5;
            }
        }

    }

    if (yakumanCounter < 1)
    {
        han = yakuHan + dora;
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
                    if (machi.at(0) == tileStringOne.at(0) || machi.at(0) == tileStringTwo.at(0))
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

                    if (tileStringPair.at(0) == personalWind.at(0))
                    {
                        fu = fu + 2;
                    }

                    if (tileStringPair.at(0) == roundWind.at(0))
                    {
                        fu = fu + 2;
                    }

                    if (tileStringFirst.at(1) == tileStringFirst.at(2))
                    {
                        setOneFu = 2;
                        if (tileStringFirst.at(1) == tileStringOne.at(0) || tileStringFirst.at(1) == tileStringNine.at(0) || tileStringFirst.at(0) == tileStringEast.at(0) || tileStringFirst.at(0) == tileStringSouth.at(0) || tileStringFirst.at(0) == tileStringWest.at(0) || tileStringFirst.at(0) == tileStringNorth.at(0) || tileStringFirst.at(0) == tileStringGreen.at(0) || tileStringFirst.at(0) == tileStringRed.at(0) || tileStringFirst.at(0) == tileStringWhite.at(0))
                        {
                            setOneFu = setOneFu * 2;
                        }

                        if (setOneClosed)
                        {
                            setOneFu = setOneFu * 2;
                        }

                        if ((tileStringFirst.at(0) == tileStringEast.at(0) || tileStringFirst.at(0) == tileStringSouth.at(0) || tileStringFirst.at(0) == tileStringWest.at(0) || tileStringFirst.at(0) == tileStringNorth.at(0) || tileStringFirst.at(0) == tileStringGreen.at(0) || tileStringFirst.at(0) == tileStringRed.at(0) || tileStringFirst.at(0) == tileStringWhite.at(0)) && tileStringFirst.length() == lengthStringFour.length())
                        {
                            setOneFu = setOneFu * 4;
                        }

                        if ((tileStringFirst.at(0) == tileStringPinzu.at(0) || tileStringFirst.at(0) == tileStringSouzu.at(0) || tileStringFirst.at(0) == tileStringManzu.at(0)) && tileStringFirst.length() == lengthStringFive.length())
                        {
                            setOneFu = setOneFu * 4;
                        }
                    }

                    if (tileStringSecond.at(1) == tileStringSecond.at(2))
                    {
                        setTwoFu = 2;
                        if (tileStringSecond.at(1) == tileStringOne.at(0) || tileStringSecond.at(1) == tileStringNine.at(0) || tileStringSecond.at(0) == tileStringEast.at(0) || tileStringSecond.at(0) == tileStringSouth.at(0) || tileStringSecond.at(0) == tileStringWest.at(0) || tileStringSecond.at(0) == tileStringNorth.at(0) || tileStringSecond.at(0) == tileStringGreen.at(0) || tileStringSecond.at(0) == tileStringRed.at(0) || tileStringSecond.at(0) == tileStringWhite.at(0))
                        {
                            setTwoFu = setTwoFu * 2;
                        }

                        if (setTwoClosed)
                        {
                            setTwoFu = setTwoFu * 2;
                        }

                        if ((tileStringSecond.at(0) == tileStringEast.at(0) || tileStringSecond.at(0) == tileStringSouth.at(0) || tileStringSecond.at(0) == tileStringWest.at(0) || tileStringSecond.at(0) == tileStringNorth.at(0) || tileStringSecond.at(0) == tileStringGreen.at(0) || tileStringSecond.at(0) == tileStringRed.at(0) || tileStringSecond.at(0) == tileStringWhite.at(0)) && tileStringSecond.length() == lengthStringFour.length())
                        {
                            setTwoFu = setTwoFu * 4;
                        }

                        if ((tileStringSecond.at(0) == tileStringPinzu.at(0) || tileStringSecond.at(0) == tileStringSouzu.at(0) || tileStringSecond.at(0) == tileStringManzu.at(0)) && tileStringSecond.length() == lengthStringFive.length())
                        {
                            setTwoFu = setTwoFu * 4;
                        }
                    }

                    if (tileStringThird.at(1) == tileStringThird.at(2))
                    {
                        setThreeFu = 2;
                        if (tileStringThird.at(1) == tileStringOne.at(0) || tileStringThird.at(1) == tileStringNine.at(0) || tileStringThird.at(0) == tileStringEast.at(0) || tileStringThird.at(0) == tileStringSouth.at(0) || tileStringThird.at(0) == tileStringWest.at(0) || tileStringThird.at(0) == tileStringNorth.at(0) || tileStringThird.at(0) == tileStringGreen.at(0) || tileStringThird.at(0) == tileStringRed.at(0) || tileStringThird.at(0) == tileStringWhite.at(0))
                        {
                            setThreeFu = setThreeFu * 2;
                        }

                        if (setThreeClosed)
                        {
                            setThreeFu = setThreeFu * 2;
                        }

                        if ((tileStringThird.at(0) == tileStringEast.at(0) || tileStringThird.at(0) == tileStringSouth.at(0) || tileStringThird.at(0) == tileStringWest.at(0) || tileStringThird.at(0) == tileStringNorth.at(0) || tileStringThird.at(0) == tileStringGreen.at(0) || tileStringThird.at(0) == tileStringRed.at(0) || tileStringThird.at(0) == tileStringWhite.at(0)) && tileStringThird.length() == lengthStringFour.length())
                        {
                            setThreeFu = setThreeFu * 4;
                        }

                        if ((tileStringThird.at(0) == tileStringPinzu.at(0) || tileStringThird.at(0) == tileStringSouzu.at(0) || tileStringThird.at(0) == tileStringManzu.at(0)) && tileStringThird.length() == lengthStringFive.length())
                        {
                            setThreeFu = setThreeFu * 4;
                        }
                    }

                    if (tileStringFourth.at(1) == tileStringFourth.at(2))
                    {
                        setFourFu = 2;
                        if (tileStringFourth.at(1) == tileStringOne.at(0) || tileStringFourth.at(1) == tileStringNine.at(0) || tileStringFourth.at(0) == tileStringEast.at(0) || tileStringFourth.at(0) == tileStringSouth.at(0) || tileStringFourth.at(0) == tileStringWest.at(0) || tileStringFourth.at(0) == tileStringNorth.at(0) || tileStringFourth.at(0) == tileStringGreen.at(0) || tileStringFourth.at(0) == tileStringRed.at(0) || tileStringFourth.at(0) == tileStringWhite.at(0))
                        {
                            setFourFu = setFourFu * 2;
                        }

                        if (setFourClosed)
                        {
                            setFourFu = setFourFu * 2;
                        }

                        if ((tileStringFourth.at(0) == tileStringEast.at(0) || tileStringFourth.at(0) == tileStringSouth.at(0) || tileStringFourth.at(0) == tileStringWest.at(0) || tileStringFourth.at(0) == tileStringNorth.at(0) || tileStringFourth.at(0) == tileStringGreen.at(0) || tileStringFourth.at(0) == tileStringRed.at(0) || tileStringFourth.at(0) == tileStringWhite.at(0)) && tileStringFourth.length() == lengthStringFour.length())
                        {
                            setFourFu = setFourFu * 4;
                        }

                        if ((tileStringFourth.at(0) == tileStringPinzu.at(0) || tileStringFourth.at(0) == tileStringSouzu.at(0) || tileStringFourth.at(0) == tileStringManzu.at(0)) && tileStringFourth.length() == lengthStringFive.length())
                        {
                            setFourFu = setFourFu * 4;
                        }
                    }
                    fu = fu + setOneFu + setTwoFu + setThreeFu + setFourFu;

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

        else
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
            cout << "Tsuuiisou:                        Yakuman\n";
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

        else
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

        if (yakuhaiTon == 1)
        {
            cout << "Ton:                              1 Han\n";
        }

        if (yakuhaiTon == 2)
        {
            cout << "Double Ton:                       2 Han\n";
        }

        if (yakuhaiNan == 1)
        {
            cout << "Nan:                              1 Han\n";
        }

        if (yakuhaiNan == 2)
        {
            cout << "Double Nan:                       2 Han\n";
        }

        if (yakuhaiSha == 1)
        {
            cout << "Sha:                              1 Han\n";
        }

        if (yakuhaiSha == 2)
        {
            cout << "Double Sha:                       2 Han\n";
        }

        if (yakuhaiPei == 1)
        {
            cout << "Pei:                              1 Han\n";
        }

        if (yakuhaiPei == 2)
        {
            cout << "Double Pei:                       2 Han\n";
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
            else
            {
                cout << dora;
                cout << " Dora:                          ";
                cout << dora;
                cout << " Han\n";
            }
        }

        cout << "\n";

        if (yakuHan == 0)
        {
            chombo = 1;
            cout << "Invalid hand: no yaku!" << endl;
            cout << "Chombo Penalty: ";
            if (dealer)
            {
                cout << "4000 All\n";

            }
            else
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

            else if (basicPoints == 3000)
            {
                cout << "Haneman\n";
            }

            else if (basicPoints == 4000)
            {
                cout << "Baiman\n";
            }

            else if (basicPoints == 6000)
            {
                cout << "Sanbaiman\n";
            }

            else if (basicPoints == 8000)
            {
                cout << "Yakuman\n";
            }

            if (bonusRoundNumber > 0)
            {
                cout << "Bonus ";
                cout << bonusRoundNumber;
                cout << "                           +";
                cout << 300 * bonusRoundNumber;
                cout << "\n";
            }

            if (riichibon > 0)
            {
                cout << "Riichi Bet(s)";
                cout << "                     +";
                cout << 1000 * riichibon;
                cout << "\n";
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

            else
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
    else
    {
        cout << "No Points Earned\n";
    }

    }

    cout << "Enter something to continue:\n";
    cin >> pause;          //This is a terrible solution. TODO figure out something better.
}
