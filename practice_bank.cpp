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

    // Попытка снятия суммы, превышающей баланс
    
     user.Withdraw(1500);
    
    

    // Попытка снятия отрицательной суммы
    
        user.Withdraw(-100);
    
    

    // Вносим средства на счет
    user.Deposit(500);

    // Снова выводим текущий баланс
    std::cout << "Current balance: " << user.GetBalance() << std::endl;

    return 0;
}