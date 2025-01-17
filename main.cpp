#include <iostream>

template <typename... T> 
void ignoreUnused(T &&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

Purpose:  This project will teach you how to declare variables and free functions. 
This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.

 1) Write down the names of the 6 major primitive types available in C++  here:
 int
 float
 bool
 double
 char
 unsigned int

2) for each primitive type, write out 3 variable declarations inside the
variableDeclaration() function on line 59. 
    a) give each variable declarati  aninitial value
		- just ignore wchar_t. you do not need to declare 3 variables of type'wchar_t'
		- 'void' is a return type. you do not need to declare 3 variabl  of type 'void'. 
    b) at the end of the function, call ignoreUnused once and pas all of your variables to it. see line 71 for an exam

3) Declare 10 free functions
	each declaration should have a random number of parameters in the function parameter list. When naming your parameters, choose names that are releva  to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon 
5) pass each of your function parameters to the ignoreUnused function like you did in b) 
6) if your function returns something other than void add 'return { };' at the end of it. 
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this: float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, b  ); return { }; } This does not conform with the coding standard for this course
(check the Readme.MD) and needs to be correct

9) in the main function at the end:
	for each of those functions declared,
		a) write out how the function would look if called with correct arguments 
        b) if the function returned anything, store it in a local va able via the 'auto' keyword. 
        c) pass the local variables to ignoreUnused() as  you did in 2b) see main() for an example of this.

10) click the [run] button.  Clear up any errors or warnings as best you ca
.
*/

// 2)
void variableDeclarations() 
{
	// example:
    int number = 2; // declaration of a variable named "number", that uses the type 'int', and the variable's initial value is '2'
    int myAge = 2;
    int numberOfParticipants = 0;
    int numberOfPlayers = 10;
    double shoeSize = 6.5;
    double fuelPrice = 2.1;
    double heightRoom = 3.1;
    bool lightIsOn = false;
    bool coffeeIsPrepared = true;
    bool waterIsBoiled = true;
    float timeToLaunchRocket = 42.2f;
    float hairThickness = 1.5f;
    float statueHeight = 10005.32f;
    unsigned int numberOfHousesInTown = 452;
    unsigned int daysLeftToHolidays = 32;
    unsigned int numberOfPetsAtHome = 3;
    
    ignoreUnused(number, myAge,numberOfParticipants, numberOfPlayers, shoeSize, fuelPrice, heightRoom, lightIsOn, coffeeIsPrepared, waterIsBoiled, timeToLaunchRocket, hairThickness, statueHeight, numberOfHousesInTown, daysLeftToHolidays, numberOfPetsAtHome);
        
	// passing each variable dec to the ignoreUnused()

	// function
}

/*
 10 functions
 example:
 note: this example shows the result after completing sps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0) // function declaration wi number of arguments,  arbitrary number of arguments have default value
{
    ignoreUnused(rentalDuration, carType); // pass  parameter to the ignoreUnused() function
    return {}; // if your function returns  other than void, add
               // 'return {};' at the end of it.
}

bool buyAnotherPlant(int spaceForPlantsAtHome, int numberOfPlantsAtHome) 
{
    ignoreUnused(spaceForPlantsAtHome, numberOfPlantsAtHome);
    return {};
}

int countDaysLeftToSaturday(int numberOfTheDayInTheWeek) 
{
    ignoreUnused(numberOfTheDayInTheWeek);
    return {};
}

double countTripCosts(double tripDistance, double fuelEffeciency, double fuelPrice)
{
    ignoreUnused(tripDistance, fuelEffeciency, fuelPrice);
    return {};
}

void playSinewave(int freqOfSinewave)
{
    ignoreUnused(freqOfSinewave);
}

void changeVolumeLevel(int volumeLevel)
{
    ignoreUnused(volumeLevel);
}

void buyFruits(int numberOfApples, int numberOfOranges)
{
    ignoreUnused(numberOfApples, numberOfOranges);
}

int countNumberOfWorkingHours(int startingHourOfWork, int endingHourOfWork)
{
    ignoreUnused(startingHourOfWork, endingHourOfWork);
    return {};
}

float countRunningDistance(float speedOfRun, float timeOfRun)
{
    ignoreUnused(speedOfRun, timeOfRun);
    return {};
}

void setTheOven(int ovenTemperature, int bakingTime)
{
    ignoreUnused(ovenTemperature, bakingTime);
}

bool shouldIGoOut(int temperatureOutside, bool isItRaining)
{
    ignoreUnused(temperatureOutside, isItRaining);
    return {};
}

/*
 MAKE SURE YO ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,entering a message, and click [Commit and push].
 If you didn't already:
	Make a pull request after you make your first commit
	pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my
 code review.
 */

int main() 
{
	// example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2);
    // 1)
    auto anotherPlant = buyAnotherPlant(4, 2);
    // 2)
    auto daysToFreeDay = countDaysLeftToSaturday(3);
    // 3)
    auto tripCost = countTripCosts(200.3, 4.2, 2.5);
    // 4)
    playSinewave(440);
    // 5)
    changeVolumeLevel(5);
    // 6)
    buyFruits(2, 50);
    // 7)
    auto workingHours = countNumberOfWorkingHours(8, 20);
    // 8)
    auto distanceOfRun = countRunningDistance(2.5f, 350.2f);
    // 9)
    setTheOven(180, 600);
    // 10)
    auto decisionAboutGoingOut = shouldIGoOut(20, false);
    
    ignoreUnused(carRented, anotherPlant, daysToFreeDay, tripCost, workingHours, distanceOfRun, decisionAboutGoingOut);
    std::cout << "good to go!" << std::endl;
    return 0;
}
