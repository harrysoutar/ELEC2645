//ELEC/XJEL2645
// Dr James Avery and Kamalanathan Kajan


#include <iostream> // Include the I/O library for input and output operations

// Function to calculate Voltage
double calculateVoltage(double current, double resistance) {
    return current * resistance; // Return the product of current and resistance
}

double calculateCurrent(double voltage, double resistance) {
    return voltage / resistance;
}

double calculateResistance(double voltage, double current) {
    return voltage / current;
}

// Display Menu
void displayMenu() {
    std::cout << "\n1. Calculate Voltage (V = I * R)" << std::endl; // Print option to calculate voltage
    std::cout << "\n2. Calculate Current (I = V / R)" << std::endl;
    std::cout << "\n3. Calculate Resistance (R = V / I)" << std::endl;
    std::cout << "4. Exit" << std::endl; // Print option to exit the program
    std::cout << "Enter your choice: "; // Prompt user for their choice
}

int main() { // Main function where the program execution begins
    int choice; // Variable to store user's menu choice
    double voltage, current, resistance; // Variables to store current in amperes and resistance in ohms

    do { // Start of the loop
        displayMenu(); // Call the function to display the menu options
        std::cin >> choice; // Take user input for their choice
        if (choice == 1) { // Check if the user chose to calculate voltage
            std::cout << "Enter current (amperes): "; // Ask for the current
            std::cin >> current; // Read the current input
            std::cout << "Enter resistance (ohms): "; // Ask for the resistance
            std::cin >> resistance; // Read the resistance input
            std::cout << "Voltage = " << calculateVoltage(current, resistance) << " Volts" << std::endl; // Display the calculated voltage
        } else if (choice == 2) { // Check if the user input is not the exit option
            std::cout << "Enter voltage (volts): "; // Ask for the voltage
            std::cin >> voltage; // Read the voltage input
            std::cout << "Enter resistance (ohms): "; // Ask for the resistance
            std::cin >> resistance; // Read the resistance input
            std::cout << "Current = " << calculateCurrent(voltage, resistance) << " Amps" << std::endl; // Display the calculated voltage
        } else if (choice == 3) {
            std::cout << "Enter voltage (volts): "; // Ask for the voltage
            std::cin >> voltage; // Read the voltage input
            std::cout << "Enter current (amps): "; // Ask for the resistance
            std::cin >> current; // Read the resistance input
            std::cout << "Resistance = " << calculateResistance(voltage, current) << " Ohms" << std::endl; // Display the calculated voltage
        } else if (choice != 4){
            std::cout << "invalid selection, please enter a number between 1 and 4" << std::endl;
        }
    } while (choice != 4); // Continue the loop until the user chooses to exit

    std::cout << "Exiting program." << std::endl; // Message indicating the program is exiting
    return 0; // Return 0 to indicate the program ended successfully
}
