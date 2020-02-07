#include <iostream>

//declare variables used throughout the program
const int ROWS = 15;
const int SEATS_PER_ROW = 30;
char concertSeats[ROWS][SEATS_PER_ROW];
char userChoice;
int ticketsToPurchase;
int tickets;
int seatRowNumber;
int seatSeatNumber;
int orderTotal;
int cartTotal;
int totalSales = 0;
int seatSale = 0;
int availableSeats;
int availableRowSeats;


//declaring functions
void initializeSeating();
void printMenu();
void printSeating();
void purchaseSeating(int howMany);
void generateReport(int Sales);
void displaySales(int sales);

int main() {
	
	initializeSeating();
	do {
		//calls function to print user choice menu
		printMenu();
		//gets the user selected option and converts it to an uppercase
		std::cout << "Enter option ";
		std::cin >> userChoice;
		userChoice = ::toupper(userChoice);

		//switch statement for carrying out each choice the user picks as well as dealing with invalid choices
		switch (userChoice) {
		case 'D':
			//calls function that displays the correctly formatted seating chart
			printSeating();
			break;
		case 'B':
			/*code that allows the user to purchase tickets
				-asks how many they would like to purchase
				-then calls the purchase seating function that:
					-updates the array of concert seats to represent seats being filled
					-also updates total sales and the temporarily stored cart total
					-allows user to pick again if the chosen seat is already full or does not exist
					-repeats until the user purchases the number of tickets they asked for
			*/
			std::cout << "How many tickets would you like to purchase?" << std::endl;
			std::cin >> ticketsToPurchase;
			orderTotal = 0;
			cartTotal = 0;
			tickets = 0;
			purchaseSeating(ticketsToPurchase);
			orderTotal += cartTotal;
			std::cout << "The total cost for your order is: " << "$" << orderTotal << std::endl;
			totalSales += orderTotal;
			break;
		case 'T':
			//calls function to print total sales
			displaySales(totalSales);
			break;
		case 'S':
			//calls function to print current seating report and number of seats sold
			generateReport(seatSale);
			break;
		case 'Q':
			//code to quit program
			std::cout << "Thank you for using Seat Charter";
			break;
		default:
			//catches invalid choices and lets the user choose again
			std::cout << "Invalid choice, Please choose again" << std::endl; //this should never happen
		}

	} while (userChoice != 'Q');
	return 0;
}

void initializeSeating() {
	//declare and initialize seating array
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < SEATS_PER_ROW; j++)
			concertSeats[i][j] = '#';
}

void printMenu() {
	//displays the choices available to the user within the program, they are the first part of the do loop
	std::cout << "'D' - display seating chart" << std::endl;
	std::cout << "'B' - buy tickets" << std::endl;
	std::cout << "'T' - show total sales" << std::endl;
	std::cout << "'S' - show seating info" << std::endl;
	std::cout << "'Q' - quit" << std::endl;
}
void printSeating() {
	//code that displays the correctly formatted seating chart
	std::cout << "\t" << "123456789012345678901234567890" << std::endl;
	for (int i = 0; i < ROWS; i++) {
		std::cout << "Row " << i + 1 << "\t";
		for (int j = 0; j < SEATS_PER_ROW; j++) {
			std::cout << "" << concertSeats[i][j] << "";
		}
		std::cout << "\n";
	}
}
void purchaseSeating(int howMany) {
	do {
		//function that handles seat purchasing and repeats until the user buys the number of tickets they requested to buy
		std::cout << "Please enter desired Row number: ";
		std::cin >> seatRowNumber;
		seatRowNumber = seatRowNumber - 1;
		std::cout << "Please enter desired Seat number: ";
		std::cin >> seatSeatNumber;
		seatSeatNumber = seatSeatNumber - 1;
		if (concertSeats[seatRowNumber][seatSeatNumber] == '#') {
			if (seatRowNumber <= 6) {
				std::cout << "Seat added to order total" << std::endl;
				std::cout << "Cost of this ticket: $50" << std::endl;
				cartTotal += 50;
				seatSale += 1;
				tickets = tickets + 1;
				concertSeats[seatRowNumber][seatSeatNumber] = '*';
			}
			else {
				std::cout << "Seat added to order total" << std::endl;
				std::cout << "Cost of this ticket: $40" << std::endl;
				cartTotal += 40;
				seatSale += 1;
				tickets = tickets + 1;
				concertSeats[seatRowNumber][seatSeatNumber] = '*';
			}
		}
		else if (concertSeats[seatRowNumber][seatSeatNumber] == '*') {
			std::cout << "We are sorry, that seat is already taken, please choose another." << std::endl;
		}
		else {
			std::cout << "You must enter a valid row and seat number." << std::endl;
		}
	} while (tickets != ticketsToPurchase);
}
void generateReport(int Sales) {
	/*code that displays seat info such as:
				-how many seats have sold
				-how many seats available for each row
				-how many seats available for the entire auditorium
			*/
	std::cout << "There have been a total of " << seatSale << " seats sold today" << std::endl;
	for (int i = 0; i < ROWS; i++) {
		availableRowSeats = 0;
		for (int j = 0; j < SEATS_PER_ROW; j++)
			if (concertSeats[i][j] == '#') {
				availableRowSeats += 1;
			}
			else if (concertSeats[i][j] == '*') {
				continue;
			}
		std::cout << availableRowSeats << " seats available in Row " << i + 1 << std::endl;
	}
	availableSeats = 0;
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < SEATS_PER_ROW; j++) {
			if (concertSeats[i][j] == '#') {
				availableSeats += 1;
			}
			else if (concertSeats[i][j] == '*') {
				continue;
			}
		}
	std::cout << "There are " << availableSeats << " seats available in the entire auditorium" << std::endl;
}
void displaySales(int sales) {
	//code that displays total sales for all of the ticket purchases thus far
	std::cout << "The current total sales is: $" << sales << std::endl;
}
