#include<iostream>

void viewBalance(double balance);
double addBalance(double amount);
double withdrawMoney(double amount);
int main() {
  int choice;
  double balance = 25.02;
  double amount ;
  std::cout << "********** Welcome in YourBank **********\n\n";

  do{
    std::cout << "\navailabe choices\n";
    std::cout << "1 - Show my Balance \n";
    std::cout << "2 - Money Deposit \n";
    std::cout << "3 - Withdraw my Money \n";
    std::cout << "4 - Exit \n";

    std::cout<< "Enter your Choice from (1-4): \t";
    std::cin >> choice;

    switch(choice) {
    case 1:  viewBalance(balance);
            std::cout << "\n";
            break;
    case 2: balance += addBalance(amount);
            viewBalance(balance);
            break;
    case 3:{ viewBalance(balance);
            std::cout << "\n";
            double temp = balance -= withdrawMoney(amount);
            if(temp < 0) {
              std::cout << "Insufficient Balance in your Account";
            }else{
              std::cout << "balance updated Succesfully! \t" << temp;
            }
            break;}
  }

  }while(choice != 4);

  std::cout << "\n******************************\n";
  return 0;
}


void viewBalance(double balance){
  std::cout << "\tAvailable Amount is: " << balance << "$";
}
double addBalance(double amount){
  do{
  std::cout << "Enter the Amount to be ADDED: \t";
  std::cin >> amount;
  } while(amount < 0);
  return amount;
}
double withdrawMoney(double amount){
  do{
  std::cout << "Enter the Amount to be withdrawn: \t";
  std::cin >> amount;
  } while(amount < 0);
  return amount;
}