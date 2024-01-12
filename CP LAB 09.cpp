#include <iostream>
#include <string>

using namespace std;

string message;


string tolowercase(const string& str)
{
    string result;
    for (char c : str)
    {
        result += tolower(c);
    }
    return result;
}

// Function prototypes
void sendMessage(const string& message);
void receiveMessage(const string& message);
void makePhoneCall(const string& caller, const string& receiver);
void ringUntilAnswer(const string& caller, const string& receiver);

int main()
{
    string opt;

    do {
        cout << "          |Phone|" << endl << endl;
        cout << "Please Select an option Below: " << endl;
        cout << "(a) Send a Message" << endl;
        cout << "(b) Recieve Message" << endl;
        cout << "(c) Make a phone call" << endl;
        cout << "(d) Recieve a call" << endl;
        cout << "(e) Exit" << endl;
        cout << "> ";
        cin >> opt;

        if (tolowercase(opt) == "a")
        {
            
            cout << "Enter a Message: ";
            cin >> message; 
            cout << endl;
            sendMessage(message);
            

        }
        else if (tolowercase(opt) == "b")
        {
            receiveMessage(message);

            

        }
        else if (tolowercase(opt) == "c")
        {
            string caller;
            cout << "Enter recipient name: " << endl <<">";
            cin >> caller;
            makePhoneCall("You", caller);

          

        }
        else if (tolowercase(opt) == "d")
        {
            ringUntilAnswer("Charlie", "you");
           

        }
        else if (tolowercase(opt) == "e")
        {
            exit(0);

            

        }
        else
        {
            cout << endl << "INVALID OPTION SELECT THE CORRECT OPTION" << endl;

        }
        system("pause");
        system("cls");
    } while (tolowercase(opt) != "a" || tolowercase(opt) != "b" || tolowercase(opt) != "c" || tolowercase(opt) != "d");

    
}

// Function to send a message
void sendMessage(const string& message)
{
    cout << "Sending Message: " << message << endl;
}

// Function to receive a message
void receiveMessage(const string& message)
{
    if (message.empty())
    {
        cout << "No recieved Message!!!" << endl << endl;
    }
    else
    {
        cout << "Receiving Message: " << message << endl;
    }
}

// Function to make a phone call
void makePhoneCall(const string& caller, const string& receiver)
{
    string hangup;
    cout << caller << " are calling " << receiver << "..." << endl;
    while (tolowercase(hangup) == "h" || tolowercase(hangup) == "hangup" || tolowercase(hangup) == "hang up")
    {
        cout << "\a \a \a \a \a \a \a \a \a \a \a";
    }
    cout << "      (H)ang up" << endl;
    cout << ">";
    cin >> hangup;
    if (tolowercase(hangup) == "h" || tolowercase(hangup) == "hangup" || tolowercase(hangup) == "hang up")
    {
        cout << "you hung up the call" << endl << endl;
        cout << ">";
    }
    else
    {
        cout << endl << receiver << " Did not Answered" << endl << endl;
    }

    // In a real scenario, this is where you might simulate a call setup
}

// Function to ring until the call is answered
void ringUntilAnswer(const string& caller, const string& receiver)
{
    cout << "Ringing " << receiver << " from " << caller << "..." << endl;

    // Simulate ringing until the receiver picks up (for demonstration, we'll wait for user input)
    char answer;
    cout << receiver << ", do you want to answer the call? (y/n): ";
    cin >> answer;

    if (answer == 'y' || answer == 'Y')
    {
        cout << receiver << " answered the call! Conversation started." << endl;
    }
    else
    {
        cout << receiver << " did not answer the call. Call ended." << endl;
    }
}