#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

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
 double
 bool
 unsigned int
 char    
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    
    int scaleDegree = 4;
    int lemons = 14;
    int guitarStringNumber = 3;

    float frequency = 265.8f;
    float gain = 17.2f;
    float qFactor = 0.8f;

    double gainReduction = 15.8;
    double attackTime = 27.2;
    double makeUpGain = 22.8;

    bool isRaining = true;
    bool isDay = false;
    bool isAfternoon = false;

    unsigned int distance = 14;
    unsigned int kelvinTemperature = 2;
    unsigned int index = 128;

    char letter = 'e';
    char letter2 = 'g';
    char character = 'f';

    
    ignoreUnused(number, scaleDegree, lemons, guitarStringNumber, frequency, gain, qFactor, gainReduction, attackTime, makeUpGain, isRaining, isDay, isAfternoon, distance, kelvinTemperature, index, letter, letter2, character); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
float computeFilterParameters(float gain, float frequency = 18.5f, bool bypass = false)
{
    ignoreUnused(gain, frequency, bypass);
    return{};
}
/*
 2)
 */
bool calculateWeatherConditions(int temperature, float humidity, bool isNight = true)
{
    ignoreUnused(temperature, humidity, isNight);
    return {};
}
/*
 3)
 */
void evaluateRating(float stars, int numbersOfReviews = 384)
{
    ignoreUnused(stars, numbersOfReviews);
}
/*
 4)
 */
double calculateRectangularRoomVolume(double length = 3.84, double width = 8.62, double height = 4.1)
{
    ignoreUnused(length, width, height);
    return{};
}
/*
 5)
 */
bool canMakePasta(int numberOfTomatos, bool hasPasta)
{
    ignoreUnused(numberOfTomatos, hasPasta);
    return{};
}
/*
 6)
 */
int calculateNumberOfPoints (int twoPointFieldGoals, int threePointFieldGoals = 4)
{
    ignoreUnused(twoPointFieldGoals, threePointFieldGoals);
    return{};
}
/*
 7)
 */
bool determineIfSustainPedalOn(bool isPedalPressed, int midiMessage = 64)
{
    ignoreUnused(isPedalPressed, midiMessage);
    return{};
}
/*
 8)
 */
float computeAverageHeight(float height, int numberOfPeople = 28)
{
    ignoreUnused(height, numberOfPeople);
    return{};
}
/*
 9)
 */
float calculateInvestmentReturn(float initialInvestment, float returnRate = 4.6f)
{
    ignoreUnused(initialInvestment, returnRate);
    return{};
}
/*
 10)
 */
void calculateAverageAge(int age, int numberOfParticipants)
{
    ignoreUnused(age, numberOfParticipants);
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto filterParameters = computeFilterParameters(7.4f);
    //2)
    auto weather = calculateWeatherConditions(21, 64.2f, false);
    //3)
    evaluateRating(4.8f);
    //4)
    auto roomVolume = calculateRectangularRoomVolume(4.68, 5.49, 7.31);
    //5)
    auto pasta = canMakePasta(5,true);
    //6)
    auto points = calculateNumberOfPoints(14);
    //7)
    auto sustainPedal = determineIfSustainPedalOn(false);
    //8)
    auto heightValue = computeAverageHeight (1.81f, 14);
    //9)
    auto investmentProfit = calculateInvestmentReturn(32.5f);
    //10)
    calculateAverageAge(28, 34);
    
    ignoreUnused(carRented, filterParameters, weather, evaluateRating, roomVolume, pasta, points, sustainPedal, heightValue, investmentProfit, calculateAverageAge);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
