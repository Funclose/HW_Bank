#include <iostream>
#include <exception>
#include <cstring>
#include "bankAccaunt.h"
#include "user.h"
#include "bank.h"
#include "exception.h"
using namespace std;

//фамили, имя, счет поточна сумма, кредит, размер кредита(статик), поле хочет испольхзовать кредит или нет?, снять деньги или внести,



int main() {
    // Создаем пользователя с банковским счетом
    User user("John Doe", 10000, 20000);

    // Выводим текущий баланс
    std::cout << "Current balance: " << user.GetBalance() << std::endl;
    user.Deposit(15000);



    //все отлично работает только при этом коде если возникает внештатная ситуация
    /*try {
        user.Withdraw(15000);
    }
    catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }*/
    
    
     user.Withdraw(20000);
     cout << "after withdraw balance now: " << user.GetBalance() << endl;
    
    

    
    //ошибка
        /*user.Withdraw(-100);*/
    
     user.Deposit(-100);
    

    // Вносим средства на счет
     
    user.Deposit(500);
    cout << "balance after depositing: " << endl;
    // Снова выводим текущий баланс
    cout << "Current balance: " << user.GetBalance() << std::endl;

    return 0;
}